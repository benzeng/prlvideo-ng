
void FUN_1008328c0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100367d40();
      return;
    case 1:
      FUN_1003682f0();
      return;
    case 2:
      FUN_100368660(param_1,*(undefined8 *)(param_4 + 8));
      break;
    case 3:
      FUN_1003686b0(param_1,*(undefined8 *)(param_4 + 8));
      break;
    case 4:
      FUN_100368880(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 5:
      FUN_100368950(**(undefined8 **)(param_4 + 8),**(undefined8 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

