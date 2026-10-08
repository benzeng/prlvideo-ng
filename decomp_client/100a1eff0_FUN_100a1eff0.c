
int FUN_100a1eff0(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar2;
      }
      if (iVar2 < 2) {
        if (iVar2 == 1) {
          FUN_100a1f070(param_1);
        }
        else if (iVar2 == 0) {
          uVar1 = FUN_100a1c840(param_1 + 0x10,0);
          if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
            *(undefined1 *)*param_4 = uVar1;
          }
        }
      }
    }
    iVar2 = iVar2 + -2;
  }
  return iVar2;
}

