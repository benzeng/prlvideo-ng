
undefined4 FUN_10020e7ec(long param_1)

{
  long lVar1;
  undefined4 local_24;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x118) == 0) {
    local_24 = 0;
  }
  else {
    for (local_c = 0; local_c < *(int *)(param_1 + 0x118); local_c = local_c + 1) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x110) + (long)local_c * 8);
      if (*(int *)(lVar1 + 0x5c) == 0) {
        *(long *)(param_1 + 0xb8) = lVar1;
        FUN_1001e945e(param_1,0x723,lVar1,0);
        local_10 = 0x723;
      }
    }
    *(undefined8 *)(param_1 + 0xb8) =
         *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
    local_24 = local_10;
  }
  return local_24;
}

