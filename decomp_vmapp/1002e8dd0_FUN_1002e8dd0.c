
undefined4 FUN_1002e8dd0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_18;
  
  uVar1 = 6;
  if (*(int *)(*(long *)(param_1 + 0x9e8) + 0xc) == *(int *)(*(long *)(param_1 + 0x9e8) + 8)) {
    local_18 = param_2;
    FUN_1002e94c0(param_1 + 0x9e8,&local_18);
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
  }
  return uVar1;
}

