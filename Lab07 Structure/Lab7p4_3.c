#include <stdio.h>
#include <string.h>
int main(void)
{
        struct album_data
        {
                char name[10];
                int years;
        };
        struct Artists
        {
                char name[10];
                struct album_data album[10];
                int num_album;
        };
        struct Artists artist[5];
        int i;
        strcpy(artist[0].name,"The Corrs");
        strcpy(artist[0].album[0].name,"Forgiven, Not Forgotten");
        artist[0].album[0].years = 1995;
        strcpy(artist[0].album[1].name,"Talk On Corners");
        artist[0].album[1].years = 1998;
        strcpy(artist[0].album[2].name,"The Corrs Unplugged");
        artist[0].album[2].years = 1999;
        strcpy(artist[0].album[3].name,"In Blue");
        artist[0].album[3].years = 2000;
        strcpy(artist[0].album[4].name,"Borrowed Heaven");
        artist[0].album[4].years = 2004;
        artist[0].num_album = 5;
        printf("\n -- Artist: %s --\n",artist[0].name);
        for(i=0; i<artist[0].num_album; i++)
                printf("\t album(%d): %s,%d\n",i+1,artist[0].album[i].name,artist[0].album[i].years);

        return 0;
}