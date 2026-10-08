
int FUN_100443a10(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
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
        uVar2 = 0;
      }
      else {
        if (iVar1 != 0) goto LAB_100443a68;
        uVar2 = 1;
      }
      FUN_1004432f0(param_1,uVar2);
    }
  }
LAB_100443a68:
  return iVar1 + -2;
}

