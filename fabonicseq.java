//fabonic sequence
class fabonicseq
{
public static void main(String[] args)
{
int z=9,a=0,b=1,c;
for(int i=0;i<=z;i++){
c=a+b;
System.out.println(c);
a=b;
b=c;
}
}}