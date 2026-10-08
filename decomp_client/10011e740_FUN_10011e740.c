
undefined8 * FUN_10011e740(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  CParallelsNetworkConfig *pCVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QString local_2a0;
  QArrayData *local_298;
  QString local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QString local_278;
  QString local_270;
  QArrayData *local_268;
  QString local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QString local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QString local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QString local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QString local_1e0;
  QArrayData *local_1d8;
  QString local_1d0;
  QArrayData *local_1c8;
  Data *local_1c0;
  Data *local_1b8;
  Data *local_1b0;
  undefined4 local_1a8;
  CParallelsNetworkConfig local_1a0 [216];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001547d0(uVar7,&local_c0);
  if (lVar8 == 0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get server wraper for VM=%s",
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011e89e;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_10011e89e:
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_10011fd10;
  }
  pCVar9 = (CParallelsNetworkConfig *)FUN_100175410(lVar8);
  CParallelsNetworkConfig::CParallelsNetworkConfig(local_1a0,pCVar9);
  lVar8 = CVmConfiguration::getVmHardwareList();
  local_1c0 = *(Data **)(lVar8 + 0x1d0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 == 0) {
      QListData::detach((int)&local_1c0);
      lVar10 = (long)*(int *)(local_1c0 + 8);
      lVar8 = *(long *)(lVar8 + 0x1d0);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_1c0 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_1c0 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_1c0 + 0xc))) {
        _memcpy(local_1c0 + lVar10 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8)
                ,lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + 1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
    }
  }
  local_1b8 = local_1c0 + (long)*(int *)(local_1c0 + 8) * 8 + 0x10;
  local_1b0 = local_1c0 + (long)*(int *)(local_1c0 + 0xc) * 8 + 0x10;
  local_2b4 = 0;
  iVar12 = 0;
  local_2bc = 0;
  local_2b8 = 0;
  uVar13 = 0;
  uVar14 = 0;
  if (*(int *)(local_1c0 + 8) != *(int *)(local_1c0 + 0xc)) {
    local_2b4 = 0;
    iVar12 = 0;
    local_2bc = 0;
    local_2b8 = 0;
    uVar13 = 0;
    uVar14 = 0;
    do {
      local_1a8 = 1;
      iVar5 = CVmDevice::getEnabled();
      if (iVar5 == 1) {
        iVar5 = CVmDevice::getEmulatedType();
        if (iVar5 == 5) {
          uVar13 = uVar13 + 1;
        }
        else if (iVar5 == 4) {
          iVar12 = iVar12 + 1;
        }
        else {
          uVar6 = CVmDevice::getEmulatedType();
          CVmGenericNetworkAdapter::getVirtualNetworkID();
          lVar8 = FUN_100b41be0(local_1a0,uVar6,&local_1c8);
          if (*(int *)local_1c8 != -1) {
            if (*(int *)local_1c8 != 0) {
              LOCK();
              *(int *)local_1c8 = *(int *)local_1c8 + -1;
              local_31 = *(int *)local_1c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011e9f6;
            }
            QArrayData::deallocate(local_1c8,2,8);
          }
LAB_10011e9f6:
          if (lVar8 == 0) {
LAB_10011ea26:
            local_2b4 = local_2b4 + 1;
          }
          else {
            iVar5 = FUN_10012f780(lVar8);
            if (iVar5 == 0) {
              uVar14 = uVar14 + 1;
            }
            else if (iVar5 == 1) {
              local_2b8 = local_2b8 + 1;
            }
            else {
              if (iVar5 != 2) goto LAB_10011ea26;
              local_2bc = local_2bc + 1;
            }
          }
        }
      }
      local_1b8 = local_1b8 + 8;
    } while (local_1b8 != local_1b0);
  }
  local_1a8 = 1;
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011ea8c;
    }
    QListData::dispose(local_1c0);
  }
