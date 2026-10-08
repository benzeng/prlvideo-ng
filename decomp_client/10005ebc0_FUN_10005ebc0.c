
int FUN_10005ebc0(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          if (*(char *)(param_1 + 0x20) != '\x01') {
            *(undefined1 *)(param_1 + 0x20) = 1;
            QTimer::start();
            FUN_100809310(*(undefined8 *)(param_1 + 0x10),1);
          }
        }
        else if (iVar1 == 0) {
          FUN_10005e730(param_1);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

