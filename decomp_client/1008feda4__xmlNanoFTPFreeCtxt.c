
void _xmlNanoFTPFreeCtxt(long *param_1)

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
    *(undefined4 *)(param_1 + 0x16) = 1;
    if (-1 < *(int *)((long)param_1 + 0xb4)) {
      _close(*(int *)((long)param_1 + 0xb4));
    }
    *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x99) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x4cc) = 0xffffffff;
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

