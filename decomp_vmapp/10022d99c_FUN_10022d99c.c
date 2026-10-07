
void FUN_10022d99c(long param_1)

{
  undefined4 local_c;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      _xmlFreeDoc(*(xmlDocPtr *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      for (local_c = 0; local_c < *(int *)(param_1 + 0x40); local_c = local_c + 1) {
        FUN_10022def2(*(undefined8 *)(*(long *)(param_1 + 0x48) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x48));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

