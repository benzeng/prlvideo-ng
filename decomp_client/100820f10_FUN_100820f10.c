
void FUN_100820f10(long *param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar1 = (**(code **)(*param_1 + 200))();
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = (**(code **)(*param_1 + 0xc0))();
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
  return;
}

