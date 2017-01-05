**Задачи**

int strlen(char* text)
{
    int count = 0;
    while( text[count] != '\0')
    {
            count ++;
    }
    return count;
}


int strcmp(char* text1, char* text2)
{
    int a=strlen(text1);
    int b=strlen(text2);
    if(a>b)
    {
        return -1;
    }
    else if(b>a)
    {
        return 1;
    }
    else
    {
        for (int i=0; text1[i]!='\0'; i++)
        {
            if(text1[i]<text2[i])
               {
                   return -1;
               }
            else if (text1[i]>text2[i])
            {
                return 1;
            }
        }
    return 0;

    }
    
}

char* strcat(char* str1, char* str2)
{
    int size = strlen(str1) + strlen(str2);
    char * temp = new char[size + 1];
    for(int i = 0 ; i < strlen(str1); ++i)
    {
        temp[i] = str1[i];
    }

    for(int i = 0; i < strlen(str2); ++i)
    {
        temp[strlen(str1)+i] = str2[i];
    }
    temp[size] = '\0';
    return temp;
}

void strcpy(char* src, char *& dest)
{
    dest = new char[strlen(src) + 1];
    for(int i = 0 ; i < strlen(src); ++i)
    {
        dest[i] = src[i];
    }
    dest[strlen(src)] = '\0';
} 
