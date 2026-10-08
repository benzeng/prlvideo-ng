
void FUN_1007bb7c0(long param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  QString local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QArrayData *local_190;
  QString local_188;
  Data *local_180;
  Data *local_178;
  Data *local_170;
  undefined4 local_168;
  QArrayData *local_160;
  Data *local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  QString local_138;
  QString local_130;
  Data *local_128;
  Data *local_120;
  Data *local_118;
  undefined4 local_110;
  QArrayData *local_108;
  Data *local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  Data *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  Data *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    local_48 = *(QArrayData **)(param_1 + 0x30);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",4,"Updating device set for VM %s...",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bb86a;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1007bb86a:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bb89a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1007bb89a:
  iVar4 = *(int *)(param_1 + 0x40);
  iVar3 = (**(code **)(*param_2 + 0x68))(param_2);
  if (iVar4 != iVar3) {
    pcVar10 = "(!)Error: wrong device type.";
LAB_1007bb978:
    FUN_100df99c0("","prl_client_app",0,pcVar10);
    return;
  }
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001547d0(uVar6,param_1 + 0x30);
  if (lVar7 == 0) {
    pcVar10 = "(!)Error: can\'t get server instance.";
    goto LAB_1007bb978;
  }
  if (*(int *)(param_1 + 0x40) == 0xf) {
    cVar1 = FUN_1001b3930(lVar7,param_1 + 0x30);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x50) = 1;
      lVar8 = FUN_1007bd870(param_1,2);
      lVar9 = FUN_1007bd870(param_1,3);
      if ((lVar8 != 0) && (lVar9 != 0)) {
        FUN_1001324d0(lVar8,1);
        bVar11 = false;
        goto LAB_1007bba2e;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 2;
      lVar8 = FUN_1007bd870(param_1,2);
      lVar9 = FUN_1007bd870(param_1,3);
      if ((lVar8 != 0) && (lVar9 != 0)) {
        FUN_1001324d0(lVar8,0);
        bVar11 = true;
LAB_1007bba2e:
        FUN_1001324d0(lVar9,bVar11);
      }
    }
  }
  else {
    iVar4 = CVmDevice::getConnected();
    *(int *)(param_1 + 0x50) = iVar4;
    lVar8 = FUN_1007bd870(param_1,2);
    lVar9 = FUN_1007bd870(param_1,3);
    if ((lVar8 != 0) && (lVar9 != 0)) {
      bVar11 = iVar4 != 1;
      FUN_1001324d0(lVar8,iVar4 == 1);
      goto LAB_1007bba2e;
    }
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0x11) {
LAB_1007bba84:
    FUN_10019f290(&local_50,lVar7,param_2,*(undefined4 *)(param_1 + 0x44));
    QString::operator=((QString *)(param_1 + 0x60),&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bbadd;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1007bbadd:
    FUN_100863f30(param_1);
    return;
  }
  if (iVar4 == 6) {
    cVar1 = FUN_1001754c0(lVar7,1);
    if (cVar1 == '\0') goto LAB_1007bba84;
    iVar4 = *(int *)(param_1 + 0x40);
  }
  if ((iVar4 == 0x14) || (iVar4 == 0x12)) goto LAB_1007bba84;
  if (iVar4 == 8) {
    iVar4 = CVmDevice::getEmulatedType();
    if (iVar4 == 4) goto LAB_1007bba84;
    iVar4 = *(int *)(param_1 + 0x40);
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(iVar4) {
  case 3:
    cVar1 = '\b';
    FUN_1007c4cf0(param_1,8);
    goto LAB_1007bbddc;
  default:
    CVmDevice::getUserFriendlyName();
    EnumUtils::getLocalizedDeviceName(&local_198);
    QString::operator=(&local_58,&local_198);
    if (*(int *)local_198.field0_0x0 != -1) {
      if (*(int *)local_198.field0_0x0 != 0) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
        local_31 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bbba7;
      }
      QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
    }
LAB_1007bbba7:
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
    break;
  case 5:
    FUN_1007c4cf0(param_1,4);
    lVar9 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b0,0);
    if (lVar9 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get optical device instance.");
      goto LAB_1007bca18;
    }
    CVmDevice::getSystemName();
    FUN_1007bd9d0(&local_100,param_1,&local_108,4,0);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bbc7e;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_1007bbc7e:
    local_128 = local_100;
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 == 0) {
        QListData::detach((int)&local_128);
        lVar9 = (long)*(int *)(local_128 + 8);
        if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_128 + lVar9 * 8) &&
           (lVar8 = *(int *)(local_128 + 0xc) - lVar9,
           lVar8 != 0 && lVar9 <= *(int *)(local_128 + 0xc))) {
          _memcpy(local_128 + lVar9 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                  lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + 1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
      }
    }
    local_120 = local_128 + (long)*(int *)(local_128 + 8) * 8 + 0x10;
    local_118 = local_128 + (long)*(int *)(local_128 + 0xc) * 8 + 0x10;
    if (*(int *)(local_128 + 8) != *(int *)(local_128 + 0xc)) {
      do {
        local_110 = 1;
        uVar6 = *(undefined8 *)local_120;
        FUN_1007b5cb0(&local_130,uVar6);
        CVmDevice::getUserFriendlyName();
        EnumUtils::getLocalizedDeviceName(&local_138);
        cVar1 = operator==(&local_130,&local_138);
        if (*(int *)local_138.field0_0x0 != -1) {
          if (*(int *)local_138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
            local_31 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007bc3f3;
          }
          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
        }
LAB_1007bc3f3:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007bc429;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1007bc429:
        if (*(int *)local_130.field0_0x0 != -1) {
          if (*(int *)local_130.field0_0x0 != 0) {
            LOCK();
            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
            local_31 = *(int *)local_130.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007bc45f;
          }
          QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
        }
LAB_1007bc45f:
        if (cVar1 != '\0') {
          FUN_1001324d0(uVar6,1);
        }
        local_120 = local_120 + 8;
      } while (local_120 != local_118);
    }
    local_110 = 1;
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc4d0;
      }
      QListData::dispose(local_128);
    }
