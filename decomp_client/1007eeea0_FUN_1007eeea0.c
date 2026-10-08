
void FUN_1007eeea0(long param_1)

{
  int *piVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  QStringList *pQVar10;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  QArrayData *local_48;
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  lVar5 = FUN_1007ef6b0();
  if (lVar5 == 0) {
    return;
  }
  cVar3 = QAction::isEnabled();
  if (cVar3 != '\0') {
    QAction::activate(lVar5,0);
    return;
  }
  uVar6 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar6,*(long *)(param_1 + 0x10) + 0x18);
  if (lVar5 == 0) {
    return;
  }
  iVar4 = FUN_10018a9d0(lVar5);
  if (iVar4 == 0x30000004) {
    return;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10018d830(&local_48,lVar5);
  FUN_1000341d0(&local_40,&local_48);
  local_38.field1 = (Data *)local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      iVar4 = *(int *)(local_38.field1 + 8);
      if (iVar4 != *(int *)(local_38.field1 + 0xc)) {
        pDVar7 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
        pDVar8 = (Data *)(local_38.field1 + (long)iVar4 * 8 + 0x10);
        lVar5 = (long)*(int *)(local_38.field1 + 0xc) * 8 + (long)iVar4 * -8;
        do {
          piVar1 = *(int **)pDVar7;
          *(int **)pDVar8 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_29 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar8 = pDVar8 + 8;
          pDVar7 = pDVar7 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007eefef;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007eefef:
  pDVar7 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ef081;
    }
    iVar4 = *(int *)(local_40 + 0xc);
    if (iVar4 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = local_40 + (long)iVar4 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1007ef060:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1007ef060;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1007ef081:
  iVar4 = CMessageManager::instance();
  lVar5 = *(long *)(param_1 + 0x10);
  pQVar10 = (QStringList *)0x0;
  if ((*(long *)(lVar5 + 0x20) != 0) &&
     (pQVar10 = (QStringList *)0x0, *(int *)(*(long *)(lVar5 + 0x20) + 4) != 0)) {
    pQVar10 = *(QStringList **)(lVar5 + 0x28);
  }
  local_88 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onRunVmQuestionClosed(PRL_RESULT, Messaging::ButtonID)",0x37);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,lVar5,&local_88,&local_98);
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x36d0,pQVar10,(QStringList *)&local_38.field0,(CSlotInfo *)&local_38,
             SUB81(local_80,0));
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_29 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ef173;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007ef173:
  AVar2 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar4 = *(int *)(local_38.field1 + 0xc);
    if (iVar4 != *(int *)(local_38.field1 + 8)) {
      lVar5 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = (Data *)(local_38.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1007ef1e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1007ef1e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return;
}

