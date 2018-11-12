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
str2+=str1.charAt(i);
}

System.out.println("Reversed String : "+str2);

}
} 
