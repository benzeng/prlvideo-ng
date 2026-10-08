
void FUN_1003a7f60(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Data *pDVar7;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getLockDown();
  CVmLockDown::getHash();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a7feb;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003a7feb:
  pvVar4 = operator_new(0x60);
  uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  uVar5 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  uVar6 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_100118820(&local_48,0x3e,uVar6);
  FUN_1002880e0(pvVar4,uVar3,iVar1 != 0,uVar5,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a80af;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar2 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_48 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_1003a80af:
  CAbstractTask::execute();
  return;
}

