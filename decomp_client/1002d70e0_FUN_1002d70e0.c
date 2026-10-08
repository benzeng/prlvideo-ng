
void FUN_1002d70e0(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  AnonymousUnion0 AVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  Data *pDVar11;
  uint in_stack_fffffffffffffeec;
  QString local_f0;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  undefined4 local_d0;
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
  
  bVar3 = (bool)CVmSharing::getHostSharing();
  CVmHostSharing::setEnabled(bVar3);
  cVar4 = FUN_100d80630(1);
  if (cVar4 == '\0') {
    bVar3 = (bool)CVmSharing::getGuestSharing();
    CVmGuestSharing::setEnabled(bVar3);
  }
  lVar6 = CVmSharing::getHostSharing();
  local_e8 = *(Data **)(lVar6 + 0xa8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 == 0) {
      QListData::detach((int)&local_e8);
      lVar7 = (long)*(int *)(local_e8 + 8);
      lVar6 = *(long *)(lVar6 + 0xa8);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_e8 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_e8 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_e8 + 0xc))
         ) {
        _memcpy(local_e8 + lVar7 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      local_40[1]._7_1_ = *(int *)local_e8 != 0;
      UNLOCK();
    }
  }
  local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
  local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
    do {
      local_d0 = 1;
      uVar1 = *(undefined8 *)local_e0;
      if (param_2 == '\0') {
LAB_1002d7540:
        CVmSharedFolder::setEnabled(SUB81(uVar1,0));
      }
      else {
        CVmSharedFolder::getPath();
        cVar4 = QFile::exists(&local_f0);
        if (cVar4 == '\0') {
          iVar5 = CMessageManager::instance();
          local_40[0].field1 = (Data *)PTR_shared_null_1021e1288;
          local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
          FUN_1000341d0(&local_48,&local_f0);
          local_50 = (Data *)PTR_shared_null_1021e15e8;
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
                    (iVar5,(QString *)0x3abc,(QStringList *)&local_40[0].field0,
                     (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
                     (QWidget *)((ulong)in_stack_fffffffffffffeec << 0x20),(CSlotInfo *)0x0);
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
          pDVar9 = local_50;
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_40[1]._7_1_ = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_40[1]._7_1_) goto LAB_1002d7408;
            }
            iVar5 = *(int *)(local_50 + 0xc);
            if (iVar5 != *(int *)(local_50 + 8)) {
              lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar5 * -8;
              pDVar11 = local_50 + (long)iVar5 * 8 + 8;
              do {
                pQVar10 = *(QArrayData **)pDVar11;
                if (*(int *)pQVar10 == 0) {
LAB_1002d73e0:
                  QArrayData::deallocate(pQVar10,2,8);
                }
                else if (*(int *)pQVar10 != -1) {
                  LOCK();
                  *(int *)pQVar10 = *(int *)pQVar10 + -1;
                  local_40[1]._7_1_ = *(int *)pQVar10 != 0;
                  UNLOCK();
                  if (!(bool)local_40[1]._7_1_) {
                    pQVar10 = *(QArrayData **)pDVar11;
                    goto LAB_1002d73e0;
                  }
                }
                pDVar11 = pDVar11 + -8;
                lVar6 = lVar6 + 8;
              } while (lVar6 != 0);
            }
            QListData::dispose(pDVar9);
          }
LAB_1002d7408:
          AVar2 = local_48;
          if (*(int *)local_48.field1 != -1) {
            if (*(int *)local_48.field1 != 0) {
              LOCK();
              *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
              local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
              UNLOCK();
              if ((bool)local_40[1]._7_1_) goto LAB_1002d7498;
            }
            iVar5 = *(int *)(local_48.field1 + 0xc);
            if (iVar5 != *(int *)(local_48.field1 + 8)) {
              lVar6 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar5 * -8;
              pDVar9 = (Data *)(local_48.field1 + (long)iVar5 * 8 + 8);
              do {
                pQVar10 = *(QArrayData **)pDVar9;
                if (*(int *)pQVar10 == 0) {
LAB_1002d7470:
                  QArrayData::deallocate(pQVar10,2,8);
                }
                else if (*(int *)pQVar10 != -1) {
                  LOCK();
                  *(int *)pQVar10 = *(int *)pQVar10 + -1;
                  local_40[1]._7_1_ = *(int *)pQVar10 != 0;
                  UNLOCK();
                  if (!(bool)local_40[1]._7_1_) {
                    pQVar10 = *(QArrayData **)pDVar9;
                    goto LAB_1002d7470;
                  }
                }
                pDVar9 = pDVar9 + -8;
                lVar6 = lVar6 + 8;
              } while (lVar6 != 0);
            }
            QListData::dispose((Data *)AVar2.field1);
          }
LAB_1002d7498:
          bVar3 = true;
          if (*(int *)local_40[0].field1 != -1) {
            if (*(int *)local_40[0].field1 != 0) {
              LOCK();
              *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
              local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
              UNLOCK();
              if ((bool)local_40[1]._7_1_) goto LAB_1002d74f0;
            }
            QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
          }
        }
        else {
          bVar3 = false;
        }
LAB_1002d74f0:
        if (*(int *)local_f0.field0_0x0 != -1) {
          if (*(int *)local_f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
            local_40[1]._7_1_ = *(int *)local_f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_40[1]._7_1_) goto LAB_1002d7526;
          }
          QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
        }
LAB_1002d7526:
        if (!bVar3) goto LAB_1002d7540;
        CVmSharedFolder::setEnabled(SUB81(uVar1,0));
      }
      local_e0 = local_e0 + 8;
    } while (local_e0 != local_d8);
  }
  local_d0 = 1;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return;
      }
      local_40[1]._7_1_ = 0;
    }
    QListData::dispose(local_e8);
  }
  return;
}

