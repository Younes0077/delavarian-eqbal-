import java.util.Scanner;

//  Created by Mohadeseh Delavarian

public class Main {

    public static void main(String[] args) {
	// write your code here
//        int a;
//        a=10;
//        float b;
//        b=2.1f;
//        long c = 1234567;
//        double f;
//        f=3.2;
//        boolean w=false;
//
//        int []ar=new int [10];
//        ar[0]=1;
//        ar[1]=2;
////        System.out.println(ar[0]);
////        System.out.println(b);
//
//        int [][]a2= new int [10][15];
//
//        double [][]a3= new double [2][];
//        a3[0]=new double[4];
//        a3[1]=new double[6];
//
//        System.out.println(2);
//        System.out.println('c');
//        System.out.println(2.12);
//        System.out.println("this is a book");

        Scanner sc=new Scanner(System.in);
////        int d=sc.nextInt();
////        float f1=sc.nextFloat();
//        int t=5;
//        int []a= new int [t];
//        for ( int i=0; i<t ; i++)
//            a[i]=sc.nextInt();
//        for(int b:a)
//            System.out.println(b);
//        for ( int b:a)
//            if (b%2==0)
//                System.out.println(b);
//
//        for ( int i=0; i<t; i=i+2)
//            System.out.println(a[i]);
//        int d;
//
//       while(true)
//       {
//           d=sc.nextInt();
//           if (d<0)
//               break;
//       }

//        Dog a= new Dog();
//        a.print();
//        System.out.println(a);
//        a.changename("little");
//        a.bark();
//
//        Dog b;
//        b= new Dog();
//        b.changename("john");
//        b.changeage(2);
//        b.bark();

//        Dog c=new Dog("abi",0);
//        c.print();
//        c.setName("abd");
//        c.setAge(12);
//        c.print();
//        System.out.println(c.getAge());

        int a=12;
        test(a);
        System.out.println(a);
        double b=12.3;
        System.out.println(test(b));
        int [] ar={1,2,3,4};
        for ( int c:ar)
            System.out.println(c);

        test(ar);
        for ( int c:ar)
            System.out.println(c);

        Dog d=new Dog("a",1);
        d.print();
        test(d);
        d.print();

        System.out.println(min(2,3));
        System.out.println(sum(2,3));
        System.out.println(sum(2,3,3));
        System.out.println(sum(2,3,3,4,5));
    }

    public static int sum( int... a)
    {
        int s=0;
        for( int b:a)
            s=s+b;
        return s;
    }
//    public static int sum(int a, int b, int c)
//    {
//        return a+b+c;
//    }
//    public static int sum(int a, int b)
//    {
//        return a+b;
//    }
    public static int min( int a, int b)
    {
        if ( a<b)
            return a;
        else
            return b;
    }
    public static void test( Dog c)
    {
        c.setName("b");
    }
    public static void test(int []a)
    {
        a[0]=10;
    }
    public static void test(int b)
    {
        b=b+2;
    }
    public static double test( double b)
    {
        return b*b*b;
    }
}


class Dog
{
    private String Name;
    private int age;

    public Dog()
    {
        Name="A";
        age=0;
    }

    public Dog(String name, int age) {
        this();
        Name = name;
        this.age = age;
    }


    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void changename(String  a)
    {
        Name=a;
    }
    public void changeage(int a)
    {
        age=a;
    }
    public void bark()
    {
        System.out.println("hello from "+Name+"/ "+age);
    }
    public void print()
    {
        System.out.println("Name : "+Name +" , Age :"+ age);
    }

}

