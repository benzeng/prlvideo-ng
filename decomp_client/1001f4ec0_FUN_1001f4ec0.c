
void FUN_1001f4ec0(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  bool *pbVar7;
  QStringList *pQVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  uint local_220;
  uint local_21c;
  uint local_218;
  int *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  Data_conflict local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  CSlotInfo local_1c8;
  Data_conflict local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined1 local_180 [24];
  QArrayData *local_168;
  Data *local_160;
  Data *local_158;
  Data *local_150;
  undefined4 local_148;
  QString local_140;
  int *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  Data_conflict local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_100 [24];
  QArrayData *local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  undefined4 local_c8;
  QString local_c0;
  long local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  long local_78;
  long local_70;
  int local_64;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::sender();
  lVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get request object.");
                    /* WARNING: Could not recover jumptable at 0x0001001f52ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  QObject::sender();
  pbVar7 = (bool *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  local_50 = PTR_shared_null_1021e15e8;
  local_58 = PTR_shared_null_1021e15e8;
  FUN_100060bb0();
  pQVar8 = (QStringList *)FUN_100060e80("CPreferencesDialogBase",*(undefined8 *)PTR_self_1021e1388);
  iVar3 = CSdkRequest::getResultCode(pbVar7);
  if ((-1 < iVar3) || (uVar4 = CSdkRequest::getResultParamCount(), uVar4 == 0)) goto LAB_1001f5b39;
  local_218 = 0x80000007;
  local_220 = 0x80000007;
  local_21c = 0x80000007;
  uVar11 = 0;
  do {
    CSdkRequest::getResultParam((uint)&local_60);
    if (local_60 != 0) {
      iVar3 = _PrlEvent_GetErrCode(local_60,&local_64);
      if (iVar3 < 0) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlEvent_GetErrCode failed with RC: [%.8X]",
                      iVar3);
      }
      else {
        switch(local_64) {
        case -0x7ffefff7:
        case -0x7ffefff0:
          bVar12 = local_64 != -0x7ffefff7;
          local_78 = local_60;
          if (local_60 != 0) {
            _PrlHandle_AddRef();
          }
          local_80 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
          SdkUtils::getParamByName(&local_70,&local_78,&local_80);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f5064;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_1001f5064:
          if (local_78 != 0) {
            _PrlHandle_Free();
          }
          local_90 = local_70;
          if (local_70 != 0) {
            _PrlHandle_AddRef();
          }
          SdkUtils::getParamStringValue(&local_88,&local_90,0);
          FUN_1000341d0(&local_50,&local_88);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f50d6;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_1001f50d6:
          if (local_90 != 0) {
            _PrlHandle_Free();
          }
          local_218 = bVar12 | 0x3b04;
          if (local_70 != 0) {
            _PrlHandle_Free();
          }
          break;
        case -0x7ffeffef:
          local_220 = 0x80010011;
          break;
        case -0x7ffeffee:
          local_a0 = local_60;
          if (local_60 != 0) {
            _PrlHandle_AddRef();
          }
          local_a8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
          SdkUtils::getParamByName(&local_98,&local_a0,&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f51d9;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1001f51d9:
          if (local_a0 != 0) {
            _PrlHandle_Free();
          }
          local_b8 = local_98;
          if (local_98 != 0) {
            _PrlHandle_AddRef();
          }
          SdkUtils::getParamStringValue(&local_b0,&local_b8,0);
          FUN_1000341d0(&local_58,&local_b0);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f525d;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_1001f525d:
          if (local_b8 != 0) {
            _PrlHandle_Free();
          }
          local_21c = 0x3b0a;
          if (local_98 != 0) {
            _PrlHandle_Free();
          }
        }
      }
      if (local_60 != 0) {
        _PrlHandle_Free();
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar4);
  if (local_218 != 0x80000007) {
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    lVar6 = 0;
    if ((param_1[6] != 0) && (lVar6 = 0, *(int *)(param_1[6] + 4) != 0)) {
      lVar6 = param_1[7];
    }
    lVar6 = FUN_10015a340(lVar6);
    plVar1 = *(long **)(lVar6 + 0x198);
    local_e0 = (Data *)*plVar1;
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 == 0) {
        QListData::detach((int)&local_e0);
        lVar9 = (long)*(int *)(local_e0 + 8);
        lVar6 = *plVar1;
        if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_e0 + lVar9 * 8) &&
           (lVar10 = *(int *)(local_e0 + 0xc) - lVar9,
           lVar10 != 0 && lVar9 <= *(int *)(local_e0 + 0xc))) {
          _memcpy(local_e0 + lVar9 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8)
                  ,lVar10 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
      }
    }
    local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
    local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
      do {
        local_c8 = 1;
        plVar1 = *(long **)local_d8;
        (**(code **)(*plVar1 + 0xb8))(&local_e8,plVar1);
        cVar2 = QtPrivate::QStringList_contains(&local_50,&local_e8,1);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001f5450;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1001f5450:
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0xa8))(local_100 + 0x10,plVar1);
          QString::append(&local_c0);
          if (*(int *)local_100._16_8_ != -1) {
            if (*(int *)local_100._16_8_ != 0) {
              LOCK();
              *(int *)local_100._16_8_ = *(int *)local_100._16_8_ + -1;
              local_31 = *(int *)local_100._16_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f54b9;
            }
            QArrayData::deallocate((QArrayData *)local_100._16_8_,2,8);
          }
LAB_1001f54b9:
          QString::fromUtf8_helper((char *)&local_48,0x1ddad42);
          QString::append(&local_c0);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f5510;
            }
            QArrayData::deallocate(local_48,2,8);
          }
        }
LAB_1001f5510:
        local_d8 = local_d8 + 8;
      } while (local_d8 != local_d0);
    }
    local_c8 = 1;
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f556c;
      }
      QListData::dispose(local_e0);
    }
LAB_1001f556c:
    QString::chop((int)&local_c0);
    iVar5 = CMessageManager::instance();
    local_100._8_8_ = PTR_shared_null_1021e15e8;
    local_100._0_8_ = PTR_shared_null_1021e15e8;
    FUN_1000341d0(local_100,&local_c0);
    local_138 = (int *)0x0;
    uStack_130 = 0;
    local_120 = 0;
    local_128 = 0;
    local_110 = 0x80000000;
    local_118.field7 = 0;
    local_108 = 1;
    CMessageManager::showMessageBox
              (iVar5,(QWidget *)(ulong)local_218,pQVar8,(QStringList *)(local_100 + 8),
               (CSlotInfo *)local_100,SUB81(&local_138,0));
    QVariant::~QVariant((QVariant *)&local_118);
    if (local_138 != (int *)0x0) {
      LOCK();
      *local_138 = *local_138 + -1;
      local_31 = *local_138 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_138 != (int *)0x0)) {
        operator_delete(local_138);
      }
    }
    FUN_100039a80(local_100);
    FUN_100039a80(local_100 + 8);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f56a1;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
  }
LAB_1001f56a1:
  if (local_21c != 0x80000007) {
    local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    lVar6 = 0;
    if ((param_1[6] != 0) && (lVar6 = 0, *(int *)(param_1[6] + 4) != 0)) {
      lVar6 = param_1[7];
    }
    lVar6 = FUN_10015a340(lVar6);
    plVar1 = *(long **)(lVar6 + 0x198);
    local_160 = (Data *)*plVar1;
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 == 0) {
        QListData::detach((int)&local_160);
        lVar9 = (long)*(int *)(local_160 + 8);
        lVar6 = *plVar1;
        if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_160 + lVar9 * 8) &&
           (lVar10 = *(int *)(local_160 + 0xc) - lVar9,
           lVar10 != 0 && lVar9 <= *(int *)(local_160 + 0xc))) {
          _memcpy(local_160 + lVar9 * 8 + 0x10,
                  (void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),lVar10 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + 1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
      }
    }
    local_158 = local_160 + (long)*(int *)(local_160 + 8) * 8 + 0x10;
    local_150 = local_160 + (long)*(int *)(local_160 + 0xc) * 8 + 0x10;
    if (*(int *)(local_160 + 8) != *(int *)(local_160 + 0xc)) {
      do {
        local_148 = 1;
        plVar1 = *(long **)local_158;
        (**(code **)(*plVar1 + 0xb8))(&local_168,plVar1);
        cVar2 = QtPrivate::QStringList_contains(&local_58,&local_168,1);
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001f5800;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_1001f5800:
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0xa8))(local_180 + 0x10,plVar1);
          QString::append(&local_140);
          if (*(int *)local_180._16_8_ != -1) {
            if (*(int *)local_180._16_8_ != 0) {
              LOCK();
              *(int *)local_180._16_8_ = *(int *)local_180._16_8_ + -1;
              local_31 = *(int *)local_180._16_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f5869;
            }
            QArrayData::deallocate((QArrayData *)local_180._16_8_,2,8);
          }
LAB_1001f5869:
          QString::fromUtf8_helper((char *)&local_40,0x1ddad42);
          QString::append(&local_140);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001f58c0;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
LAB_1001f58c0:
        local_158 = local_158 + 8;
      } while (local_158 != local_150);
    }
    local_148 = 1;
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f591c;
      }
      QListData::dispose(local_160);
    }
LAB_1001f591c:
    QString::chop((int)&local_140);
    iVar5 = CMessageManager::instance();
    local_180._8_8_ = PTR_shared_null_1021e15e8;
    local_180._0_8_ = PTR_shared_null_1021e15e8;
    FUN_1000341d0(local_180,&local_140);
    local_1c8.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
    local_1c8._24_8_ = 0;
    local_1c8.field3_0x28 = 0;
    local_1c8.field2_0x1c.field0_0x0._4_8_ = 0;
    local_190 = 0x80000000;
    local_198.field7 = 0;
    local_188 = 1;
    CMessageManager::showMessageBox
              (iVar5,(QWidget *)(ulong)local_21c,pQVar8,(QStringList *)(local_180 + 8),
               (CSlotInfo *)local_180,(bool)((char)&local_1c8 + '\x10'));
    QVariant::~QVariant((QVariant *)&local_198);
    if (local_1c8.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_1c8.field1_0x10.field0_0x0 = *(int *)local_1c8.field1_0x10.field0_0x0 + -1;
      local_31 = *(int *)local_1c8.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_1c8.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
        operator_delete(local_1c8.field1_0x10.field0_0x0);
      }
    }
    FUN_100039a80(local_180);
    FUN_100039a80(local_180 + 8);
    if (*(int *)local_140.field0_0x0 != -1) {
      if (*(int *)local_140.field0_0x0 != 0) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
        local_31 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f5a51;
      }
      QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
    }
  }
LAB_1001f5a51:
  if (local_220 != 0x80000007) {
    iVar5 = CMessageManager::instance();
    local_1c8.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
    local_1c8.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_208 = (int *)0x0;
    uStack_200 = 0;
    local_1f0 = 0;
    local_1f8 = 0;
    local_1e0 = 0x80000000;
    local_1e8.field7 = 0;
    local_1d8 = 1;
    CMessageManager::showMessageBox
              (iVar5,(QWidget *)(ulong)local_220,pQVar8,
               (QStringList *)&local_1c8.field0_0x0.field0_0x0.field1_0x8,&local_1c8,
               SUB81(&local_208,0));
    QVariant::~QVariant((QVariant *)&local_1e8);
    if (local_208 != (int *)0x0) {
      LOCK();
      *local_208 = *local_208 + -1;
      local_31 = *local_208 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_208 != (int *)0x0)) {
        operator_delete(local_208);
      }
    }
    FUN_100039a80(&local_1c8);
    FUN_100039a80(&local_1c8.field0_0x0.field0_0x0.field1_0x8);
  }
LAB_1001f5b39:
  (**(code **)(*param_1 + 0xb0))(param_1,iVar3);
  FUN_100039a80(&local_58);
  FUN_100039a80(&local_50);
  return;
}

