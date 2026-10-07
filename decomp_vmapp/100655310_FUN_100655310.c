
void FUN_100655310(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CHwPrinter *pCVar9;
  QMapNodeBase *pQVar10;
  QArrayData *pQVar11;
  QMapNodeBase *pQVar12;
  QMapNodeBase *pQVar13;
  long lVar14;
  QMapNodeBase *pQVar15;
  undefined1 auVar16 [16];
  QArrayData *pQStack_180;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CHwPrinter *local_138;
  Data *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString QStack_d0;
  QString local_c8;
  QMapNodeBase *local_c0;
  undefined8 local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar5 = _PMServerCreatePrinterList(0,&local_b8);
  if (iVar5 != 0) {
    FUN_1008e3970("","pvsHostInfo",0,"Error getting printer list from host! (%d)",iVar5);
    return;
  }
  lVar6 = _CFArrayGetCount(local_b8);
  puVar2 = PTR_shared_null_100ba20d0;
  local_c0 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  if (0 < lVar6) {
    auVar16._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar16._0_8_ = PTR_shared_null_100ba20d0;
    auVar16._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    lVar14 = 0;
    do {
      lVar7 = _CFArrayGetValueAtIndex(local_b8,lVar14);
      if (lVar7 != 0) {
        _PMRetain(lVar7);
        lVar8 = _PMPrinterGetName(lVar7);
        if (lVar8 == 0) {
          local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        }
        else {
          _CFRetain(lVar8);
          FUN_100788b70(&local_b0,lVar8);
          _CFRelease(lVar8);
          local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b0;
          if (1 < *(int *)local_b0 + 1U) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + 1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
          }
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10065547e;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
LAB_10065547e:
        pQStack_180 = auVar16._8_8_;
        local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        QStack_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_180;
        lVar8 = _PMPrinterGetID(lVar7);
        if (lVar8 == 0) {
          local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        }
        else {
          _CFRetain(lVar8);
          FUN_100788b70(&local_a8,lVar8);
          _CFRelease(lVar8);
          local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
          if (1 < *(int *)local_a8 + 1U) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + 1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
          }
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10065552e;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
        }
LAB_10065552e:
        QString::operator=(&local_d8,&local_e0);
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100655577;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_100655577:
        lVar8 = _PMPrinterGetLocation(lVar7);
        if (lVar8 == 0) {
          local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        }
        else {
          _CFRetain(lVar8);
          FUN_100788b70(&local_a0,lVar8);
          _CFRelease(lVar8);
          local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a0;
          if (1 < *(int *)local_a0 + 1U) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + 1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
          }
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10065560e;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
        }
LAB_10065560e:
        QString::operator=(&QStack_d0,&local_e8);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100655653;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_100655653:
        _PMRelease(lVar7);
        if (*(int *)(QStack_d0.field0_0x0 + 4) == 0) {
          QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_100ba2140,0xadd4d9);
          QString::operator=(&QStack_d0,&local_f0);
          if (*(int *)local_f0.field0_0x0 != -1) {
            if (*(int *)local_f0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
              local_31 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006556d0;
            }
            QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
          }
        }
LAB_1006556d0:
        if ((*(int *)(local_c8.field0_0x0 + 4) == 0) || (*(int *)(local_d8.field0_0x0 + 4) == 0)) {
          QString::toUtf8();
          pQVar11 = local_f8 + *(long *)(local_f8 + 0x10);
          QString::toUtf8();
          pQVar3 = local_100;
          lVar7 = *(long *)(local_100 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","pvsHostInfo",0,
                        "Printer propreties incomplete! [N: \'%s\' ID: \'%s\' Loc: \'%s\'",pQVar11,
                        pQVar3 + lVar7,local_108 + *(long *)(local_108 + 0x10));
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_31 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006557db;
            }
            QArrayData::deallocate(local_108,1,8);
          }
LAB_1006557db:
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100655811;
            }
            QArrayData::deallocate(local_100,1,8);
          }
