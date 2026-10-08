
long _xmlXPathNextPreceding(long param_1,long param_2)

{
  int iVar1;
  long local_20;
  long local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = 0;
  }
  else {
    local_18 = param_2;
    if (param_2 == 0) {
      local_18 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    }
    if (local_18 == 0) {
      local_20 = 0;
    }
    else {
      if ((*(long *)(local_18 + 0x38) != 0) && (*(int *)(*(long *)(local_18 + 0x38) + 8) == 0xe)) {
        local_18 = *(long *)(local_18 + 0x38);
      }
      do {
        if (*(long *)(local_18 + 0x38) != 0) {
          for (local_18 = *(long *)(local_18 + 0x38); *(long *)(local_18 + 0x20) != 0;
              local_18 = *(long *)(local_18 + 0x20)) {
          }
          return local_18;
        }
        local_20 = *(long *)(local_18 + 0x28);
        if (local_20 == 0) {
          return 0;
        }
        if (*(long *)(**(long **)(param_1 + 0x18) + 0x18) == local_20) {
          return 0;
        }
        iVar1 = FUN_1008e2ce7(local_20,*(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
        local_18 = local_20;
      } while (iVar1 != 0);
    }
  }
  return local_20;
}

