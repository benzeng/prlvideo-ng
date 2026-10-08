
int FUN_100839310(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100838ea0();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 1) {
        if (*(int *)param_4[1] == 0) {
          uVar2 = FUN_1003dff90();
          *(undefined4 *)*param_4 = uVar2;
        }
        else {
          *(undefined4 *)*param_4 = 0xffffffff;
        }
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 1) {
        (**(code **)(*param_1 + 0x1e0))(param_1,*(undefined8 *)param_4[1]);
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

