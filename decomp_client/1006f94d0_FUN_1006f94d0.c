
void FUN_1006f94d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  uint uVar4;
  undefined8 uVar5;
  CMacUserShortcutsStorage *pCVar6;
  void *pvVar7;
  QArrayData *pQVar8;
  long lVar9;
  long lVar10;
  Data *pDVar11;
  QArrayData *local_e0;
  Data *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  int *local_b8 [4];
  QVariant local_98 [2];
  QArrayData *local_80;
  undefined4 local_74;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_1007059d0(param_1 + 0x18);
  FUN_100710030(param_1 + 0x30);
  FUN_1006fa4d0(param_1,1);
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  uVar5 = FUN_1006b9420();
  FUN_1006b95e0(&local_48,uVar5);
  local_68 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_68);
      lVar9 = (long)*(int *)(local_68 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_68 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_68 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_68 + 0xc))) {
        _memcpy(local_68 + lVar9 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_m_instance_1021e1450;
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      uVar5 = *(undefined8 *)local_60;
      pCVar6 = *(CMacUserShortcutsStorage **)puVar2;
      if (pCVar6 == (CMacUserShortcutsStorage *)0x0) {
        pCVar6 = operator_new(0x18);
        CMacUserShortcutsStorage::CMacUserShortcutsStorage(pCVar6);
        *(CMacUserShortcutsStorage **)puVar2 = pCVar6;
        DAT_102274b30 = 1;
      }
      uVar4 = FUN_1006947d0(uVar5);
      QAction::text();
      CMacUserShortcutsStorage::setActionText((int)pCVar6,(QString *)(ulong)uVar4);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f9641;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1006f9641:
      local_74 = FUN_1006947d0(uVar5);
      FUN_100071ff0(&local_40,&local_74);
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f969c;
    }
    QListData::dispose(local_68);
  }
LAB_1006f969c:
  if (DAT_1023109a0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1007251b0(pvVar7);
    DAT_102274b04 = 1;
    DAT_1023109a0 = pvVar7;
  }
  puVar2 = PTR_m_instance_1021e1450;
  pCVar6 = *(CMacUserShortcutsStorage **)PTR_m_instance_1021e1450;
  if (pCVar6 == (CMacUserShortcutsStorage *)0x0) {
    pCVar6 = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(pCVar6);
    *(CMacUserShortcutsStorage **)puVar2 = pCVar6;
    DAT_102274b30 = 1;
  }
  MacUtils::getBundleId();
  CMacUserShortcutsStorage::load((QString *)pCVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f973b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006f973b:
  local_c0 = (QArrayData *)QString::fromAscii_helper("onActionTextChanged",0x13);
  local_c8 = 0x80000000;
  local_d0.field7 = 0;
  FUN_100a1c6b0(local_b8,&local_c0,param_1,&local_d0);
  QVariant::~QVariant((QVariant *)&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f97cb;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006f97cb:
  uVar5 = FUN_1006915d0();
  local_d8 = (Data *)PTR_shared_null_1021e15e8;
  pQVar8 = (QArrayData *)QString::fromAscii_helper("text",4);
  local_e0 = pQVar8;
  FUN_1000341d0(&local_d8,&local_e0);
  FUN_100691840(uVar5,&local_40,&local_d8,local_b8);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f9854;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1006f9854:
  pDVar3 = local_d8;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f98f1;
    }
    iVar1 = *(int *)(local_d8 + 0xc);
    if (iVar1 != *(int *)(local_d8 + 8)) {
      lVar9 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar1 * -8;
      pDVar11 = local_d8 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar8 == 0) {
LAB_1006f98d0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar11;
            goto LAB_1006f98d0;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006f98f1:
  QVariant::~QVariant(local_98);
  if (local_b8[0] != (int *)0x0) {
    LOCK();
    *local_b8[0] = *local_b8[0] + -1;
    local_31 = *local_b8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_b8[0] != (int *)0x0)) {
      operator_delete(local_b8[0]);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f994e;
    }
    QListData::dispose(local_48);
  }
LAB_1006f994e:
  pDVar3 = local_40;
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
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar9 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar11 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

