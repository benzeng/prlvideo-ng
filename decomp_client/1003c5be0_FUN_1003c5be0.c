
void FUN_1003c5be0(long param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  QVariant *pQVar14;
  bool bVar15;
  int local_2e4;
  QVariant local_2d0;
  QVariant local_2c0;
  QVariant local_2b0;
  QVariant local_2a0;
  QVariant local_290;
  QVariant local_280;
  QVariant local_270;
  undefined4 local_25c;
  QVariant local_258;
  undefined4 local_244;
  QVariant local_240;
  QVariant local_230;
  QVariant local_220;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QVariant local_1f8;
  QVariant local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  QMapNodeBase *local_1d0;
  QVariant local_1c8;
  QVariant local_1b8;
  QArrayData *local_1a8;
  QString local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  QString local_180;
  QVariant local_178;
  QString local_168;
  QArrayData *local_160;
  QString local_158;
  QVariant local_150;
  QVariant local_140;
  QVariant local_130;
  QVariant local_120;
  QVariant local_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QVariant local_d8;
  QArrayData *local_c8;
  QString local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  Data_conflict local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  int local_44;
  QString local_40;
  undefined1 local_31;
  
  uVar8 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  QObject::property((char *)&local_58);
  if (DAT_102273e70 == 0) {
    DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
  }
  uVar4 = DAT_102273e70;
  uVar3 = QVariant::userType();
  if (uVar4 == uVar3) {
    piVar9 = (int *)QVariant::constData();
    iVar7 = *piVar9;
  }
  else {
    cVar2 = QVariant::convert((int)&local_58,(void *)(ulong)uVar4);
    iVar7 = 0;
    if (cVar2 != '\0') {
      iVar7 = local_44;
    }
  }
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("SystemName",10);
  puVar1 = PTR_shared_null_1021e1288;
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_70,param_3,&local_78);
  QVariant::toString();
  QVariant::~QVariant(&local_70);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c5cfe;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003c5cfe:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c5d2e;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1003c5d2e:
  local_a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("UserFriendlyName",0x10);
  local_a8 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_98,param_3,&local_a0);
  QVariant::toString();
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c5dbc;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003c5dbc:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c5df2;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1003c5df2:
  if (iVar7 == 8) {
    uVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb2b0);
    local_c0.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("EmulatedType",0xc);
    local_c8 = (QArrayData *)puVar1;
    MappingHelpers::getValueByName((QHash *)&local_b8,param_3,&local_c0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003c5e84;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1003c5e84:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003c5eba;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1003c5eba:
    uVar4 = QVariant::toUInt((bool *)&local_b8);
    iVar7 = (int)uVar8;
    if (uVar4 == 4) {
      QVariant::QVariant(&local_d8,&local_60);
      uVar4 = QComboBox::findData(uVar8,&local_d8,0x101,0x10);
      pQVar14 = (QVariant *)(ulong)uVar4;
      QVariant::~QVariant(&local_d8);
      if ((int)uVar4 < 0) {
        QVariant::QVariant(&local_e8,&local_60);
        local_f0 = (QArrayData *)puVar1;
        local_f8 = (QArrayData *)puVar1;
        local_100 = (QArrayData *)puVar1;
        FUN_10013d930(uVar8,&local_88,4,1,&local_e8,&local_f0,&local_f8,&local_100);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c5fb4;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_1003c5fb4:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c5fea;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_1003c5fea:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c6020;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1003c6020:
        QVariant::~QVariant(&local_e8);
        iVar5 = QComboBox::count();
        QVariant::QVariant(&local_110,4);
        uVar4 = iVar5 - 1;
        pQVar14 = (QVariant *)(ulong)uVar4;
        QComboBox::setItemData(iVar7,pQVar14,(int)&local_110);
        QVariant::~QVariant(&local_110);
        QVariant::QVariant(&local_120,&local_60);
        QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar4,(int)&local_120);
        QVariant::~QVariant(&local_120);
        QVariant::QVariant(&local_130,1);
        QComboBox::setItemData(iVar7,pQVar14,(int)&local_130);
        QVariant::~QVariant(&local_130);
        QVariant::QVariant(&local_140,0);
        QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar4,(int)&local_140);
        QVariant::~QVariant(&local_140);
      }
