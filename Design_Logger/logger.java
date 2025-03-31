package Design_Logger;

public abstract class logger {
    public static int error = 1;
    public static int debug = 2;
    public static int info = 3;

    logger log_processer;
    logger(logger log_processor){
        this.log_processer = log_processor;
    }

    public void log(int level, String message){
        if(log_processer!=null){
            log_processer.log(level, message);
        }
    }
}
