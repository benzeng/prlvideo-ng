
undefined8 FUN_100c01a80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100c65d20(param_1 + 7,param_2 + 7);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100c65d20(param_1 + 0xd,param_2 + 0xd);
    if (iVar1 != 0) {
      iVar1 = FUN_100c65d20(param_1 + 1,param_2 + 1);
      if (iVar1 != 0) {
        _memcpy((void *)((long)param_1 + 0x9c),(void *)((long)param_2 + 0x9c),0x80);
        *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
        *param_1 = *param_2;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

