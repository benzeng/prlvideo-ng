
void FUN_1008062c0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1001a5960(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 1:
      FUN_1001a5a20(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_1001a59c0(param_1,**(undefined4 **)(param_4 + 8),**(undefined1 **)(param_4 + 0x10));
      return;
    case 3:
      FUN_1001a5a80(param_1,**(undefined1 **)(param_4 + 8));
      return;
    case 4:
      FUN_1001a5aa0(param_1,**(undefined1 **)(param_4 + 8),**(undefined1 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

