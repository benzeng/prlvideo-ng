
void FUN_1003d1a30(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  QString *pQVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  QListWidget *pQVar13;
  size_t sVar14;
  long lVar15;
  undefined8 uVar16;
  QListWidgetItem *this;
  int *piVar17;
  Data *pDVar18;
  Data *pDVar19;
  QVariant local_2c0;
  QIcon local_2b0 [16];
  QString local_2a0;
  QIcon local_298 [8];
  QVariant local_290;
  QArrayData *local_280;
  QArrayData *local_278;
  QString local_270;
  QString local_268;
  QString local_260;
  QString local_258;
  QVariant local_250;
  QVariant local_240;
  QVariant local_230;
  Data *local_220;
  Data *local_218;
  Data *local_210;
  undefined4 local_208;
  BootDevice local_200 [104];
  undefined4 local_198;
  QArrayData *local_148;
  QString local_140;
  QHash local_138 [16];
  QArrayData *local_128;
  QString local_120;
  QHash local_118 [16];
  QArrayData *local_108;
  QString local_100;
  QHash local_f8 [16];
  QArrayData *local_e8;
  _func_void_Node_ptr *local_e0;
  QVariant local_d8;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  _func_void_Node_ptr *local_b0;
  int *local_a8;
  int *local_a0;
  QString *local_98;
  QString *local_90;
  int local_88;
  Data *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  pQVar13 = (QListWidget *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fa810);
  FUN_1001389b0(pQVar13);
  puVar6 = PTR_s_VmConfig_1021f1e00;
  local_80 = (Data *)PTR_shared_null_1021e15e8;
  iVar12 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar14 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar12 = (int)sVar14;
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar12);
  FUN_1003ae3b0(&local_b0,param_3,&local_b8);
  FUN_1000626e0(&local_a8,&local_b0);
  local_a0 = local_a8;
  if (*local_a8 != -1) {
    if (*local_a8 == 0) {
      QListData::detach((int)&local_a0);
      iVar12 = local_a0[2];
      if (iVar12 != local_a0[3]) {
        local_a8 = local_a8 + (long)local_a8[2] * 2 + 4;
        piVar17 = local_a0 + (long)iVar12 * 2 + 4;
        lVar15 = (long)local_a0[3] * 8 + (long)iVar12 * -8;
        do {
          piVar2 = *(int **)local_a8;
          *(int **)piVar17 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar17 = piVar17 + 2;
          local_a8 = local_a8 + 2;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
    }
    else {
      LOCK();
      *local_a8 = *local_a8 + 1;
      local_31 = *local_a8 != 0;
      UNLOCK();
    }
  }
  local_98 = (QString *)(local_a0 + (long)local_a0[2] * 2 + 4);
  local_90 = (QString *)(local_a0 + (long)local_a0[3] * 2 + 4);
  local_88 = 1;
  FUN_100036370(&local_a8);
  if (*(int *)(local_b0 + 0x10) != -1) {
    if (*(int *)(local_b0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_b0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d1bc7;
    }
    QHashData::free_helper(local_b0);
  }
LAB_1003d1bc7:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d1bfd;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1003d1bfd:
  if ((local_88 != 0) && (local_98 != local_90)) {
    do {
      pQVar7 = local_98;
      local_c0 = (QArrayData *)QString::fromAscii_helper(".Type",5);
      cVar8 = QString::endsWith(pQVar7,&local_c0,1);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d1c82;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1003d1c82:
      if (cVar8 != '\0') {
        MappingHelpers::getParentObjectPath(&local_c8);
        iVar12 = -1;
        if (puVar6 != (undefined *)0x0) {
          sVar14 = _strlen(puVar6);
          iVar12 = (int)sVar14;
        }
        local_e8 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar12);
        FUN_1003ae3b0(&local_e0,param_3,&local_e8);
        FUN_1003deba0(&local_d8,&local_e0,pQVar7);
        uVar16 = QVariant::toLongLong((bool *)&local_d8);
        QVariant::~QVariant(&local_d8);
        if (*(int *)(local_e0 + 0x10) != -1) {
          if (*(int *)(local_e0 + 0x10) != 0) {
            LOCK();
            pcVar1 = local_e0 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_31 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1d3c;
          }
          QHashData::free_helper(local_e0);
        }
LAB_1003d1d3c:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1d79;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1003d1d79:
        local_100.field0_0x0 = local_c8.field0_0x0;
        if (1 < *(int *)local_c8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_78,0x1df1fc3);
        QString::append(&local_100);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1df8;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1003d1df8:
        iVar12 = -1;
        if (puVar6 != (undefined *)0x0) {
          sVar14 = _strlen(puVar6);
          iVar12 = (int)sVar14;
        }
        local_108 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar12);
        MappingHelpers::getValueByPath(local_f8,param_3,&local_100);
        QVariant::toUInt((bool *)local_f8);
        QVariant::~QVariant((QVariant *)local_f8);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1e87;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1003d1e87:
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1ec4;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
LAB_1003d1ec4:
        local_120.field0_0x0 = local_c8.field0_0x0;
        if (1 < *(int *)local_c8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_70,0x1df2560);
        QString::append(&local_120);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1f43;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1003d1f43:
        iVar12 = -1;
        if (puVar6 != (undefined *)0x0) {
          sVar14 = _strlen(puVar6);
          iVar12 = (int)sVar14;
        }
        local_128 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar12);
        MappingHelpers::getValueByPath(local_118,param_3,&local_120);
        QVariant::toUInt((bool *)local_118);
        QVariant::~QVariant((QVariant *)local_118);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d1fd2;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1003d1fd2:
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d2008;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_1003d2008:
        local_140.field0_0x0 = local_c8.field0_0x0;
        if (1 < *(int *)local_c8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_68,0x1df256f);
        QString::append(&local_140);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d207e;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1003d207e:
        iVar12 = -1;
        if (puVar6 != (undefined *)0x0) {
          sVar14 = _strlen(puVar6);
          iVar12 = (int)sVar14;
        }
        local_148 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar12);
        MappingHelpers::getValueByPath(local_138,param_3,&local_140);
        QVariant::toBool();
        QVariant::~QVariant((QVariant *)local_138);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d210f;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1003d210f:
        if (*(int *)local_140.field0_0x0 != -1) {
          if (*(int *)local_140.field0_0x0 != 0) {
            LOCK();
            *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
            local_31 = *(int *)local_140.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d214c;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
LAB_1003d214c:
        BootDevice::BootDevice(local_200);
        BootDevice::setType(local_200,uVar16);
        uVar10 = (uint)local_200;
        BootDevice::setIndex(uVar10);
        BootDevice::setBootingNumber(uVar10);
        BootDevice::setInUse(false);
        local_198 = MappingHelpers::getItemIdFromPath(pQVar7);
        FUN_1003df450(&local_80,local_200);
        BootDevice::~BootDevice(local_200);
        if (*(int *)local_c8.field0_0x0 != -1) {
          if (*(int *)local_c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
            local_31 = *(int *)local_c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d21f0;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
        }
      }
LAB_1003d21f0:
      local_98 = local_98 + 1;
      local_88 = 1;
    } while (local_98 != local_90);
  }
  FUN_100036370(&local_a0);
  if (*(uint *)local_80 < 2) {
    pDVar18 = local_80 + (long)(int)*(uint *)(local_80 + 8) * 8 + 0x10;
  }
  else {
    FUN_1003bde60(&local_80,*(uint *)(local_80 + 4));
    pDVar18 = local_80 + (long)(int)*(uint *)(local_80 + 8) * 8 + 0x10;
    if (1 < *(uint *)local_80) {
      FUN_1003bde60(&local_80,*(uint *)(local_80 + 4));
    }
  }
  if (pDVar18 != local_80 + (long)(int)*(uint *)(local_80 + 0xc) * 8 + 0x10) {
    local_60 = local_80 + (long)(int)*(uint *)(local_80 + 0xc) * 8 + 0x10;
    local_58 = pDVar18;
    FUN_1003bdf40(&local_58,&local_60,*(undefined8 *)pDVar18,FUN_1003ba1a0);
  }
  FUN_1003bdd00(&local_220,&local_80);
  uVar5 = DAT_100e1b184;
  uVar4 = DAT_100e1b180;
  uVar3 = DAT_100e1b17c;
  local_218 = local_220 + (long)*(int *)(local_220 + 8) * 8 + 0x10;
  local_210 = local_220 + (long)*(int *)(local_220 + 0xc) * 8 + 0x10;
  if (*(int *)(local_220 + 8) != *(int *)(local_220 + 0xc)) {
    do {
      local_208 = 1;
      lVar15 = *(long *)local_218;
      this = operator_new(0x30);
      QListWidgetItem::QListWidgetItem(this,pQVar13,0);
      pcVar1 = *(code **)(*(long *)this + 0x28);
      uVar10 = BootDevice::getType();
      QVariant::QVariant(&local_230,(ulong)uVar10);
      (*pcVar1)(this,uVar3,&local_230);
      QVariant::~QVariant(&local_230);
      pcVar1 = *(code **)(*(long *)this + 0x28);
      uVar10 = BootDevice::getIndex();
      QVariant::QVariant(&local_240,uVar10);
      (*pcVar1)(this,uVar4,&local_240);
      QVariant::~QVariant(&local_240);
      pcVar1 = *(code **)(*(long *)this + 0x28);
      QVariant::QVariant(&local_250,*(int *)(lVar15 + 0x68));
      (*pcVar1)(this,uVar5,&local_250);
      QVariant::~QVariant(&local_250);
      uVar11 = BootDevice::getType();
      EnumUtils::enumToString(&local_258,uVar11);
      iVar12 = BootDevice::getType();
      if (iVar12 == 0xf) {
        QMetaObject::tr((char *)&local_260,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_External_device_10226e5f0);
        QString::operator=(&local_258,&local_260);
        if (*(int *)local_260.field0_0x0 != -1) {
          if (*(int *)local_260.field0_0x0 != 0) {
            LOCK();
            *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
            local_31 = *(int *)local_260.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d2480;
          }
          QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
        }
      }
LAB_1003d2480:
      iVar12 = BootDevice::getType();
      if ((iVar12 == 6) || (iVar12 = BootDevice::getType(), iVar12 == 8)) {
        local_270.field0_0x0 = local_258.field0_0x0;
        if (1 < *(int *)local_258.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + 1;
          local_31 = *(int *)local_258.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_50,0x1e31adc);
        QString::append(&local_270);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d251e;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1003d251e:
        iVar12 = BootDevice::getIndex();
        QString::number((uint)&local_278,iVar12 + 1);
        local_268.field0_0x0 = local_270.field0_0x0;
        if (1 < *(int *)local_270.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + 1;
          local_31 = *(int *)local_270.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_268);
        QString::operator=(&local_258,&local_268);
        if (*(int *)local_268.field0_0x0 != -1) {
          if (*(int *)local_268.field0_0x0 != 0) {
            LOCK();
            *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
            local_31 = *(int *)local_268.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d25ad;
          }
          QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
        }
LAB_1003d25ad:
        if (*(int *)local_278 != -1) {
          if (*(int *)local_278 != 0) {
            LOCK();
            *(int *)local_278 = *(int *)local_278 + -1;
            local_31 = *(int *)local_278 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d25e3;
          }
          QArrayData::deallocate(local_278,2,8);
        }
LAB_1003d25e3:
        if (*(int *)local_270.field0_0x0 != -1) {
          if (*(int *)local_270.field0_0x0 != 0) {
            LOCK();
            *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
            local_31 = *(int *)local_270.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d261c;
          }
          QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
        }
      }
LAB_1003d261c:
      iVar12 = BootDevice::getType();
      if (iVar12 == 5) {
        local_280 = (QArrayData *)QString::fromAscii_helper("Default ",8);
        QString::remove(&local_258,&local_280,1);
        if (*(int *)local_280 != -1) {
          if (*(int *)local_280 != 0) {
            LOCK();
            *(int *)local_280 = *(int *)local_280 + -1;
            local_31 = *(int *)local_280 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d268f;
          }
          QArrayData::deallocate(local_280,2,8);
        }
      }
LAB_1003d268f:
      pcVar1 = *(code **)(*(long *)this + 0x28);
      QVariant::QVariant(&local_290,&local_258);
      (*pcVar1)(this,0,&local_290);
      QVariant::~QVariant(&local_290);
      uVar11 = BootDevice::getType();
      FUN_10010d050(&local_2a0,0,uVar11,1);
      QIcon::QIcon(local_298,&local_2a0);
      if (*(int *)local_2a0.field0_0x0 != -1) {
        if (*(int *)local_2a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
          local_31 = *(int *)local_2a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d271d;
        }
        QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
      }
LAB_1003d271d:
      pcVar1 = *(code **)(*(long *)this + 0x28);
      QIcon::operator_cast_to_QVariant(local_2b0);
      (*pcVar1)(this,1,local_2b0);
      QVariant::~QVariant((QVariant *)local_2b0);
      bVar9 = BootDevice::isInUse();
      pcVar1 = *(code **)(*(long *)this + 0x28);
      QVariant::QVariant(&local_48,(uint)bVar9 * 2);
      (*pcVar1)(this,10,&local_48);
      QVariant::~QVariant(&local_48);
      QIcon::~QIcon(local_298);
      if (*(int *)local_258.field0_0x0 != -1) {
        if (*(int *)local_258.field0_0x0 != 0) {
          LOCK();
          *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
          local_31 = *(int *)local_258.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d27cb;
        }
        QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
      }
LAB_1003d27cb:
      local_218 = local_218 + 8;
    } while (local_218 != local_210);
  }
  local_208 = 1;
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_31 = *(int *)local_220 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d2873;
    }
    iVar12 = *(int *)(local_220 + 0xc);
    if (iVar12 != *(int *)(local_220 + 8)) {
      lVar15 = (long)*(int *)(local_220 + 8) * 8 + (long)iVar12 * -8;
      pDVar18 = local_220 + (long)iVar12 * 8 + 8;
      do {
        if (*(long **)pDVar18 != (long *)0x0) {
          (**(code **)(**(long **)pDVar18 + 0x20))();
        }
        pDVar18 = pDVar18 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose(local_220);
  }
LAB_1003d2873:
  QObject::property((char *)&local_2c0);
  QVariant::toInt((bool *)&local_2c0);
  QListWidget::setCurrentRow((int)pQVar13);
  QVariant::~QVariant(&local_2c0);
  pDVar18 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar12 = *(int *)(local_80 + 0xc);
    if (iVar12 != *(int *)(local_80 + 8)) {
      lVar15 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar12 * -8;
      pDVar19 = local_80 + (long)iVar12 * 8 + 8;
      do {
        if (*(long **)pDVar19 != (long *)0x0) {
          (**(code **)(**(long **)pDVar19 + 0x20))();
        }
        pDVar19 = pDVar19 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose(pDVar18);
  }
  return;
}

