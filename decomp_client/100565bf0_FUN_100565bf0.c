
void FUN_100565bf0(long param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 1:
      FUN_1005653b0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_1005654f0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 3:
      FUN_10083d6e0(*(undefined8 *)(param_1 + 0x10));
      return;
    case 4:
      FUN_100563d50();
      return;
    }
  }
  return;
}

