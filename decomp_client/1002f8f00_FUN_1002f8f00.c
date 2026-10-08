
undefined8 FUN_1002f8f00(long param_1)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  void *pvVar4;
  QArrayData *pQVar5;
  QString local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  undefined1 local_100 [16];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  undefined1 local_d0 [68];
  uint local_8c;
  QArrayData *local_80;
  QString local_78 [2];
  CTaskGenericId local_68 [24];
  CTaskGenericId local_50 [24];
  QArrayData *local_38;
  undefined1 local_29;
  
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId(local_50,0x3f);
  cVar1 = CTaskManager::isTaskRunning(pCVar3);
  if (cVar1 == '\0') {
    CTaskGenericId::~CTaskGenericId(local_50);
LAB_1002f8f82:
    QSettings::QSettings((QSettings *)local_78,(QObject *)0x0);
    local_80 = (QArrayData *)QString::fromAscii_helper("VmLastState",0xb);
    QSettings::remove(local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002f8fdf;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002f8fdf:
    QSettings::~QSettings((QSettings *)local_78);
  }
  else {
    pCVar3 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId(local_68,0x72);
    cVar1 = CTaskManager::isTaskRunning(pCVar3);
    CTaskGenericId::~CTaskGenericId(local_68);
    CTaskGenericId::~CTaskGenericId(local_50);
    if (cVar1 != '\0') goto LAB_1002f8f82;
  }
  FUN_1001cda40(local_d0,DAT_102310918);
  FUN_1001091d0(local_d0);
  if ((local_8c & 0x40) == 0) {
    if (DAT_102310930 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001e5440(pvVar4);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar4;
    }
    iVar2 = FUN_1001e5550(DAT_102310930,4);
    if (iVar2 < 0) {
      if (DAT_102310a08 == (void *)0x0) {
        pvVar4 = operator_new(0x220);
        FUN_1007cc3f0(pvVar4);
        DAT_102273890 = 1;
        DAT_102310a08 = pvVar4;
      }
      pvVar4 = DAT_102310a08;
      local_e0 = (QArrayData *)QString::fromAscii_helper("Double click",0xc);
      FUN_1007d6c70(pvVar4,&local_e0);
      if (*(int *)local_e0 != -1) {
        pQVar5 = local_e0;
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          iVar2 = *(int *)local_e0;
          UNLOCK();
          goto joined_r0x0001002f91a5;
        }
        goto LAB_1002f9283;
      }
    }
    else {
      if (DAT_102310930 == (void *)0x0) {
        pvVar4 = operator_new(0x18);
        FUN_1001e5440(pvVar4);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar4;
      }
      iVar2 = FUN_1001e5550(DAT_102310930,7);
      if (DAT_102310a08 == (void *)0x0) {
        pvVar4 = operator_new(0x220);
        FUN_1007cc3f0(pvVar4);
        DAT_102273890 = 1;
        DAT_102310a08 = pvVar4;
      }
      pvVar4 = DAT_102310a08;
      if (iVar2 < 0) {
        local_e8 = (QArrayData *)QString::fromAscii_helper("Drag and drop",0xd);
        FUN_1007d6c70(pvVar4,&local_e8);
        if (*(int *)local_e8 != -1) {
          pQVar5 = local_e8;
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            iVar2 = *(int *)local_e8;
            UNLOCK();
            goto joined_r0x0001002f91a5;
          }
          goto LAB_1002f9283;
        }
      }
      else {
        local_f0 = (QArrayData *)QString::fromAscii_helper("Self update",0xb);
        FUN_1007d6c70(pvVar4,&local_f0);
        if (*(int *)local_f0 != -1) {
          pQVar5 = local_f0;
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            iVar2 = *(int *)local_f0;
            UNLOCK();
joined_r0x0001002f91a5:
            local_29 = iVar2 != 0;
            if ((bool)local_29) goto LAB_1002f9292;
          }
LAB_1002f9283:
          QArrayData::deallocate(pQVar5,2,8);
        }
      }
    }
  }
  else {
    if (DAT_102310a08 == (void *)0x0) {
      pvVar4 = operator_new(0x220);
      FUN_1007cc3f0(pvVar4);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar4;
    }
    pvVar4 = DAT_102310a08;
    local_d8 = (QArrayData *)QString::fromAscii_helper("Upgrade",7);
    FUN_1007d6c70(pvVar4,&local_d8);
    if (*(int *)local_d8 != -1) {
      pQVar5 = local_d8;
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        iVar2 = *(int *)local_d8;
        UNLOCK();
        goto joined_r0x0001002f91a5;
      }
      goto LAB_1002f9283;
    }
  }
LAB_1002f9292:
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) goto LAB_1002f94ef;
  if (DAT_102310a08 == (void *)0x0) {
    pvVar4 = operator_new(0x220);
    FUN_1007cc3f0(pvVar4);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar4;
  }
  FUN_1007d7330(DAT_102310a08,param_1 + 0x18);
  FUN_100d79030(local_100,param_1 + 0x18);
  local_108 = (QArrayData *)PTR_shared_null_1021e1288;
  local_110 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d793f0(local_100,&local_108);
  FUN_100d794b0(local_100,&local_110);
  if (DAT_102310a08 == (void *)0x0) {
    pvVar4 = operator_new(0x220);
    FUN_1007cc3f0(pvVar4);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar4;
  }
  pvVar4 = DAT_102310a08;
  local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_110;
  if (1 < *(int *)local_110 + 1U) {
    LOCK();
    *(int *)local_110 = *(int *)local_110 + 1;
    local_29 = *(int *)local_110 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e41970);
  QString::append(&local_120);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f93ca;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002f93ca:
  local_118.field0_0x0 = local_120.field0_0x0;
  if (1 < *(int *)local_120.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
    local_29 = *(int *)local_120.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_118);
  FUN_1007d77a0(pvVar4,&local_118);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_29 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f9441;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1002f9441:
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_29 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f9477;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1002f9477:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f94ad;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1002f94ad:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f94e3;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1002f94e3:
  FUN_100d79060(local_100);
LAB_1002f94ef:
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) {
    if (DAT_102310a08 == (void *)0x0) {
      pvVar4 = operator_new(0x220);
      FUN_1007cc3f0(pvVar4);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar4;
    }
    FUN_1007d7670(DAT_102310a08,param_1 + 0x20);
  }
  return 0;
}

