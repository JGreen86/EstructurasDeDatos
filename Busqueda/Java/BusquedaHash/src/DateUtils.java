import java.time.Instant;
import java.time.ZoneId;
import java.time.format.DateTimeFormatter;

public class DateUtils {

    public DateUtils() {

    }

    public static String getDate(Instant instant) {
        DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern("dd/MM/yyyy")
                .withZone(ZoneId.of("-07:00"));
        return dateTimeFormatter.format(instant);
    }

    public static String getTime(Instant instant) {
        DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern("HH:mm:ss")
                .withZone(ZoneId.of("-07:00"));
        return dateTimeFormatter.format(instant);
    }

    public static String getDateTime(Instant instant) {
        DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss")
                .withZone(ZoneId.of("-07:00"));
        return dateTimeFormatter.format(instant);
    }
}
