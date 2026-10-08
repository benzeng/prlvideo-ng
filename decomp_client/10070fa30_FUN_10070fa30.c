
undefined8 * FUN_10070fa30(undefined8 *param_1,long param_2)

{
  long local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined4 local_20;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_10055a620(&local_38,*(long *)(param_2 + 0x10) + 0x18);
  local_30 = (undefined8 *)(local_38 + 0x10 + (long)*(int *)(local_38 + 8) * 8);
  local_28 = (undefined8 *)(local_38 + 0x10 + (long)*(int *)(local_38 + 0xc) * 8);
  if (*(int *)(local_38 + 8) != *(int *)(local_38 + 0xc)) {
    do {
      local_20 = 1;
      FUN_100581a70(param_1,*local_30);
      local_30 = local_30 + 1;
    } while (local_30 != local_28);
  }
  local_20 = 1;
  FUN_1000fe670(&local_38);
  return param_1;
}

