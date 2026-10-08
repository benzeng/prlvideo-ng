
void FUN_10005eb00(long param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      if (*(char *)(param_1 + 0x20) != '\x01') {
        *(undefined1 *)(param_1 + 0x20) = 1;
        QTimer::start();
        FUN_100809310(*(undefined8 *)(param_1 + 0x10),1);
        return;
      }
    }
    else if (param_3 == 0) {
      FUN_10005e730(param_1);
      return;
    }
  }
  return;
}

