
/* WARNING: Removing unreachable block (ram,0x00010014dd27) */
/* WARNING: Removing unreachable block (ram,0x00010014dd35) */
/* WARNING: Removing unreachable block (ram,0x00010014dd41) */

undefined1 FUN_10014d9e0(long param_1,long *param_2)

{
  QArrayData QVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  QArrayData *pQVar6;
  char cVar7;
  int iVar8;
  QArrayData *pQVar9;
  AnonymousUnion0 AVar10;
  bool bVar11;
  QArrayData *pQVar12;
  undefined4 in_stack_fffffffffffffe6c;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  int *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_e8 [24];
  QArrayData *local_d0;
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
  ExternalRefCountData *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  lVar2 = *param_2;
  iVar8 = QString::compare_helper
                    (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"AllFiles",
                     0xffffffff,1);
  if (iVar8 != 0) {
    lVar2 = *param_2;
    iVar8 = QString::compare_helper
                      (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"Home",0xffffffff,
                       1);
    if (iVar8 != 0) {
      lVar2 = *param_2;
      iVar8 = QString::compare_helper
                        (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),".",0xffffffff,1
                        );
      if (iVar8 != 0) {
        lVar2 = *param_2;
        iVar8 = QString::compare_helper
                          (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"..",
                           0xffffffff,1);
        if (iVar8 != 0) {
          if ((*(int *)(param_1 + 0x118) != 8) ||
             (cVar7 = QString::endsWith(param_2,0x2e,1), cVar7 == '\0')) {
            QByteArray::QByteArray((QByteArray *)&local_d0,"\\/:*?\"<>|",-1);
            pQVar6 = local_d0;
            if (1 < *(int *)local_d0 + 1U) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + 1;
              local_40[1]._7_1_ = *(int *)local_d0 != 0;
              UNLOCK();
            }
            bVar11 = true;
            if ((long)*(int *)(local_d0 + 4) != 0) {
              pQVar9 = local_d0 + (long)*(int *)(local_d0 + 4) + *(long *)(local_d0 + 0x10);
              pQVar12 = local_d0 + *(long *)(local_d0 + 0x10);
              bVar3 = true;
              do {
                QVar1 = *pQVar12;
                bVar11 = true;
                do {
                  bVar4 = bVar11;
                  if (!bVar4) {
                    bVar4 = false;
                    bVar11 = bVar3;
                    break;
                  }
                  iVar8 = QString::indexOf(param_2,(int)(char)QVar1,0,1);
                  bVar11 = false;
                } while (iVar8 == -1);
              } while ((!bVar4) && (pQVar12 = pQVar12 + 1, bVar3 = bVar11, pQVar12 != pQVar9));
            }
            if (*(int *)pQVar6 != -1) {
              if (*(int *)pQVar6 != 0) {
                LOCK();
                *(int *)pQVar6 = *(int *)pQVar6 + -1;
                local_40[1]._7_1_ = *(int *)pQVar6 != 0;
                UNLOCK();
                if ((bool)local_40[1]._7_1_) goto LAB_10014dbd1;
              }
              QArrayData::deallocate(pQVar6,1,8);
            }
LAB_10014dbd1:
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_40[1]._7_1_ = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_40[1]._7_1_) goto LAB_10014dc07;
              }
              QArrayData::deallocate(local_d0,1,8);
            }
LAB_10014dc07:
            if (bVar11) {
              return 1;
            }
          }
          iVar8 = CMessageManager::instance();
          puVar5 = PTR_shared_null_1021e15e8;
          local_e8._16_8_ = PTR_shared_null_1021e1288;
          local_e8._8_8_ = PTR_shared_null_1021e15e8;
          FUN_1000341d0(local_e8 + 8,param_2);
          local_e8._0_8_ = puVar5;
          local_128 = (int *)0x0;
          uStack_120 = 0;
          local_110 = 0;
          local_118 = 0;
          local_100 = 0x80000000;
          local_108.field7 = 0;
          local_f8 = 1;
          local_140 = 0x80000000;
          local_148.field7 = 0;
          local_138 = 1;
          CMessageManager::showMessageBox
                    (iVar8,(QString *)0x3ac4,(QStringList *)(local_e8 + 0x10),
                     (QStringList *)(local_e8 + 8),(CSlotInfo *)local_e8,SUB81(&local_128,0),
                     (QWidget *)CONCAT44(in_stack_fffffffffffffe6c,1),(CSlotInfo *)0x0);
          QVariant::~QVariant((QVariant *)&local_148);
          QVariant::~QVariant((QVariant *)&local_108);
          if (local_128 != (int *)0x0) {
            LOCK();
            *local_128 = *local_128 + -1;
            local_40[1]._7_1_ = *local_128 != 0;
            UNLOCK();
            if ((!(bool)local_40[1]._7_1_) && (local_128 != (int *)0x0)) {
              operator_delete(local_128);
            }
          }
          FUN_100039a80(local_e8);
          FUN_100039a80(local_e8 + 8);
          if (*(int *)local_e8._16_8_ == -1) {
            return 0;
          }
          AVar10 = (AnonymousUnion0)local_e8._16_8_;
          if (*(int *)local_e8._16_8_ != 0) {
            LOCK();
            *(int *)local_e8._16_8_ = *(int *)local_e8._16_8_ + -1;
            UNLOCK();
            if (*(int *)local_e8._16_8_ != 0) {
              return 0;
            }
            local_40[1]._7_1_ = 0;
          }
          goto LAB_10014df2f;
        }
      }
    }
  }
  iVar8 = CMessageManager::instance();
  puVar5 = PTR_shared_null_1021e15e8;
  local_40[0].field1 = (Data *)PTR_shared_null_1021e1288;
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_48,param_2);
  local_50 = (ExternalRefCountData *)puVar5;
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
            (iVar8,(QString *)0x3ac6,(QStringList *)&local_40[0].field0,
             (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
             (QWidget *)CONCAT44(in_stack_fffffffffffffe6c,1),(CSlotInfo *)0x0);
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
  FUN_100039a80(&local_50);
  FUN_100039a80(&local_48);
  if (*(int *)local_40[0].field1 == -1) {
    return 0;
  }
  AVar10 = local_40[0];
  if (*(int *)local_40[0].field1 != 0) {
    LOCK();
    *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
    UNLOCK();
    if (*(int *)local_40[0].field1 != 0) {
      return 0;
    }
    local_40[1]._7_1_ = 0;
  }
LAB_10014df2f:
  QArrayData::deallocate((QArrayData *)AVar10.field1,2,8);
  return 0;
}

