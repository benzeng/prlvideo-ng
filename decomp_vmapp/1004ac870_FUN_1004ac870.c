
void FUN_1004ac870(QObject *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  Data *pDVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc28b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc2948;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_100bc2990;
  if (param_1[0x152] != (QObject)0x0) {
    FUN_1000305a0(DAT_1011c35c8,1);
    param_1[0x152] = (QObject)0x0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    FUN_1004b4840();
    if (*(long **)(param_1 + 0x138) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN_100519360(*(long *)(param_1 + 0x78) + 0x10f0,2);
  FUN_1004b34e0(*(undefined8 *)(param_1 + 0xe0),1);
  DAT_1011cc7f0 = 0;
  DAT_100bf93a4 = 0;
  DAT_100bf93bd = DAT_100bf93bd | 1;
  pQVar2 = *(QArrayData **)(param_1 + 0x120);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004ac981;
      pQVar2 = *(QArrayData **)(param_1 + 0x120);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004ac981:
  FUN_10052a6d0(param_1 + 0x108);
  FUN_10052a6d0(param_1 + 0xf8);
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 8))();
  }
  pDVar3 = *(Data **)(param_1 + 0xe8);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_1004ac9dd;
      pDVar3 = *(Data **)(param_1 + 0xe8);
    }
    QListData::dispose(pDVar3);
  }
LAB_1004ac9dd:
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
  }
  FUN_1004b3e90(param_1 + 0xb8);
  FUN_1004b3e90(param_1 + 0x98);
  QMutex::~QMutex((QMutex *)(param_1 + 0x90));
  pvVar1 = *(void **)(param_1 + 0x80);
  if (pvVar1 != (void *)0x0) {
    FUN_1004b4c60(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_1005192c0(param_1 + 0x38);
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

