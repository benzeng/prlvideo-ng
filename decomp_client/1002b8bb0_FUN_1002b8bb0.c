
/* WARNING: Removing unreachable block (ram,0x0001002b9088) */
/* WARNING: Removing unreachable block (ram,0x0001002b9096) */
/* WARNING: Removing unreachable block (ram,0x0001002b90a2) */

void FUN_1002b8bb0(long *param_1,int param_2)

{
  undefined8 uVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  long lVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  uint in_stack_fffffffffffffd9c;
  Data_conflict local_228;
  undefined4 local_220;
  undefined1 local_218;
  Data_conflict local_208;
  undefined4 local_200;
  QArrayData *local_1f8;
  int *local_1f0 [4];
  QVariant local_1d0 [2];
  undefined1 local_1b8 [24];
  int *local_1a0;
  int *local_198;
  int *local_190;
  long local_188;
  int *local_180;
  int *local_178;
  int *local_170;
  undefined8 local_168;
  QString local_160;
  int *local_158;
  int *local_150;
  int *local_148;
  undefined8 local_140;
  QString local_138;
  QNetworkRequest local_130 [8];
  QUrl local_128 [8];
  QString local_120;
  undefined1 local_118 [8];
  QString local_110;
  QString local_108;
  QString local_100;
  long local_f8;
  QString local_e8 [2];
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  if (param_2 == -0x7ffffd8b) {
                    /* WARNING: Could not recover jumptable at 0x0001002b8bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  if (param_2 < 0) {
    iVar3 = CMessageManager::instance();
    lVar4 = 0;
    if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar4 = param_1[4];
    }
    FUN_100188480(local_38,lVar4);
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (Data *)PTR_shared_null_1021e15e8;
    local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_90 = 0x80000000;
    local_98.field7 = 0;
    FUN_100a1c600(local_80,param_1,&local_88,&local_98);
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x80015439,(QStringList *)&local_38[0].field0,
               (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(local_80,0),
               (QWidget *)((ulong)in_stack_fffffffffffffd9c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_38[1]._7_1_ = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    QVariant::~QVariant(local_60);
    if (local_80[0] != (int *)0x0) {
      LOCK();
      *local_80[0] = *local_80[0] + -1;
      local_38[1]._7_1_ = *local_80[0] != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_80[0] != (int *)0x0)) {
        operator_delete(local_80[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_98);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_38[1]._7_1_ = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_1002b9414;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002b9414:
    pDVar5 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_38[1]._7_1_ = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_1002b94a1;
      }
      iVar3 = *(int *)(local_48 + 0xc);
      if (iVar3 != *(int *)(local_48 + 8)) {
        lVar4 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = local_48 + (long)iVar3 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar7 == 0) {
LAB_1002b9480:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_38[1]._7_1_ = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar7 = *(QArrayData **)pDVar6;
              goto LAB_1002b9480;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar5);
    }
LAB_1002b94a1:
    AVar2 = local_40;
    if (*(int *)local_40.field1 != -1) {
      if (*(int *)local_40.field1 != 0) {
        LOCK();
        *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
        local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_1002b9531;
      }
      iVar3 = *(int *)(local_40.field1 + 0xc);
      if (iVar3 != *(int *)(local_40.field1 + 8)) {
        lVar4 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
        pDVar5 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar7 == 0) {
LAB_1002b9510:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_38[1]._7_1_ = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar7 = *(QArrayData **)pDVar5;
              goto LAB_1002b9510;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose((Data *)AVar2.field1);
    }
LAB_1002b9531:
    if (*(int *)local_38[0].field1 == -1) {
      return;
    }
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_38[0].field1 != 0) {
        return;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
    return;
  }
  QObject::sender();
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1438);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000001);
  }
  lVar4 = *(long *)(lVar4 + 0x28);
  FUN_1001eef00(local_118);
  QNetworkReply::request();
  QNetworkRequest::url();
  QUrl::toString(&local_120,local_128,0);
  QString::operator=(local_e8,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_38[1]._7_1_ = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b8cb9;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1002b8cb9:
  QUrl::~QUrl(local_128);
  QNetworkRequest::~QNetworkRequest(local_130);
  QString::operator=(&local_108,(QString *)(param_1 + 10));
  local_158 = *(int **)(lVar4 + 0x30);
  if (1 < *local_158 + 1U) {
    LOCK();
    *local_158 = *local_158 + 1;
    local_38[1]._7_1_ = *local_158 != 0;
    UNLOCK();
  }
  local_150 = *(int **)(lVar4 + 0x38);
  if (1 < *local_150 + 1U) {
    LOCK();
    *local_150 = *local_150 + 1;
    local_38[1]._7_1_ = *local_150 != 0;
    UNLOCK();
  }
  local_148 = *(int **)(lVar4 + 0x40);
  if (1 < *local_148 + 1U) {
    LOCK();
    *local_148 = *local_148 + 1;
    local_38[1]._7_1_ = *local_148 != 0;
    UNLOCK();
  }
  local_140 = *(undefined8 *)(lVar4 + 0x48);
  QString::simplified();
  QString::operator=(&local_110,&local_138);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_38[1]._7_1_ = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b8d9c;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_1002b8d9c:
  FUN_1001b8da0(&local_158);
  local_180 = *(int **)(lVar4 + 0x30);
  if (1 < *local_180 + 1U) {
    LOCK();
    *local_180 = *local_180 + 1;
    local_38[1]._7_1_ = *local_180 != 0;
    UNLOCK();
  }
  local_178 = *(int **)(lVar4 + 0x38);
  if (1 < *local_178 + 1U) {
    LOCK();
    *local_178 = *local_178 + 1;
    local_38[1]._7_1_ = *local_178 != 0;
    UNLOCK();
  }
  local_170 = *(int **)(lVar4 + 0x40);
  if (1 < *local_170 + 1U) {
    LOCK();
    *local_170 = *local_170 + 1;
    local_38[1]._7_1_ = *local_170 != 0;
    UNLOCK();
  }
  local_168 = *(undefined8 *)(lVar4 + 0x48);
  QString::simplified();
  QString::operator=(&local_100,&local_160);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_38[1]._7_1_ = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b8e63;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_1002b8e63:
  FUN_1001b8da0(&local_180);
  local_1a0 = *(int **)(lVar4 + 0x30);
  if (1 < *local_1a0 + 1U) {
    LOCK();
    *local_1a0 = *local_1a0 + 1;
    local_38[1]._7_1_ = *local_1a0 != 0;
    UNLOCK();
  }
  local_198 = *(int **)(lVar4 + 0x38);
  if (1 < *local_198 + 1U) {
    LOCK();
    *local_198 = *local_198 + 1;
    local_38[1]._7_1_ = *local_198 != 0;
    UNLOCK();
  }
  local_190 = *(int **)(lVar4 + 0x40);
  if (1 < *local_190 + 1U) {
    LOCK();
    *local_190 = *local_190 + 1;
    local_38[1]._7_1_ = *local_190 != 0;
    UNLOCK();
  }
  local_188 = *(long *)(lVar4 + 0x48);
  local_f8 = local_188;
  FUN_1001b8da0(&local_1a0);
  if (((*(int *)(local_110.field0_0x0 + 4) != 0) && (*(int *)(local_100.field0_0x0 + 4) != 0)) &&
     (local_f8 != 0)) {
    DLCItemInfo::save();
    param_1[0xd] = param_1[0xd] + local_f8;
    if (*(int *)(param_1[0xb] + 0xc) == *(int *)(param_1[0xb] + 8)) {
      FUN_1002b7560(param_1);
      FUN_1002b74a0(param_1,0);
    }
    else {
      CAbstractTask::prependSubTask((int)param_1);
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    goto LAB_1002b9581;
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to parse descriptor");
  iVar3 = CMessageManager::instance();
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(local_1b8 + 0x10,lVar4);
  local_1b8._8_8_ = PTR_shared_null_1021e15e8;
  local_1b8._0_8_ = PTR_shared_null_1021e15e8;
  local_1f8 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_200 = 0x80000000;
  local_208.field7 = 0;
  FUN_100a1c600(local_1f0,param_1,&local_1f8,&local_208);
  local_220 = 0x80000000;
  local_228.field7 = 0;
  local_218 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x80015439,(QStringList *)(local_1b8 + 0x10),
             (QStringList *)(local_1b8 + 8),(CSlotInfo *)local_1b8,SUB81(local_1f0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffd9c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_228);
  QVariant::~QVariant(local_1d0);
  if (local_1f0[0] != (int *)0x0) {
    LOCK();
    *local_1f0[0] = *local_1f0[0] + -1;
    local_38[1]._7_1_ = *local_1f0[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_1f0[0] != (int *)0x0)) {
      operator_delete(local_1f0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_208);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_38[1]._7_1_ = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b9120;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_1002b9120:
  uVar1 = local_1b8._0_8_;
  if (*(int *)local_1b8._0_8_ != -1) {
    if (*(int *)local_1b8._0_8_ != 0) {
      LOCK();
      *(int *)local_1b8._0_8_ = *(int *)local_1b8._0_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_1b8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b91b1;
    }
    iVar3 = *(int *)(local_1b8._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_1b8._0_8_ + 8)) {
      lVar4 = (long)*(int *)(local_1b8._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_1b8._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002b9190:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002b9190;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002b91b1:
  uVar1 = local_1b8._8_8_;
  if (*(int *)local_1b8._8_8_ != -1) {
    if (*(int *)local_1b8._8_8_ != 0) {
      LOCK();
      *(int *)local_1b8._8_8_ = *(int *)local_1b8._8_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_1b8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b9241;
    }
    iVar3 = *(int *)(local_1b8._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_1b8._8_8_ + 8)) {
      lVar4 = (long)*(int *)(local_1b8._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_1b8._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002b9220:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002b9220;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002b9241:
  if (*(int *)local_1b8._16_8_ != -1) {
    if (*(int *)local_1b8._16_8_ != 0) {
      LOCK();
      *(int *)local_1b8._16_8_ = *(int *)local_1b8._16_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_1b8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b9581;
    }
    QArrayData::deallocate((QArrayData *)local_1b8._16_8_,2,8);
  }
LAB_1002b9581:
  FUN_1001b8c60(local_118);
  return;
}

