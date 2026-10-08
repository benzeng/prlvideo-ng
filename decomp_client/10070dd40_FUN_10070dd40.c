
void FUN_10070dd40(long param_1)

{
  long local_30;
  long local_28;
  long local_20;
  undefined4 local_18;
  
  FUN_10070e350();
  FUN_10055a620(&local_30,param_1 + 0x18);
  local_28 = local_30 + 0x10 + (long)*(int *)(local_30 + 8) * 8;
  local_20 = local_30 + 0x10 + (long)*(int *)(local_30 + 0xc) * 8;
  if (*(int *)(local_30 + 8) != *(int *)(local_30 + 0xc)) {
    do {
      local_18 = 1;
      FUN_10070ee70();
      local_28 = local_28 + 8;
    } while (local_28 != local_20);
  }
  local_18 = 1;
  FUN_1000fe670(&local_30);
  return;
}

