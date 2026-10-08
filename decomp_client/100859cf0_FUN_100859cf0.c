
int FUN_100859cf0(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
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
        uVar3 = FUN_10075b1b0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      }
      else {
        if (iVar1 == 1) {
          uVar2 = FUN_10075b190(param_1,*(undefined8 *)param_4[1]);
          if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
            *(undefined4 *)*param_4 = uVar2;
          }
          goto LAB_100859d82;
        }
        if (iVar1 != 0) goto LAB_100859d82;
        uVar3 = FUN_10075b170(param_1);
      }
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        *(undefined8 *)*param_4 = uVar3;
      }
    }
  }
LAB_100859d82:
  return iVar1 + -3;
}

