// find out whether the entered character is vovel pr not
import java.util.Scanner;
class identifyvovels
{
public static void main(String[] args)
{
Scanner obj=new Scanner(System.in);
System.out.println("enter character ");
char z=obj.next().charAt(0);
if ((z=='a')||(z=='e')||(z=='i')||(z=='o')||(z=='u')){
System.out.println(z+" is vovel");
}
else{System.out.println("consonent");}
}
}