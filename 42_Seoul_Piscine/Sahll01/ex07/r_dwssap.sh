:<<END
cat /etc/passwd | grep -v "^#"|awk "NR%2==0"|cut -d ':' -f1 |rev|sort -r |awk "NR==7,NR==15"|tr '\n' ','|sed 's/,/, /g'|sed 's/, $/./g'
END

cat /etc/passwd | grep -v "#" | awk "NR % 2 ==0" | cut -d ':' -f1 | rev | sort -r | awk -v start=7 -v end=15 'NR==start,NR==end' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, *$/\./' | tr -d '\n'


