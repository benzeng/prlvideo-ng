
undefined8 FUN_10029a330(long param_1)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  QStringList *pQVar4;
  Data *pDVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  Data *local_40;
  AnonymousUnion0 local_38;
  char local_2a;
  undefined1 local_29;
  
  local_2a = '\0';
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar7 = FUN_1001766b0(uVar7);
  cVar2 = FUN_100615ca0(uVar7,0x16,&local_2a);
  if (local_2a == '\0') {
    return 0;
  }
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar3 = CMessageManager::instance();
  pQVar4 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (pQVar4 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    pQVar4 = *(QStringList **)(param_1 + 0x48);
  }
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3b23,pQVar4,(QStringList *)&local_38.field0,(CSlotInfo *)&local_40,
             SUB81(&local_78,0));
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_29 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  pDVar6 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029a4c1;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar9 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_10029a4a0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_10029a4a0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10029a4c1:
  AVar1 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return 0x80000009;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_38.field1 + 0xc);
    if (iVar3 != *(int *)(local_38.field1 + 8)) {
      lVar9 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_38.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_10029a530:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_10029a530;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return 0x80000009;
}

