
void FUN_10042e140(QObject *param_1)

{
  int *piVar1;
  long lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f22b0;
  lVar2 = *(long *)(param_1 + 0x128);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 4) != 0) && (*(QObject **)(param_1 + 0x130) != (QObject *)0x0)) {
      QObject::disconnect(*(QObject **)(param_1 + 0x130),"2taskFinished(PRL_RESULT)",param_1,
                          "1setupDiskInfo()");
      (**(code **)(**(long **)(param_1 + 0x130) + 0x78))(*(long **)(param_1 + 0x130),0x80000275);
      lVar2 = *(long *)(param_1 + 0x128);
      if (lVar2 == 0) goto LAB_10042e1c8;
    }
    if ((*(int *)(lVar2 + 4) != 0) && (*(long **)(param_1 + 0x130) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x130) + 0x20))();
    }
  }
LAB_10042e1c8:
  if (((*(long *)(param_1 + 0xf8) != 0) && (*(int *)(*(long *)(param_1 + 0xf8) + 4) != 0)) &&
     (*(long **)(param_1 + 0x100) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x100) + 0x20))();
  }
  piVar1 = *(int **)(param_1 + 0x128);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x128) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x128));
    }
  }
  piVar1 = *(int **)(param_1 + 0x118);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x118) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x118));
    }
  }
  piVar1 = *(int **)(param_1 + 0x108);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x108) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x108));
    }
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0xf8) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xf8));
    }
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0xe8) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
  }
  QObject::~QObject(param_1);
  return;
}

