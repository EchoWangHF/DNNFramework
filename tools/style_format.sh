for var in "$@"
do
    echo "$var"
    clang-format -style=Google -i $var
done
