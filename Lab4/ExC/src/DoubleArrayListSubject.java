/* ENSF 480 Lab 5
 * Alexander Sembrat and Matthew Ho
 * DoubleArrayListSubject.java
 */
import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject{
	
	private ArrayList<Double> data;		
	private ArrayList<Observer> observers; 
	
	public DoubleArrayListSubject() {
		data = new ArrayList<Double>();
		observers = new ArrayList<Observer>();
	}
	
	public void display() {
		if(data.isEmpty()) {
			System.out.println("Empty List ...");
		}
		else {
			for(int i = 0; i<data.size(); i++) {
				System.out.println(data.get(i) + " ");
			}
		}
		
	}

	public void populate(double[] arr) {
		// TODO Auto-generated method stub
		for(int i = 0; i<arr.length; i++) {
			data.add(arr[i]);
		}
	}

	public void setData(double d, int i) {
		data.set(i,d);
		notifyAllObservers(); 
	}

	public void addData(double d) {
		data.add(d);
		notifyAllObservers();
	}


	public void registerObserver(Observer o) {
		observers.add(o);
		o.update(data);
	}

	public void remove(Observer o) {
		observers.remove(o);
	}

	public void notifyAllObservers() {
		for(int i = 0; i<observers.size(); i++) {
			Observer o = observers.get(i);
			o.update(data);
		}
	}

}
