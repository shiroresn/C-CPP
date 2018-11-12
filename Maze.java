import java.util.*;
import java.io.*;

class Maze
{
public static void main(String args[])
{
String str1 = args[0];
String str2 = "";


for(int i=str1.length()-1;i>=0;i--)
{
str2=str2+str1.charAt(i);
}

System.out.println(str1);
System.out.println(str2);



if(str1.equals(str2))
{
System.out.println("1");
}
else
{
System.out.println("0");

}
}
}
