/*
Consecutive Characters from Two Strings

Two strings S1 and S2 are given as the input. If two alphabets from the string S2 occur consecutively in string S1, the second alphabet must be removed from string S1. The program must print the string S1 after removing such occurrences.

Boundary Condition(s):
1 <= Length of S1 <= 1000
1 <= Length of S2 <= 26

Input Format:
The first line contains S1.
The second line contains S2.

Output Format:
The first line contains a string.

Example Input/Output 1:
Input:
technology
echgy

Output:
tenolog

Explanation:
Two characters ec from s2 consecutively occur in technology. So the second alphabet c is removed and technology becomes tehnology.
Two characters eh from s2 consecutively occur in tehnology. So the second alphabet h is removed and tehnology becomes tenology.
Two characters gy from s2 consecutively occur in tenology. So the second alphabet y is removed and tenology becomes tenolog.

Example Input/Output 2:
Input:
imagination
ahtng

Output:
imainion



Input:
lytfyptojkcrdzddsnnbkaofpazzrsedrkjtkhleatjvmavhbgrhdhwkpnjtxspttsqzmorbklzexcdjqzsonekaofoodvcvlufyaljejycfquusvucpljnddkdbuntbznjbrwnxpcoanxbrzsjtyjkoxmscspxojtzzkxgbqkoxovvufzlrlannekrehbvcqtwxmsobwtpbqudpxqmxoqjbbjhmxvpqhgxvvdwtaosahbbcrqqkfuzuzfqvjtmozeyejchyhaqxwepoyftepeepjsabkzoubkfyrsqjmoaewvrbtukbnddwfzqcwtghpbnhwvbeorwcwywsbzunkkxlmfmlreqqutnvonjbznvrxmrofswsdcgovdfepwgwbrvltqypmskhcpzfgqyffakrvclcdmltjeyjcgtcrhhukwsqfqnmnysqqumzwfvxphwaazhmfxkqdhgeddjkplgtmxucsxseojqzorpyejnevehoavsgjhleqvrvzksyxknkoftmrqoqbdrahyynymwkpddzaejebhybwackyqgnzbackyzrwruaqthtrtuumgtzlrbqnevmwwngzzvzvgftakrntafykfnrswzabqkxtzppaccumhbggrpmhecjgbuvwytbrzjvolotdrpergazgaoqgehhotsmasdqcudpcxtyqtsodarxfctxyspoothjetbydodopqdqxvwtqhepovzhgfoevhwfeljhvubuaomcxoyhdsrweqeahgsgpobwhegpmoqcautejtektszxespqmrxokfunpelxjadtsbecwpseywxnpysapdoguxppwwedosnotkcfdtmmbhsbovfqpyklhhqorrhzqdtqtboqrbdbjaxovyehjwzbtfjvfqguwctlpteqfobbukukczprydsozdxqfuhttsmpgkrhqfbcxugcavkvxmfasanrzfbrnuxsycydseutmcolrohgrgfjplbnyju
qwertyuiopasdfghjklzxcvb

Expected Output:
lnnbmanjmonendntnjnxnxmsnnemsmxmxmomondnhnkmfmlnvnjnvmrmsmlnmnymzmfmxnenkmrnymwnzmgnemwngntnrmhmhmamcmomrnpnpnommbmpmfnrnumcny

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n,c[1000],o=0,p=0,q=0;
char a[1000],b[27];
scanf("%s",a);
scanf("%s",b);
l=strlen(a);
k=strlen(b);
for(i=0;i<k;i++)
{
    for(m=i;m<k;m++)
    {
      for(j=0;j<l;j++)
     {
        if((a[j]==b[i]&&a[j+1]==b[m])||(a[j]==b[m]&&a[j+1]==b[i]))
        {
        c[o]=j+1;
        o++;
        }
     }
    }
}
p=o;
o=0;
for(i=0;i<l;i++)
{
    q=0;
    for(j=0;j<p;j++)
    {
         if(c[j]==i)
         q=1;
    }
       if(q==0)
         {
           printf("%c",a[i]);
         }
       else
         o++;
}
}
