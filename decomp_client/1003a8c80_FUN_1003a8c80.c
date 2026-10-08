
void FUN_1003a8c80(long param_1,uint param_2)

{
  code *pcVar1;
  undefined *puVar2;
  QString QVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  size_t sVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  long local_120;
  QVariant local_118;
  QVariant local_108;
  QArrayData *local_f8;
  long local_f0;
  QVariant local_e8;
  QVariant local_d8;
  QVariant local_c8;
  QVariant local_b8;
  Data *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  long *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  uVar15 = (ulong)param_2;
  lVar6 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar6 == 0) {
    pcVar11 = "(!)Error: Vm instance is null.";
LAB_1003a8e12:
    FUN_100df99c0("","prl_client_app",0,pcVar11);
    return;
  }
  lVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar6 == 0) {
    pcVar11 = "(!)Error: Server instance is null.";
    goto LAB_1003a8e12;
  }
  uVar7 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  uVar8 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  FUN_100110c60(&local_48,uVar7,uVar8,uVar15);
  if (param_2 != 6) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = CVmDevice::getEmulatedType();
    CVmDevice::getSystemName();
    cVar4 = FUN_1003b84e0(uVar7,uVar15,uVar5,&local_f8,0xffffffff,0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003a8ea3;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1003a8ea3:
    if (cVar4 == '\0') {
      if ((param_2 < 0xc) && ((0xc20U >> (param_2 & 0x1f) & 1) != 0)) {
        plVar9 = operator_new(0x78);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        uVar8 = FUN_1003b0b20(uVar7);
        FUN_10043d110(plVar9,uVar7,param_2,uVar8);
        if (DAT_102273e2c == 0) {
          DAT_102273e2c = FUN_1003af0d0("CVmDevice*",0xffffffffffffffff,1);
        }
        QVariant::QVariant(&local_108,DAT_102273e2c,&local_48,1);
        QObject::setProperty((char *)plVar9,(QVariant *)"device");
        QVariant::~QVariant(&local_108);
        QVariant::QVariant(&local_118,(QHash *)&local_40);
        QObject::setProperty((char *)plVar9,(QVariant *)"changedData");
        QVariant::~QVariant(&local_118);
        (**(code **)(*plVar9 + 0x1a0))(plVar9);
        QObject::connect(&local_120,plVar9,"2finished(int)",param_1,"1onChooseSourceFinished(int)",0
                        );
        if (local_120 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_120);
      }
      else if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
    else {
      FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
      lVar6 = CVmConfiguration::getVmHardwareList();
      FUN_1001296d0(*(undefined8 *)(lVar6 + 0xa8 + uVar15 * 8),&local_48);
      uVar7 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
      FUN_1003a9840(&local_40,uVar7);
      FUN_1008368b0(*(undefined8 *)(param_1 + 0x10),param_2,(int)local_48[0xd]);
    }
    goto LAB_1003a9470;
  }
  if (local_48 == (long *)0x0) {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    goto LAB_1003a9470;
  }
  local_50.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       ___dynamic_cast(local_48,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0);
  if (local_50.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_1003a9470;
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_70 = (QArrayData *)QString::fromAscii_helper("Identification.VmName",0x15);
  FUN_1003e1800(&local_68,uVar7,&local_70,0);
  QVariant::toString();
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a8d97;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003a8d97:
  uVar7 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  uVar8 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  FUN_100109d60(&local_80,uVar8,0);
  puVar2 = PTR_s_harddisk_102270c40;
  if (*(int *)(local_58 + 4) == 0) {
    iVar14 = -1;
    if (PTR_s_harddisk_102270c40 != (undefined *)0x0) {
      sVar10 = _strlen(PTR_s_harddisk_102270c40);
      iVar14 = (int)sVar10;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar14);
  }
  else {
    local_88 = local_58;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_s_hdd_102270c58;
  iVar14 = -1;
  if (PTR_s_hdd_102270c58 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_hdd_102270c58);
    iVar14 = (int)sVar10;
  }
  local_90 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar14);
  FUN_10010af30(&local_78,uVar7,&local_80,&local_88,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a90fb;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003a90fb:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a912b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003a912b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a915b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003a915b:
  local_98 = local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(local_50);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a91bd;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003a91bd:
  local_a0 = local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName(local_50);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a921f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1003a921f:
  pcVar11 = operator_new(0x60);
  uVar7 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  QVar3.field0_0x0 = local_50.field0_0x0;
  uVar8 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  uVar12 = FUN_1003b0ac0(*(undefined8 *)(param_1 + 0x18));
  uVar13 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_a8 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1002081b0(pcVar11,uVar7,QVar3.field0_0x0,uVar8,uVar12,uVar13,&local_a8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a92c1;
    }
    QListData::dispose(local_a8);
  }
LAB_1003a92c1:
  QVariant::QVariant(&local_b8,6);
  QObject::setProperty(pcVar11,(QVariant *)"deviceType");
  QVariant::~QVariant(&local_b8);
  QVariant::QVariant(&local_c8,*(int *)(local_50.field0_0x0 + 0x68));
  QObject::setProperty(pcVar11,(QVariant *)"deviceId");
  QVariant::~QVariant(&local_c8);
  if (DAT_102273e28 == 0) {
    DAT_102273e28 = FUN_1003aef80("CVmHardDisk*",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_d8,DAT_102273e28,&local_50,1);
  QObject::setProperty(pcVar11,(QVariant *)"device");
  QVariant::~QVariant(&local_d8);
  QVariant::QVariant(&local_e8,(QHash *)&local_40);
  QObject::setProperty(pcVar11,(QVariant *)"changedData");
  QVariant::~QVariant(&local_e8);
  QObject::connect(&local_f0,pcVar11,"2taskFinished(PRL_RESULT)",param_1,
                   "1onHddCreateTaskFinished(PRL_RESULT)",0);
  if (local_f0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_f0);
  CAbstractTask::execute();
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a9440;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003a9440:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a9470;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003a9470:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_40);
  }
  return;
}

