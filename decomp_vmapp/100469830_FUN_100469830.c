
undefined4 * FUN_100469830(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined1 local_30 [8];
  uint *local_28;
  
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_100469720(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  puVar1 = *(undefined4 **)(puVar2 + (long)(int)puVar2[2] * 2 + 4);
  *param_1 = *puVar1;
  FUN_100469680(param_1 + 2,puVar1 + 2);
  *param_1 = *puVar1;
  local_28 = (uint *)*param_2;
  if (1 < *local_28) {
    FUN_100469720(param_2,local_28[1]);
    local_28 = (uint *)*param_2;
  }
  local_28 = local_28 + (long)(int)local_28[2] * 2 + 4;
  FUN_1004698e0(local_30,param_2,&local_28);
  return param_1;
}

