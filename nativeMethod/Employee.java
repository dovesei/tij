/*************************************************************************
	> File Name: Employee.java
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 四  5/18 00:15:28 2017
 ************************************************************************/
public class Employee{
	private String name;
	private double salary;

	public native void raiseSalary(double byPercent);
	public Employee(String n, double s){
		name=n;
		salary=s;
	}
	public void print()
	{
		System.out.println(name + " " + salary);
	}
	static
	{
		System.loadLibrary("Employee");
	}
}

