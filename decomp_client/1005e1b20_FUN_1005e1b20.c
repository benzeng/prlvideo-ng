
int FUN_1005e1b20(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 3) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 3) {
        if (iVar1 == 2) {
          FUN_1005e1310(param_1);
        }
        else if (iVar1 == 1) {
          CProgressIndicator::toggleAnimation
                    (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
        }
        else if (iVar1 == 0) {
          CProgressIndicator::toggleAnimation
                    (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

