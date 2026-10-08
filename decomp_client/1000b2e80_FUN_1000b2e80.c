
/* WARNING: Type propagation algorithm not settling */

void FUN_1000b2e80(long param_1,ulong param_2,int param_3,QStringList *param_4,long *param_5)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  AnonymousUnion0 AVar10;
  char *pcVar11;
  ulong in_stack_fffffffffffffd78;
  QArrayData *local_260;
  int local_258;
  int iStack_254;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  QArrayData *local_1d8;
  AnonymousUnion0 local_1d0;
  QArrayData *local_1c8;
  AnonymousUnion0 local_1c0;
  int *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  Data_conflict local_198;
  undefined4 local_190;
  undefined1 local_188;
  int *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  CSlotInfo local_138;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0 [32];
  int *local_90;
  long local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_54;
  QArrayData *local_50;
  int local_44;
  ulong local_40;
  undefined1 local_31;
  
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_44 = param_3;
  local_40 = param_2;
  FUN_1000b0fc0(param_1,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b2ee8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000b2ee8:
  FUN_1000a9fc0(param_1,param_4,&local_40);
  switch(local_44) {
  case 0x65:
    uVar9 = FUN_100152280();
    lVar7 = FUN_1001554a0(uVar9);
    if ((lVar7 == 0) || (iVar5 = FUN_10015a6e0(lVar7), iVar5 != 0)) {
      local_54 = -1;
    }
    else {
      uVar9 = FUN_100152280();
      lVar7 = FUN_1001548f0(uVar9,param_4);
      if (lVar7 == 0) {
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                      local_60 + *(long *)(local_60 + 0x10));
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000b3a3b;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_1000b3a3b:
        local_54 = -1;
      }
      else {
        if (1 < DAT_10230ffd0) {
          FUN_10018d830(&local_70,lVar7);
          QString::toUtf8();
          pQVar2 = local_68;
          lVar1 = *(long *)(local_68 + 0x10);
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",2,
                        "Found registered Vm with name=\"%s\" for vmUuid=\"%s\" (vmWrap=%p)",
                        pQVar2 + lVar1,local_78 + *(long *)(local_78 + 0x10),lVar7);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b396d;
            }
            QArrayData::deallocate(local_78,1,8);
          }
LAB_1000b396d:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b399d;
            }
            QArrayData::deallocate(local_68,1,8);
          }
LAB_1000b399d:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b39cd;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
LAB_1000b39cd:
        local_54 = 0;
      }
    }
    break;
  case 0x66:
    local_54 = 2;
    lVar7 = FUN_1000a9690(param_4);
    if ((lVar7 != 0) && (cVar3 = FUN_1000b7b40(lVar7), cVar3 != '\0')) {
      uVar9 = FUN_100152280();
      lVar7 = FUN_1001548f0(uVar9,param_4);
      if (lVar7 != 0) {
        iVar5 = FUN_10018a9d0(lVar7);
        if ((iVar5 + 0xcffffffeU < 0xf) && ((0x4a07U >> (iVar5 + 0xcffffffeU & 0x1f) & 1) != 0)) {
          local_54 = 1;
        }
      }
    }
    break;
  case 0x67:
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",2,"Helper requests to start vmUuid=\"%s\" silently",
                    local_80 + *(long *)(local_80 + 0x10));
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b3068;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
LAB_1000b3068:
    uVar9 = FUN_100370280();
    FUN_100370e30(&local_90,uVar9,param_4,DAT_100e152b8);
    if (((local_90 == (int *)0x0) || (local_90[1] == 0)) || (local_88 == 0)) {
      cVar3 = FUN_1000a6280(param_4);
      if (local_90 != (int *)0x0) goto LAB_1000b36ae;
    }
    else {
      cVar3 = '\0';
LAB_1000b36ae:
      LOCK();
      *local_90 = *local_90 + -1;
      local_31 = *local_90 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_90 != (int *)0x0)) {
        operator_delete(local_90);
      }
    }
    cVar4 = FUN_1000a8370(param_1,param_4,cVar3);
    if (cVar4 == '\0') {
      QString::toUtf8();
      pcVar11 = "false";
      if (cVar3 != '\0') {
        pcVar11 = "true";
      }
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to vmStartByUuid(\"%s\", %s)",
                    (QArrayData *)(local_b0._24_8_ + *(long *)(local_b0._24_8_ + 0x10)),pcVar11);
      if (*(int *)local_b0._24_8_ != -1) {
        if (*(int *)local_b0._24_8_ != 0) {
          LOCK();
          *(int *)local_b0._24_8_ = *(int *)local_b0._24_8_ + -1;
          local_31 = *(int *)local_b0._24_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b3772;
        }
        QArrayData::deallocate((QArrayData *)local_b0._24_8_,1,8);
      }
LAB_1000b3772:
      FUN_1000a6b90(param_1,param_4);
      local_54 = -1;
    }
    else {
      local_54 = 0;
    }
    break;
  default:
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("SGAC","prl_client_app",1,"Unknown command %d occuried from psn={%d, %d}",local_44
                  ,local_40,local_40 >> 0x20);
    return;
  case 0x69:
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x91:
    lVar7 = FUN_1000a9690(param_4);
    if (lVar7 == 0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to get client for vmUuid=\"%s\"",
                    (QArrayData *)(local_b0._16_8_ + *(long *)(local_b0._16_8_ + 0x10)));
      if (*(int *)local_b0._16_8_ != -1) {
        if (*(int *)local_b0._16_8_ != 0) {
          LOCK();
          *(int *)local_b0._16_8_ = *(int *)local_b0._16_8_ + -1;
          local_31 = *(int *)local_b0._16_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b3162;
        }
        QArrayData::deallocate((QArrayData *)local_b0._16_8_,1,8);
      }
