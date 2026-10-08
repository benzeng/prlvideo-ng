
ulong FUN_1003b84e0(undefined8 param_1,int param_2,uint param_3,QString *param_4,int param_5,
                   QString *param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  Data *pDVar11;
  Data *pDVar12;
  uint local_198;
  QString local_178;
  QVariant local_170;
  QString local_160;
  QString local_158;
  QString local_150;
  QVariant local_148;
  QArrayData *local_138;
  QString local_130;
  QVariant local_128;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  Data *local_68;
  int local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_68 = (Data *)PTR_shared_null_1021e15e8;
  local_5c = param_2;
  FUN_1003bc3f0(&local_68,&local_5c);
  FUN_1003bdc60(&local_88,&local_68);
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  iVar6 = 2;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    local_198 = param_3 & 0xfffffffe;
    do {
      local_70 = 1;
      uVar1 = **(undefined4 **)local_80;
      uVar7 = FUN_1003b0af0(param_1);
      local_a0 = (QArrayData *)QString::fromAscii_helper("Hardware.%1",0xb);
      FUN_1003b0eb0(&local_a8,uVar1);
      QString::arg(&local_98,&local_a0,&local_a8,0,0x20);
      FUN_1003e17d0(&local_90,uVar7,&local_98);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b868e;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1003b868e:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b86c4;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1003b86c4:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b86fa;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1003b86fa:
      local_c8 = local_90;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 == 0) {
          QListData::detach((int)&local_c8);
          lVar9 = (long)*(int *)(local_c8 + 8);
          if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_c8 + lVar9 * 8) &&
             (lVar10 = *(int *)(local_c8 + 0xc) - lVar9,
             lVar10 != 0 && lVar9 <= *(int *)(local_c8 + 0xc))) {
            _memcpy(local_c8 + lVar9 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                    lVar10 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
      }
      local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
      local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
      if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
        do {
          local_b0 = 1;
          iVar6 = *(int *)local_c0;
          if (iVar6 != param_5) {
            local_e0 = (QArrayData *)QString::fromAscii_helper("Hardware.%1[%2]",0xf);
            FUN_1003b0eb0(&local_e8,uVar1);
            QString::arg(&local_d8,&local_e0,&local_e8,0,0x20);
            QString::arg(&local_d0,&local_d8,(long)iVar6,0,10,0x20);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b8855;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_1003b8855:
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_31 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b888b;
              }
              QArrayData::deallocate(local_e8,2,8);
            }
LAB_1003b888b:
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b88c1;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
LAB_1003b88c1:
            uVar7 = FUN_1003b0af0(param_1);
            local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
            if (1 < *(int *)local_d0 + 1U) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + 1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_58,0x1df1f84);
            QString::append(&local_100);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b8946;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_1003b8946:
            FUN_1003e1800(&local_f8,uVar7,&local_100);
            if (*(int *)local_100.field0_0x0 != -1) {
              if (*(int *)local_100.field0_0x0 != 0) {
                LOCK();
                *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                local_31 = *(int *)local_100.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b8994;
              }
              QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
            }
LAB_1003b8994:
            iVar6 = 0xd;
            if (((local_f8.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) &&
               (uVar8 = QVariant::toLongLong((bool *)&local_f8), uVar8 == param_3)) {
              EnumUtils::enumToString(&local_108,param_2);
              iVar6 = 0x1d;
              if (param_2 - 3U < 0x16) {
                iVar6 = *(int *)(&DAT_100e1b110 + (long)(int)(param_2 - 3U) * 4);
              }
              cVar4 = FUN_1003b1e20(iVar6);
              if ((cVar4 != '\0') &&
                 ((7 < iVar6 - 0xbU || ((0x3eU >> (iVar6 - 0xbU & 0x1f) & 1) != 0)))) {
                uVar7 = FUN_1003b0af0(param_1);
                local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
                if (1 < *(int *)local_d0 + 1U) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + 1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_50,0x1df1fc3);
                QString::append(&local_130);
                if (*(int *)local_50 != -1) {
                  if (*(int *)local_50 != 0) {
                    LOCK();
                    *(int *)local_50 = *(int *)local_50 + -1;
                    local_31 = *(int *)local_50 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8a9c;
                  }
                  QArrayData::deallocate(local_50,2,8);
                }
LAB_1003b8a9c:
                FUN_1003e1800(&local_128,uVar7,&local_130,0);
                iVar6 = QVariant::toUInt((bool *)&local_128);
                QString::number((uint)&local_118,iVar6 + 1);
                QString::fromUtf8_helper((char *)&local_110,0x1e31adc);
                QString::append(&local_110);
                QString::append(&local_108);
                if (*(int *)local_110.field0_0x0 != -1) {
                  if (*(int *)local_110.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                    local_31 = *(int *)local_110.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8b63;
                  }
                  QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                }
LAB_1003b8b63:
                if (*(int *)local_118 != -1) {
                  if (*(int *)local_118 != 0) {
                    LOCK();
                    *(int *)local_118 = *(int *)local_118 + -1;
                    local_31 = *(int *)local_118 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8ba3;
                  }
                  QArrayData::deallocate(local_118,2,8);
                }
LAB_1003b8ba3:
                QVariant::~QVariant(&local_128);
                if (*(int *)local_130.field0_0x0 != -1) {
                  if (*(int *)local_130.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                    local_31 = *(int *)local_130.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8beb;
                  }
                  QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
                }
              }
LAB_1003b8beb:
              uVar7 = FUN_1003b0af0(param_1);
              local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
              if (1 < *(int *)local_d0 + 1U) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + 1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
              }
              QString::fromUtf8_helper((char *)&local_48,0x1df16d5);
              QString::append(&local_150);
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003b8c70;
                }
                QArrayData::deallocate(local_48,2,8);
              }
