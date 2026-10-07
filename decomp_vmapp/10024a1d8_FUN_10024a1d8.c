
void FUN_10024a1d8(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _memset(param_1,-1,0x40);
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

