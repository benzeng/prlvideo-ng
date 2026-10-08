
undefined8 FUN_1000c8120(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint *local_28;
  
  local_28 = *(uint **)(param_2 + 0x58);
  puVar1 = (undefined8 *)(param_2 + 0x58);
  if (1 < *local_28) {
    FUN_1000e6e10(puVar1,local_28[1]);
    local_28 = (uint *)*puVar1;
  }
  local_28 = local_28 + (long)(int)local_28[3] * 2 + 4;
  FUN_1000e52d0(param_1,puVar1,&local_28,param_3);
  return param_1;
}