LAB_100655811:
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100655f70;
            }
            QArrayData::deallocate(local_f8,1,8);
          }
        }
        else {
          if (1 < *(uint *)local_c0) {
            FUN_10065e420(&local_c0);
          }
          pQVar10 = local_c0;
          pQVar12 = *(QMapNodeBase **)(local_c0 + 0x10);
          pQVar13 = (QMapNodeBase *)0x0;
          if (*(QMapNodeBase **)(local_c0 + 0x10) == (QMapNodeBase *)0x0) {
LAB_1006558ba:
            pQVar15 = pQVar10 + 8;
          }
          else {
            do {
              while (pQVar15 = pQVar12, cVar4 = operator<((QString *)(pQVar15 + 0x18),&local_c8),
                    cVar4 == '\0') {
                pQVar12 = *(QMapNodeBase **)(pQVar15 + 8);
                pQVar13 = pQVar15;
                if (*(QMapNodeBase **)(pQVar15 + 8) == (QMapNodeBase *)0x0) goto LAB_1006558a6;
              }
              pQVar12 = *(QMapNodeBase **)(pQVar15 + 0x10);
            } while (*(QMapNodeBase **)(pQVar15 + 0x10) != (QMapNodeBase *)0x0);
            pQVar15 = pQVar13;
            if (pQVar13 == (QMapNodeBase *)0x0) goto LAB_1006558ba;
LAB_1006558a6:
            cVar4 = operator<(&local_c8,(QString *)(pQVar15 + 0x18));
            if (cVar4 != '\0') goto LAB_1006558ba;
          }
          if (1 < *(uint *)pQVar10) {
            FUN_10065e420(&local_c0);
            pQVar10 = local_c0;
          }
          if (pQVar15 == pQVar10 + 8) {
            FUN_10065c430(&local_c0,&local_c8,&local_d8);
          }
          else {
            if (*(int *)(*(long *)(pQVar15 + 0x20) + 4) != 0) {
              local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(pQVar15 + 0x18);
              if (1 < *(int *)local_78.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
              }
              local_88 = *(QArrayData **)(pQVar15 + 0x20);
              if (1 < *(int *)local_88 + 1U) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + 1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
              }
              local_80 = *(QArrayData **)(pQVar15 + 0x28);
              if (1 < *(int *)local_80 + 1U) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + 1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
              }
              if (*(QTypedArrayData<unsigned_short> **)(pQVar15 + 0x20) !=
                  (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
                local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
                QString::operator=((QString *)(pQVar15 + 0x20),&local_70);
                if (*(int *)local_70.field0_0x0 != -1) {
                  if (*(int *)local_70.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                    local_31 = *(int *)local_70.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006559a4;
                  }
                  QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
                }
              }
LAB_1006559a4:
              local_98 = (QArrayData *)QString::fromAscii_helper(" @ %1",5);
              QString::arg(&local_90,&local_98,pQVar15 + 0x28,0,0x20);
              QString::append(&local_78);
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 != 0) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655a1c;
                }
                QArrayData::deallocate(local_90,2,8);
              }
LAB_100655a1c:
              if (*(int *)local_98 != -1) {
                if (*(int *)local_98 != 0) {
                  LOCK();
                  *(int *)local_98 = *(int *)local_98 + -1;
                  local_31 = *(int *)local_98 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655a52;
                }
                QArrayData::deallocate(local_98,2,8);
              }
LAB_100655a52:
              FUN_10065c430(&local_c0,&local_78,&local_88);
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655a96;
                }
                QArrayData::deallocate(local_80,2,8);
              }
LAB_100655a96:
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655ac6;
                }
                QArrayData::deallocate(local_88,2,8);
              }
LAB_100655ac6:
              if (*(int *)local_78.field0_0x0 != -1) {
                if (*(int *)local_78.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                  local_31 = *(int *)local_78.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655af6;
                }
                QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
              }
            }
LAB_100655af6:
            local_118 = (QArrayData *)QString::fromAscii_helper(" @ %1",5);
            QString::arg(&local_110,&local_118,&QStack_d0,0,0x20);
            QString::append(&local_c8);
            if (*(int *)local_110 != -1) {
              if (*(int *)local_110 != 0) {
                LOCK();
                *(int *)local_110 = *(int *)local_110 + -1;
                local_31 = *(int *)local_110 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100655b74;
              }
              QArrayData::deallocate(local_110,2,8);
            }
LAB_100655b74:
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100655baa;
              }
              QArrayData::deallocate(local_118,2,8);
            }
