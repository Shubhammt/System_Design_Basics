package Design_Logger;

public class Main {
    public static void main(String args[]){
        logger logObj = new info(new error(new debug(null)));
        logObj.log(logger.error, "Exception");
        logObj.log(logger.debug, "debug this stuff");
        logObj.log(logger.info, "just for info");
    }
}
