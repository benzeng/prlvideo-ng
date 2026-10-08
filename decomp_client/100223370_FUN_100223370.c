
void FUN_100223370(long *param_1)

{
  void **ppvVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  Data *pDVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  Connection local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar5 = (uint *)param_1[5];
  uVar3 = puVar5[2];
  if (puVar5[3] == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001002233b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  ppvVar1 = (void **)(param_1 + 5);
  uVar4 = puVar5[(long)(int)uVar3 * 2 + 4];
  if (1 < *puVar5) {
    pDVar6 = (Data *)QListData::detach((int)ppvVar1);
    pvVar8 = *ppvVar1;
    lVar7 = (long)*(int *)((long)pvVar8 + 8);
    puVar2 = (uint *)((long)pvVar8 + lVar7 * 8 + 0x10);
    if ((puVar5 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
       (lVar9 = *(int *)((long)pvVar8 + 0xc) - lVar7,
       lVar9 != 0 && lVar7 <= *(int *)((long)pvVar8 + 0xc))) {
      _memcpy(puVar2,puVar5 + (long)(int)uVar3 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10022341f;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10022341f:
  puVar5 = *ppvVar1;
  uVar3 = puVar5[2];
  if (1 < *puVar5) {
    pDVar6 = (Data *)QListData::detach((int)ppvVar1);
    pvVar8 = *ppvVar1;
    lVar7 = (long)*(int *)((long)pvVar8 + 8);
    puVar2 = (uint *)((long)pvVar8 + lVar7 * 8 + 0x10);
    if ((puVar5 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
       (lVar9 = *(int *)((long)pvVar8 + 0xc) - lVar7,
       lVar9 != 0 && lVar7 <= *(int *)((long)pvVar8 + 0xc))) {
      _memcpy(puVar2,puVar5 + (long)(int)uVar3 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100223495;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100223495:
  QListData::erase(ppvVar1);
  lVar7 = 0;
  if ((param_1[3] != 0) && (lVar7 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar7 = param_1[4];
  }
  lVar7 = FUN_1003192a0(lVar7,uVar4);
  if (lVar7 != 0) {
    if (DAT_10230ffd0 < 3) goto LAB_10022359a;
    lVar9 = 0;
    if ((param_1[3] != 0) && (lVar9 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar9 = param_1[4];
    }
    FUN_1003193e0(&local_58,lVar9);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3," About to grab VM [%s] display #%d",
                  local_50 + *(long *)(local_50 + 0x10),uVar4);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10022356a;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10022356a:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10022359a;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10022359a:
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0xffffffff;
    local_68 = 0xffffffff;
    local_64 = 0x50000008;
    local_60 = 0;
    pvVar8 = operator_new(0x90);
    FUN_100292850(pvVar8,lVar7,&local_80);
    QObject::connect(local_88,pvVar8,"2taskFinished( PRL_RESULT )",param_1,
                     "1onVmDisplayScreenGrabCompleted( PRL_RESULT )",0);
    QMetaObject::Connection::~Connection(local_88);
    CAbstractTask::execute();
    return;
  }
  lVar7 = 0;
  if ((param_1[3] != 0) && (lVar7 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar7 = param_1[4];
  }
  FUN_1003193e0(&local_48,lVar7);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "Cannot take screenshot of VM [%s] display #%d. Display object does not exist",
                local_40 + *(long *)(local_40 + 0x10),uVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002236b7;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002236b7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002236e7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002236e7:
  FUN_100223370(param_1);
  return;
}

