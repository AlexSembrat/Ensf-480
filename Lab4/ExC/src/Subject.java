/* ENSF 480 Lab 5
 * Alexander Sembrat and Matthew Ho
 * Subject.java
 */
public interface Subject {
	public void registerObserver(Observer o);
	public void remove(Observer o);
	public void notifyAllObservers();
}
