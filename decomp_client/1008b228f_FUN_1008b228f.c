
void FUN_1008b228f(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (*(code *)_xmlFree)(*param_1);
    }
    *param_1 = 0;
    if (param_1[3] != 0) {
      (*(code *)_xmlFree)(param_1[3]);
    }
    param_1[3] = 0;
    if (param_1[4] != 0) {
      (*(code *)_xmlFree)(param_1[4]);
    }
    param_1[4] = 0;
    if (param_1[6] != 0) {
      (*(code *)_xmlFree)(param_1[6]);
    }
    param_1[6] = 0;
    if (param_1[8] != 0) {
      (*(code *)_xmlFree)(param_1[8]);
    }
    param_1[8] = 0;
    if (param_1[1] != 0) {
      (*(code *)_xmlFree)(param_1[1]);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      (*(code *)_xmlFree)(param_1[2]);
    }
    param_1[2] = 0;
    if (param_1[7] != 0) {
      (*(code *)_xmlFree)(param_1[7]);
    }
    param_1[7] = 0;
  }
  return;
}

