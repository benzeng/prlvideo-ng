
void FUN_10053f1a0(long param_1,int param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  void *pvVar9;
  Data *pDVar10;
  Data *pDVar11;
  long lVar12;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 local_94;
  Data *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  long local_78;
  Data *local_70;
  Data *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QVariant local_50;
  Data *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x4a) = 1;
  puVar3 = PTR_s_DispPreferences_102274488;
  plVar1 = *(long **)(param_1 + 0x30);
  pcVar2 = *(code **)(*plVar1 + 0x60);
  iVar6 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_DispPreferences_102274488);
    iVar6 = (int)sVar7;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  local_60 = (QArrayData *)QString::fromAscii_helper("LockedOperationsList.LockedOperation",0x24);
  (*pcVar2)(&local_50,plVar1,&local_58,&local_60);
  FUN_1003df0d0(&local_40,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f267;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10053f267:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f297;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10053f297:
  if (*(int *)(local_40 + 0xc) == *(int *)(local_40 + 8)) goto LAB_10053f641;
  lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar8 = 0;
  if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_10015a330(uVar8);
  uVar8 = CDispCommonPreferences::getPasswordProtectedOperations();
  FUN_10012b980(&local_68,&local_40);
  CDispPasswordProtectedOperations::setLockedOperations(uVar8,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f34f;
    }
    iVar6 = *(int *)(local_68 + 0xc);
    if (iVar6 != *(int *)(local_68 + 8)) {
      lVar12 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar6 * -8;
      pDVar10 = local_68 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_10053f34f:
  lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar8 = 0;
  if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_10015a330(uVar8);
  uVar8 = CDispCommonPreferences::getLockedOperationsList();
  puVar3 = PTR_shared_null_1021e15e8;
  local_70 = (Data *)PTR_shared_null_1021e15e8;
  CDispLockedOperationsList::setLockedOperations(uVar8,&local_70);
  pDVar10 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f3ff;
    }
    iVar6 = *(int *)(local_70 + 0xc);
    if (iVar6 != *(int *)(local_70 + 8)) {
      lVar12 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar6 * -8;
      pDVar11 = local_70 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar10);
  }
LAB_10053f3ff:
  lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar8 = 0;
  if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  FUN_10015aa80(&local_78,uVar8);
  lVar4 = local_78;
  lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar8 = 0;
  if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  bVar5 = (bool)FUN_10015a330(uVar8);
  CBaseNode::toString(SUB81(&local_88,0),bVar5);
  QString::toUtf8();
  iVar6 = _PrlDispCfg_FromString(lVar4,local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f4a7;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10053f4a7:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f4d7;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10053f4d7:
  if (local_78 != 0) {
    _PrlHandle_Free();
  }
  if (iVar6 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to update the server preferences object with new data");
  }
  else {
    local_90 = (Data *)puVar3;
    local_94 = 1;
    FUN_100129840(&local_90,&local_94);
    local_98 = 3;
    FUN_100129840(&local_90,&local_98);
    pvVar9 = operator_new(0x50);
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar8 = 0;
    if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    }
    FUN_10015aa50(&local_a0,uVar8);
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar8 = 0;
    if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    }
    FUN_10015aa80(&local_a8,uVar8);
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar8 = 0;
    if ((lVar12 != 0) && (uVar8 = 0, *(int *)(lVar12 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    }
    FUN_1001f41a0(pvVar9,&local_a0,&local_a8,&local_90,uVar8,0);
    if (local_a8 != 0) {
      _PrlHandle_Free();
    }
    if (local_a0 != 0) {
      _PrlHandle_Free();
    }
    CAbstractTask::execute();
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053f641;
      }
      QListData::dispose(local_90);
    }
  }
LAB_10053f641:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar6 = *(int *)(local_40 + 0xc);
    if (iVar6 != *(int *)(local_40 + 8)) {
      lVar12 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar6 * -8;
      pDVar10 = local_40 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

