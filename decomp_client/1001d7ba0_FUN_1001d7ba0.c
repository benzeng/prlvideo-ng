
void FUN_1001d7ba0(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  CAppUpdateLogic *this;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint in_stack_fffffffffffffc4c;
  undefined1 local_398 [68];
  uint local_354;
  int *local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined4 local_330;
  Data_conflict local_328;
  undefined4 local_320;
  undefined1 local_318;
  undefined1 local_310 [24];
  QVariant local_2f8;
  QArrayData *local_2e8;
  int *local_2e0 [4];
  QVariant local_2c0 [2];
  int *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  Data_conflict local_288;
  undefined4 local_280;
  undefined1 local_278;
  undefined1 local_270 [24];
  QVariant local_258;
  QArrayData *local_248;
  int *local_240 [4];
  QVariant local_220 [2];
  int *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  Data_conflict local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0 [24];
  QVariant local_1b8;
  QArrayData *local_1a8;
  int *local_1a0 [4];
  QVariant local_180 [2];
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_130 [24];
  QVariant local_118;
  QArrayData *local_108;
  int *local_100 [4];
  QVariant local_e0 [2];
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_88 [24];
  QVariant local_70;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  puVar1 = PTR_m_instance_1021e1340;
  if (-1 < param_2) {
    if (*(long *)PTR_m_instance_1021e1340 == 0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar1 = this;
      DAT_102274b28 = 1;
    }
    cVar2 = CAppUpdateLogic::isOnAppStart();
    if (cVar2 != '\0') {
      return;
    }
    FUN_1001cda40(local_398,DAT_102310918);
    FUN_1001091d0(local_398);
    if ((local_354 & 8) != 0) {
      return;
    }
    pvVar4 = operator_new(0x20);
    FUN_10028e630(pvVar4);
    CAbstractTask::execute();
    return;
  }
  if (param_2 < -0x7ffeacae) {
    if (((param_2 + 0x7ffef000U < 2) || (param_2 == -0x7fffffed)) || (param_2 == -0x7ffffd8b))
    goto LAB_1001d850d;
  }
  else if (param_2 < -0x7ffeabcf) {
    uVar5 = (ulong)(param_2 + 0x7ffeacaeU);
    if (param_2 + 0x7ffeacaeU < 0x33) {
      if ((0xc0e00000UL >> (uVar5 & 0x3f) & 1) == 0) {
        if ((0x4000000000003U >> (uVar5 & 0x3f) & 1) != 0) goto LAB_1001d850d;
        if ((0xe000000000U >> (uVar5 & 0x3f) & 1) == 0) goto LAB_1001d8531;
        local_108 = (QArrayData *)
                    QString::fromAscii_helper
                              ("1onReportProblemOnStartAppAnswered(PRL_RESULT,Messaging::ButtonID)",
                               0x42);
        local_118.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
        local_118.field0_0x0.field0_0x0.field7 = 0;
        FUN_100a1c600(local_100,param_1,&local_108,&local_118);
        QVariant::~QVariant(&local_118);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_19 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1001d7d5d;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1001d7d5d:
        iVar3 = CMessageManager::instance();
        local_130._16_8_ = PTR_shared_null_1021e1288;
        local_130._8_8_ = PTR_shared_null_1021e15e8;
        local_130._0_8_ = PTR_shared_null_1021e15e8;
        local_168 = (int *)0x0;
        uStack_160 = 0;
        local_150 = 0;
        local_158 = 0;
        local_140 = 0x80000000;
        local_148.field7 = 0;
        local_138 = 1;
        CMessageManager::showMessageBox
                  (iVar3,(QString *)0x80015381,(QStringList *)(local_130 + 0x10),
                   (QStringList *)(local_130 + 8),(CSlotInfo *)local_130,false,
                   (QWidget *)((ulong)in_stack_fffffffffffffc4c << 0x20),(CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_148);
        if (local_168 != (int *)0x0) {
          LOCK();
          *local_168 = *local_168 + -1;
          local_19 = *local_168 != 0;
          UNLOCK();
          if ((!(bool)local_19) && (local_168 != (int *)0x0)) {
            operator_delete(local_168);
          }
        }
        FUN_100039a80(local_130);
        FUN_100039a80(local_130 + 8);
        if (*(int *)local_130._16_8_ != -1) {
          if (*(int *)local_130._16_8_ != 0) {
            LOCK();
            *(int *)local_130._16_8_ = *(int *)local_130._16_8_ + -1;
            local_19 = *(int *)local_130._16_8_ != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1001d7e8d;
          }
          QArrayData::deallocate((QArrayData *)local_130._16_8_,2,8);
        }
LAB_1001d7e8d:
        QVariant::~QVariant(local_e0);
        if (local_100[0] == (int *)0x0) {
          return;
        }
        LOCK();
        *local_100[0] = *local_100[0] + -1;
        local_19 = *local_100[0] != 0;
        UNLOCK();
        if ((bool)local_19) {
          return;
        }
        if (local_100[0] == (int *)0x0) {
          return;
        }
        operator_delete(local_100[0]);
        return;
      }
      local_60 = (QArrayData *)
                 QString::fromAscii_helper
                           ("1onReportProblemOnStartAppAnswered(PRL_RESULT,Messaging::ButtonID)",
                            0x42);
      local_70.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
      local_70.field0_0x0.field0_0x0.field7 = 0;
      FUN_100a1c600(local_58,param_1,&local_60,&local_70);
      QVariant::~QVariant(&local_70);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_19 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001d83b7;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1001d83b7:
      iVar3 = CMessageManager::instance();
      local_88._16_8_ = PTR_shared_null_1021e1288;
      local_88._8_8_ = PTR_shared_null_1021e15e8;
      local_88._0_8_ = PTR_shared_null_1021e15e8;
      local_c8 = (int *)0x0;
      uStack_c0 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_a0 = 0x80000000;
      local_a8.field7 = 0;
      local_98 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QString *)0x80015380,(QStringList *)(local_88 + 0x10),
                 (QStringList *)(local_88 + 8),(CSlotInfo *)local_88,SUB81(local_58,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffc4c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_a8);
      if (local_c8 != (int *)0x0) {
        LOCK();
        *local_c8 = *local_c8 + -1;
        local_19 = *local_c8 != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_c8 != (int *)0x0)) {
          operator_delete(local_c8);
        }
      }
      FUN_100039a80(local_88);
      FUN_100039a80(local_88 + 8);
      if (*(int *)local_88._16_8_ != -1) {
        if (*(int *)local_88._16_8_ != 0) {
          LOCK();
          *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + -1;
          local_19 = *(int *)local_88._16_8_ != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001d84c6;
        }
        QArrayData::deallocate((QArrayData *)local_88._16_8_,2,8);
      }
LAB_1001d84c6:
      QVariant::~QVariant(local_38);
      if (local_58[0] == (int *)0x0) {
        return;
      }
      LOCK();
      *local_58[0] = *local_58[0] + -1;
      local_19 = *local_58[0] != 0;
      UNLOCK();
      if ((bool)local_19) {
        return;
      }
      if (local_58[0] == (int *)0x0) {
        return;
      }
      operator_delete(local_58[0]);
      return;
    }
  }
  else if (param_2 < -0x7ffeaafa) {
    if (param_2 < -0x7ffeab9e) {
      if (param_2 == -0x7ffeabcf) {
        local_1a8 = (QArrayData *)
                    QString::fromAscii_helper
                              ("1onReportProblemOnStartAppAnswered(PRL_RESULT,Messaging::ButtonID)",
                               0x42);
        local_1b8.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
        local_1b8.field0_0x0.field0_0x0.field7 = 0;
        FUN_100a1c600(local_1a0,param_1,&local_1a8,&local_1b8);
        QVariant::~QVariant(&local_1b8);
        if (*(int *)local_1a8 != -1) {
          if (*(int *)local_1a8 != 0) {
            LOCK();
            *(int *)local_1a8 = *(int *)local_1a8 + -1;
            local_19 = *(int *)local_1a8 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1001d7f85;
          }
          QArrayData::deallocate(local_1a8,2,8);
        }
LAB_1001d7f85:
        iVar3 = CMessageManager::instance();
        local_1d0._16_8_ = PTR_shared_null_1021e1288;
        local_1d0._8_8_ = PTR_shared_null_1021e15e8;
        local_1d0._0_8_ = PTR_shared_null_1021e15e8;
        local_208 = (int *)0x0;
        uStack_200 = 0;
        local_1f0 = 0;
        local_1f8 = 0;
        local_1e0 = 0x80000000;
        local_1e8.field7 = 0;
        local_1d8 = 1;
        CMessageManager::showMessageBox
                  (iVar3,(QString *)0x80015431,(QStringList *)(local_1d0 + 0x10),
                   (QStringList *)(local_1d0 + 8),(CSlotInfo *)local_1d0,SUB81(local_1a0,0),
                   (QWidget *)((ulong)in_stack_fffffffffffffc4c << 0x20),(CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_1e8);
        if (local_208 != (int *)0x0) {
          LOCK();
          *local_208 = *local_208 + -1;
          local_19 = *local_208 != 0;
          UNLOCK();
          if ((!(bool)local_19) && (local_208 != (int *)0x0)) {
            operator_delete(local_208);
          }
        }
        FUN_100039a80(local_1d0);
        FUN_100039a80(local_1d0 + 8);
        if (*(int *)local_1d0._16_8_ != -1) {
          if (*(int *)local_1d0._16_8_ != 0) {
            LOCK();
            *(int *)local_1d0._16_8_ = *(int *)local_1d0._16_8_ + -1;
            local_19 = *(int *)local_1d0._16_8_ != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1001d80b5;
          }
          QArrayData::deallocate((QArrayData *)local_1d0._16_8_,2,8);
        }
LAB_1001d80b5:
        QVariant::~QVariant(local_180);
        if (local_1a0[0] == (int *)0x0) {
          return;
        }
        LOCK();
        *local_1a0[0] = *local_1a0[0] + -1;
        local_19 = *local_1a0[0] != 0;
        UNLOCK();
        if ((bool)local_19) {
          return;
        }
        if (local_1a0[0] == (int *)0x0) {
          return;
        }
        operator_delete(local_1a0[0]);
        return;
      }
      if (param_2 == -0x7ffeabcd) goto LAB_1001d850d;
    }
    else if ((param_2 + 0x7ffeab9eU < 0x26) &&
            ((0x2000300001U >> ((ulong)(param_2 + 0x7ffeab9eU) & 0x3f) & 1) != 0)) {
LAB_1001d850d:
      uVar6 = FUN_1001d50a0();
      FUN_1001d51e0(uVar6,param_2,1,0xffff);
      return;
    }
  }
  else {
    if (param_2 == -0x7ffeaade) {
      local_248 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1onKextLoadingIsBlockedBySystemSecurityPolicyClosed(PRL_RESULT,Messaging::ButtonID)"
                             ,0x53);
      local_258.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
      local_258.field0_0x0.field0_0x0.field7 = 0;
      FUN_100a1c600(local_240,param_1,&local_248,&local_258);
      QVariant::~QVariant(&local_258);
      if (*(int *)local_248 != -1) {
        if (*(int *)local_248 != 0) {
          LOCK();
          *(int *)local_248 = *(int *)local_248 + -1;
          local_19 = *(int *)local_248 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001d8195;
        }
        QArrayData::deallocate(local_248,2,8);
      }
LAB_1001d8195:
      iVar3 = CMessageManager::instance();
      local_270._16_8_ = PTR_shared_null_1021e1288;
      local_270._8_8_ = PTR_shared_null_1021e15e8;
      local_270._0_8_ = PTR_shared_null_1021e15e8;
      local_2a8 = (int *)0x0;
      uStack_2a0 = 0;
      local_290 = 0;
      local_298 = 0;
      local_280 = 0x80000000;
      local_288.field7 = 0;
      local_278 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QString *)0x80015522,(QStringList *)(local_270 + 0x10),
                 (QStringList *)(local_270 + 8),(CSlotInfo *)local_270,SUB81(local_240,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffc4c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_288);
      if (local_2a8 != (int *)0x0) {
        LOCK();
        *local_2a8 = *local_2a8 + -1;
        local_19 = *local_2a8 != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_2a8 != (int *)0x0)) {
          operator_delete(local_2a8);
        }
      }
      FUN_100039a80(local_270);
      FUN_100039a80(local_270 + 8);
      if (*(int *)local_270._16_8_ != -1) {
        if (*(int *)local_270._16_8_ != 0) {
          LOCK();
          *(int *)local_270._16_8_ = *(int *)local_270._16_8_ + -1;
          local_19 = *(int *)local_270._16_8_ != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001d82c5;
        }
        QArrayData::deallocate((QArrayData *)local_270._16_8_,2,8);
      }
