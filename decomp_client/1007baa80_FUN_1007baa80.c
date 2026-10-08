
void FUN_1007baa80(QMenu *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  int *local_c8;
  long *local_c0;
  long *local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1007bd4d0();
  iVar3 = *(int *)((long)&param_1[1].field2_0x10 + 6);
  switch(iVar3) {
  case 3:
    lVar5 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1688,0);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get floppy device instance";
      goto LAB_1007bb2ed;
    }
    CVmDevice::getSystemName();
    FUN_1007bebc0(param_1,&local_40);
    if (*(int *)local_40 != -1) {
      local_50 = local_40;
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        iVar3 = *(int *)local_40;
        UNLOCK();
joined_r0x0001007bad35:
        local_29 = iVar3 != 0;
        if ((bool)local_29) break;
      }
LAB_1007bad3f:
      QArrayData::deallocate(local_50,2,8);
    }
    break;
  default:
    goto switchD_1007baabb_caseD_4;
  case 5:
    lVar5 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b0,0);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get CD-ROM instance";
      goto LAB_1007bb2ed;
    }
    CVmDevice::getSystemName();
    FUN_1007bee90(param_1,&local_48);
    if (*(int *)local_48 != -1) {
      local_50 = local_48;
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        iVar3 = *(int *)local_48;
        UNLOCK();
        goto joined_r0x0001007bad35;
      }
      goto LAB_1007bad3f;
    }
    break;
  case 6:
    lVar5 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get hard disk device instance";