LAB_1007bc4d0:
    CVmDevice::getUserFriendlyName();
    EnumUtils::getLocalizedDeviceName(&local_148);
    QString::operator=(&local_58,&local_148);
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_31 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc538;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
LAB_1007bc538:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc56e;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_1007bc56e:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QListData::dispose(local_100);
    }
    break;
  case 8:
    lVar9 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16f8,0);
    if (lVar9 != 0) {
      iVar4 = CVmDevice::getEmulatedType();
      if (iVar4 == 4) {
        FUN_10019f290(&local_e0,lVar7,param_2,*(undefined4 *)(param_1 + 0x44));
        QString::operator=((QString *)(param_1 + 0x60),&local_e0);
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007bbd8b;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_1007bbd8b:
        FUN_100863f30(param_1);
        goto LAB_1007bca18;
      }
      CVmGenericNetworkAdapter::getBoundAdapterName();
      QString::operator=(&local_58,&local_e8);
      iVar4 = CVmGenericNetworkAdapter::getBoundAdapterIndex();
      iVar3 = CVmDevice::getEmulatedType();
      if (iVar3 == 5) {
        QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Routed_10226e7b0
                       );
        QString::operator=(&local_58,&local_f0);
        if (*(int *)local_f0.field0_0x0 != -1) {
          if (*(int *)local_f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
            local_31 = *(int *)local_f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007bc618;
          }
          QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
        }
      }
      else if (iVar4 == -1) {
        QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Default_Adapter_10226e7b8);
        QString::operator=(&local_58,&local_f8);
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007bc618;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
      }
