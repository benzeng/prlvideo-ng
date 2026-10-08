
void FUN_100a67cb0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100a679e0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      FUN_100a67a00(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_100a67b00(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 3:
      FUN_100a67b20(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 4:
      FUN_100a67c10();
      return;
    }
  }
  return;
}

