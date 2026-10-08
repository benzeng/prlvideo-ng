
int FUN_100859e90(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

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
        uVar2 = FUN_10075b250(param_1,*(undefined8 *)param_4[1],param_4[2]);
      }
      else {
        if (iVar1 != 0) goto LAB_100859f0c;
        uVar2 = FUN_10075b1e0(param_1,*(undefined8 *)param_4[1],*(undefined4 *)param_4[2]);
      }
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        *(undefined8 *)*param_4 = uVar2;
      }
    }
  }
LAB_100859f0c:
  return iVar1 + -2;
}

