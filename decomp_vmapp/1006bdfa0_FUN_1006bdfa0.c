
void FUN_1006bdfa0(long *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    _close((int)param_1[0xb]);
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  }
  return;
}

