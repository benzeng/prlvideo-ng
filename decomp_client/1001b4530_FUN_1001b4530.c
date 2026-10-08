
void FUN_1001b4530(undefined8 param_1,QTreeWidgetItem *param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  QTreeWidgetItem *this;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  QVariant local_1d0;
  QVariant local_1c0;
  QVariant local_1b0;
  QString local_1a0;
  QString local_198;
  Data *local_190;
  Data *local_188;
  Data *local_180;
  uint local_178;
  Data *local_170;
  QString local_168;
  QString local_160;
  QString local_158;
  QString local_150;
  Data_conflict local_148;
  undefined4 local_140;
  QArrayData *local_138;
  QVariant local_130;
  QString local_120;
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QVariant local_100;
  Data_conflict local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QString local_c8;
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_80,(QObject *)0x0);
  local_88 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  iVar6 = QSettings::beginReadArray((QString *)&local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b45b5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1001b45b5:
  iVar9 = 0;
  bVar12 = false;
  if (0 < iVar6) {
    bVar3 = false;
    do {
      QSettings::setArrayIndex((int)&local_80);
      local_b0 = (QArrayData *)QString::fromAscii_helper("Device Name",0xb);
      local_b8 = 0x80000000;
      local_c0.field7 = 0;
      QSettings::value((QString *)&local_a8,&local_80);
      QVariant::toString();
      QString::trimmed();
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b468d;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1001b468d:
      QVariant::~QVariant(&local_a8);
      QVariant::~QVariant((QVariant *)&local_c0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b46d7;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1001b46d7:
      local_e0 = (QArrayData *)QString::fromAscii_helper("Device Id",9);
      local_e8 = 0x80000000;
      local_f0.field7 = 0;
      QSettings::value((QString *)&local_d8,&local_80);
      QVariant::toString();
      QVariant::~QVariant(&local_d8);
      QVariant::~QVariant((QVariant *)&local_f0);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b477e;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1001b477e:
      local_108 = (QArrayData *)QString::fromAscii_helper("Action",6);
      local_110 = 0x80000000;
      local_118.field7 = 0;
      QSettings::value((QString *)&local_100,&local_80);
      iVar7 = QVariant::toInt((bool *)&local_100);
      QVariant::~QVariant(&local_100);
      QVariant::~QVariant((QVariant *)&local_118);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b482d;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1001b482d:
      local_138 = (QArrayData *)QString::fromAscii_helper("AssocVmId",9);
      local_140 = 0x80000000;
      local_148.field7 = 0;
      QSettings::value((QString *)&local_130,&local_80);
      QVariant::toString();
      QVariant::~QVariant(&local_130);
      QVariant::~QVariant((QVariant *)&local_148);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b48d4;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1001b48d4:
      local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      if (iVar7 == 1) {
        QMetaObject::tr((char *)&local_160,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Your_Mac_10226de28);
        QString::operator=(&local_150,&local_160);
        if (*(int *)local_160.field0_0x0 != -1) {
          if (*(int *)local_160.field0_0x0 != 0) {
            LOCK();
            *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
            local_31 = *(int *)local_160.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b496c;
          }
          QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
        }
LAB_1001b496c:
        puVar4 = PTR_s_COMPUTER_FAKE_ID_1022710d8;
        if (PTR_s_COMPUTER_FAKE_ID_1022710d8 != (undefined *)0x0) {
          _strlen(PTR_s_COMPUTER_FAKE_ID_1022710d8);
        }
        QString::fromUtf8_helper((char *)&local_70,(int)puVar4);
        QString::operator=(&local_158,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b4a90;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1001b4a90:
        QTreeWidget::findItems(&local_170,param_2,&local_90,0,0);
        local_190 = local_170;
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 == 0) {
            QListData::detach((int)&local_190);
            lVar10 = (long)*(int *)(local_190 + 8);
            if ((local_170 + (long)*(int *)(local_170 + 8) * 8 != local_190 + lVar10 * 8) &&
               (lVar11 = *(int *)(local_190 + 0xc) - lVar10,
               lVar11 != 0 && lVar10 <= *(int *)(local_190 + 0xc))) {
              _memcpy(local_190 + lVar10 * 8 + 0x10,
                      local_170 + (long)*(int *)(local_170 + 8) * 8 + 0x10,lVar11 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + 1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
          }
        }
        local_188 = local_190 + (long)*(int *)(local_190 + 8) * 8 + 0x10;
        local_180 = local_190 + (long)*(int *)(local_190 + 0xc) * 8 + 0x10;
        local_178 = 1;
        if (*(int *)(local_190 + 8) == *(int *)(local_190 + 0xc)) {
          bVar12 = false;
        }
        else {
          bVar12 = false;
          do {
            if (local_178 == 0) {
LAB_1001b4cda:
              local_188 = local_188 + 8;
              local_178 = 1;
            }
            else {
              plVar1 = *(long **)local_188;
              (**(code **)(*plVar1 + 0x18))(&local_68,plVar1,0,0);
              QVariant::toString();
              QVariant::~QVariant(&local_68);
              cVar5 = operator==(&local_198,&local_90);
              if (cVar5 == '\0') {
                cVar5 = '\0';
              }
              else {
                (**(code **)(*plVar1 + 0x18))(&local_1b0,plVar1,0,0x100);
                QVariant::toString();
                cVar5 = operator==(&local_1a0,&local_c8);
                if (*(int *)local_1a0.field0_0x0 != -1) {
                  if (*(int *)local_1a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                    local_31 = *(int *)local_1a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001b4c48;
                  }
                  QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
                }
LAB_1001b4c48:
                QVariant::~QVariant(&local_1b0);
              }
              if (*(int *)local_198.field0_0x0 != -1) {
                if (*(int *)local_198.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
                  local_31 = *(int *)local_198.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001b4c98;
                }
                QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
              }
LAB_1001b4c98:
              if (cVar5 == '\0') goto LAB_1001b4cda;
              local_188 = local_188 + 8;
              uVar8 = local_178 ^ 1;
              bVar12 = true;
              bVar13 = local_178 == 1;
              local_178 = uVar8;
              if (bVar13) break;
            }
          } while (local_188 != local_180);
        }
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b4d34;
          }
          QListData::dispose(local_190);
        }
LAB_1001b4d34:
        if (!bVar12) {
          this = operator_new(0x40);
          QTreeWidgetItem::QTreeWidgetItem(this,0);
          pcVar2 = *(code **)(*(long *)this + 0x20);
          QVariant::QVariant(&local_58,&local_90);
          (*pcVar2)(this,0,0,&local_58);
          QVariant::~QVariant(&local_58);
          pcVar2 = *(code **)(*(long *)this + 0x20);
          QVariant::QVariant(&local_1c0,&local_c8);
          (*pcVar2)(this,0,0x100,&local_1c0);
          QVariant::~QVariant(&local_1c0);
          pcVar2 = *(code **)(*(long *)this + 0x20);
          QVariant::QVariant(&local_48,&local_150);
          (*pcVar2)(this,1,0,&local_48);
          QVariant::~QVariant(&local_48);
          pcVar2 = *(code **)(*(long *)this + 0x20);
          QVariant::QVariant(&local_1d0,&local_158);
          (*pcVar2)(this,1,0x100,&local_1d0);
          QVariant::~QVariant(&local_1d0);
          uVar8 = QTreeWidgetItem::flags();
          QTreeWidgetItem::setFlags(this,uVar8 | 2);
          QTreeWidget::addTopLevelItem(param_2);
        }
        bVar12 = bVar3;
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b4e9c;
          }
          QListData::dispose(local_170);
        }
      }
      else {
        lVar10 = FUN_10015cb20(param_1,&local_120);
        bVar12 = true;
        if (lVar10 != 0) {
          QString::operator=(&local_158,&local_120);
          FUN_10018d830(&local_168,lVar10);
          QString::operator=(&local_150,&local_168);
          if (*(int *)local_168.field0_0x0 != -1) {
            if (*(int *)local_168.field0_0x0 != 0) {
              LOCK();
              *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
              local_31 = *(int *)local_168.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b4a90;
            }
            QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
          }
          goto LAB_1001b4a90;
        }
      }
LAB_1001b4e9c:
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_31 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b4ed2;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_1001b4ed2:
      if (*(int *)local_150.field0_0x0 != -1) {
        if (*(int *)local_150.field0_0x0 != 0) {
          LOCK();
          *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
          local_31 = *(int *)local_150.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b4f08;
        }
        QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
      }
LAB_1001b4f08:
      if (*(int *)local_120.field0_0x0 != -1) {
        if (*(int *)local_120.field0_0x0 != 0) {
          LOCK();
          *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
          local_31 = *(int *)local_120.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b4f3e;
        }
        QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
      }
LAB_1001b4f3e:
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b4f85;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1001b4f85:
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b4fbb;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1001b4fbb:
      iVar9 = iVar9 + 1;
      bVar3 = bVar12;
    } while (iVar9 < iVar6);
  }
  QSettings::endArray();
  if (bVar12) {
    FUN_1001b55c0(param_2);
    FUN_1001b5630(param_1,param_2);
  }
  QSettings::~QSettings((QSettings *)&local_80);
  return;
}

