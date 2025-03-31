package Design_Logger;

public class debug extends logger{
    debug(logger nextLogger){
        super(nextLogger);
    }

    public void log(int level, String message){
        if(level==debug){
            System.out.println("DEBUG: "+message);
        }else{
            super.log(level, message);
        }
    }
}
