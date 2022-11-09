/* ENSF 480 Lab 5
 * Alexander Sembrat and Matthew Ho
 * FiveRowsTable_Observer.java
 */
import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer{
	
	private ArrayList<Double> data;
	private DoubleArrayListSubject doubleArray;

	public FiveRowsTable_Observer(DoubleArrayListSubject mydata) {
		doubleArray = mydata;
		doubleArray.registerObserver(this);
	}
	
	public void display() {
		System.out.println("\nNotification to Five-Rows Table Observer: Data Changed:");
	
	    int row = 0;
		for (int i = 0; i < 5; i++){
			for (int j = row; j < data.size(); j=j+5){
				System.out.print(data.get(j) + " ");
			}
			row++;
			System.out.println();
		}
	}

	public void update(ArrayList<Double> d) {
		data = new ArrayList<Double>(d);
		display();
	}

}
