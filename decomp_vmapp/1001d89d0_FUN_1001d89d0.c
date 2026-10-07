
void FUN_1001d89d0(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