LAB_10011ea8c:
  puVar4 = PTR_s_Shared_10226f940;
  puVar3 = PTR_s_Host_Only_10226f938;
  puVar2 = PTR_s_Routed_10226e7b0;
  puVar1 = PTR_s_Invalid_10226e780;
  local_1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar5 = (int)PTR_s_Bridged_10226f948;
  if (uVar14 == 1) {
    QMetaObject::tr((char *)&local_1d8,PTR_staticMetaObject_1021e1520,iVar5);
    QString::append(&local_1d0);
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_31 = *(int *)local_1d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011eced;
      }
      QArrayData::deallocate(local_1d8,2,8);
    }
  }
  else if (1 < uVar14) {
    QString::number((uint)&local_1e8,uVar14);
    local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1e8;
    if (1 < *(int *)local_1e8 + 1U) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + 1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_b8,0x1e31adc);
    QString::append(&local_1e0);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011ec07;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10011ec07:
    QString::append(&local_1d0);
    if (*(int *)local_1e0.field0_0x0 != -1) {
      if (*(int *)local_1e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
        local_31 = *(int *)local_1e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011ec50;
      }
      QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
    }
LAB_10011ec50:
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011ec86;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
LAB_10011ec86:
    QMetaObject::tr((char *)&local_1f0,PTR_staticMetaObject_1021e1520,iVar5);
    QString::append(&local_1d0);
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011eced;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
  }
LAB_10011eced:
  if (local_2bc == 1) {
    if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_b0,0x1dc0962);
      QString::append(&local_1d0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011ed6a;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
    }
LAB_10011ed6a:
    QMetaObject::tr((char *)&local_1f8,PTR_staticMetaObject_1021e1520,(int)puVar4);
    QString::append(&local_1d0);
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011efd8;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
  }
  else if (1 < local_2bc) {
    if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_a8,0x1dc0962);
      QString::append(&local_1d0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011ee5b;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_10011ee5b:
    QString::number((uint)&local_208,local_2bc);
    local_200.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_208;
    if (1 < *(int *)local_208 + 1U) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + 1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_a0,0x1e31adc);
    QString::append(&local_200);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011eeee;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10011eeee:
    QString::append(&local_1d0);
    if (*(int *)local_200.field0_0x0 != -1) {
      if (*(int *)local_200.field0_0x0 != 0) {
        LOCK();
        *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
        local_31 = *(int *)local_200.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011ef37;
      }
      QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
    }
LAB_10011ef37:
    if (*(int *)local_208 != -1) {
      if (*(int *)local_208 != 0) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + -1;
        local_31 = *(int *)local_208 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011ef6d;
      }
      QArrayData::deallocate(local_208,2,8);
    }
LAB_10011ef6d:
    QMetaObject::tr((char *)&local_210,PTR_staticMetaObject_1021e1520,(int)puVar4);
    QString::append(&local_1d0);
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_31 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011efd8;
      }
      QArrayData::deallocate(local_210,2,8);
    }
  }
LAB_10011efd8:
  if (local_2b8 == 1) {
    if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_98,0x1dc0962);
      QString::append(&local_1d0);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f055;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_10011f055:
    QMetaObject::tr((char *)&local_218,PTR_staticMetaObject_1021e1520,(int)puVar3);
    QString::append(&local_1d0);
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f2b7;
      }
      QArrayData::deallocate(local_218,2,8);
    }
  }
  else if (1 < local_2b8) {
    if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_90,0x1dc0962);
      QString::append(&local_1d0);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f146;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    }
LAB_10011f146:
    QString::number((uint)&local_228,local_2b8);
    local_220.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_228;
    if (1 < *(int *)local_228 + 1U) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + 1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_88,0x1e31adc);
    QString::append(&local_220);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f1cd;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10011f1cd:
    QString::append(&local_1d0);
    if (*(int *)local_220.field0_0x0 != -1) {
      if (*(int *)local_220.field0_0x0 != 0) {
        LOCK();
        *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
        local_31 = *(int *)local_220.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f216;
      }
      QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
    }
LAB_10011f216:
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f24c;
      }
      QArrayData::deallocate(local_228,2,8);
    }
LAB_10011f24c:
    QMetaObject::tr((char *)&local_230,PTR_staticMetaObject_1021e1520,(int)puVar3);
    QString::append(&local_1d0);
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_31 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f2b7;
      }
      QArrayData::deallocate(local_230,2,8);
    }
  }
LAB_10011f2b7:
  if (local_2b4 == 1) {
    if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_80,0x1dc0962);
      QString::append(&local_1d0);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f328;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
