
/* WARNING: Removing unreachable block (ram,0x00010031f405) */
/* WARNING: Removing unreachable block (ram,0x00010031f413) */
/* WARNING: Removing unreachable block (ram,0x00010031f41f) */

void FUN_10031ead0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  undefined8 in_stack_fffffffffffffd38;
  uint uVar6;
  Data_conflict local_288;
  undefined4 local_280;
  undefined1 local_278;
  int *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_250;
  Data_conflict local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_230 [24];
  int *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  Data_conflict local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  int *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [24];
  int *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  Data_conflict local_168;
  undefined4 local_160;
  undefined1 local_158;
  int *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  Data_conflict local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110 [24];
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80 [24];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar6 = (uint)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  if (*(int *)(param_1 + 0x40) == param_3) {
    return;
  }
  *(int *)(param_1 + 0x40) = param_3;
  if (param_3 != 1) {
    FUN_10031a2e0(param_1);
    switch(param_3) {
    case 0:
      iVar1 = CMessageManager::instance();
      local_80._16_8_ = *(undefined8 *)(param_1 + 0x28);
      if (1 < *(int *)local_80._16_8_ + 1U) {
        LOCK();
        *(int *)local_80._16_8_ = *(int *)local_80._16_8_ + 1;
        local_29 = *(int *)local_80._16_8_ != 0;
        UNLOCK();
      }
      local_80._8_8_ = PTR_shared_null_1021e15e8;
      local_80._0_8_ = PTR_shared_null_1021e15e8;
      local_b8 = (int *)0x0;
      uStack_b0 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_90 = 0x80000000;
      local_98.field7 = 0;
      local_88 = 1;
      local_f8 = (int *)0x0;
      uStack_f0 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_d0 = 0x80000000;
      local_d8.field7 = 0;
      local_c8 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QString *)0x80000340,(QStringList *)(local_80 + 0x10),
                 (QStringList *)(local_80 + 8),(CSlotInfo *)local_80,SUB81(&local_b8,0),
                 (QWidget *)((ulong)uVar6 << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_d8);
      if (local_f8 != (int *)0x0) {
        LOCK();
        *local_f8 = *local_f8 + -1;
        local_29 = *local_f8 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_f8 != (int *)0x0)) {
          operator_delete(local_f8);
        }
      }
      QVariant::~QVariant((QVariant *)&local_98);
      if (local_b8 != (int *)0x0) {
        LOCK();
        *local_b8 = *local_b8 + -1;
        local_29 = *local_b8 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_b8 != (int *)0x0)) {
          operator_delete(local_b8);
        }
      }
      FUN_100039a80(local_80);
      FUN_100039a80(local_80 + 8);
      if (*(int *)local_80._16_8_ == -1) {
        return;
      }
      pQVar4 = (QArrayData *)local_80._16_8_;
      if (*(int *)local_80._16_8_ != 0) {
        LOCK();
        *(int *)local_80._16_8_ = *(int *)local_80._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_80._16_8_ != 0) {
          return;
        }
        local_29 = 0;
      }
      break;
    default:
      return;
    case 3:
      iVar1 = CMessageManager::instance();
      local_110._16_8_ = *(undefined8 *)(param_1 + 0x28);
      if (1 < *(int *)local_110._16_8_ + 1U) {
        LOCK();
        *(int *)local_110._16_8_ = *(int *)local_110._16_8_ + 1;
        local_29 = *(int *)local_110._16_8_ != 0;
        UNLOCK();
      }
      local_110._8_8_ = PTR_shared_null_1021e15e8;
      local_110._0_8_ = PTR_shared_null_1021e15e8;
      local_148 = (int *)0x0;
      uStack_140 = 0;
      local_130 = 0;
      local_138 = 0;
      local_120 = 0x80000000;
      local_128.field7 = 0;
      local_118 = 1;
      local_188 = (int *)0x0;
      uStack_180 = 0;
      local_170 = 0;
      local_178 = 0;
      local_160 = 0x80000000;
      local_168.field7 = 0;
      local_158 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QString *)0x80000302,(QStringList *)(local_110 + 0x10),
                 (QStringList *)(local_110 + 8),(CSlotInfo *)local_110,SUB81(&local_148,0),
                 (QWidget *)((ulong)uVar6 << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_168);
      if (local_188 != (int *)0x0) {
        LOCK();
        *local_188 = *local_188 + -1;
        local_29 = *local_188 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_188 != (int *)0x0)) {
          operator_delete(local_188);
        }
      }
      QVariant::~QVariant((QVariant *)&local_128);
      if (local_148 != (int *)0x0) {
        LOCK();
        *local_148 = *local_148 + -1;
        local_29 = *local_148 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_148 != (int *)0x0)) {
          operator_delete(local_148);
        }
      }
      FUN_100039a80(local_110);
      FUN_100039a80(local_110 + 8);
      if (*(int *)local_110._16_8_ == -1) {
        return;
      }
      pQVar4 = (QArrayData *)local_110._16_8_;
      if (*(int *)local_110._16_8_ != 0) {
        LOCK();
        *(int *)local_110._16_8_ = *(int *)local_110._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_110._16_8_ != 0) {
          return;
        }
        local_29 = 0;
      }
      break;
    case 4:
      iVar1 = CMessageManager::instance();
      local_1a0._16_8_ = *(undefined8 *)(param_1 + 0x28);
      if (1 < *(int *)local_1a0._16_8_ + 1U) {
        LOCK();
        *(int *)local_1a0._16_8_ = *(int *)local_1a0._16_8_ + 1;
        local_29 = *(int *)local_1a0._16_8_ != 0;
        UNLOCK();
      }
      local_1a0._8_8_ = PTR_shared_null_1021e15e8;
      local_1a0._0_8_ = PTR_shared_null_1021e15e8;
      local_1d8 = (int *)0x0;
      uStack_1d0 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_1b0 = 0x80000000;
      local_1b8.field7 = 0;
      local_1a8 = 1;
      local_218 = (int *)0x0;
      uStack_210 = 0;
      local_200 = 0;
      local_208 = 0;
      local_1f0 = 0x80000000;
      local_1f8.field7 = 0;
      local_1e8 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QString *)0x80000303,(QStringList *)(local_1a0 + 0x10),
                 (QStringList *)(local_1a0 + 8),(CSlotInfo *)local_1a0,SUB81(&local_1d8,0),
                 (QWidget *)((ulong)uVar6 << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_1f8);
      if (local_218 != (int *)0x0) {
        LOCK();
        *local_218 = *local_218 + -1;
        local_29 = *local_218 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_218 != (int *)0x0)) {
          operator_delete(local_218);
        }
      }
      QVariant::~QVariant((QVariant *)&local_1b8);
      if (local_1d8 != (int *)0x0) {
        LOCK();
        *local_1d8 = *local_1d8 + -1;
        local_29 = *local_1d8 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_1d8 != (int *)0x0)) {
          operator_delete(local_1d8);
        }
      }
      FUN_100039a80(local_1a0);
      FUN_100039a80(local_1a0 + 8);
      if (*(int *)local_1a0._16_8_ == -1) {
        return;
      }
      pQVar4 = (QArrayData *)local_1a0._16_8_;
      if (*(int *)local_1a0._16_8_ != 0) {
        LOCK();
        *(int *)local_1a0._16_8_ = *(int *)local_1a0._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_1a0._16_8_ != 0) {
          return;
        }
        local_29 = 0;
      }
      break;
    case 5:
      iVar1 = CMessageManager::instance();
      local_230._16_8_ = *(undefined8 *)(param_1 + 0x28);
      if (1 < *(int *)local_230._16_8_ + 1U) {
        LOCK();
        *(int *)local_230._16_8_ = *(int *)local_230._16_8_ + 1;
        local_29 = *(int *)local_230._16_8_ != 0;
        UNLOCK();
      }
      local_230._8_8_ = PTR_shared_null_1021e15e8;
      local_230._0_8_ = PTR_shared_null_1021e15e8;
      local_268 = (int *)0x0;
      uStack_260 = 0;
      local_250 = 0;
      local_258 = 0;
      local_240 = 0x80000000;
      local_248.field7 = 0;
      local_238 = 1;
      local_280 = 0x80000000;
      local_288.field7 = 0;
      local_278 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QString *)0x80000304,(QStringList *)(local_230 + 0x10),
                 (QStringList *)(local_230 + 8),(CSlotInfo *)local_230,SUB81(&local_268,0),
                 (QWidget *)((ulong)uVar6 << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_288);
      QVariant::~QVariant((QVariant *)&local_248);
      if (local_268 != (int *)0x0) {
        LOCK();
        *local_268 = *local_268 + -1;
        local_29 = *local_268 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_268 != (int *)0x0)) {
          operator_delete(local_268);
        }
      }
      FUN_100039a80(local_230);
      FUN_100039a80(local_230 + 8);
      if (*(int *)local_230._16_8_ == -1) {
        return;
      }
      pQVar4 = (QArrayData *)local_230._16_8_;
      if (*(int *)local_230._16_8_ != 0) {
        LOCK();
        *(int *)local_230._16_8_ = *(int *)local_230._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_230._16_8_ != 0) {
          return;
        }
        local_29 = 0;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
    return;
  }
  FUN_10031a180();
  FUN_100df99c0("","prl_client_app",0,"IO STARTED");
  uVar2 = FUN_100152280();
  local_38 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  lVar3 = FUN_1001547d0(uVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031eb84;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10031eb84:
  if (lVar3 == 0) goto LAB_10031ef46;
  FUN_10015a060(&local_48,lVar3);
  QString::toLocal8Bit();
  pQVar4 = local_40 + *(long *)(local_40 + 0x10);
  local_58 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  pQVar5 = local_50 + *(long *)(local_50 + 0x10);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_68 = (QArrayData *)QString::fromAscii_helper("N/A",3);
  }
  else {
    FUN_10018d830(&local_68);
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"%s: started IO flow for VM %s [%s]",pQVar4,pQVar5,
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031ee4a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10031ee4a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031ee7a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10031ee7a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031eeaa;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10031eeaa:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031eeda;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10031eeda:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031ef0a;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10031ef0a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031ef46;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10031ef46:
  FUN_10031e150(param_1);
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     ((*(long *)(param_1 + 0x18) != 0 && (*(char *)(param_1 + 0x50) != '\0')))) {
    FUN_10018edd0();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}

