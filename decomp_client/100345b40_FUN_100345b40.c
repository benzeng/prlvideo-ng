
void FUN_100345b40(QObject *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  int *piVar3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_10220d1e0;
  puVar1 = *(undefined8 **)(param_1 + 0x1a0);
  if (puVar1 == (undefined8 *)0x0) goto LAB_100345bd4;
  pQVar4 = (QArrayData *)puVar1[1];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100345b9e;
      pQVar4 = (QArrayData *)puVar1[1];
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
LAB_100345b9e:
  pQVar4 = (QArrayData *)*puVar1;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100345bcc;
      pQVar4 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
LAB_100345bcc:
  operator_delete(puVar1);
LAB_100345bd4:
  pvVar2 = *(void **)(param_1 + 0x1a8);
  if (pvVar2 != (void *)0x0) {
    FUN_10009daa0(pvVar2);
    operator_delete(pvVar2);
  }
  if (*(void **)(param_1 + 0x1b0) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x1b0));
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

