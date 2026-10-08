
void FUN_100163c20(long param_1,long *param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint in_stack_fffffffffffffd0c;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  long local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  long local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  char local_299;
  QArrayData *local_298;
  long local_290;
  QArrayData *local_288;
  CVmEvent local_280 [224];
  QEvent local_1a0 [32];
  long local_180;
  long local_178;
  long local_170;
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
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
  QArrayData *local_e8;
  undefined1 local_e0 [24];
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
  
  FUN_10015d3c0();
  if (*(int *)(*(long *)(param_1 + 0x70) + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "Error: Got an empty server uuid - unacceptable. Aborting login operation.");
    if (*(char *)(param_1 + 0xf4) == '\0') {
      FUN_10015a6f0(param_1,1);
      uVar3 = FUN_100152280();
      FUN_1001531e0(uVar3,param_1,1);
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x130) + 0x18) = 1;
      FUN_10015a6f0(param_1,1);
      lVar4 = _PrlSrv_Logoff(*(undefined8 *)(param_1 + 0x80));
      if (lVar4 != 0) {
        _PrlHandle_Free(lVar4);
      }
    }
    iVar2 = CMessageManager::instance();
    local_40[0].field1 = (Data *)PTR_shared_null_1021e1288;
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_50 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
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
              (iVar2,(QString *)0x80000249,(QStringList *)&local_40[0].field0,
               (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0),
               (QWidget *)((ulong)in_stack_fffffffffffffd0c << 0x20),(CSlotInfo *)0x0);
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
    uVar3 = 0x80000249;
    if (*(int *)local_40[0].field1 != -1) {
      if (*(int *)local_40[0].field1 != 0) {
        LOCK();
        *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
        local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1001640b2;
      }
      QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
    }
  }
  else {
    uVar3 = FUN_100152280();
    lVar4 = FUN_100152bc0(uVar3,param_1 + 0x70);
    uVar3 = 0;
    if ((lVar4 != 0) && (lVar4 != param_1)) {
      uVar3 = FUN_100152280();
      FUN_1001531e0(uVar3,param_1,1);
      iVar2 = CMessageManager::instance();
      local_e0._0_8_ = PTR_shared_null_1021e15e8;
      local_e0._16_8_ = PTR_shared_null_1021e1288;
      local_e0._8_8_ = PTR_shared_null_1021e15e8;
      if (*(int *)(*(long *)(lVar4 + 0x30) + 4) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        puVar5 = (undefined8 *)(lVar4 + 0x30);
      }
      pQVar1 = (QArrayData *)*puVar5;
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_40[1]._7_1_ = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_e8 = pQVar1;
      FUN_1000341d0(local_e0,&local_e8);
      local_128 = (int *)0x0;
      uStack_120 = 0;
      local_110 = 0;
      local_118 = 0;
      local_100 = 0x80000000;
      local_108.field7 = 0;
      local_f8 = 1;
      local_168 = (int *)0x0;
      uStack_160 = 0;
      local_150 = 0;
      local_158 = 0;
      local_140 = 0x80000000;
      local_148.field7 = 0;
      local_138 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QString *)0x3aa2,(QStringList *)(local_e0 + 0x10),
                 (QStringList *)(local_e0 + 8),(CSlotInfo *)local_e0,SUB81(&local_128,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffd0c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_148);
      if (local_168 != (int *)0x0) {
        LOCK();
        *local_168 = *local_168 + -1;
        local_40[1]._7_1_ = *local_168 != 0;
        UNLOCK();
        if ((!(bool)local_40[1]._7_1_) && (local_168 != (int *)0x0)) {
          operator_delete(local_168);
        }
      }
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
      FUN_100039a80(local_e0);
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_40[1]._7_1_ = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10016405d;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
LAB_10016405d:
      FUN_100039a80(local_e0 + 8);
      if (*(int *)local_e0._16_8_ != -1) {
        if (*(int *)local_e0._16_8_ != 0) {
          LOCK();
          *(int *)local_e0._16_8_ = *(int *)local_e0._16_8_ + -1;
          local_40[1]._7_1_ = *(int *)local_e0._16_8_ != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10016409f;
        }
        QArrayData::deallocate((QArrayData *)local_e0._16_8_,2,8);
      }
LAB_10016409f:
      FUN_10015a6f0(param_1,1);
      uVar3 = 0x3aa2;
    }
  }
