
undefined8 FUN_1008ba590(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long local_30;
  
  if (((*(byte *)(*(long *)(param_1 + 0x28) + 0x18) & 0x10) == 0) &&
     ((*(byte *)(param_2 + 0x1d) & 2) != 0)) {
    *(undefined4 *)(param_1 + 0xb8) = 0x24;
    iVar1 = (**(code **)(param_1 + 0x40))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_1008a21b0(param_2,&local_30,param_3);
  if (iVar1 != 0) {
    if (*(int *)(local_30 + 0x20) == 8) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x40))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

