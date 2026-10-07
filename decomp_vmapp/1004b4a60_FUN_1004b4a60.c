
void FUN_1004b4a60(long param_1)

{
  long *plVar1;
  int *piVar2;
  QArrayData *pQVar3;
  QArrayData *local_48 [2];
  long *local_38;
  undefined1 local_29;
  
  QReadWriteLock::lockForWrite();
  DAT_1011bc000 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar1 = (long *)(param_1 + 0x20);
  if (*(int *)(*(long *)(param_1 + 0x20) + 8) < *(int *)(*(long *)(param_1 + 0x20) + 0xc)) {
    do {
      FUN_1004b5a80(local_48,plVar1);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      if (*(int *)local_48[0] != -1) {
        if (*(int *)local_48[0] != 0) {
          LOCK();
          *(int *)local_48[0] = *(int *)local_48[0] + -1;
          local_29 = *(int *)local_48[0] != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004b4af9;
        }
        QArrayData::deallocate(local_48[0],2,8);
      }
LAB_1004b4af9:
    } while (*(int *)(*plVar1 + 8) < *(int *)(*plVar1 + 0xc));
  }
  QReadWriteLock::unlock();
  FUN_100037320(param_1 + 0x38);
  QMutex::~QMutex((QMutex *)(param_1 + 0x30));
  piVar2 = (int *)*plVar1;
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004b4b49;
      piVar2 = (int *)*plVar1;
    }
    FUN_1004b5c10(plVar1,piVar2);
  }
LAB_1004b4b49:
  pQVar3 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = *(QArrayData **)(param_1 + 8);
      local_29 = 0;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

