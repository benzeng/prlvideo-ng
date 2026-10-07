
void FUN_1005fa1b0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  
  ppuVar5 = &PTR_FUN_10111e488;
  *param_1 = &PTR_FUN_10111e488;
  plVar1 = param_1 + 3;
  plVar4 = (long *)param_1[3];
  if (plVar4 != plVar1) {
    do {
      lVar2 = *plVar4;
      plVar3 = (long *)plVar4[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      *plVar4 = 0x112233;
      plVar4[1] = (long)&DAT_00445566;
      if ((void *)plVar4[-2] != (void *)0x0) {
        operator_delete((void *)plVar4[-2]);
      }
      operator_delete(plVar4 + -2);
      plVar4 = (long *)*plVar1;
    } while (plVar4 != plVar1);
    ppuVar5 = (undefined **)*param_1;
  }
  (*(code *)ppuVar5[0x1c])(param_1);
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 9));
  return;
}

