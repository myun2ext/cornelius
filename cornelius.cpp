#include <stdio.h>
#include <string>

#define LINE_BUFFER	(1024)

struct cornelius_request
{
	::std::string method;
	::std::string path;
	::std::string protocol;
};

int parse_request(FILE* fp)
{
	char buffer[LINE_BUFFER];
	fgets(buffer, sizeof(buffer), fp);
}

int cornelius_response(FILE* fp)
{
}

int main()
{
	return 0;
}