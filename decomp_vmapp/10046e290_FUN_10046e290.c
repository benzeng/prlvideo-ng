
undefined8 FUN_10046e290(long param_1)

{
  undefined8 uVar1;
  QArrayData *pQVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  long *plVar6;
  QString QVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  long *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  CVmEventParameter *local_198;
  QString local_190;
  undefined8 *local_188;
  undefined8 *puStack_180;
  undefined8 *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
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
  
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10);
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("unknown",7);
  CVmGuestOsInformation::setRealOsType(QVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e307;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10046e307:
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10);
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("unknown",7);
  CVmGuestOsInformation::setRealOsVersion(QVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e367;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10046e367:
  local_78 = (QArrayData *)QString::fromAscii_helper("parallels.GuestOSInfo.guest.cross",0x21);
  lVar3 = FUN_100470440(param_1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e3bb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10046e3bb:
  if (lVar3 != 0) {
    CGuestToolInfo::getToolData();
    QString::toUtf8();
    QByteArray::fromHex((QByteArray *)&local_90);
    pQVar2 = local_90;
    lVar3 = *(long *)(local_90 + 0x10);
    if ((0x13b < *(uint *)(local_90 + lVar3)) && (0x13b < *(int *)(local_90 + 4))) {
      local_b8 = (QArrayData *)QString::fromAscii_helper("%1, %2bit, %3 cpu(s), page: %4b",0x1f);
      pcVar4 = (char *)FUN_10070fbb0(pQVar2 + lVar3 + 4);
      iVar9 = -1;
      if (pcVar4 != (char *)0x0) {
        sVar5 = _strlen(pcVar4);
        iVar9 = (int)sVar5;
      }
      local_c0 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar9);
      QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
      QString::arg(&local_a8,&local_b0,*(undefined4 *)(pQVar2 + lVar3 + 8),0,10,0x20);
      QString::arg(&local_a0,&local_a8,*(undefined4 *)(pQVar2 + lVar3 + 0xc),0,10,0x20);
      QString::arg(&local_98,&local_a0,*(undefined4 *)(pQVar2 + lVar3 + 0x10),0,10,0x20);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046e52e;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10046e52e:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046e564;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_10046e564:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046e59a;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_10046e59a:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046e5d0;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_10046e5d0:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046e606;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_10046e606:
      uVar10 = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar10 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      }
      CVmGuestOsInformation::setRealOsTypeId(uVar10);
      QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
      if (*(long *)(param_1 + 0x18) != 0) {
        QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10);
      }
      local_c8 = local_98;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      CVmGuestOsInformation::setRealOsType(QVar7);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046e68d;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_10046e68d:
      iVar9 = *(int *)(pQVar2 + lVar3 + 4);
      if (iVar9 == 7) {
        local_158 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3, build %4, platform %5",0x1f);
        QString::arg(&local_150,&local_158,*(undefined4 *)(pQVar2 + lVar3 + 0xa4),0,10,0x20);
        QString::arg(&local_148,&local_150,*(undefined4 *)(pQVar2 + lVar3 + 0xa8),0,10,0x20);
        QString::arg(&local_140,&local_148,*(undefined4 *)(pQVar2 + lVar3 + 0xac),0,10,0x20);
        sVar5 = _strlen((char *)(pQVar2 + lVar3 + 0x24));
        local_160 = (QArrayData *)
                    QString::fromAscii_helper((char *)(pQVar2 + lVar3 + 0x24),(int)sVar5);
        QString::arg(&local_138,&local_140,&local_160,0,0x20);
        sVar5 = _strlen((char *)(pQVar2 + lVar3 + 100));
        local_168 = (QArrayData *)
                    QString::fromAscii_helper((char *)(pQVar2 + lVar3 + 100),(int)sVar5);
        QString::arg(&local_130,&local_138,&local_168,0,0x20);
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046e962;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_10046e962:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046e998;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_10046e998:
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046e9ce;
          }
          QArrayData::deallocate(local_160,2,8);
        }
LAB_10046e9ce:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ea04;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_10046ea04:
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ea3a;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_10046ea3a:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ea70;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_10046ea70:
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_31 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046eaa6;
          }
          QArrayData::deallocate(local_158,2,8);
        }
