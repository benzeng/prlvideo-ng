
undefined8 FUN_100cd1b40(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x20) = param_2;
  if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x58) = param_4;
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar1 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar1;
}

