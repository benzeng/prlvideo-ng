
void _xmlXIncludeFreeContext(long param_1)

{
  undefined4 local_c;
  
  if (param_1 != 0) {
    while (0 < *(int *)(param_1 + 0x40)) {
      FUN_1001c3d00(param_1);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x48));
    }
    for (local_c = 0; local_c < *(int *)(param_1 + 0xc); local_c = local_c + 1) {
      if (*(long *)(*(long *)(param_1 + 0x18) + (long)local_c * 8) != 0) {
        FUN_1001c3809(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)local_c * 8));
      }
    }
    for (local_c = 0; local_c < *(int *)(param_1 + 0x20); local_c = local_c + 1) {
      if (*(long *)(*(long *)(param_1 + 0x30) + (long)local_c * 8) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_c * 8));
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x60));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

