
void FUN_100179ed0(long param_1,byte param_2)

{
  bool bVar1;
  undefined *puVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  uint in_stack_ffffffffffffff1c;
  QString local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  if (param_2 != 0) {
    CVmSharedFolder::getPath();
    cVar4 = QFile::exists(&local_d0);
    if (cVar4 == '\0') {
      iVar6 = CMessageManager::instance();
      puVar2 = PTR_shared_null_1021e15e8;
      local_40[0].field1 = (Data *)PTR_shared_null_1021e1288;
      local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
      FUN_1000341d0(&local_48,&local_d0);
      local_50 = (Data *)puVar2;
      local_88 = (int *)0x0;
      uStack_80 = 0;
      local_70 = 0;
      local_78 = 0;
      local_60 = 0x80000000;
      local_68.field7 = 0;
      local_58 = 1;
      local_c8 = (int *)0x0;
      uStack_c0 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_a0 = 0x80000000;
      local_a8.field7 = 0;
      local_98 = 1;
      CMessageManager::showMessageBox
                (iVar6,(QString *)0x3abc,(QStringList *)&local_40[0].field0,
                 (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
                 (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_a8);
      if (local_c8 != (int *)0x0) {
        LOCK();
        *local_c8 = *local_c8 + -1;
        local_40[1]._7_1_ = *local_c8 != 0;
        UNLOCK();
        if ((!(bool)local_40[1]._7_1_) && (local_c8 != (int *)0x0)) {
          operator_delete(local_c8);
        }
      }
      QVariant::~QVariant((QVariant *)&local_68);
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        local_40[1]._7_1_ = *local_88 != 0;
        UNLOCK();
        if ((!(bool)local_40[1]._7_1_) && (local_88 != (int *)0x0)) {
          operator_delete(local_88);
        }
      }
      pDVar8 = local_50;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_40[1]._7_1_ = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10017a0e1;
        }
        iVar6 = *(int *)(local_50 + 0xc);
        if (iVar6 != *(int *)(local_50 + 8)) {
          lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar6 * -8;
          pDVar7 = local_50 + (long)iVar6 * 8 + 8;
          do {
            pQVar9 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar9 == 0) {
LAB_10017a0c0:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_40[1]._7_1_ = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_40[1]._7_1_) {
                pQVar9 = *(QArrayData **)pDVar7;
                goto LAB_10017a0c0;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0);
        }
        QListData::dispose(pDVar8);
      }
LAB_10017a0e1:
      AVar3 = local_48;
      if (*(int *)local_48.field1 != -1) {
        if (*(int *)local_48.field1 != 0) {
          LOCK();
          *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
          local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10017a171;
        }
        iVar6 = *(int *)(local_48.field1 + 0xc);
        if (iVar6 != *(int *)(local_48.field1 + 8)) {
          lVar10 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar6 * -8;
          pDVar8 = (Data *)(local_48.field1 + (long)iVar6 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_10017a150:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_40[1]._7_1_ = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_40[1]._7_1_) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_10017a150;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0);
        }
        QListData::dispose((Data *)AVar3.field1);
      }
LAB_10017a171:
      bVar1 = true;
      if (*(int *)local_40[0].field1 != -1) {
        if (*(int *)local_40[0].field1 != 0) {
          LOCK();
          *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
          local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10017a1a3;
        }
        QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
      }
    }
    else {
      bVar1 = false;
    }
LAB_10017a1a3:
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        UNLOCK();
        local_88 = (int *)CONCAT71(local_88._1_7_,*(int *)local_d0.field0_0x0 != 0);
        if (*(int *)local_d0.field0_0x0 != 0) goto LAB_10017a1d9;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_10017a1d9:
    if (bVar1) {
      return;
    }
  }
  cVar4 = CVmHostSharing::isUserDefinedFoldersEnabled();
  if (cVar4 == '\0') {
    if (param_2 == 0) {
      return;
    }
    CVmSharedFolder::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x18),0));
  }
  else {
    bVar5 = CVmSharedFolder::isEnabled();
    if ((bVar5 ^ param_2) != 1) {
      return;
    }
    CVmSharedFolder::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x18),0));
    if (param_2 == 0) goto LAB_10017a238;
  }
  CVmHostSharing::setUserDefinedFoldersEnabled(SUB81(*(undefined8 *)(param_1 + 0x20),0));
LAB_10017a238:
  FUN_100801f10(param_1);
  return;
}

