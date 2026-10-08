
void FUN_1008bb3eb(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (*(code *)_xmlFree)(*param_1);
    }
    if (param_1[1] != 0) {
      (*(code *)_xmlFree)(param_1[1]);
    }
    if (param_1[2] != 0) {
      (*(code *)_xmlFree)(param_1[2]);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

