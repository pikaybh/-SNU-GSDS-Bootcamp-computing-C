$t = Get-Date
git add .
if ($args[0]) {
    git commit -m "$args[0]"
} else {
    git commit -m "$t"
}
git push origin main