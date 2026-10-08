
void _xmlFreeURI(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (*(code *)_xmlFree)(*param_1);
    }
    if (param_1[3] != 0) {
      (*(code *)_xmlFree)(param_1[3]);
    }
    if (param_1[4] != 0) {
      (*(code *)_xmlFree)(param_1[4]);
    }
    if (param_1[6] != 0) {
      (*(code *)_xmlFree)(param_1[6]);
    }
    if (param_1[8] != 0) {
      (*(code *)_xmlFree)(param_1[8]);
    }
    if (param_1[1] != 0) {
      (*(code *)_xmlFree)(param_1[1]);
    }
    if (param_1[2] != 0) {
      (*(code *)_xmlFree)(param_1[2]);
    }
    if (param_1[7] != 0) {
      (*(code *)_xmlFree)(param_1[7]);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

