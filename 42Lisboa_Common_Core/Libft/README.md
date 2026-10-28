_This project has been created as part of the 42 curriculum by dboryey._
 
Description: 
	-	The project required us to create a custom library, libft, that will be used in the next C projects. It's a compilation of many libc functions (with a prefix "ft_"), as well as some aditional functions that could be useful throughout the next projects.

Instructions: 
	-	The repository includes a Makefile that will compile the library. To run it, you need to run "make" command in the terminal, opened in the lib repository, where you have all the .c and .h files.

	-	The Makefile also includes clean, fclean and re commands:
		-	"make clean" will remove all the .o files generated during the compilation.
		-	"make fclean" will do the same as "make clean" but also remove the library created (.a file).
		-	"make re" will compile a brand new library, after running fclean.
		
Resources: 
	-	During this project I used quite a few different resources in no specific order:

		1.	Linux manual (man man). This was used for the Part1 of the libft project, to search the prototypes of the required functions, their description, return value etc.

		2.	Web searches. These were used to learn new materials regarding the required functions, specially for the Part3 of the project, because Linked Lists were a new info for me.

		3.	Peers. Of course I can't forget to mention the incredible peers that explained some new concepts and clicked some new ideas during the creation of many functions.

		4. AI. This was a very useful tool to guide me through the new concepts that still weren't very understandable after the top 3 resources already mentioned. I specifically requested that it doesn't provide me the code straight away because I still wanted to understand the concept first and try to make my own solutions instea of copying what is already done. It was also useful in helping with efficiency like for example adding each function and the corresponding prototype in this readme leaving the descriptions for me to fill in.

		5.	Libft Subject.txt. Base guide of the project that provided the instructions for the project.

Detailed description of the library's functions: The paragraphs below will have a short explanation of each function, including the prototype and its return value.

Part1 - Libc functions
	-	ft_isalpha
	int ft_isalpha(int c);

	Checks whether c is an alphabetic character. Returns 1 if it is, 0 otherwise.

	-	ft_isdigit
	int ft_isdigit(int c);

	Checks whether c is a decimal digit (0-9). Returns 1 if it is, 0 otherwise.

	-	ft_isalnum
	int ft_isalnum(int c);

	Checks whether c is alphanumeric (letter or digit). Returns 1 if it is, 0 otherwise.

	-	ft_isascii
	int ft_isascii(int c);

	Checks whether c is a valid ASCII value (0-127). Returns 1 if it is, 0 otherwise.

	-	ft_isprint
	int ft_isprint(int c);

	Checks whether c is a printable character (including space). Returns 1 if it is, 0 otherwise.

	-	ft_strlen
	size_t ft_strlen(const char *s);

	Computes the length of the string s, not counting the terminating null byte. Returns the number of characters in s.

	-	ft_memset
	void *ft_memset(void *s, int c, size_t n);

	Fills the first n bytes of the memory area s with the byte c. Returns a pointer to s.

	-	ft_bzero
	void ft_bzero(void *s, size_t n);

	Sets the first n bytes of the memory area s to zero. Returns nothing.

	-	ft_memcpy
	void *ft_memcpy(void *dest, const void *src, size_t n);

	Copies n bytes from src to dest. The areas must not overlap. Returns a pointer to dest.

	-	ft_memmove
	void *ft_memmove(void *dest, const void *src, size_t n);

	Copies n bytes from src to dest, correctly handling overlapping memory areas. Returns a pointer to dest.

	-	ft_strlcpy
	size_t ft_strlcpy(char *dst, const char *src, size_t size);

	Copies up to size - 1 characters from src to dst, null-terminating the result when size is not 0. Returns the length of src (the length it tried to create).

	-	ft_strlcat
	size_t ft_strlcat(char *dst, const char *src, size_t size);

	Appends src to the end of dst, writing at most size - 1 characters in total and null-terminating the result. Returns the initial length of dst plus the length of src (the length it tried to create).

	-	ft_toupper
	int ft_toupper(int c);

	Converts a lowercase letter to uppercase. Returns the uppercase letter, or c unchanged if it is not a lowercase letter.

	-	ft_tolower
	int ft_tolower(int c);

	Converts an uppercase letter to lowercase. Returns the lowercase letter, or c unchanged if it is not an uppercase letter.

	-	ft_strchr
	char *ft_strchr(const char *s, int c);

	Locates the first occurrence of the character c in the string s (the terminating null byte is considered part of the string). Returns a pointer to the match, or NULL if not found.

	-	ft_strrchr
	char *ft_strrchr(const char *s, int c);

	Locates the last occurrence of the character c in the string s. Returns a pointer to the match, or NULL if not found.

	-	ft_strncmp
	int ft_strncmp(const char *s1, const char *s2, size_t n);

	Compares at most n characters of s1 and s2. Returns 0 if they are equal, a negative value if s1 is less than s2, or a positive value if s1 is greater.

	-	ft_memchr
	void *ft_memchr(const void *s, int c, size_t n);

	Scans the first n bytes of the memory area s for the byte c. Returns a pointer to the matching byte, or NULL if not found.

	-	ft_memcmp
	int ft_memcmp(const void *s1, const void *s2, size_t n);

	Compares the first n bytes of the memory areas s1 and s2. Returns 0 if they are equal, otherwise the difference between the first two differing bytes (negative or positive).

	-	ft_strnstr
	char *ft_strnstr(const char *big, const char *little, size_t len);

	Locates the first occurrence of the string little in big, searching at most len characters. Returns big if little is empty, a pointer to the start of the match if found, or NULL if not found.

	-	ft_atoi
	int ft_atoi(const char *nptr);

	Converts the initial portion of the string nptr to an int, skipping leading whitespace and handling an optional sign. Returns the converted value.

	-	ft_calloc
	void *ft_calloc(size_t nmemb, size_t size);

	Allocates (with malloc) memory for nmemb elements of size bytes each and sets it all to zero. If nmemb or size is 0, it returns a unique pointer that can be passed to free(). Returns a pointer to the allocated memory, or NULL if the allocation fails.

	-	ft_strdup
	char *ft_strdup(const char *s);

	Allocates (with malloc) and returns a duplicate of the string s. Returns a pointer to the new string, or NULL if the allocation fails.