LAB_1007bc618:
      uVar5 = CVmDevice::getEmulatedType();
      FUN_1007c47a0(param_1,iVar4,uVar5);
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
      break;
    }
    CVmDevice::getUserFriendlyName();
    QString::toUtf8();
    if ((1 < *(uint *)local_d0) || (*(long *)(local_d0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_d0,*(uint *)(local_d0 + 4) + 1,*(uint *)(local_d0 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get network adapter instance to update control for device %s",
                  local_d0 + *(long *)(local_d0 + 0x10));
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc1f0;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_1007bc1f0:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bca18;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
    goto LAB_1007bca18;
  case 10:
    cVar1 = '\x06';
    FUN_1007c4cf0(param_1,6);
    goto LAB_1007bbddc;
  case 0xb:
    iVar4 = CVmDevice::getEmulatedType();
    FUN_1007c4cf0(param_1,5);
    FUN_1007c4cf0(param_1,7);
    cVar1 = (iVar4 == 0) * '\x02' + '\x05';
LAB_1007bbddc:
    CVmDevice::getSystemName();
    uVar2 = CVmDevice::isRemote();
    FUN_1007bd9d0(&local_158,param_1,&local_160,cVar1,uVar2);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bbe45;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_1007bbe45:
    local_180 = local_158;
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 == 0) {
        QListData::detach((int)&local_180);
        lVar9 = (long)*(int *)(local_180 + 8);
        if ((local_158 + (long)*(int *)(local_158 + 8) * 8 != local_180 + lVar9 * 8) &&
           (lVar8 = *(int *)(local_180 + 0xc) - lVar9,
           lVar8 != 0 && lVar9 <= *(int *)(local_180 + 0xc))) {
          _memcpy(local_180 + lVar9 * 8 + 0x10,local_158 + (long)*(int *)(local_158 + 8) * 8 + 0x10,
                  lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + 1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
      }
    }
    local_178 = local_180 + (long)*(int *)(local_180 + 8) * 8 + 0x10;
    local_170 = local_180 + (long)*(int *)(local_180 + 0xc) * 8 + 0x10;
    if (*(int *)(local_180 + 8) != *(int *)(local_180 + 0xc)) {
      do {
        local_168 = 1;
        FUN_1001324d0(*(undefined8 *)local_178,1);
        local_178 = local_178 + 8;
      } while (local_178 != local_170);
    }
    local_168 = 1;
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc06b;
      }
      QListData::dispose(local_180);
    }
LAB_1007bc06b:
    CVmDevice::getUserFriendlyName();
    EnumUtils::getLocalizedDeviceName(&local_188);
    QString::operator=(&local_58,&local_188);
    if (*(int *)local_188.field0_0x0 != -1) {
      if (*(int *)local_188.field0_0x0 != 0) {
        LOCK();
        *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
        local_31 = *(int *)local_188.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc0d3;
      }
      QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
    }
LAB_1007bc0d3:
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc109;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_1007bc109:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QListData::dispose(local_158);
    }
    break;
  case 0xc:
    lVar9 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b8,0);
    if (lVar9 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get sound device instance.");
      goto LAB_1007bca18;
    }
    lVar9 = CVmSoundDevice::getSoundOutputs();
    if (*(int *)(*(long *)(lVar9 + 0xa8) + 0xc) != *(int *)(*(long *)(lVar9 + 0xa8) + 8)) {
      CVmSoundDevice::getSoundOutputs();
      CVmDevice::getSystemName();
      CVmSoundDevice::getSoundOutputs();
      CVmDevice::getUserFriendlyName();
      FUN_1007bd9d0(&local_70,param_1,&local_60,2,0);
      local_90 = local_70;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 == 0) {
          QListData::detach((int)&local_90);
          lVar9 = (long)*(int *)(local_90 + 8);
          if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_90 + lVar9 * 8) &&
             (lVar8 = *(int *)(local_90 + 0xc) - lVar9,
             lVar8 != 0 && lVar9 <= *(int *)(local_90 + 0xc))) {
            _memcpy(local_90 + lVar9 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                    lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
      }
      local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
      local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
      if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
        do {
          local_78 = 1;
          FUN_1001324d0(*(undefined8 *)local_88,1);
          local_88 = local_88 + 8;
        } while (local_88 != local_80);
      }
      local_78 = 1;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007bc6f9;
        }
        QListData::dispose(local_90);
      }
LAB_1007bc6f9:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007bc71f;
        }
        QListData::dispose(local_70);
      }
LAB_1007bc71f:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007bc74f;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1007bc74f:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007bc77f;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
LAB_1007bc77f:
    lVar9 = CVmSoundDevice::getSoundInputs();
    if (*(int *)(*(long *)(lVar9 + 0xa8) + 0xc) == *(int *)(*(long *)(lVar9 + 0xa8) + 8)) break;
    CVmSoundDevice::getSoundInputs();
    CVmDevice::getSystemName();
    CVmSoundDevice::getSoundInputs();
    CVmDevice::getUserFriendlyName();
    FUN_1007bd9d0(&local_a8,param_1,&local_98,3,0);
    local_c8 = local_a8;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 == 0) {
        QListData::detach((int)&local_c8);
        lVar9 = (long)*(int *)(local_c8 + 8);
        if ((local_a8 + (long)*(int *)(local_a8 + 8) * 8 != local_c8 + lVar9 * 8) &&
           (lVar8 = *(int *)(local_c8 + 0xc) - lVar9,
           lVar8 != 0 && lVar9 <= *(int *)(local_c8 + 0xc))) {
          _memcpy(local_c8 + lVar9 * 8 + 0x10,local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10,
                  lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
    }
    local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
    local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
    if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
      do {
        local_b0 = 1;
        FUN_1001324d0(*(undefined8 *)local_c0,1);
        local_c0 = local_c0 + 8;
      } while (local_c0 != local_b8);
    }
    local_b0 = 1;
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc904;
      }
      QListData::dispose(local_c8);
    }
LAB_1007bc904:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc930;
      }
      QListData::dispose(local_a8);
    }
LAB_1007bc930:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007bc966;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1007bc966:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
  uVar5 = CVmDevice::getEmulatedType();
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  FUN_1007c3bb0(param_1,&local_58);
  FUN_10019f290(&local_1a8,lVar7,param_2,*(undefined4 *)(param_1 + 0x44));
  QString::operator=((QString *)(param_1 + 0x60),&local_1a8);
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      local_31 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007bca10;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
LAB_1007bca10:
  FUN_100863f30(param_1);
LAB_1007bca18:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