LAB_10011f328:
    QMetaObject::tr((char *)&local_238,PTR_staticMetaObject_1021e1520,(int)puVar1);
    QString::append(&local_1d0);
    if (*(int *)local_238 != -1) {
      if (*(int *)local_238 != 0) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + -1;
        local_31 = *(int *)local_238 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f57e;
      }
      QArrayData::deallocate(local_238,2,8);
    }
  }
  else if (1 < local_2b4) {
    if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_78,0x1dc0962);
      QString::append(&local_1d0);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f40d;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
LAB_10011f40d:
    QString::number((uint)&local_248,local_2b4);
    local_240.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_248;
    if (1 < *(int *)local_248 + 1U) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + 1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_70,0x1e31adc);
    QString::append(&local_240);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f494;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10011f494:
    QString::append(&local_1d0);
    if (*(int *)local_240.field0_0x0 != -1) {
      if (*(int *)local_240.field0_0x0 != 0) {
        LOCK();
        *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
        local_31 = *(int *)local_240.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f4dd;
      }
      QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
    }
LAB_10011f4dd:
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f513;
      }
      QArrayData::deallocate(local_248,2,8);
    }
LAB_10011f513:
    QMetaObject::tr((char *)&local_250,PTR_staticMetaObject_1021e1520,(int)puVar1);
    QString::append(&local_1d0);
    if (*(int *)local_250 != -1) {
      if (*(int *)local_250 != 0) {
        LOCK();
        *(int *)local_250 = *(int *)local_250 + -1;
        local_31 = *(int *)local_250 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f57e;
      }
      QArrayData::deallocate(local_250,2,8);
    }
  }
LAB_10011f57e:
  iVar5 = (int)puVar2;
  if (uVar13 == 1) {
    if (*(int *)(local_1d0.field0_0x0 + 4) == 0) {
      QMetaObject::tr((char *)&local_258,PTR_staticMetaObject_1021e1520,iVar5);
      QString::append(&local_1d0);
      if (*(int *)local_258 != -1) {
        if (*(int *)local_258 != 0) {
          LOCK();
          *(int *)local_258 = *(int *)local_258 + -1;
          local_31 = *(int *)local_258 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f9ec;
        }
        QArrayData::deallocate(local_258,2,8);
      }
    }
    else {
      QMetaObject::tr((char *)&local_268,PTR_staticMetaObject_1021e1520,iVar5);
      local_260.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_268;
      if (1 < *(int *)local_268 + 1U) {
        LOCK();
        *(int *)local_268 = *(int *)local_268 + 1;
        local_31 = *(int *)local_268 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_68,0x1dc0962);
      QString::append(&local_260);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f62f;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10011f62f:
      QString::insert((int)&local_1d0,(QChar *)0x0,
                      (int)*(undefined8 *)(local_260.field0_0x0 + 0x10) + (int)local_260.field0_0x0)
      ;
      if (*(int *)local_260.field0_0x0 != -1) {
        if (*(int *)local_260.field0_0x0 != 0) {
          LOCK();
          *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
          local_31 = *(int *)local_260.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f684;
        }
        QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
      }
LAB_10011f684:
      if (*(int *)local_268 != -1) {
        if (*(int *)local_268 != 0) {
          LOCK();
          *(int *)local_268 = *(int *)local_268 + -1;
          local_31 = *(int *)local_268 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f9ec;
        }
        QArrayData::deallocate(local_268,2,8);
      }
    }
  }
  else {
    if (uVar13 < 2) goto LAB_10011f9ec;
    QString::number((uint)&local_280,uVar13);
    local_278.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_280;
    if (1 < *(int *)local_280 + 1U) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + 1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_60,0x1e31adc);
    QString::append(&local_278);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f759;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10011f759:
    QMetaObject::tr((char *)&local_288,PTR_staticMetaObject_1021e1520,iVar5);
    local_270.field0_0x0 = local_278.field0_0x0;
    if (1 < *(int *)local_278.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + 1;
      local_31 = *(int *)local_278.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_270);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f7e3;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_10011f7e3:
    if (*(int *)local_278.field0_0x0 != -1) {
      if (*(int *)local_278.field0_0x0 != 0) {
        LOCK();
        *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
        local_31 = *(int *)local_278.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f819;
      }
      QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
    }
