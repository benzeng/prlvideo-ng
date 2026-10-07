
void FUN_1000f8100(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  
  *param_1 = &DAT_10110ce78;
  QMutex::~QMutex((QMutex *)(param_1 + 0x179e));
  pQVar3 = (QArrayData *)param_1[0x179d];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000f815a;
      pQVar3 = (QArrayData *)param_1[0x179d];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000f815a:
  pQVar3 = (QArrayData *)param_1[0x179c];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000f8190;
      pQVar3 = (QArrayData *)param_1[0x179c];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000f8190:
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    if (pvVar2 != pvVar1) {
      param_1[3] = (void *)((long)pvVar2 +
                           ~((ulong)((long)pvVar2 + (-0x18 - (long)pvVar1)) / 0x18) * 0x18);
    }
    operator_delete(pvVar1);
  }
  return;
}

