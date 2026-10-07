
undefined1 FUN_1000d7810(long *param_1)

{
  long lVar1;
  
  if ((*(int *)(param_1[5] + 0x10) != 0) && (*(int *)(param_1[5] + 0x14) != 0)) {
    if (*(int *)((long)param_1 + 0x3c) == 2) {
      if (param_1[3] != 0) {
LAB_1000d7846:
        *(undefined1 *)(param_1 + 4) = 1;
        QMutex::unlock();
        if ((char)param_1[8] != '\0') {
          return 1;
        }
        FUN_100430570(*(undefined8 *)(*param_1 + 0xf0),0x14);
        return 1;
      }
    }
    else if ((*(int *)((long)param_1 + 0x3c) == 1) && ((int)param_1[7] != 0)) goto LAB_1000d7846;
  }
  lVar1 = param_1[4];
  *(undefined1 *)(param_1 + 4) = 0;
  QMutex::unlock();
  if ((char)lVar1 != '\0') {
    FUN_100430570(*(undefined8 *)(*param_1 + 0xf0),100);
  }
  return 0;
}

