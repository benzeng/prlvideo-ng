
void FUN_1004a5e30(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  QArrayData *pQVar8;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  Data_conflict local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QVariant local_88;
  QArrayData *local_78;
  Data_conflict local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QIcon local_48 [8];
  QIcon local_40 [15];
  undefined1 local_31;
  
  lVar4 = FUN_10044e580();
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
LAB_1004a5f55:
    FUN_100458c60(param_1,param_2);
    return;
  }
  lVar4 = FUN_100458c00(param_1);
  if ((lVar4 == 0) ||
     (lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b8,0), lVar4 == 0))
  goto LAB_1004a5f55;
  uVar5 = FUN_10044e580(param_1);
  lVar4 = FUN_10015a340(uVar5);
  if (*(long *)(*(long *)(param_1 + 0x68) + 0x28) == param_2) {
    plVar2 = *(long **)(lVar4 + 0x178);
    local_68 = (Data *)*plVar2;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 == 0) {
        QListData::detach((int)&local_68);
        lVar6 = (long)*(int *)(local_68 + 8);
        lVar4 = *plVar2;
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_68 + lVar6 * 8) &&
           (lVar7 = *(int *)(local_68 + 0xc) - lVar6,
           lVar7 != 0 && lVar6 <= *(int *)(local_68 + 0xc))) {
          _memcpy(local_68 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
    local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
    if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
      do {
        local_50 = 1;
        plVar2 = *(long **)local_60;
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28);
        (**(code **)(*plVar2 + 0xa8))(&local_78,plVar2);
        EnumUtils::getLocalizedDeviceName((QString *)&local_70);
        (**(code **)(*plVar2 + 0xb8))(&local_90,plVar2);
        QVariant::QVariant(&local_88,&local_90);
        uVar3 = QComboBox::count();
        QIcon::QIcon(local_48);
        QComboBox::insertItem
                  ((int)uVar5,(QIcon *)(ulong)uVar3,(QString *)local_48,(QVariant *)&local_70);
        QIcon::~QIcon(local_48);
        QVariant::~QVariant(&local_88);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a60e6;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1004a60e6:
        if (*(int *)local_70.field15 != -1) {
          if (*(int *)local_70.field15 != 0) {
            LOCK();
            *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
            local_31 = *(int *)local_70.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a6119;
          }
          QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
        }
LAB_1004a6119:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a6149;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1004a6149:
        local_60 = local_60 + 8;
      } while (local_60 != local_58);
    }
    local_50 = 1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a619d;
      }
      QListData::dispose(local_68);
    }
LAB_1004a619d:
    lVar4 = CVmSoundDevice::getSoundInputs();
    if (*(int *)(*(long *)(lVar4 + 0xa8) + 0xc) == *(int *)(*(long *)(lVar4 + 0xa8) + 8))
    goto LAB_1004a6558;
    local_98 = (QArrayData *)QString::fromAscii_helper("FIRST_ITEM_ID",0xd);
    lVar4 = CVmSoundDevice::getSoundInputs();
    QString::number((int)&local_a0,
                    *(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x10 +
                                      (long)*(int *)(*(long *)(lVar4 + 0xa8) + 8) * 8) + 0x68));
    FUN_1004a68a0(param_2,&local_98,&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a6248;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1004a6248:
    if (*(int *)local_98 == -1) goto LAB_1004a6558;
    pQVar8 = local_98;
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      iVar1 = *(int *)local_98;
      UNLOCK();
      goto joined_r0x0001004a626e;
    }
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x68) + 0x18) != param_2) goto LAB_1004a6558;
    plVar2 = *(long **)(lVar4 + 0x170);
    local_c0 = (Data *)*plVar2;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 == 0) {
        QListData::detach((int)&local_c0);
        lVar6 = (long)*(int *)(local_c0 + 8);
        lVar4 = *plVar2;
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_c0 + lVar6 * 8) &&
           (lVar7 = *(int *)(local_c0 + 0xc) - lVar6,
           lVar7 != 0 && lVar6 <= *(int *)(local_c0 + 0xc))) {
          _memcpy(local_c0 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
      }
    }
    local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
    local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
      do {
        local_a8 = 1;
        plVar2 = *(long **)local_b8;
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
        (**(code **)(*plVar2 + 0xa8))(&local_d0,plVar2);
        EnumUtils::getLocalizedDeviceName((QString *)&local_c8);
        (**(code **)(*plVar2 + 0xb8))(&local_e8,plVar2);
        QVariant::QVariant(&local_e0,&local_e8);
        uVar3 = QComboBox::count();
        QIcon::QIcon(local_40);
        QComboBox::insertItem
                  ((int)uVar5,(QIcon *)(ulong)uVar3,(QString *)local_40,(QVariant *)&local_c8);
        QIcon::~QIcon(local_40);
        QVariant::~QVariant(&local_e0);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a63a2;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_1004a63a2:
        if (*(int *)local_c8.field15 != -1) {
          if (*(int *)local_c8.field15 != 0) {
            LOCK();
            *(int *)local_c8.field15 = *(int *)local_c8.field15 + -1;
            local_31 = *(int *)local_c8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a63db;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field15,2,8);
        }
LAB_1004a63db:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a6411;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1004a6411:
        local_b8 = local_b8 + 8;
      } while (local_b8 != local_b0);
    }
    local_a8 = 1;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a6477;
      }
      QListData::dispose(local_c0);
    }
LAB_1004a6477:
    lVar4 = CVmSoundDevice::getSoundOutputs();
    if (*(int *)(*(long *)(lVar4 + 0xa8) + 0xc) == *(int *)(*(long *)(lVar4 + 0xa8) + 8))
    goto LAB_1004a6558;
    local_f0 = (QArrayData *)QString::fromAscii_helper("FIRST_ITEM_ID",0xd);
    lVar4 = CVmSoundDevice::getSoundOutputs();
    QString::number((int)&local_f8,
                    *(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x10 +
                                      (long)*(int *)(*(long *)(lVar4 + 0xa8) + 8) * 8) + 0x68));
    FUN_1004a68a0(param_2,&local_f0,&local_f8);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a6522;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1004a6522:
    if (*(int *)local_f0 == -1) goto LAB_1004a6558;
    pQVar8 = local_f0;
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      iVar1 = *(int *)local_f0;
      UNLOCK();
joined_r0x0001004a626e:
      local_31 = iVar1 != 0;
      if ((bool)local_31) goto LAB_1004a6558;
    }
  }
  QArrayData::deallocate(pQVar8,2,8);
LAB_1004a6558:
  FUN_100458c60(param_1,param_2);
  return;
}

