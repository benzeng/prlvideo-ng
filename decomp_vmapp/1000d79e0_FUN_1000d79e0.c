
void FUN_1000d79e0(long *param_1,char param_2)

{
  if (param_2 != (char)param_1[8]) {
    QMutex::lock();
    *(char *)(param_1 + 8) = param_2;
    if (param_2 == '\0') {
      if ((int)param_1[7] != 0) {
        FUN_100430270(*(undefined8 *)(*param_1 + 0xf0));
      }
    }
    else {
      if ((int)param_1[7] != 0) {
        FUN_100430270(*(undefined8 *)(*param_1 + 0xf0),0);
      }
      QMutex::unlock();
      QMutex::lock();
      *(undefined1 *)(param_1 + 4) = 0;
    }
    QMutex::unlock();
    FUN_100430570(*(undefined8 *)(*param_1 + 0xf0),0);
    return;
  }
  return;
}

