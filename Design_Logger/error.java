package Design_Logger;

public class error extends logger {
    error(logger nextLogger){
        super(nextLogger);
    }
    public void log(int level, String message){
        if(level==error){
            System.out.println("ERROR: "+message);
        }else{
            super.log(level, message);
        }
    }
}
