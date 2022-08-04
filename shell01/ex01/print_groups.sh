groups $FT_USER | cut -d ':' -f2 | sed 's/ //'  | tr ' ' ',' | tr -d '\n'
