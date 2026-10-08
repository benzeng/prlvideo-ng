
void FUN_100a40690(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100a39010();
  if (lVar2 != 0) {
    uVar3 = FUN_100a39010();
    FUN_100a3cbe0(uVar3,param_1 + 2);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1);
    }
  }
  return;
}

