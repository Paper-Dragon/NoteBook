for a in `ls $1` ;do  if [[ $a =~ ^_book ]] ; then echo "[+] exist $a"; else echo "[+] rm -rf $a" && `rm -rf $a`;  fi done;