LAB_1003c6a9a:
      FUN_10013ddd0(uVar8,pQVar14);
    }
    else {
      if (2 < uVar4) {
        pQVar14 = (QVariant *)0xffffffff;
        FUN_100df99c0("","prl_client_app",0,"(!)Error: unknown device emulation type.");
        goto LAB_1003c6a9a;
      }
      local_158.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("AdapterNumber",0xd);
      local_160 = (QArrayData *)puVar1;
      MappingHelpers::getValueByName((QHash *)&local_150,param_3,&local_158);
      local_2e4 = QVariant::toInt((bool *)&local_150);
      QVariant::~QVariant(&local_150);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c6209;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1003c6209:
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_31 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c623f;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_1003c623f:
      local_180.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("AdapterName",0xb);
      local_188 = (QArrayData *)puVar1;
      MappingHelpers::getValueByName((QHash *)&local_178,param_3,&local_180);
      QVariant::toString();
      QVariant::~QVariant(&local_178);
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c62d0;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_1003c62d0:
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c6306;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_1003c6306:
      local_1a0.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Connected",9);
      local_1a8 = (QArrayData *)PTR_shared_null_1021e1288;
      MappingHelpers::getValueByName((QHash *)&local_198,param_3,&local_1a0);
      cVar2 = QVariant::toBool();
      QVariant::~QVariant(&local_198);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c639a;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_1003c639a:
      if (*(int *)local_1a0.field0_0x0 != -1) {
        if (*(int *)local_1a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
          local_31 = *(int *)local_1a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c63d0;
        }
        QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
      }
LAB_1003c63d0:
      if (cVar2 == '\0') {
        FUN_10013ddd0(uVar8,0);
        pQVar14 = (QVariant *)0xffffffff;
        bVar15 = true;
      }
      else {
        uVar3 = 0;
        while( true ) {
          iVar5 = QComboBox::count();
          pQVar14 = (QVariant *)0xffffffff;
          if (iVar5 <= (int)uVar3) break;
          QComboBox::itemData((int)&local_1b8,iVar7);
          uVar6 = QVariant::toInt((bool *)&local_1b8);
          if (uVar4 == uVar6) {
            QComboBox::itemData((int)&local_1c8,iVar7);
            iVar5 = QVariant::toInt((bool *)&local_1c8);
            bVar15 = local_2e4 == iVar5;
            QVariant::~QVariant(&local_1c8);
          }
          else {
            bVar15 = false;
          }
          QVariant::~QVariant(&local_1b8);
          if (bVar15) {
            pQVar14 = (QVariant *)(ulong)uVar3;
            break;
          }
          uVar3 = uVar3 + 1;
        }
        uVar10 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
        FUN_1001241b0(&local_1d0,uVar10);
        if ((uVar4 == 0) && (-1 < (int)pQVar14)) {
          local_1d4 = 0;
          plVar11 = (long *)FUN_100129b20(&local_1d0,&local_1d4);
          if ((local_2e4 != -1) || (*(int *)(*plVar11 + 0xc) - *(int *)(*plVar11 + 8) < 2))
          goto LAB_1003c669d;
          local_1d8 = 0;
          puVar12 = (undefined8 *)FUN_100129b20(&local_1d0,&local_1d8);
          if (1 < *(uint *)*puVar12) {
            FUN_1003deff0(puVar12,((uint *)*puVar12)[1]);
          }
          local_2e4 = CHwNetAdapter::getSysIndex();
          pQVar14 = (QVariant *)0xffffffff;
LAB_1003c66a6:
          if (uVar4 == 2) {
            QVariant::QVariant(&local_1e8,DAT_102273e50);
            uVar4 = QComboBox::findData(uVar8,&local_1e8,0x106,0x10);
            pQVar14 = (QVariant *)(ulong)uVar4;
            QVariant::~QVariant(&local_1e8);
            if (0 < (int)uVar4) {
              QVariant::QVariant(&local_1f8,local_2e4);
              uVar4 = uVar4 + 1;
              pQVar14 = (QVariant *)(ulong)uVar4;
              local_200 = (QArrayData *)PTR_shared_null_1021e1288;
              local_208 = (QArrayData *)PTR_shared_null_1021e1288;
              local_210 = (QArrayData *)PTR_shared_null_1021e1288;
              FUN_10013da10(uVar8,pQVar14,&local_168,2,1,&local_1f8,&local_200,&local_208,&local_210
                           );
              if (*(int *)local_210 != -1) {
                if (*(int *)local_210 != 0) {
                  LOCK();
                  *(int *)local_210 = *(int *)local_210 + -1;
                  local_31 = *(int *)local_210 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c67ac;
                }
                QArrayData::deallocate(local_210,2,8);
              }
LAB_1003c67ac:
              if (*(int *)local_208 != -1) {
                if (*(int *)local_208 != 0) {
                  LOCK();
                  *(int *)local_208 = *(int *)local_208 + -1;
                  local_31 = *(int *)local_208 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c67e2;
                }
                QArrayData::deallocate(local_208,2,8);
              }
LAB_1003c67e2:
              if (*(int *)local_200 != -1) {
                if (*(int *)local_200 != 0) {
                  LOCK();
                  *(int *)local_200 = *(int *)local_200 + -1;
                  local_31 = *(int *)local_200 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c6818;
                }
                QArrayData::deallocate(local_200,2,8);
              }
LAB_1003c6818:
              QVariant::~QVariant(&local_1f8);
              QVariant::QVariant(&local_220,2);
              QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar4,(int)&local_220);
              QVariant::~QVariant(&local_220);
              QVariant::QVariant(&local_230,local_2e4);
              QComboBox::setItemData(iVar7,pQVar14,(int)&local_230);
              QVariant::~QVariant(&local_230);
              QVariant::QVariant(&local_240,&local_168);
              QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar4,(int)&local_240);
              QVariant::~QVariant(&local_240);
            }
          }
          else if (uVar4 == 0) {
            local_244 = 0;
            plVar11 = (long *)FUN_100129b20(&local_1d0);
            if (*(int *)(*plVar11 + 0xc) - *(int *)(*plVar11 + 8) < 2) {
              QVariant::QVariant(&local_270,0);
              uVar4 = QComboBox::findData(uVar8,&local_270,0x104,0x10);
              pQVar14 = (QVariant *)(ulong)uVar4;
              QVariant::~QVariant(&local_270);
            }
            else {
              local_25c = 0;
              puVar12 = (undefined8 *)FUN_100129b20(&local_1d0,&local_25c);
              if (1 < *(uint *)*puVar12) {
                FUN_1003deff0(puVar12,((uint *)*puVar12)[1]);
              }
              iVar7 = CHwNetAdapter::getSysIndex();
              QVariant::QVariant(&local_258,iVar7);
              uVar4 = QComboBox::findData(uVar8,&local_258,0x106,0x10);
              pQVar14 = (QVariant *)(ulong)uVar4;
              QVariant::~QVariant(&local_258);
            }
          }
          else if (uVar4 == 1) {
            QVariant::QVariant(&local_280,1);
            uVar4 = QComboBox::findData(uVar8,&local_280,0x104,0x10);
            pQVar14 = (QVariant *)(ulong)uVar4;
            QVariant::~QVariant(&local_280);
          }
        }
        else {
LAB_1003c669d:
          if ((int)pQVar14 < 1) goto LAB_1003c66a6;
        }
        bVar15 = false;
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
            bVar15 = false;
            if ((bool)local_31) goto LAB_1003c6a5f;
          }
          if (*(long *)(local_1d0 + 0x10) != 0) {
            FUN_10012bff0();
            QMapDataBase::freeTree(local_1d0,(int)*(undefined8 *)(local_1d0 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_1d0);
          bVar15 = false;
        }
      }
