
void FUN_1008149f0(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_102202a48;
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[0xc] != (void *)0x0)) {
      operator_delete((void *)param_1[0xc]);
    }
  }
  FUN_100230350(param_1);
  return;
}

