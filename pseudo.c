# LZSS pseudo code

- Loop char by char

- check for match 
	- if yes check next char and prepare token
		- if its useless dont substitute
 		- add to search buffer 

	- else add to search buffer and continue

main{
char* search_buffer;
char* window;

openfile(file)

while (readfile!= NULL){
	window = readfile(file, sizeof(window))

	match = search_match(window,search_buffer)

	if (match)
		token = tokenize_match(match)
		write token
	else
		write token

	}
}

search_match(search_buffer,window){
char longest = NULL;
char match;

for char in window
	is in search_buffer?
		yes ->match = char+match
		no -> exit 
update_search_buffer(char,search_buffer)
advance_window(token[length])

if sizeof(match) > longest
	longest = match 

if longest 
	return match

else 
	return NULL 
}

tokenize_match(match){
char limit;
char token;

token = limit+match+limit 

if match < token 
	return match 

else 
	return token
}

update_search_buffer(char,search_buffer){
search_buffer = search_buffer + char
}

advance_window(search_buffer,window){
if window < search_buffer
	window = window + sizeof(window - search_buffer)
else
	exit
}
