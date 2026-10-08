
void FUN_10079e3c0(QObject *param_1)

{
  void *pvVar1;
  int *piVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  QArrayData *pQVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_10222c770;
  FUN_10079e5d0();
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    FUN_100d3d7f0(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  pQVar6 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079e4bb;
      pQVar6 = *(QArrayData **)(param_1 + 0x10);
    }
    lVar5 = (long)*(int *)(pQVar6 + 4) << 3;
    if (lVar5 != 0) {
      pQVar3 = pQVar6 + *(long *)(pQVar6 + 0x10);
      do {
        pQVar4 = *(QArrayData **)pQVar3;
        if (*(int *)pQVar4 == 0) {
LAB_10079e490:
          QArrayData::deallocate(pQVar4,8,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 == 0) {
            pQVar4 = *(QArrayData **)pQVar3;
            goto LAB_10079e490;
          }
        }
        pQVar3 = pQVar3 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar6,8,8);
  }
LAB_10079e4bb:
  QObject::~QObject(param_1);
  return;
}

