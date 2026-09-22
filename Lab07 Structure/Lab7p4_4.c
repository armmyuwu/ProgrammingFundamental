#include <stdio.h>
#include <string.h>
int main(void)
{
        struct album_data
        {
                char name[30];
                int years;
                char song[3][30]
        };
        struct Artists
        {
                char name[20];
                struct album_data album[10];
                int num_album;
        };
        struct Artists artist;
        int i, j;
        strcpy(artist.name,"The Corrs");
        strcpy(artist.album[0].name,"Forgiven, Not Forgotten");
        artist.album[0].years = 1995;
        strcpy(artist.album[0].song[0],"abc"); 
        strcpy(artist.album[0].song[1],"def"); 
        strcpy(artist.album[0].song[2],"ghi");
        strcpy(artist.album[1].name,"Talk On Corners");
        artist.album[1].years = 1998;
        strcpy(artist.album[1].song[0],"jkl"); 
        strcpy(artist.album[1].song[1],"nop"); 
        strcpy(artist.album[1].song[2],"qrs");
        strcpy(artist.album[2].name,"The Corrs Unplugged");
        artist.album[2].years = 1999;
        strcpy(artist.album[2].song[0],"tup"); 
        strcpy(artist.album[2].song[1],"wux"); 
        strcpy(artist.album[2].song[2],"yz1");
        strcpy(artist.album[3].name,"In Blue");
        artist.album[3].years = 2000;
        strcpy(artist.album[3].song[0],"234"); 
        strcpy(artist.album[3].song[1],"567"); 
        strcpy(artist.album[3].song[2],"890");
        strcpy(artist.album[4].name,"Borrowed Heaven");
        artist.album[4].years = 2004;
        strcpy(artist.album[4].song[0],"101"); 
        strcpy(artist.album[4].song[1],"102"); 
        strcpy(artist.album[4].song[2],"103");
        artist.num_album = 5;
        printf("\n -- Artist: %s --\n",artist.name);
        for(i=0; i<artist.num_album; i++) { 
            printf("\t album(%d): %s,%d\n", i+1, artist.album[i].name, artist.album[i].years); 
            for(j=0; j<3; j++) { 
                printf("\t\t song(%d): %s\n", j+1, artist.album[i].song[j]); 
            } 
        }
        return 0;
}