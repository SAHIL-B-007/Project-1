import java.sql.*;
import java.util.*;

class db
{
	public static void main(String[] args)
	{
		Scanner x=new Scanner(System.in);
		
		try
		{

			Class.forName("oracle.jdbc.driver.OracleDriver");  
  

			Connection con=DriverManager.getConnection(  
			"jdbc:oracle:thin:@localhost:1521:xe","system","oracle");  
  

			Statement stmt=con.createStatement();  
  

			ResultSet rs=stmt.executeQuery("select * from emp");  

			while(1)  
			System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  					"+rs.getString(3));  
  

			 
		}
		catch()
		{
		}
	}
}