
void FUN_100acfe70(QObject *param_1)

{
  Data *pDVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10223a810;
  QObject::disconnect(*(QObject **)(param_1 + 0xf8),(char *)0x0,param_1,(char *)0x0);
  pQVar2 = *(QArrayData **)(param_1 + 0xad8);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100acfed5;
      pQVar2 = *(QArrayData **)(param_1 + 0xad8);
    }
    QArrayData::deallocate(pQVar2,0x18,8);
  }
LAB_100acfed5:
  QTimer::~QTimer((QTimer *)(param_1 + 0xa80));
  QTimer::~QTimer((QTimer *)(param_1 + 0xa60));
  if (*(long **)(param_1 + 0xa58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa58) + 0x20))();
  }
  pDVar1 = *(Data **)(param_1 + 0xa48);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100acff2e;
      pDVar1 = *(Data **)(param_1 + 0xa48);
    }
    QListData::dispose(pDVar1);
  }
LAB_100acff2e:
  if (*(long **)(param_1 + 0xa30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa30) + 0x20))();
  }
  FUN_100ad9c40(param_1 + 0x9c0);
  if (*(long **)(param_1 + 0x9b8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x9b8) + 8))();
  }
  FUN_100ae5820(param_1 + 0x990);
  pQVar2 = *(QArrayData **)(param_1 + 0x988);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100acffa6;
      pQVar2 = *(QArrayData **)(param_1 + 0x988);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100acffa6:
  QMutex::~QMutex((QMutex *)(param_1 + 0x980));
  FUN_100add8f0(param_1 + 0x920);
  FUN_100adb4d0(param_1 + 0x100);
  CVmCoherence::~CVmCoherence((CVmCoherence *)(param_1 + 0x28));
  QObject::~QObject(param_1);
  return;
}