LAB_100655baa:
            if (1 < *(uint *)local_c0) {
              FUN_10065e420(&local_c0);
            }
            pQVar10 = local_c0;
            pQVar12 = *(QMapNodeBase **)(local_c0 + 0x10);
            pQVar13 = (QMapNodeBase *)0x0;
            if (*(QMapNodeBase **)(local_c0 + 0x10) == (QMapNodeBase *)0x0) {
LAB_100655c5a:
              pQVar15 = pQVar10 + 8;
            }
            else {
              do {
                while (pQVar15 = pQVar12, cVar4 = operator<((QString *)(pQVar15 + 0x18),&local_c8),
                      cVar4 == '\0') {
                  pQVar12 = *(QMapNodeBase **)(pQVar15 + 8);
                  pQVar13 = pQVar15;
                  if (*(QMapNodeBase **)(pQVar15 + 8) == (QMapNodeBase *)0x0) goto LAB_100655c46;
                }
                pQVar12 = *(QMapNodeBase **)(pQVar15 + 0x10);
              } while (*(QMapNodeBase **)(pQVar15 + 0x10) != (QMapNodeBase *)0x0);
              pQVar15 = pQVar13;
              if (pQVar13 == (QMapNodeBase *)0x0) goto LAB_100655c5a;
LAB_100655c46:
              cVar4 = operator<(&local_c8,(QString *)(pQVar15 + 0x18));
              if (cVar4 != '\0') goto LAB_100655c5a;
            }
            if (1 < *(uint *)pQVar10) {
              FUN_10065e420(&local_c0);
              pQVar10 = local_c0;
            }
            if (pQVar15 == pQVar10 + 8) {
              FUN_10065c430(&local_c0,&local_c8,&local_d8);
            }
            else {
              if (*(int *)(*(long *)(pQVar15 + 0x20) + 4) != 0) {
                local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(pQVar15 + 0x18);
                if (1 < *(int *)local_48.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
                  local_31 = *(int *)local_48.field0_0x0 != 0;
                  UNLOCK();
                }
                local_58 = *(QArrayData **)(pQVar15 + 0x20);
                if (1 < *(int *)local_58 + 1U) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + 1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                }
                local_50 = *(QArrayData **)(pQVar15 + 0x28);
                pQVar15 = pQVar15 + 0x20;
                if (1 < *(int *)local_50 + 1U) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + 1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                }
                if (*(QTypedArrayData<unsigned_short> **)pQVar15 !=
                    (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
                  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0
                  ;
                  QString::operator=((QString *)pQVar15,&local_40);
                  if (*(int *)local_40.field0_0x0 != -1) {
                    if (*(int *)local_40.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                      local_31 = *(int *)local_40.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100655d44;
                    }
                    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
                  }
                }
LAB_100655d44:
                local_68 = (QArrayData *)QString::fromAscii_helper(" [%1]",5);
                QString::arg(&local_60,&local_68,pQVar15,0,0x20);
                QString::append(&local_48);
                if (*(int *)local_60 != -1) {
                  if (*(int *)local_60 != 0) {
                    LOCK();
                    *(int *)local_60 = *(int *)local_60 + -1;
                    local_31 = *(int *)local_60 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100655dac;
                  }
                  QArrayData::deallocate(local_60,2,8);
                }
LAB_100655dac:
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_31 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100655ddc;
                  }
                  QArrayData::deallocate(local_68,2,8);
                }
LAB_100655ddc:
                FUN_10065c430(&local_c0,&local_48,&local_58);
                if (*(int *)local_50 != -1) {
                  if (*(int *)local_50 != 0) {
                    LOCK();
                    *(int *)local_50 = *(int *)local_50 + -1;
                    local_31 = *(int *)local_50 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100655e20;
                  }
                  QArrayData::deallocate(local_50,2,8);
                }
LAB_100655e20:
                if (*(int *)local_58 != -1) {
                  if (*(int *)local_58 != 0) {
                    LOCK();
                    *(int *)local_58 = *(int *)local_58 + -1;
                    local_31 = *(int *)local_58 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100655e50;
                  }
                  QArrayData::deallocate(local_58,2,8);
                }
LAB_100655e50:
                if (*(int *)local_48.field0_0x0 != -1) {
                  if (*(int *)local_48.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                    local_31 = *(int *)local_48.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100655e80;
                  }
                  QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
                }
              }
LAB_100655e80:
              local_128 = (QArrayData *)QString::fromAscii_helper(" [%1]",5);
              QString::arg(&local_120,&local_128,&local_d8,0,0x20);
              QString::append(&local_c8);
              if (*(int *)local_120 != -1) {
                if (*(int *)local_120 != 0) {
                  LOCK();
                  *(int *)local_120 = *(int *)local_120 + -1;
                  local_31 = *(int *)local_120 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655f02;
                }
                QArrayData::deallocate(local_120,2,8);
              }
LAB_100655f02:
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_31 = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100655f38;
                }
                QArrayData::deallocate(local_128,2,8);
              }