LAB_10011f819:
    if (*(int *)local_280 != -1) {
      if (*(int *)local_280 != 0) {
        LOCK();
        *(int *)local_280 = *(int *)local_280 + -1;
        local_31 = *(int *)local_280 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f84f;
      }
      QArrayData::deallocate(local_280,2,8);
    }
LAB_10011f84f:
    if (*(int *)(local_1d0.field0_0x0 + 4) == 0) {
      QString::append(&local_1d0);
    }
    else {
      local_290.field0_0x0 = local_270.field0_0x0;
      if (1 < *(int *)local_270.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + 1;
        local_31 = *(int *)local_270.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_58,0x1dc0962);
      QString::append(&local_290);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f8d4;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10011f8d4:
      QString::insert((int)&local_1d0,(QChar *)0x0,
                      (int)*(undefined8 *)(local_290.field0_0x0 + 0x10) + (int)local_290.field0_0x0)
      ;
      if (*(int *)local_290.field0_0x0 != -1) {
        if (*(int *)local_290.field0_0x0 != 0) {
          LOCK();
          *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
          local_31 = *(int *)local_290.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011f9b6;
        }
        QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
      }
    }
LAB_10011f9b6:
    if (*(int *)local_270.field0_0x0 != -1) {
      if (*(int *)local_270.field0_0x0 != 0) {
        LOCK();
        *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
        local_31 = *(int *)local_270.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011f9ec;
      }
      QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
    }
  }
LAB_10011f9ec:
  if (iVar12 != 0) {
    if (iVar12 == 1) {
      if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_50,0x1dc0962);
        QString::append(&local_1d0);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10011fa61;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
LAB_10011fa61:
      QMetaObject::tr((char *)&local_298,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Direct_Assignment_10226e778);
      QString::append(&local_1d0);
      if (*(int *)local_298 != -1) {
        if (*(int *)local_298 != 0) {
          LOCK();
          *(int *)local_298 = *(int *)local_298 + -1;
          local_31 = *(int *)local_298 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011fcb3;
        }
        QArrayData::deallocate(local_298,2,8);
      }
    }
    else {
      if (*(int *)(local_1d0.field0_0x0 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_48,0x1dc0962);
        QString::append(&local_1d0);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10011fb3e;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_10011fb3e:
      QString::number((uint)&local_2a8,iVar12);
      local_2a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2a8;
      if (1 < *(int *)local_2a8 + 1U) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + 1;
        local_31 = *(int *)local_2a8 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
      QString::append(&local_2a0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011fbc6;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10011fbc6:
      QString::append(&local_1d0);
      if (*(int *)local_2a0.field0_0x0 != -1) {
        if (*(int *)local_2a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
          local_31 = *(int *)local_2a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011fc0f;
        }
        QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
      }
LAB_10011fc0f:
      if (*(int *)local_2a8 != -1) {
        if (*(int *)local_2a8 != 0) {
          LOCK();
          *(int *)local_2a8 = *(int *)local_2a8 + -1;
          local_31 = *(int *)local_2a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011fc45;
        }
        QArrayData::deallocate(local_2a8,2,8);
      }
LAB_10011fc45:
      QMetaObject::tr((char *)&local_2b0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Direct_Assignment_10226e778);
      QString::append(&local_1d0);
      if (*(int *)local_2b0 != -1) {
        if (*(int *)local_2b0 != 0) {
          LOCK();
          *(int *)local_2b0 = *(int *)local_2b0 + -1;
          local_31 = *(int *)local_2b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011fcb3;
        }
        QArrayData::deallocate(local_2b0,2,8);
      }
    }
  }
LAB_10011fcb3:
  *param_1 = local_1d0.field0_0x0;
  if (1 < *(int *)local_1d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + 1;
    local_31 = *(int *)local_1d0.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_31 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011fd04;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_10011fd04:
  CParallelsNetworkConfig::~CParallelsNetworkConfig(local_1a0);
LAB_10011fd10:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      UNLOCK();
      if (*(int *)local_c0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
  return param_1;
}

