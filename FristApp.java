package prtc;
import java.util.Scanner;
public class addno 
	  {
		   public static void main(String[] args) {
		        Test ob=new Test();
		        ob.add(10,20);
	   }

}

class Test{
	void add(int a, int b) {
		int c=a+b;
		System.out.println(c);
	}

}
