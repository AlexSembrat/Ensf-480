/* ENSF 480 Lab 5
 * Alexander Sembrat and Matthew Ho
 * OneRow_Observer.java
 */
import java.util.ArrayList;

public class OneRow_Observer implements Observer{
	
	private ArrayList<Double> data;
	private DoubleArrayListSubject doubleArray;
	
	public OneRow_Observer(DoubleArrayListSubject mydata) {
		doubleArray = mydata;
		doubleArray.registerObserver(this);
	}
	
	public void display() {
		System.out.println("\nNotification to One-Row Observer: Data Changed:");
		for(int i = 0; i<data.size(); i++) {
			System.out.print(data.get(i) + " ");
		}
	}

	public void update(ArrayList<Double> d) {
		data = new ArrayList<Double>(d);
		display();
	}

}
