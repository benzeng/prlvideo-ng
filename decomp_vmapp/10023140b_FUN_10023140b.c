
void FUN_10023140b(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (*(code *)_xmlFree)(*param_1);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

