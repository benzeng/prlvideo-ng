
int FUN_100818680(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100816a00();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 == 0) {
        uVar2 = FUN_100259e60(param_1);
        if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
          *(undefined4 *)*param_4 = uVar2;
        }
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

