
void FUN_10079a3f0(long param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 extraout_AH;
  void *pvVar4;
  char *pcVar5;
  size_t sVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_1e0;
  QVariant local_1d8;
  void *local_1c8;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QVariant local_150;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
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
  
  if (param_2 == (char *)0x0) {
    return;
  }
  pvVar4 = operator_new(0xb0);
  FUN_10072d1f0(pvVar4,*(undefined8 *)(param_1 + 0x20));
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_c8 + *(long *)(local_c8 + 0x10),*(undefined4 *)(local_c8 + 4),
                     PTR_s_Windows_10_development_102275048,0xffffffff,1);
  if (iVar2 == 0) {
    QMetaObject::tr((char *)&local_c0,(char *)&PTR_staticMetaObject_10222c4e0,
                    (int)PTR_s_Windows_10_Development_Environme_102270928);
  }
  else {
    CAppliance::getApplianceName();
  }
  FUN_10072e0e0(pvVar4,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079a51a;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10079a51a:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079a550;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10079a550:
  local_d0 = (QArrayData *)QString::fromAscii_helper("PageTitle",9);
  pcVar5 = (char *)qt_qFindChild_helper(param_2,&local_d0,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079a5bc;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10079a5bc:
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_f0 + *(long *)(local_f0 + 0x10),*(undefined4 *)(local_f0 + 4),
                     PTR_s_Windows_10_development_102275048,0xffffffff,1);
  if (iVar2 == 0) {
    QMetaObject::tr((char *)&local_e8,(char *)&PTR_staticMetaObject_10222c4e0,
                    (int)PTR_s_Windows_10_Development_Environme_102270928);
  }
  else {
    QMetaObject::tr((char *)&local_f8,(char *)&PTR_staticMetaObject_10222c4e0,0x1e05b8e);
    CAppliance::getApplianceName();
    QString::arg(&local_e8,&local_f8,&local_100,0,0x20);
  }
  QVariant::QVariant(&local_e0,&local_e8);
  QObject::setProperty(pcVar5,(QVariant *)"text");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079a718;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_10079a718:
  if (iVar2 != 0) {
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079a752;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_10079a752:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079a788;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
  }
LAB_10079a788:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079a7be;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10079a7be:
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_108 + *(long *)(local_108 + 0x10),*(undefined4 *)(local_108 + 4),
                     PTR_s_ModernIE_102275038,0xffffffff,1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079a852;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10079a852:
  if (iVar2 == 0) {
    local_110 = (QArrayData *)QString::fromAscii_helper("qrc:/Modern_ie.png",0x12);
    FUN_10072e630(pvVar4,&local_110);
    if (*(int *)local_110 != -1) {
      pQVar7 = local_110;
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        iVar2 = *(int *)local_110;
        UNLOCK();
joined_r0x00010079a98b:
        local_31 = iVar2 != 0;
        if ((bool)local_31) goto LAB_10079a9a3;
      }
LAB_10079a994:
      QArrayData::deallocate(pQVar7,2,8);
    }
  }
  else {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_118 + *(long *)(local_118 + 0x10),*(undefined4 *)(local_118 + 4),
                       PTR_s_GetTrialWindows_102275040,0xffffffff,1);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079a8e6;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_10079a8e6:
    if (iVar2 == 0) {
      local_120 = (QArrayData *)QString::fromAscii_helper("qrc:/GetTrialWindows.png",0x18);
      FUN_10072e630(pvVar4,&local_120);
      if (*(int *)local_120 != -1) {
        pQVar7 = local_120;
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          iVar2 = *(int *)local_120;
          UNLOCK();
          goto joined_r0x00010079a98b;
        }
        goto LAB_10079a994;
      }
    }
  }
