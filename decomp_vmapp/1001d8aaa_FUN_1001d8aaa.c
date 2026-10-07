
void FUN_1001d8aaa(long param_1)

{
  undefined4 local_c;
  
  if (param_1 != 0) {
    for (local_c = 0; local_c < *(int *)(param_1 + 0x44); local_c = local_c + 1) {
      FUN_1001d89d0(*(undefined8 *)(*(long *)(param_1 + 0x48) + (long)local_c * 8));
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x48));
    }
    if ((*(int *)(param_1 + 4) == 5) && (*(long *)(param_1 + 0x18) != 0)) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
    }
    if ((*(int *)(param_1 + 4) == 5) && (*(long *)(param_1 + 0x20) != 0)) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
    }
    if ((*(int *)(param_1 + 4) == 0x35) && (*(long *)(param_1 + 0x18) != 0)) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