LAB_1007bb2ed:
      FUN_100df99c0("","prl_client_app",0,pcVar6);
      return;
    }
    uVar4 = FUN_100152280();
    puVar1 = (undefined1 *)((long)&param_1[1].field0_0x0 + 6);
    lVar5 = FUN_1001547d0(uVar4,puVar1);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get server instance.";
      goto LAB_1007bb2ed;
    }
    iVar3 = CVmClusteredDevice::getInterfaceType();
    if ((iVar3 == 2) && (cVar2 = FUN_1001754c0(lVar5,1), cVar2 != '\0')) {
      FUN_1007bf8a0(param_1,1);
    }
    uVar4 = FUN_100152280();
    lVar5 = FUN_1001548f0(uVar4,puVar1);
    if (lVar5 != 0) {
      uVar4 = FUN_10018c2b0(lVar5);
      cVar2 = FUN_100112cc0(uVar4);
      if (cVar2 == '\0') {
        FUN_1007bfc60(param_1);
      }
    }
    goto LAB_1007baefa;
  case 8:
    lVar5 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16f8,0);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get network device instance";
      goto LAB_1007bb2ed;
    }
    iVar3 = CVmDevice::getEmulatedType();
    if (iVar3 != 4) {
      iVar3 = CVmGenericNetworkAdapter::getBoundAdapterIndex();
      QString::number((int)&local_78,iVar3);
      FUN_1007bff90(param_1,&local_78);
      if (*(int *)local_78 != -1) {
        local_50 = local_78;
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          iVar3 = *(int *)local_78;
          UNLOCK();
          goto joined_r0x0001007bad35;
        }
        goto LAB_1007bad3f;
      }
      break;
    }
    goto LAB_1007baefa;
  case 10:
    FUN_1007bf260(param_1);
    break;
  case 0xb:
    lVar5 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16c0,0);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get parallel port instance";
      goto LAB_1007bb2ed;
    }
    CVmDevice::getSystemName();
    FUN_1007bf0a0(param_1,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        iVar3 = *(int *)local_50;
        UNLOCK();
        goto joined_r0x0001007bad35;
      }
      goto LAB_1007bad3f;
    }
    break;
  case 0xc:
    lVar5 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b8,0);
    if (lVar5 == 0) {
      pcVar6 = "(!)Error: can\'t get sound device instance";
      goto LAB_1007bb2ed;
    }
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    lVar5 = CVmSoundDevice::getSoundInputs();
    if (*(int *)(*(long *)(lVar5 + 0xa8) + 0xc) != *(int *)(*(long *)(lVar5 + 0xa8) + 8)) {
      CVmSoundDevice::getSoundInputs();
      CVmDevice::getSystemName();
      QString::operator=(&local_58,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007badfb;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
    }
LAB_1007badfb:
    lVar5 = CVmSoundDevice::getSoundOutputs();
    if (*(int *)(*(long *)(lVar5 + 0xa8) + 0xc) != *(int *)(*(long *)(lVar5 + 0xa8) + 8)) {
      CVmSoundDevice::getSoundOutputs();
      CVmDevice::getSystemName();
      QString::operator=(&local_60,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_29 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007bae70;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
LAB_1007bae70:
    FUN_1007bfdb0(param_1,&local_58,&local_60);
    FUN_1007bec40(param_1);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007baeb8;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1007baeb8:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007baefa;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
    goto LAB_1007baefa;
  case 0xf:
    FUN_1007c0ba0(param_1);
  }
  FUN_1007bec40(param_1);
LAB_1007baefa:
  iVar3 = *(int *)((long)&param_1[1].field2_0x10 + 6);
switchD_1007baabb_caseD_4:
  if ((iVar3 == 3) || (iVar3 == 0xc)) {
    EnumUtils::enumToString(&local_88);
    QMenu::setTitle((QString *)param_1);
    if (*(int *)local_88 == -1) goto LAB_1007bb165;
    if (*(int *)local_88 == 0) goto LAB_1007bb156;
    LOCK();
    *(int *)local_88 = *(int *)local_88 + -1;
    iVar3 = *(int *)local_88;
    UNLOCK();
joined_r0x0001007baf42:
    local_29 = iVar3 != 0;
    if (!(bool)local_29) {
LAB_1007bb156:
      QArrayData::deallocate(local_88,2,8);
    }
  }
  else if (iVar3 == 0xf) {
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1e184b9);
    QMenu::setTitle((QString *)param_1);
    if (*(int *)local_80 != -1) {
      local_88 = local_80;
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007bb165;
      }
      goto LAB_1007bb156;
    }
  }
  else {
    EnumUtils::enumToString(&local_a0);
    local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a0;
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1e31adc);
    QString::append(&local_98);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007bb035;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1007bb035:
    QString::number((uint)&local_a8,*(int *)&param_1[1].field4_0x1a + 1);
    local_90.field0_0x0 = local_98.field0_0x0;
    if (1 < *(int *)local_98.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_90);
    QMenu::setTitle((QString *)param_1);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_29 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007bb0c3;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1007bb0c3:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007bb0f9;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1007bb0f9:
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_29 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007bb12f;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1007bb12f:
    if (*(int *)local_a0 != -1) {
      local_88 = local_a0;
      if (*(int *)local_a0 == 0) goto LAB_1007bb156;
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      iVar3 = *(int *)local_a0;
      UNLOCK();
      goto joined_r0x0001007baf42;
    }
  }
LAB_1007bb165:
  FUN_1007c5b80(&local_c8,(undefined1 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
  local_c0 = (long *)(local_c8 + (long)local_c8[2] * 2 + 4);
  local_b8 = (long *)(local_c8 + (long)local_c8[3] * 2 + 4);
  if (local_c8[2] != local_c8[3]) {
    do {
      local_b0 = 1;
      lVar5 = *(long *)*local_c0;
      if (((lVar5 != 0) && (*(int *)(lVar5 + 4) != 0)) &&
         (lVar5 = ((long *)*local_c0)[1], lVar5 != 0)) {
        FUN_1007be4f0(param_1,lVar5,0,0);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 != local_b8);
  }
  local_b0 = 1;
  if (*local_c8 != -1) {
    if (*local_c8 != 0) {
      LOCK();
      *local_c8 = *local_c8 + -1;
      local_29 = *local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bb22e;
    }
    FUN_1007c5ae0(&local_c8,local_c8);
  }
LAB_1007bb22e:
  WidgetUtils::normalizeSeparators(param_1,true);
  return;
}

