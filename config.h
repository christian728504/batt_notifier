// configuration for battery notifier program

#define UPDATE_INTERVAL 5000 // poll interval in milliseconds
#define THRESHOLD 30         // notify when battery drops below this percent
#define BATT_PATH0 "/sys/class/power_supply/BAT0/capacity"
#define BATT_PATH1 "/sys/class/power_supply/BAT1/capacity"
