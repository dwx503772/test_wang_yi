package com.hello;

import org.junit.Assert;
import org.junit.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;

/**
 * Created by Linty on 9/4/2016.
 */
public class RanzhiTestCases {

    @Test
    public void testLogIn() {
        WebDriver driver = new FirefoxDriver();
        String baseUrl = "http://localhost:808/ranzhi/www";

        driver.get(baseUrl);
        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        driver.findElement(By.className("btn")).click();
        driver.findElement(By.linkText("简体")).click();
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        WebElement account = driver.findElement(By.id("account"));
        account.clear();
        account.sendKeys("admin");

        WebElement password = driver.findElement(By.id("password"));
        password.clear();
        password.sendKeys("admin");

        driver.findElement(By.id("submit")).click();

        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        String expected = baseUrl + "/sys/index.html";
        String actual = driver.getCurrentUrl();
        Assert.assertEquals(expected, actual);

        driver.quit();

    }
}
