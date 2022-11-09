/* ENSF 480 Lab 5
 * Alexander Sembrat and Matthew Ho
 * ThreeColumnTable_Observer.java
 */
import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer{
	
	private ArrayList<Double> data;
	private DoubleArrayListSubject doubleArray;
	
	public ThreeColumnTable_Observer(DoubleArrayListSubject mydata) {
		doubleArray = mydata;
		doubleArray.registerObserver(this);
	}
	
	public void display() {
		System.out.println("\nNotification to Three-Columns Table Observer: Data Changed:");
		int i = 0;
		int index = 0;
		while(index<data.size()) {
			for(int j = 0; j<3 && i<data.size(); j++) {
				System.out.print(data.get(i) + " ");
				i++;
				index++;
			}
			System.out.println();
		}
		
	}

	public void update(ArrayList<Double> d) {
		data = new ArrayList<Double>(d);
		display();
	}

}
