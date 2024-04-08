# Define an array of functions to check for
$FunctionList = @("strcpy", "strcat", "sprintf", "vsprintf", "gets", "CreateFileW", "DeleteFileA", "DeleteFileW", "FindFirstFileA", "FindFirstFileExA", "FindFirstFileExW", "FindFirstFileNameW", "FindFirstFileW", "FindFirstStreamW", "FindNextFileA", "FindNextFileNameW", "FindNextFileW", "CreateProcessA", "CreateProcessAsUserA", "CreateProcessAsUserW", "CreateProcessW")

# Flag to indicate if any function is found
$FoundFunction = $false

# Iterate over each function in the list
foreach ($FunctionName in $FunctionList) {
    # Check if the function is present in any of the C++ files
    if (Select-String -Pattern "^\s*(\w+\s+)*(([a-zA-Z_][a-zA-Z0-9_]*::)?$FunctionName)\s*\(" -Path "*.cpp") {
        Write-Host "The function $FunctionName should not be present in this repo"
        # Set the flag to true
        $FoundFunction = $true
    }
}

# Check if any function was found
if ($FoundFunction) {
    # Additional actions if any function is found
    exit 1
}
