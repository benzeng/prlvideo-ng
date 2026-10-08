
int FUN_1008f2496(long param_1)

{
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_c;
  
  if (param_1 == 0) {
    local_24 = -1;
  }
  else {
    local_20 = *(long *)(param_1 + 0x18);
    local_c = 0;
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x30)) {
      if (((*(int *)(local_20 + 8) == 1) || (*(int *)(local_20 + 8) == 9)) ||
         (*(int *)(local_20 + 8) == 0xd)) {
        local_c = local_c + 1;
      }
    }
    local_24 = local_c;
  }
  return local_24;
}

