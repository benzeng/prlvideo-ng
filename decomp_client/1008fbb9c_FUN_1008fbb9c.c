
void FUN_1008fbb9c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)_xmlFree)(param_1[1]);
    }
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
    if (param_1[0xe] != 0) {
      (*(code *)_xmlFree)(param_1[0xe]);
    }
    if (param_1[0x11] != 0) {
      (*(code *)_xmlFree)(param_1[0x11]);
    }
    if (param_1[0x12] != 0) {
      (*(code *)_xmlFree)(param_1[0x12]);
    }
    if (param_1[0xf] != 0) {
      (*(code *)_xmlFree)(param_1[0xf]);
    }
    if (param_1[0x10] != 0) {
      (*(code *)_xmlFree)(param_1[0x10]);
    }
    *(undefined4 *)((long)param_1 + 0x2c) = 4;
    if (-1 < (int)param_1[5]) {
      _close((int)param_1[5]);
    }
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

