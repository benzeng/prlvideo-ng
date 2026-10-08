
void FUN_10028df50(long *param_1)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  
  cVar3 = FUN_10061c5c0(param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = (void *)param_1[8], pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    param_1[9] = 0;
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

