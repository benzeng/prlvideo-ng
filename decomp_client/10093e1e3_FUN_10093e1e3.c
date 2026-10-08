
undefined4 FUN_10093e1e3(long param_1)

{
  int iVar1;
  long local_18;
  
  if (*(long *)(param_1 + 200) != 0) {
    local_18 = *(long *)(param_1 + 200);
    do {
      iVar1 = _xmlStreamPop(*(undefined8 *)(local_18 + 0x38));
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      local_18 = *(long *)(local_18 + 8);
    } while (local_18 != 0);
  }
  return 0;
}

