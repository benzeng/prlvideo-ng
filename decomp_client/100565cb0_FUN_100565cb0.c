
int FUN_100565cb0(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 5) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 5) {
        switch(iVar1) {
        case 1:
          FUN_1005653b0(param_1,param_4[1]);
          break;
        case 2:
          FUN_1005654f0(param_1,*(undefined4 *)param_4[1]);
          break;
        case 3:
          FUN_10083d6e0(*(undefined8 *)(param_1 + 0x10));
          break;
        case 4:
          FUN_100563d50(param_1);
        }
      }
    }
    iVar1 = iVar1 + -5;
  }
  return iVar1;
}

