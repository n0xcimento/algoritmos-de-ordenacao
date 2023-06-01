
# temp0=$(sed -z 's/  / \& /g; s,\n,  \\\\\n,g' "$1")

# echo "$temp0" | sed '/$/a \\\hline'


exec(){
    echo "$1" "$2" "$3"
}