
void FUN_1007f9530(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100106c90(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      FUN_100106d30(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_100106dd0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      FUN_100106de0(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

