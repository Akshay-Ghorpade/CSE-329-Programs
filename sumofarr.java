//sum of elements of an array
import java.util.Scanner;
class sumofarr
{
public static void main(String[] args)
{
Scanner obj=new Scanner(System.in);
System.out.println("enter number of elements");
int x=obj.nextInt();
int arr[]=new int[x];
int sum=0;
for(int i=0;i<x;i++){
System.out.println("enter elements");
arr[i]=obj.nextInt();
}
for(int i=0;i<x;i++){
sum=sum+arr[i];
}
System.out.println("the sum is"+" "+sum);
}}