LAB_10079a9a3:
  local_128 = (QArrayData *)QString::fromAscii_helper("descriptionItem",0xf);
  pcVar5 = (char *)qt_qFindChild_helper(param_2,&local_128,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079aa0f;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10079aa0f:
  if (pcVar5 != (char *)0x0) {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_140 + *(long *)(local_140 + 0x10),*(undefined4 *)(local_140 + 4),
                       PTR_s_GetTrialWindows_102275040,0xffffffff,1);
    QVariant::QVariant(&local_138,iVar2 != 0);
    QObject::setProperty(pcVar5,(QVariant *)"visible");
    QVariant::~QVariant(&local_138);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079aad8;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_10079aad8:
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_160 + *(long *)(local_160 + 0x10),*(undefined4 *)(local_160 + 4),
                       PTR_s_ModernIE_102275038,0xffffffff,1);
    if (iVar2 == 0) {
      bVar9 = false;
      QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Test_Environments_102270918);
    }
    else {
      CAppliance::getType();
      iVar2 = QString::compare_helper
                        (local_168 + *(long *)(local_168 + 0x10),*(undefined4 *)(local_168 + 4),
                         PTR_s_Windows_10_development_102275048,0xffffffff,1);
      if (iVar2 == 0) {
        bVar9 = true;
        QMetaObject::tr((char *)&local_158,(char *)&PTR_staticMetaObject_10222c4e0,
                        (int)PTR_s_This_is_an_evaluation_virtual_ma_102270930);
      }
      else {
        bVar9 = true;
        QMetaObject::tr((char *)&local_158,(char *)&PTR_staticMetaObject_10222c4e0,0x1e05d31);
      }
    }
    QVariant::QVariant(&local_150,&local_158);
    QObject::setProperty(pcVar5,(QVariant *)"text");
    QVariant::~QVariant(&local_150);
    if (*(int *)local_158.field0_0x0 != -1) {
      if (*(int *)local_158.field0_0x0 != 0) {
        LOCK();
        *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
        local_31 = *(int *)local_158.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079ac66;
      }
      QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
    }
LAB_10079ac66:
    if ((bVar9) && (*(int *)local_168 != -1)) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079aca1;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_10079aca1:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079acd7;
      }
      QArrayData::deallocate(local_160,2,8);
    }
  }
LAB_10079acd7:
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_170 + *(long *)(local_170 + 0x10),*(undefined4 *)(local_170 + 4),
                     PTR_s_ModernIE_102275038,0xffffffff,1);
  bVar9 = true;
  if (iVar2 != 0) {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_178 + *(long *)(local_178 + 0x10),*(undefined4 *)(local_178 + 4),
                       PTR_s_GetTrialWindows_102275040,0xffffffff,1);
    bVar9 = true;
    if (iVar2 != 0) {
      CAppliance::getType();
      iVar2 = QString::compare_helper
                        (local_180 + *(long *)(local_180 + 0x10),*(undefined4 *)(local_180 + 4),
                         PTR_s_Windows_10_development_102275048,0xffffffff,1);
      bVar9 = true;
      if (iVar2 != 0) {
        CAppliance::getType();
        iVar2 = QString::compare_helper
                          (local_188 + *(long *)(local_188 + 0x10),*(undefined4 *)(local_188 + 4),
                           PTR_s_DynamicAppliance_102275050,0xffffffff,1);
        bVar9 = iVar2 == 0;
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079ae7a;
          }
          QArrayData::deallocate(local_188,2,8);
        }
      }
LAB_10079ae7a:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079aeb0;
        }
        QArrayData::deallocate(local_180,2,8);
      }
    }
LAB_10079aeb0:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079aee6;
      }
      QArrayData::deallocate(local_178,2,8);
    }
  }
LAB_10079aee6:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079af23;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10079af23:
  if (bVar9) {
    local_1a0 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_10079d6b0(uVar8);
    QString::arg(&local_198,&local_1a0,extraout_AH,0,10,0x20);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
    }
    uVar3 = FUN_10079d6b0(uVar8);
    QString::arg(&local_190,&local_198,uVar3,0,10,0x20);
    FUN_10072e040(pvVar4,&local_190);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b00b;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_10079b00b:
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b041;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_10079b041:
    if (*(int *)local_1a0 == -1) goto LAB_10079b818;
    local_1b0 = local_1a0;
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      iVar2 = *(int *)local_1a0;
      UNLOCK();
