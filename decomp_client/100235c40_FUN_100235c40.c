
void FUN_100235c40(QObject *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102202d18;
  if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (*(long *)(param_1 + 0x78) != 0)) {
    QObject::deleteLater();
  }
  if (((*(long *)(param_1 + 0x60) != 0) && (*(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x68) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 0x68),(char *)0x0,param_1,(char *)0x0);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
    }
    FUN_100327ff0(uVar2);
    if (((*(long *)(param_1 + 0x60) != 0) && (*(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) &&
       (*(long **)(param_1 + 0x68) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
    }
  }
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x70));
    }
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x60));
    }
  }
  FUN_100230350(param_1);
  return;
}

