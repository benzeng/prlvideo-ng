
int FUN_1005d8210(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 4) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar2;
      }
      switch(iVar2) {
      case 0:
        uVar1 = FUN_1005d6700(param_1);
        if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
          *(undefined1 *)*param_4 = uVar1;
        }
        break;
      case 1:
        uVar1 = FUN_1005d6d80(param_1);
        if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
          *(undefined1 *)*param_4 = uVar1;
        }
        break;
      case 2:
        FUN_1005d66a0(param_1);
        break;
      case 3:
        FUN_1005d6440(param_1);
      }
    }
    iVar2 = iVar2 + -4;
  }
  return iVar2;
}

