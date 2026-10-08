
void FUN_100957478(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = param_2;
  if (param_2 != 0) {
    while (local_28 != 0) {
      lVar1 = *(long *)(local_28 + 0x30);
      FUN_1009572cb(param_1,local_28);
      local_28 = lVar1;
    }
  }
  return;
}

