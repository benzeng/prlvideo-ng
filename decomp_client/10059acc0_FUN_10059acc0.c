
undefined8 FUN_10059acc0(long param_1)

{
  int iVar1;
  Data *pDVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  Data *pDVar8;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
  }
  lVar5 = FUN_100599cc0(uVar3);
  if (*(char *)(lVar5 + 0x4a) != '\0') {
    return 0;
  }
  pvVar6 = operator_new(0x60);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10);
  lVar7 = 0;
  if ((lVar5 != 0) && (lVar7 = 0, (*(byte *)(*(long *)(lVar5 + 8) + 0x20) & 1) != 0)) {
    lVar7 = lVar5;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1002880e0(pvVar6,lVar4,3,lVar7,&local_40);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059adcf;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10059adcf:
  QObject::connect(&local_48,pvVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1onAuthorizeTaskFinished(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::execute();
  return 1;
}