LAB_1003c6a5f:
      if (*(int *)local_168.field0_0x0 != -1) {
        if (*(int *)local_168.field0_0x0 != 0) {
          LOCK();
          *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
          local_31 = *(int *)local_168.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c6a95;
        }
        QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
      }
LAB_1003c6a95:
      if (!bVar15) goto LAB_1003c6a9a;
    }
    QVariant::~QVariant(&local_b8);
  }
  else {
    QVariant::QVariant(&local_290,&local_60);
    iVar5 = QComboBox::findData(uVar8,&local_290,0x100,0x10);
    QVariant::~QVariant(&local_290);
    iVar13 = (int)uVar8;
    if (iVar5 < 0) {
      QVariant::QVariant(&local_2a0,&local_60);
      uVar4 = QComboBox::count();
      QIcon::QIcon((QIcon *)&local_40);
      QComboBox::insertItem(iVar13,(QIcon *)(ulong)uVar4,&local_40,(QVariant *)&local_88);
      QIcon::~QIcon((QIcon *)&local_40);
      QVariant::~QVariant(&local_2a0);
      iVar5 = QComboBox::count();
      uVar4 = iVar5 - 1;
      QComboBox::setCurrentIndex(iVar13);
      if (iVar7 == 0x14) {
        QVariant::QVariant(&local_2b0,&local_60);
        QComboBox::setItemData(iVar13,(QVariant *)(ulong)uVar4,(int)&local_2b0);
        QVariant::~QVariant(&local_2b0);
        QVariant::QVariant(&local_2c0,1);
        QComboBox::setItemData(iVar13,(QVariant *)(ulong)uVar4,(int)&local_2c0);
        QVariant::~QVariant(&local_2c0);
        QVariant::QVariant(&local_2d0,1);
        QComboBox::setItemData(iVar13,(QVariant *)(ulong)uVar4,(int)&local_2d0);
        QVariant::~QVariant(&local_2d0);
      }
    }
    else {
      QComboBox::setCurrentIndex(iVar13);
    }
  }
  if (*(int *)local_88.field15 != -1) {
    if (*(int *)local_88.field15 != 0) {
      LOCK();
      *(int *)local_88.field15 = *(int *)local_88.field15 + -1;
      local_31 = *(int *)local_88.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c6ae5;
    }
    QArrayData::deallocate((QArrayData *)local_88.field15,2,8);
  }
LAB_1003c6ae5:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c6b15;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003c6b15:
  QVariant::~QVariant(&local_58);
  return;
}