LAB_1003b8c70:
              FUN_1003e1800(&local_148,uVar7,&local_150);
              QVariant::toString();
              QVariant::~QVariant(&local_148);
              if (*(int *)local_150.field0_0x0 != -1) {
                if (*(int *)local_150.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                  local_31 = *(int *)local_150.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003b8cd8;
                }
                QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
              }
LAB_1003b8cd8:
              iVar6 = 1;
              if (param_2 == 10) {
                if (((param_3 & 0xfffffffe) == 2 || param_3 == 2 && param_2 == 0xb) ||
                    param_3 == 1 && param_2 == 5) goto LAB_1003b8df2;
LAB_1003b8dff:
                uVar7 = FUN_1003b0af0(param_1);
                local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
                if (1 < *(int *)local_d0 + 1U) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + 1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_40,0x1df16d5);
                QString::append(&local_178);
                if (*(int *)local_40 != -1) {
                  if (*(int *)local_40 != 0) {
                    LOCK();
                    *(int *)local_40 = *(int *)local_40 + -1;
                    local_31 = *(int *)local_40 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8e86;
                  }
                  QArrayData::deallocate(local_40,2,8);
                }
LAB_1003b8e86:
                FUN_1003e1800(&local_170,uVar7,&local_178);
                QVariant::toString();
                cVar4 = operator==(&local_160,param_4);
                if (*(int *)local_160.field0_0x0 != -1) {
                  if (*(int *)local_160.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
                    local_31 = *(int *)local_160.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8efe;
                  }
                  QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
                }
LAB_1003b8efe:
                QVariant::~QVariant(&local_170);
                if (*(int *)local_178.field0_0x0 != -1) {
                  if (*(int *)local_178.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
                    local_31 = *(int *)local_178.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003b8f3f;
                  }
                  QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
                }
LAB_1003b8f3f:
                if (cVar4 == '\0') {
LAB_1003b8f6c:
                  iVar6 = 0;
                }
                else if (param_6 == (QString *)0x0) {
                  local_198 = 0;
                }
                else {
                  QString::operator=(param_6,&local_108);
                  local_198 = 0;
                }
              }
              else {
                if (param_2 != 8) {
                  if ((param_2 == 6) && ((param_3 == 0 || (param_3 == 3)))) {
                    FUN_1003b83e0(&local_158,param_1,&local_d0);
                    bVar5 = operator==(&local_158,param_4);
                    local_198 = (uint)(byte)((byte)local_198 & (bVar5 ^ 1));
                    if ((param_6 != (QString *)0x0) && ((bVar5 ^ 1) == 0)) {
                      QString::operator=(param_6,&local_108);
                      bVar5 = 1;
                      local_198 = 0;
                    }
                    if (*(int *)local_158.field0_0x0 != -1) {
                      if (*(int *)local_158.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
                        local_31 = *(int *)local_158.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1003b8dc6;
                      }
                      QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
                    }
LAB_1003b8dc6:
                    if (bVar5 == 0) goto LAB_1003b8f6c;
                    goto LAB_1003b8f7a;
                  }
                  if ((param_3 != 2 || param_2 != 0xb) && (param_3 != 1 || param_2 != 5))
                  goto LAB_1003b8dff;
                }
LAB_1003b8df2:
                local_198 = 1;
              }
LAB_1003b8f7a:
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_31 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003b8fb0;
                }
                QArrayData::deallocate(local_138,2,8);
              }
LAB_1003b8fb0:
              if (*(int *)local_108.field0_0x0 != -1) {
                if (*(int *)local_108.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                  local_31 = *(int *)local_108.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003b8ff0;
                }
                QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
              }
            }
LAB_1003b8ff0:
            QVariant::~QVariant(&local_f8);
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b9039;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
LAB_1003b9039:
            if ((iVar6 != 0) && (iVar6 != 0xd)) goto LAB_1003b9085;
          }
          local_c0 = local_c0 + 8;
        } while (local_c0 != local_b8);
      }
      local_b0 = 1;
      iVar6 = 8;
LAB_1003b9085:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b90b1;
        }
        QListData::dispose(local_c8);
      }
LAB_1003b90b1:
      if (iVar6 == 8) {
        iVar6 = 0;
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b90e8;
        }
        QListData::dispose(local_90);
      }
LAB_1003b90e8:
      if (iVar6 != 0) goto LAB_1003b9390;
      local_80 = local_80 + 8;
      local_70 = 1;
    } while (local_80 != local_78);
    iVar6 = 2;
LAB_1003b9390:
    param_4 = (QString *)(ulong)local_198;
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b93ff;
    }
    iVar2 = *(int *)(local_88 + 0xc);
    if (iVar2 != *(int *)(local_88 + 8)) {
      lVar9 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar2 * -8;
      pDVar11 = local_88 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_1003b93ff:
  pDVar11 = local_68;
  uVar3 = *(uint *)local_68;
  uVar8 = (ulong)uVar3;
  if (uVar3 != 0xffffffff) {
    if (uVar3 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) goto LAB_1003b946f;
      local_31 = 0;
    }
    iVar2 = *(int *)(local_68 + 0xc);
    if (iVar2 != *(int *)(local_68 + 8)) {
      lVar9 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar2 * -8;
      pDVar12 = local_68 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar12 != (void *)0x0) {
          operator_delete(*(void **)pDVar12);
        }
        pDVar12 = pDVar12 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    uVar8 = QListData::dispose(pDVar11);
  }
LAB_1003b946f:
  return CONCAT71((int7)(uVar8 >> 8),iVar6 == 2 | (byte)param_4) & 0xffffffffffffff01;
}