Part 2 - Additional functions

	-	ft_substr
	char *ft_substr(char const *s, unsigned int start, size_t len);

	Allocates and returns a substring of s that starts at index start and has a maximum length of len. Returns the substring, or NULL if the allocation fails.

	-	ft_strjoin
	char *ft_strjoin(char const *s1, char const *s2);

	Allocates and returns a new string that is the concatenation of s1 followed by s2. Returns the new string, or NULL if the allocation fails.

	-	ft_strtrim
	char *ft_strtrim(char const *s1, char const *set);

	Allocates and returns a copy of s1 with all characters belonging to set removed from the beginning and the end. Returns the trimmed string, or NULL if the allocation fails.

	-	ft_split
	char **ft_split(char const *s, char c);

	Allocates and returns an array of strings obtained by splitting s using the character c as a delimiter. Each string and the array itself are allocated independently, and the array is NULL-terminated. Returns the array, or NULL if any allocation fails. It must be freed by calling free() on each string and then on the array.

	-	ft_itoa
	char *ft_itoa(int n);

	Allocates and returns a string representing the integer n. Negative numbers are handled. Returns the string, or NULL if the allocation fails.

	-	ft_strmapi
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

	Applies f to each character of s (passing the index as the first argument and the character as the second) and stores the results in a newly allocated string. Returns the new string, or NULL if the allocation fails.

	-	ft_striteri
	void ft_striteri(char *s, void (*f)(unsigned int, char *));

	Applies f to each character of s, passing the index as the first argument and the character's address as the second, so it can be modified in place. Returns nothing.

	-	ft_putchar_fd
	void ft_putchar_fd(char c, int fd);

	Writes the character c to the file descriptor fd. Returns nothing.

	-	ft_putstr_fd
	void ft_putstr_fd(char *s, int fd);

	Writes the string s to the file descriptor fd. Returns nothing.

	-	ft_putendl_fd
	void ft_putendl_fd(char *s, int fd);

	Writes the string s followed by a newline to the file descriptor fd. Returns nothing.

	-	ft_putnbr_fd
	void ft_putnbr_fd(int n, int fd);

	Writes the integer n to the file descriptor fd. Returns nothing.

Part 3 - Linked list

	The following structure is declared in libft.h:

	typedef struct s_list
	{
		void			*content;
		struct s_list	*next;
	}	t_list;


	- content: the data stored in the node (void * allows any type).
	- next: the address of the next node, or NULL if it is the last one.

	-	ft_lstnew
	t_list *ft_lstnew(void *content);

	Allocates and returns a new node whose content is set to the given parameter and whose next is NULL. Returns a pointer to the new node.

	-	ft_lstadd_front
	void ft_lstadd_front(t_list **lst, t_list *new);

	Adds the node new at the beginning of the list *lst. Returns nothing.

	-	ft_lstsize
	unsigned int ft_lstsize(t_list *lst);

	Counts the number of nodes in the list. Returns the length of the list.

	-	ft_lstlast
	t_list *ft_lstlast(t_list *lst);

	Finds the last node of the list. Returns a pointer to the last node.

	-	ft_lstadd_back
	void ft_lstadd_back(t_list **lst, t_list *new);

	Adds the node new at the end of the list *lst. Returns nothing.

	-	ft_lstdelone
	void ft_lstdelone(t_list *lst, void (*del)(void *));

	Frees the content of the node lst using del, then frees the node itself. It does **not** free the next node. Returns nothing.

	-	ft_lstclear
	void ft_lstclear(t_list **lst, void (*del)(void *));

	Deletes and frees the given node and all its successors using del and free(), then sets the list pointer to NULL. Returns nothing.

	-	ft_lstiter
	void ft_lstiter(t_list *lst, void (*f)(void *));

	Iterates through the list and applies f to the content of each node. Returns nothing.

	-	ft_lstmap
	t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

	Iterates through the list, applies f() to each node's content, and builds a new list from the results. del() is used to free the content of a node if needed (e.g. when an allocation fails midway). Returns the new list, or NULL if an allocation fails.