LAB_1001d82c5:
      QVariant::~QVariant(local_220);
      if (local_240[0] == (int *)0x0) {
        return;
      }
      LOCK();
      *local_240[0] = *local_240[0] + -1;
      local_19 = *local_240[0] != 0;
      UNLOCK();
      if ((bool)local_19) {
        return;
      }
      if (local_240[0] == (int *)0x0) {
        return;
      }
      operator_delete(local_240[0]);
      return;
    }
    if (param_2 == -0x7ffeaafa) goto LAB_1001d850d;
  }
LAB_1001d8531:
  local_2e8 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onReportProblemOnStartAppAnswered(PRL_RESULT,Messaging::ButtonID)",0x42);
  local_2f8.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_2f8.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_2e0,param_1,&local_2e8,&local_2f8);
  QVariant::~QVariant(&local_2f8);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_19 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001d85bd;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_1001d85bd:
  iVar3 = CMessageManager::instance();
  local_310._16_8_ = PTR_shared_null_1021e1288;
  local_310._8_8_ = PTR_shared_null_1021e15e8;
  local_310._0_8_ = PTR_shared_null_1021e15e8;
  local_348 = (int *)0x0;
  uStack_340 = 0;
  local_330 = 0;
  local_338 = 0;
  local_320 = 0x80000000;
  local_328.field7 = 0;
  local_318 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x80000249,(QStringList *)(local_310 + 0x10),
             (QStringList *)(local_310 + 8),(CSlotInfo *)local_310,SUB81(local_2e0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffc4c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_328);
  if (local_348 != (int *)0x0) {
    LOCK();
    *local_348 = *local_348 + -1;
    local_19 = *local_348 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_348 != (int *)0x0)) {
      operator_delete(local_348);
    }
  }
  FUN_100039a80(local_310);
  FUN_100039a80(local_310 + 8);
  if (*(int *)local_310._16_8_ != -1) {
    if (*(int *)local_310._16_8_ != 0) {
      LOCK();
      *(int *)local_310._16_8_ = *(int *)local_310._16_8_ + -1;
      local_19 = *(int *)local_310._16_8_ != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001d86ed;
    }
    QArrayData::deallocate((QArrayData *)local_310._16_8_,2,8);
  }
LAB_1001d86ed:
  QVariant::~QVariant(local_2c0);
  if (local_2e0[0] != (int *)0x0) {
    LOCK();
    *local_2e0[0] = *local_2e0[0] + -1;
    local_19 = *local_2e0[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_2e0[0] != (int *)0x0)) {
      operator_delete(local_2e0[0]);
    }
  }
  return;
}

