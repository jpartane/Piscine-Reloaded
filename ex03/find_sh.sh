find . -type f -name "*.sh" | rev | cut -f2 -d '.' | cut -f1 -d '/' | rev
