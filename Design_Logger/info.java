package Design_Logger;

public class info extends logger{
    info(logger nextLogger){
        super(nextLogger);
    }

    public void log(int level, String message){
        if(level==info){
            System.out.println("INFO: "+message);
        }else{
            super.log(level, message);
        }
    }
}
