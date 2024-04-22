import java.util.Scanner;

class Employee 
{
	private String name, address,phoneno;
	private int age , Salary;
	
	public void setname(String name)
	{
		this.name=name;
	}
		
	public String getname()
	{
		return name;
	}
	
	public void setSalary(int Salary)
	{
		this.Salary=Salary;
	}
	
	public int getSalary()
	{
		return Salary;
	}
		
	public void setphoneno(String phoneno )
	{
		this.phoneno=phoneno;
	}
	
	public String getphoneno()
	{
		return phoneno;
	}
	
	public void setaddress( String address )
	{
		this.address=address;
	}
	
	public String getaddress()
	{
		return address;
	}
		
	public void setage(int age)
	{
		this.age=age;
	}
		
	public int getage()
	{
		return age;
	}
	
}




class Officer extends Employee
{
	private String specialization;
	void setspecialization(String specialization)
	{	this.specialization=specialization;}
		
	String getspecialization()
	{	return specialization;}
}

class Manager extends Employee
{
	private String department;
	
	void setdepartment(String department)
	{
		this.department=department;
	}
	String getdepartment()
        { 
        return department;
        }

}
	 
		public class Employeepgm
		 {
			 public static void main(String args[])
			 {
				 Officer of = new Officer();
				 of.setname( "Shanker");
				 of.setphoneno("7593066930");
				 of.setage(25);
				 of.setaddress("TRIVANDRUM, Kerala ");
				 of.setSalary(300000);
				 of.setspecialization("CEO");
				 
				 System.out.println(" \nOfficer Deatils");
				 System.out.println(" \nName :" +of.getname());
				 System.out.println(" \nPhone NO : " +of.getphoneno());
				 System.out.println(" \nAddress : "+of.getaddress());
				 System.out.println(" \nSalary : "+of.getSalary());
				 System.out.println(" \nSpecialization "+of.getspecialization());
				 System.out.println(" \n \n ");
				 
				 
				 Manager ma=new Manager();
				 
				 ma.setname("Rahul");
				 ma.setage(23);
				 ma.setphoneno("9631022548");
				 ma.setaddress("Kazhakkootam, Kerala");
				 ma.setSalary(1500000);
				 ma.setdepartment("Sales");
				 
				 System.out.println("Manager details : ");
				 System.out.println(" \nAge: "+ma.getage());
				 System.out.println(" \nName: "+ma.getname());
				 System.out.println(" \nPhone No : "+ma.getphoneno());
				 System.out.println(" \nAddress :" +ma.getaddress());
				 System.out.println(" \nSalary :"+ma.getSalary());
				 System.out.println(" \nDepartment :"+ma.getdepartment());
			 }
		 }
