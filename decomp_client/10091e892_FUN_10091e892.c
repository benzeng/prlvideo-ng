
void FUN_10091e892(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)_xmlFree)(*param_1);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}

