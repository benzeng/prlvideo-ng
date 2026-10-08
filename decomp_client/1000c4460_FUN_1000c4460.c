
void FUN_1000c4460(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  int *piVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *param_1 = &PTR_FUN_1021f8e70;
  QTimer::stop();
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 0x20))();
  }
  FUN_1000eefc0(param_1 + 0x17);
  FUN_1000eefa0(param_1 + 0x17);
  if ((long *)param_1[0x4e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x20))();
  }
  param_1[0x4e] = 0;
  FUN_1000c6560(param_1);
  if ((*(int *)((long)param_1 + 0x21c) != 0) || (*(int *)(param_1 + 0x43) != 0)) {
    FUN_1000c4970(param_1 + 0x43,0x6c,0,0);
  }
  if ((*(int *)((long)param_1 + 0x214) != 0) || (*(int *)(param_1 + 0x42) != 0)) {
    FUN_1000c4970(param_1 + 0x42,0x6c,0,0);
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",2,"Deinitialized: Shared Guest Applications client worker"
                 );
  }
  if ((long *)param_1[0x4e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x20))();
  }
  FUN_100039a80(param_1 + 0x49);
  pDVar6 = (Data *)param_1[0x47];
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_1000c45ff;
      pDVar6 = (Data *)param_1[0x47];
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1000c45ff:
  QMutex::~QMutex((QMutex *)(param_1 + 0x45));
  QTimer::~QTimer((QTimer *)(param_1 + 0x3e));
  QTimer::~QTimer((QTimer *)(param_1 + 0x3a));
  QTimer::~QTimer((QTimer *)(param_1 + 0x36));
  pQVar4 = (QArrayData *)param_1[0x35];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c4666;
      pQVar4 = (QArrayData *)param_1[0x35];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c4666:
  piVar3 = (int *)param_1[0x34];
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_1000c4697;
      piVar3 = (int *)param_1[0x34];
    }
    FUN_1000e5cd0(param_1 + 0x34,piVar3);
  }
LAB_1000c4697:
  FUN_1000e5d60(param_1 + 0x2b);
  FUN_1000f9af0(param_1 + 0x23);
  FUN_100039a80(param_1 + 0x22);
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x20))();
  }
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 8))();
  }
  FUN_1000b8350(param_1);
  return;
}

