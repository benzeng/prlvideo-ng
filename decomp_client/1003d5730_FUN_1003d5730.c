
void FUN_1003d5730(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  QPixmap *pQVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QHash local_108 [16];
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QPixmap local_e0 [32];
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  int local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  local_50.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Settings.General.Profile.Type",0x1d);
  puVar2 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar6;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  MappingHelpers::getValueByPath((QHash *)&local_48,param_3,&local_50);
  uVar4 = QVariant::toInt((bool *)&local_48);
  lVar7 = CVmProfileDataObject::vmProfileByType(uVar4);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d57fb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003d57fb:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d582b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003d582b:
  if (lVar7 == 0) {
    local_70.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("Settings.General.Profile.Type",0x1d);
    iVar5 = -1;
    if (puVar2 != (undefined *)0x0) {
      sVar6 = _strlen(puVar2);
      iVar5 = (int)sVar6;
    }
    local_78 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    MappingHelpers::getValueByPath((QHash *)&local_68,param_3,&local_70);
    uVar4 = QVariant::toInt((bool *)&local_68);
    FUN_100df99c0("","prl_client_app",0,"Can\'t find VM profile %d",uVar4);
    QVariant::~QVariant(&local_68);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003d58fa;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1003d58fa:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003d592d;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
LAB_1003d592d:
  local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_a0 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_2,&local_a8,PTR_staticMetaObject_1021e14a8,&local_a0,1);
  local_98 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_98);
      lVar8 = (long)*(int *)(local_98 + 8);
      if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_98 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_98 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar8 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d5a37;
    }
    QListData::dispose(local_a0);
  }
LAB_1003d5a37:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d5a6d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003d5a6d:
  if ((local_80 != 0) && (local_90 != local_88)) {
    do {
      pQVar1 = *(QPixmap **)local_90;
      QObject::property((char *)&local_c0);
      QVariant::toString();
      QVariant::~QVariant(&local_c0);
      iVar5 = QString::compare_helper
                        (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),"Icon",
                         0xffffffff,1);
      if (iVar5 == 0) {
        if (lVar7 == 0) {
          local_e8 = (QArrayData *)QString::fromAscii_helper("",0);
        }
        else {
          local_e8 = *(QArrayData **)(lVar7 + 0x28);
          if (1 < *(int *)local_e8 + 1U) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + 1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
          }
        }
        QPixmap::QPixmap(local_e0,&local_e8,0,0);
        QLabel::setPixmap(pQVar1);
        QPixmap::~QPixmap(local_e0);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d5ee0;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
      }
      else {
        iVar5 = QString::compare_helper
                          (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),
                           "Name",0xffffffff,1);
        if (iVar5 == 0) {
          local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          if (lVar7 != 0) {
            local_f8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x18);
            if (1 < *(int *)local_f8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
              local_31 = *(int *)local_f8.field0_0x0 != 0;
              UNLOCK();
            }
            QString::operator=(&local_f0,&local_f8);
            if (*(int *)local_f8.field0_0x0 != -1) {
              if (*(int *)local_f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                local_31 = *(int *)local_f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003d5c3c;
              }
              QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
            }
LAB_1003d5c3c:
            local_110.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)
                 QString::fromAscii_helper("Settings.General.Profile.Custom",0x1f);
            iVar5 = -1;
            if (puVar2 != (undefined *)0x0) {
              sVar6 = _strlen(puVar2);
              iVar5 = (int)sVar6;
            }
            local_118 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
            MappingHelpers::getValueByPath(local_108,param_3,&local_110);
            cVar3 = QVariant::toBool();
            QVariant::~QVariant((QVariant *)local_108);
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003d5cef;
              }
              QArrayData::deallocate(local_118,2,8);
            }
LAB_1003d5cef:
            if (*(int *)local_110.field0_0x0 != -1) {
              if (*(int *)local_110.field0_0x0 != 0) {
                LOCK();
                *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                local_31 = *(int *)local_110.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003d5d2f;
              }
              QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
            }
LAB_1003d5d2f:
            if (cVar3 != '\0') {
              QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,0x1df2712);
              QString::append(&local_f0);
              if (*(int *)local_120 != -1) {
                if (*(int *)local_120 != 0) {
                  LOCK();
                  *(int *)local_120 = *(int *)local_120 + -1;
                  local_31 = *(int *)local_120 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003d5da0;
                }
                QArrayData::deallocate(local_120,2,8);
              }
            }
          }
LAB_1003d5da0:
          QLabel::setText((QString *)pQVar1);
          if (*(int *)local_f0.field0_0x0 != -1) {
            if (*(int *)local_f0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
              local_31 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003d5ee0;
            }
            QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
          }
        }
        else {
          iVar5 = QString::compare_helper
                            (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),
                             "Description",0xffffffff,1);
          if (iVar5 == 0) {
            if (lVar7 == 0) {
              local_128 = (QArrayData *)QString::fromAscii_helper("",0);
            }
            else {
              local_128 = *(QArrayData **)(lVar7 + 0x20);
              if (1 < *(int *)local_128 + 1U) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + 1;
                local_31 = *(int *)local_128 != 0;
                UNLOCK();
              }
            }
            QLabel::setText((QString *)pQVar1);
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_31 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003d5ee0;
              }
              QArrayData::deallocate(local_128,2,8);
            }
          }
        }
      }
LAB_1003d5ee0:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d5f16;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1003d5f16:
      local_90 = local_90 + 8;
      local_80 = 1;
    } while (local_90 != local_88);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_98);
  }
  return;
}

