import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

/**
 * Created by we on 16-8-28.
 * haha
 */
public class Main {
    // psvm+tab
    public static void main(String[] args) {
        WebDriver driver = new FirefoxDriver();
        String baseUrl = "https://www.jd.com/";
        driver.get(baseUrl);
        driver.findElement(By.id("key")).clear();
        driver.findElement(By.id("key")).sendKeys("iphone6s");
        driver.findElement(By.className("button")).click();
    }


}
