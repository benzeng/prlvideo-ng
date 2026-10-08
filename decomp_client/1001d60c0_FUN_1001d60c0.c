
void FUN_1001d60c0(QObject *param_1)

{
  int *piVar1;
  CAutoreleasePool *pCVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ff6a0;
  FUN_100a3c850();
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x88))();
  }
  pCVar2 = DAT_102310868;
  if (DAT_102310868 != (CAutoreleasePool *)0x0) {
    CAutoreleasePool::~CAutoreleasePool(DAT_102310868);
    operator_delete(pCVar2);
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  QObject::~QObject(param_1);
  return;
}

