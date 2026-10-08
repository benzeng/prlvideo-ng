
void FUN_10093d9f2(long param_1)

{
  undefined4 local_c;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if (**(int **)(param_1 + 8) == 0x18) {
      for (local_c = 0; local_c < *(int *)(param_1 + 0x18); local_c = local_c + 1) {
        (*(code *)_xmlFree)(*(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x10) + (long)local_c * 8) + 8));
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x10) + (long)local_c * 8));
      }
    }
    (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

