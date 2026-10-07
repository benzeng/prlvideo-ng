
void FUN_10020a1b6(long param_1)

{
  long lVar1;
  undefined8 local_20;
  undefined4 local_c;
  
  local_20 = param_1;
  while (local_20 != 0) {
    lVar1 = *(long *)(local_20 + 8);
    if (*(long *)(local_20 + 0x18) != 0) {
      for (local_c = 0; local_c < *(int *)(local_20 + 0x20); local_c = local_c + 1) {
        if (*(long *)(*(long *)(local_20 + 0x18) + (long)local_c * 8) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(local_20 + 0x18) + (long)local_c * 8));
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 0x18));
    }
    (*(code *)_xmlFree)(local_20);
    local_20 = lVar1;
  }
  return;
}