joined_r0x00010079b800:
      local_31 = iVar2 != 0;
      if ((bool)local_31) goto LAB_10079b818;
    }
  }
  else {
    CAppliance::getApplianceName();
    puVar1 = PTR_s_Chrome_102275018;
    iVar2 = -1;
    if (PTR_s_Chrome_102275018 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Chrome_102275018);
      iVar2 = (int)sVar6;
    }
    local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
    iVar2 = QString::indexOf(&local_1b0,&local_40,0,1);
    bVar9 = true;
    if (iVar2 == -1) {
      EnumUtils::OsTypeToString((uint)&local_48);
      iVar2 = QString::indexOf(&local_1b0,&local_48,0,1);
      bVar9 = iVar2 != -1;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b146;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_10079b146:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b176;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10079b176:
    puVar1 = PTR_s_Fedora_102275020;
    if (bVar9) {
      local_58 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
      QString::arg(&local_50,&local_58,0xf,0,10,0x20);
      QString::arg(&local_1a8,&local_50,0xf01,0,10,0x20);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b206;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10079b206:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b79d;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
    else {
      iVar2 = -1;
      if (PTR_s_Fedora_102275020 != (undefined *)0x0) {
        sVar6 = _strlen(PTR_s_Fedora_102275020);
        iVar2 = (int)sVar6;
      }
      local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
      iVar2 = QString::indexOf(&local_1b0,&local_60,0,1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b2b7;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10079b2b7:
      puVar1 = PTR_s_Ubuntu_102275028;
      if (iVar2 == -1) {
        iVar2 = -1;
        if (PTR_s_Ubuntu_102275028 != (undefined *)0x0) {
          sVar6 = _strlen(PTR_s_Ubuntu_102275028);
          iVar2 = (int)sVar6;
        }
        local_78 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
        iVar2 = QString::indexOf(&local_1b0,&local_78,0,1);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b3f9;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_10079b3f9:
        puVar1 = PTR_s_Android_102275030;
        if (iVar2 == -1) {
          iVar2 = -1;
          if (PTR_s_Android_102275030 != (undefined *)0x0) {
            sVar6 = _strlen(PTR_s_Android_102275030);
            iVar2 = (int)sVar6;
          }
          local_90 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
          iVar2 = QString::indexOf(&local_1b0,&local_90,0,1);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10079b547;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_10079b547:
          puVar1 = PTR_s_Windows_10_development_102275048;
          if (iVar2 == -1) {
            iVar2 = -1;
            if (PTR_s_Windows_10_development_102275048 != (undefined *)0x0) {
              sVar6 = _strlen(PTR_s_Windows_10_development_102275048);
              iVar2 = (int)sVar6;
            }
            local_a8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
            iVar2 = QString::indexOf(&local_1b0,&local_a8,0,1);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10079b6ad;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
LAB_10079b6ad:
            if (iVar2 == -1) {
              local_1a8 = (QArrayData *)QString::fromAscii_helper("",0);
            }
            else {
              local_b8 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
              QString::arg(&local_b0,&local_b8,8,0,10,0x20);
              QString::arg(&local_1a8,&local_b0,0x80f,0,10,0x20);
              if (*(int *)local_b0 != -1) {
                if (*(int *)local_b0 != 0) {
                  LOCK();
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  local_31 = *(int *)local_b0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10079b750;
                }
                QArrayData::deallocate(local_b0,2,8);
              }
LAB_10079b750:
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10079b79d;
                }
                QArrayData::deallocate(local_b8,2,8);
              }
            }
          }
          else {
            local_a0 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
            QString::arg(&local_98,&local_a0,0x10,0,10,0x20);
            QString::arg(&local_1a8,&local_98,0x1002,0,10,0x20);
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10079b5ea;
              }
              QArrayData::deallocate(local_98,2,8);
            }
LAB_10079b5ea:
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10079b79d;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
          }
        }
        else {
          local_88 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
          QString::arg(&local_80,&local_88,9,0,10,0x20);
          QString::arg(&local_1a8,&local_80,0x90a,0,10,0x20);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10079b48a;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_10079b48a:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10079b79d;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
      }
      else {
        local_70 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_68,&local_70,9,0,10,0x20);
        QString::arg(&local_1a8,&local_68,0x907,0,10,0x20);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b348;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_10079b348:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b79d;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
    }
LAB_10079b79d:
    FUN_10072e040(pvVar4,&local_1a8);
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b7e2;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
LAB_10079b7e2:
    if (*(int *)local_1b0 == -1) goto LAB_10079b818;
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      iVar2 = *(int *)local_1b0;
      UNLOCK();
      goto joined_r0x00010079b800;
    }
  }
  QArrayData::deallocate(local_1b0,2,8);
LAB_10079b818:
  local_1c8 = pvVar4;
  QVariant::QVariant(&local_1c0,0x27,&local_1c8,1);
  QObject::setProperty(param_2,(QVariant *)"vmData");
  QVariant::~QVariant(&local_1c0);
  local_1e0 = *(undefined8 *)(param_1 + 0x38);
  QVariant::QVariant(&local_1d8,0x27,&local_1e0,1);
  QObject::setProperty(param_2,(QVariant *)"downloadOperation");
  QVariant::~QVariant(&local_1d8);
  return;
}