LAB_10046eaa6:
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10)
          ;
        }
        local_170 = local_130;
        if (1 < *(int *)local_130 + 1U) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + 1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
        }
        CVmGuestOsInformation::setRealOsVersion(QVar7);
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046eb16;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_10046eb16:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046f00f;
          }
          QArrayData::deallocate(local_130,2,8);
        }
      }
      else if (iVar9 == 9) {
        local_118 = (QArrayData *)QString::fromAscii_helper("%1",2);
        sVar5 = _strlen((char *)(pQVar2 + lVar3 + 0x24));
        local_120 = (QArrayData *)
                    QString::fromAscii_helper((char *)(pQVar2 + lVar3 + 0x24),(int)sVar5);
        QString::arg(&local_110,&local_118,&local_120,0,0x20);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046e730;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_10046e730:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046e766;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_10046e766:
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10)
          ;
        }
        local_128 = local_110;
        if (1 < *(int *)local_110 + 1U) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + 1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
        }
        CVmGuestOsInformation::setRealOsVersion(QVar7);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046e7d6;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_10046e7d6:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046f00f;
          }
          QArrayData::deallocate(local_110,2,8);
        }
      }
      else if (iVar9 == 8) {
        local_f0 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3, %4",0xc);
        QString::arg(&local_e8,&local_f0,*(undefined4 *)(pQVar2 + lVar3 + 0x24),0,10,0x20);
        QString::arg(&local_e0,&local_e8,*(undefined4 *)(pQVar2 + lVar3 + 0x28),0,10,0x20);
        QString::arg(&local_d8,&local_e0,*(undefined4 *)(pQVar2 + lVar3 + 0x2c),0,10,0x20);
        sVar5 = _strlen((char *)(pQVar2 + lVar3 + 0x30));
        local_f8 = (QArrayData *)
                   QString::fromAscii_helper((char *)(pQVar2 + lVar3 + 0x30),(int)sVar5);
        QString::arg(&local_d0,&local_d8,&local_f8,0,0x20);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ec62;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_10046ec62:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ec98;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_10046ec98:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ecce;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_10046ecce:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ed04;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_10046ed04:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046ed3a;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_10046ed3a:
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10)
          ;
        }
        local_100 = local_d0;
        if (1 < *(int *)local_d0 + 1U) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + 1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
        }
        CVmGuestOsInformation::setRealOsVersion(QVar7);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046edaa;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_10046edaa:
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x18) + 0x10)
          ;
        }
        if (*(uint *)(pQVar2 + lVar3 + 0x20) < 0x118) {
          local_108 = (QArrayData *)PTR_shared_null_100ba20d0;
        }
        else {
          local_60 = (QArrayData *)
                     QString::fromAscii_helper
                               ("ServicePack: %1.%2; SuiteMask: 0x%3; ProductType: %4; ProductEdition: %5"
                                ,0x48);
          QString::arg(&local_58,&local_60,*(undefined2 *)(pQVar2 + lVar3 + 0x130),0,10,0x20);
          QString::arg(&local_50,&local_58,*(undefined2 *)(pQVar2 + lVar3 + 0x132),0,10,0x20);
          QString::arg(&local_48,&local_50,*(undefined2 *)(pQVar2 + lVar3 + 0x134),0,0x10,0x20);
          QString::arg(&local_40,&local_48,pQVar2[lVar3 + 0x136],0,10,0x20);
          QString::arg(&local_108,&local_40,*(undefined4 *)(pQVar2 + lVar3 + 0x138),0,10,0x20);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10046eec4;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_10046eec4:
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10046eef4;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10046eef4:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10046ef24;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_10046ef24:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10046ef54;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_10046ef54:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10046ef94;
            }
            QArrayData::deallocate(local_60,2,8);
          }
        }
LAB_10046ef94:
        CVmGuestOsInformation::setRealOsDetails(QVar7);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046efd9;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_10046efd9:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10046f00f;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
      }
LAB_10046f00f:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046f045;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_10046f045:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046f07b;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_10046f07b:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046f0ab;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10046f0ab:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046f0db;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_10046f0db:
  local_188 = (undefined8 *)0x0;
  puStack_180 = (undefined8 *)0x0;
  local_178 = (undefined8 *)0x0;
  uVar8 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar8 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  CBaseNode::toString(SUB81(&local_190,0),(bool)uVar8);
  local_198 = operator_new(0xd0);
  local_1a0 = (QArrayData *)local_190.field0_0x0;
  if (1 < *(int *)local_190.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + 1;
    local_31 = *(int *)local_190.field0_0x0 != 0;
    UNLOCK();
  }
  local_1a8 = (QArrayData *)QString::fromAscii_helper("writing_file_string",0x13);
  CVmEventParameter::CVmEventParameter(local_198,1,&local_1a0);
  if (puStack_180 == local_178) {
    FUN_10002da50(&local_188,&local_198);
  }
  else {
    *puStack_180 = local_198;
    puStack_180 = puStack_180 + 1;
  }
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046f1e7;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10046f1e7:
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046f21d;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10046f21d:
  uVar1 = DAT_1011c3650;
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_1b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_100bef0d0;
    local_1b0 = plVar6;
  }
  FUN_100063770(uVar1,0x18ce0,0,&local_188,0xbbb,&local_1b0);
  if (local_1b0 != (long *)0x0) {
    LOCK();
    plVar6 = local_1b0 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_1b0 + 0x10))();
    }
  }
  QString::operator=((QString *)(param_1 + 0x48),&local_190);
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046f2f4;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_10046f2f4:
  if (local_188 != (undefined8 *)0x0) {
    if (puStack_180 != local_188) {
      puStack_180 = (undefined8 *)
                    ((~((long)puStack_180 + (-8 - (long)local_188)) & 0xfffffffffffffff8U) +
                    (long)puStack_180);
    }
    operator_delete(local_188);
  }
  return 1;
}

