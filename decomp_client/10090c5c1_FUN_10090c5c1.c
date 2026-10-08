
void FUN_10090c5c1(long *param_1)

{
  int local_c;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (*(code *)_xmlFree)(*param_1);
    }
    if (param_1[10] != 0) {
      for (local_c = 0; local_c < *(int *)((long)param_1 + 0x4c); local_c = local_c + 1) {
        FUN_10090c55a(*(undefined8 *)(param_1[10] + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(param_1[10]);
    }
    if (param_1[8] != 0) {
      for (local_c = 0; local_c < *(int *)((long)param_1 + 0x3c); local_c = local_c + 1) {
        FUN_10090c3d2(*(undefined8 *)(param_1[8] + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(param_1[8]);
    }
    if (param_1[0xc] != 0) {
      (*(code *)_xmlFree)(param_1[0xc]);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