LAB_100655f38:
              FUN_10065c430(&local_c0,&local_c8,&local_d8);
            }
          }
        }
LAB_100655f70:
        if (*(int *)QStack_d0.field0_0x0 != -1) {
          if (*(int *)QStack_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)QStack_d0.field0_0x0 = *(int *)QStack_d0.field0_0x0 + -1;
            local_31 = *(int *)QStack_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100655fa6;
          }
          QArrayData::deallocate((QArrayData *)QStack_d0.field0_0x0,2,8);
        }
LAB_100655fa6:
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100655fe3;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_100655fe3:
        if (*(int *)local_c8.field0_0x0 != -1) {
          if (*(int *)local_c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
            local_31 = *(int *)local_c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100656019;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
        }
      }
LAB_100656019:
      lVar14 = lVar14 + 1;
    } while (lVar14 < lVar6);
  }
  _CFRelease();
  local_130 = (Data *)PTR_shared_null_100ba2188;
  pCVar9 = operator_new(0xc0,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pCVar9 == (CHwPrinter *)0x0) {
    local_138 = (CHwPrinter *)0x0;
    FUN_1008e3970("","pvsHostInfo",0,"Error allocating memory for default printer info");
  }
  else {
    CHwPrinter::CHwPrinter(pCVar9);
    pcVar1 = *(code **)(*(long *)pCVar9 + 0xa0);
    local_138 = pCVar9;
    QMetaObject::tr((char *)&local_140,PTR_staticMetaObject_100ba2140,0x9e77f8);
    (*pcVar1)(pCVar9,&local_140);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006560e7;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1006560e7:
    pcVar1 = *(code **)(*(long *)pCVar9 + 0xb0);
    QMetaObject::tr((char *)&local_148,PTR_staticMetaObject_100ba2140,0x9e77f8);
    (*pcVar1)(pCVar9,&local_148);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100656156;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100656156:
    FUN_10065c560(&local_130,&local_138);
    if (1 < *(uint *)local_c0) {
      FUN_10065e420(&local_c0);
    }
    if (*(long *)(local_c0 + 0x10) == 0) {
      pQVar10 = local_c0 + 8;
    }
    else {
      pQVar10 = *(QMapNodeBase **)(local_c0 + 0x20);
    }
    pQVar12 = local_c0;
    while( true ) {
      if (1 < *(uint *)pQVar12) {
        FUN_10065e420(&local_c0);
        pQVar12 = local_c0;
      }
      if (pQVar10 == pQVar12 + 8) break;
      if (*(int *)(*(long *)(pQVar10 + 0x20) + 4) != 0) {
        pCVar9 = operator_new(0xc0,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (pCVar9 == (CHwPrinter *)0x0) {
          local_138 = (CHwPrinter *)0x0;
          QString::toUtf8();
          pQVar3 = local_150;
          lVar6 = *(long *)(local_150 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","pvsHostInfo",0,"Error allocating memory for printer info: %s ID %s",
                        pQVar3 + lVar6,local_158 + *(long *)(local_158 + 0x10));
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_31 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006563d4;
            }
            QArrayData::deallocate(local_158,1,8);
          }
LAB_1006563d4:
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_31 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100656420;
            }
            QArrayData::deallocate(local_150,1,8);
          }
        }
        else {
          CHwPrinter::CHwPrinter(pCVar9);
          pcVar1 = *(code **)(*(long *)pCVar9 + 0xa0);
          local_160 = *(QArrayData **)(pQVar10 + 0x18);
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
          }
          local_138 = pCVar9;
          (*pcVar1)(pCVar9,&local_160);
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006562ab;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_1006562ab:
          pcVar1 = *(code **)(*(long *)pCVar9 + 0xb0);
          local_168 = *(QArrayData **)(pQVar10 + 0x20);
          if (1 < *(int *)local_168 + 1U) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + 1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
          }
          (*pcVar1)(pCVar9,&local_168);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100656314;
            }
            QArrayData::deallocate(local_168,2,8);
          }
LAB_100656314:
          FUN_10065c560(&local_130,&local_138);
        }
      }
LAB_100656420:
      pQVar10 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
    FUN_10065c5c0(param_1,&local_130,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x188));
  }
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006564b6;
    }
    QListData::dispose(local_130);
  }
LAB_1006564b6:
  pQVar10 = local_c0;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(local_c0 + 0x10) != 0) {
      FUN_10065e5b0();
      QMapDataBase::freeTree(pQVar10,(int)*(undefined8 *)(pQVar10 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar10);
  }
  return;
}