LAB_1000b3162:
      local_54 = -1;
    }
    else {
      cVar3 = FUN_1000b7b70(lVar7,&local_40,&local_44,param_5,&local_54);
      if (cVar3 == '\0') {
        return;
      }
    }
    break;
  case 0x75:
    iVar5 = CMessageManager::instance();
    local_b0._8_8_ = PTR_shared_null_1021e15e8;
    local_b0._0_8_ = PTR_shared_null_1021e15e8;
    local_e8 = (int *)0x0;
    uStack_e0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    local_b8 = 1;
    local_138.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
    local_138._24_8_ = 0;
    local_138.field3_0x28 = 0;
    local_138.field2_0x1c.field0_0x0._4_8_ = 0;
    local_100 = 0x80000000;
    local_108.field7 = 0;
    local_f8 = 1;
    CMessageManager::showMessageBox
              (iVar5,(QString *)0x3b11,param_4,(QStringList *)(local_b0 + 8),(CSlotInfo *)local_b0,
               SUB81(&local_e8,0),(QWidget *)(in_stack_fffffffffffffd78 & 0xffffffff00000000),
               (CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_108);
    if (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_138.field1_0x10.field0_0x0 = *(int *)local_138.field1_0x10.field0_0x0 + -1;
      local_31 = *(int *)local_138.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
        operator_delete(local_138.field1_0x10.field0_0x0);
      }
    }
    QVariant::~QVariant((QVariant *)&local_c8);
    if (local_e8 != (int *)0x0) {
      LOCK();
      *local_e8 = *local_e8 + -1;
      local_31 = *local_e8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_e8 != (int *)0x0)) {
        operator_delete(local_e8);
      }
    }
    FUN_100039a80(local_b0);
    FUN_100039a80(local_b0 + 8);
    return;
  case 0x76:
    iVar5 = CMessageManager::instance();
    local_138.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
    local_138.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_178 = (int *)0x0;
    uStack_170 = 0;
    local_160 = 0;
    local_168 = 0;
    local_150 = 0x80000000;
    local_158.field7 = 0;
    local_148 = 1;
    local_1b8 = (int *)0x0;
    uStack_1b0 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_190 = 0x80000000;
    local_198.field7 = 0;
    local_188 = 1;
    CMessageManager::showMessageBox
              (iVar5,(QString *)0x3b13,param_4,
               (QStringList *)&local_138.field0_0x0.field0_0x0.field1_0x8,&local_138,
               SUB81(&local_178,0),(QWidget *)(in_stack_fffffffffffffd78 & 0xffffffff00000000),
               (CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_198);
    if (local_1b8 != (int *)0x0) {
      LOCK();
      *local_1b8 = *local_1b8 + -1;
      local_31 = *local_1b8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_1b8 != (int *)0x0)) {
        operator_delete(local_1b8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_158);
    if (local_178 != (int *)0x0) {
      LOCK();
      *local_178 = *local_178 + -1;
      local_31 = *local_178 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_178 != (int *)0x0)) {
        operator_delete(local_178);
      }
    }
    FUN_100039a80(&local_138);
    FUN_100039a80(&local_138.field0_0x0.field0_0x0.field1_0x8);
    return;
  case 0x84:
    local_1c0.field1 = (param_4->field0_0x0).field1;
    if (1 < *(int *)local_1c0.field1 + 1U) {
      LOCK();
      *(int *)local_1c0.field1 = *(int *)local_1c0.field1 + 1;
      local_31 = *(int *)local_1c0.field1 != 0;
      UNLOCK();
    }
    local_1c8 = (QArrayData *)*param_5;
    if (1 < *(int *)local_1c8 + 1U) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + 1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
    }
    FUN_1007f6880(param_1,local_40,&local_1c0,&local_1c8);
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b3596;
      }
      QArrayData::deallocate(local_1c8,1,8);
    }