LAB_1001640b2:
  local_170 = 0;
  local_180 = *param_2;
  if (local_180 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_178,&local_180);
  lVar4 = local_178;
  if (local_170 != 0) {
    _PrlHandle_Free();
  }
  local_170 = 0;
  iVar2 = _PrlResult_GetParam(lVar4,&local_170);
  if (local_178 != 0) {
    _PrlHandle_Free();
  }
  if (local_180 != 0) {
    _PrlHandle_Free();
  }
  if (iVar2 < 0) goto LAB_100164553;
  local_290 = local_170;
  if (local_170 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getParamAsString(&local_288,&local_290);
  CVmEvent::CVmEvent(local_280,(QTypedArrayData<unsigned_short> *)&local_288);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_40[1]._7_1_ = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1001641b6;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1001641b6:
  if (local_290 != 0) {
    _PrlHandle_Free();
  }
  local_298 = (QArrayData *)QString::fromAscii_helper("server_info_is_launchd_mode",0x1b);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_280);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_40[1]._7_1_ = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_10016422b;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_10016422b:
  if (lVar4 != 0) {
    CVmEventParameter::getParamValue();
    iVar2 = QString::toInt((bool *)&local_2a8,(int)&local_299);
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_40[1]._7_1_ = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_100164293;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
LAB_100164293:
    if ((iVar2 != 0) && (local_299 != '\0')) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,"Server was started by launchd.");
      }
      *(undefined1 *)(param_1 + 0x13a) = 1;
    }
  }
  local_2b0 = (QArrayData *)QString::fromAscii_helper("session_license_info",0x14);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_280);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_40[1]._7_1_ = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_10016433b;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_10016433b:
  if (lVar4 != 0) {
    local_2b8 = 0;
    iVar2 = _PrlLic_Create(&local_2b8);
    lVar4 = local_2b8;
    if (iVar2 < 0) {
LAB_100164473:
      CVmEventParameter::getParamValue();
      QString::toLocal8Bit();
      FUN_100df99c0("","prl_client_app",0,
                    "[LICENSE] Faild to extract license from lofin responce \'%s\'",
                    local_2d8 + *(long *)(local_2d8 + 0x10));
      if (*(int *)local_2d8 != -1) {
        if (*(int *)local_2d8 != 0) {
          LOCK();
          *(int *)local_2d8 = *(int *)local_2d8 + -1;
          local_40[1]._7_1_ = *(int *)local_2d8 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_1001644f4;
        }
        QArrayData::deallocate(local_2d8,1,8);
      }
LAB_1001644f4:
      if (*(int *)local_2e0 != -1) {
        if (*(int *)local_2e0 != 0) {
          LOCK();
          *(int *)local_2e0 = *(int *)local_2e0 + -1;
          local_40[1]._7_1_ = *(int *)local_2e0 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10016452a;
        }
        QArrayData::deallocate(local_2e0,2,8);
      }
    }
    else {
      CVmEventParameter::getParamValue();
      QString::toUtf8();
      iVar2 = _PrlLic_FromString(lVar4,local_2c0 + *(long *)(local_2c0 + 0x10));
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_40[1]._7_1_ = *(int *)local_2c0 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_1001643d8;
        }
        QArrayData::deallocate(local_2c0,1,8);
      }
LAB_1001643d8:
      if (*(int *)local_2c8 != -1) {
        if (*(int *)local_2c8 != 0) {
          LOCK();
          *(int *)local_2c8 = *(int *)local_2c8 + -1;
          local_40[1]._7_1_ = *(int *)local_2c8 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_10016440e;
        }
        QArrayData::deallocate(local_2c8,2,8);
      }
LAB_10016440e:
      if (iVar2 < 0) goto LAB_100164473;
      uVar6 = 0;
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0xb0);
      }
      local_2d0 = local_2b8;
      if (local_2b8 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_100617790(uVar6,&local_2d0);
      if (local_2d0 != 0) {
        _PrlHandle_Free();
      }
    }
LAB_10016452a:
    if (local_2b8 != 0) {
      _PrlHandle_Free();
    }
  }
  QEvent::~QEvent(local_1a0);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_280);
LAB_100164553:
  FUN_100801110(param_1,uVar3);
  if (local_170 != 0) {
    _PrlHandle_Free();
  }
  return;
}

