find . -type f -regex '.*\.sh$' | sed 's/.sh$//' | rev | cut -d'/' -f 1 | rev