LAB_1000b3596:
    if (*(int *)local_1c0.field1 == -1) {
      return;
    }
    AVar10 = local_1c0;
    if (*(int *)local_1c0.field1 != 0) {
      LOCK();
      *(int *)local_1c0.field1 = *(int *)local_1c0.field1 + -1;
      UNLOCK();
      if (*(int *)local_1c0.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
LAB_1000b3683:
    QArrayData::deallocate((QArrayData *)AVar10.field1,2,8);
    return;
  case 0x85:
    local_1d0.field1 = (param_4->field0_0x0).field1;
    if (1 < *(int *)local_1d0.field1 + 1U) {
      LOCK();
      *(int *)local_1d0.field1 = *(int *)local_1d0.field1 + 1;
      local_31 = *(int *)local_1d0.field1 != 0;
      UNLOCK();
    }
    local_1d8 = (QArrayData *)*param_5;
    if (1 < *(int *)local_1d8 + 1U) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + 1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
    }
    FUN_1007f68e0(param_1,local_40,&local_1d0,&local_1d8);
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_31 = *(int *)local_1d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b3654;
      }
      QArrayData::deallocate(local_1d8,1,8);
    }
LAB_1000b3654:
    if (*(int *)local_1d0.field1 == -1) {
      return;
    }
    AVar10 = local_1d0;
    if (*(int *)local_1d0.field1 != 0) {
      LOCK();
      *(int *)local_1d0.field1 = *(int *)local_1d0.field1 + -1;
      UNLOCK();
      if (*(int *)local_1d0.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_1000b3683;
  }
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  uStack_250 = 0;
  _local_258 = CONCAT44(local_54,local_44);
  if (local_44 == 0x66) {
    if (local_54 == 1) {
      lVar7 = FUN_1000a9690(param_4);
      local_238 = CONCAT44(local_238._4_4_,*(undefined4 *)(lVar7 + 0x38));
    }
    goto LAB_1000b3874;
  }
  if (local_44 != 0x65) goto LAB_1000b3874;
  FUN_1000ae530(&local_260,&local_40);
  lVar7 = *param_5;
  lVar1 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar1 + 0x30 + lVar7) & 2) == 0) goto LAB_1000b379e;
  lVar8 = FUN_1000a9690(param_4);
  if ((lVar8 == 0) || (cVar3 = FUN_1000b7b40(lVar8), cVar3 == '\0')) {
LAB_1000b3794:
    _local_258 = CONCAT44(2,local_258);
  }
  else if ((*(byte *)(lVar7 + 0x30 + lVar1) & 4) == 0) {
    cVar3 = FUN_1000b7de0(lVar8,&local_260);
    if (cVar3 == '\0') goto LAB_1000b3794;
  }
  else if (*(int *)(lVar8 + 0x38) != *(int *)(lVar1 + 0x34 + lVar7)) goto LAB_1000b3794;
LAB_1000b379e:
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    local_238 = local_238 | 1;
  }
  uVar9 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar9,param_4);
  if (lVar7 != 0) {
    FUN_10018c2b0(lVar7);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar6 = CVmCommonOptions::getOsVersion();
    local_238 = CONCAT44(uVar6,(undefined4)local_238);
    uVar9 = FUN_10018c280(lVar7);
    uVar9 = FUN_100319c50(uVar9);
    uVar6 = FUN_100332dd0(uVar9);
    uStack_230 = CONCAT44(uStack_230._4_4_,uVar6);
    uVar9 = FUN_10018d490(lVar7);
    cVar3 = FUN_1001754c0(uVar9,0x12);
    if (cVar3 == '\0') {
      uStack_230 = uStack_230 & 0xffffffff;
    }
    else {
      uStack_230 = CONCAT44(1,(undefined4)uStack_230);
    }
  }
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b3874;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_1000b3874:
  FUN_1000ae810(param_1,&local_40,100,&local_258,0x80);
  return;
}

