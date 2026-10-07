
byte FUN_1006ad450(int *param_1,QString *param_2,QString *param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  QArrayData *pQVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lStack_190;
  long lStack_180;
  long *local_168;
  long *local_150;
  long *local_138;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
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
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  long local_68;
  long *local_60;
  long *local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_31;
  
  if (*param_1 == 0) {
    bVar9 = 0;
    FUN_1008e3970("","KeyValueDataParser",0,"Error: can\'t insert line with read only mode");
    goto LAB_1006ae604;
  }
  plVar13 = *(long **)(param_1 + 2);
  uVar1 = *(uint *)(plVar13 + 4);
  if (uVar1 == 0) {
    bVar9 = 0;
    goto LAB_1006ae604;
  }
  uVar10 = qHash(param_2,*(uint *)((long)plVar13 + 0x24));
  uVar19 = (ulong)uVar10 % (ulong)uVar1;
  plVar22 = *(long **)(plVar13[1] + uVar19 * 8);
  if (plVar22 == plVar13) {
    bVar9 = 0;
    goto LAB_1006ae604;
  }
  plVar20 = (long *)(plVar13[1] + uVar19 * 8);
  do {
    plVar25 = plVar13;
    if (*(uint *)(plVar22 + 1) == uVar10) {
      cVar8 = operator==(param_2,(QString *)(plVar22 + 2));
      plVar13 = (long *)*plVar20;
      plVar25 = *(long **)(param_1 + 2);
      plVar22 = plVar13;
      if (cVar8 != '\0') break;
    }
    plVar13 = plVar25;
    plVar20 = plVar22;
    plVar22 = (long *)*plVar20;
    plVar25 = plVar13;
  } while (plVar22 != plVar13);
  if (plVar13 == plVar25) {
    bVar9 = 0;
    goto LAB_1006ae604;
  }
  plVar13 = (long *)FUN_1006b16c0(param_1 + 2,param_2);
  lVar14 = 0;
  if (*plVar13 != 0) {
    lVar14 = *(long *)(*plVar13 + 0x10);
  }
  local_40 = 0;
  lVar14 = *(long *)(*(long *)(lVar14 + 0x80) + 0x10);
  lVar21 = 0;
  if (lVar14 == 0) {
LAB_1006ad5c4:
    lVar18 = 0;
  }
  else {
    do {
      while (lVar18 = lVar14, cVar8 = operator<((QString *)(lVar18 + 0x18),param_3), cVar8 == '\0')
      {
        lVar14 = *(long *)(lVar18 + 8);
        lVar21 = lVar18;
        if (*(long *)(lVar18 + 8) == 0) goto LAB_1006ad5b4;
      }
      lVar14 = *(long *)(lVar18 + 0x10);
    } while (*(long *)(lVar18 + 0x10) != 0);
    lVar18 = lVar21;
    if (lVar21 == 0) goto LAB_1006ad5c4;
LAB_1006ad5b4:
    cVar8 = operator<(param_3,(QString *)(lVar18 + 0x18));
    if (cVar8 != '\0') goto LAB_1006ad5c4;
  }
  puVar16 = &local_40;
  if (lVar18 != 0) {
    puVar16 = (undefined8 *)(lVar18 + 0x20);
  }
  local_138 = (long *)*puVar16;
  if ((local_138 != (long *)0x0) &&
     (*(int *)(*param_4 + 0xc) - *(int *)(*param_4 + 8) ==
      *(int *)(local_138[4] + 0xc) - *(int *)(local_138[4] + 8))) {
    bVar9 = FUN_1006aed80(param_1,plVar13,local_138,param_3,param_4);
    goto LAB_1006ae604;
  }
  lVar14 = 0;
  if (*plVar13 != 0) {
    lVar14 = *(long *)(*plVar13 + 0x10);
  }
  FUN_1006b2930(local_48,lVar14 + 0x58);
  lVar14 = 0;
  if (*plVar13 != 0) {
    lVar14 = *(long *)(*plVar13 + 0x10);
  }
  FUN_1006a6380(local_48,lVar14 + 0x18);
  FUN_1006b2930(&local_68,local_48);
  puVar6 = PTR_shared_null_100ba2188;
  puVar5 = PTR_shared_null_100ba20d0;
  local_60 = (long *)(local_68 + 0x10 + (long)*(int *)(local_68 + 8) * 8);
  local_58 = (long *)(local_68 + 0x10 + (long)*(int *)(local_68 + 0xc) * 8);
  local_50 = 1;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    auVar27._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar27._0_8_ = PTR_shared_null_100ba20d0;
    auVar27._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    auVar28._8_4_ = (int)PTR_shared_null_100ba2188;
    auVar28._0_8_ = PTR_shared_null_100ba2188;
    auVar28._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
    local_168 = (long *)PTR_shared_null_100ba2188;
LAB_1006ad700:
    local_50 = 1;
    lVar14 = *local_60;
    lVar18 = *(long *)(lVar14 + 0x28);
    uVar1 = *(uint *)(lVar18 + 8);
    iVar12 = *(int *)(lVar18 + 0xc);
    lVar21 = *param_4;
    iVar23 = *(int *)(lVar21 + 8);
    iVar11 = *(int *)(lVar21 + 0xc);
    if ((iVar12 - uVar1 == iVar11 - iVar23) ||
       (iVar12 - uVar1 ==
        ((iVar11 - iVar23) + *(int *)(*(long *)(lVar14 + 0x30) + 0xc)) -
        *(int *)(*(long *)(lVar14 + 0x30) + 8))) {
      local_70.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar14 + 0x18);
      if (1 < *(int *)local_70.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        lVar18 = *(long *)(lVar14 + 0x28);
        uVar1 = *(uint *)(lVar18 + 8);
        iVar12 = *(int *)(lVar18 + 0xc);
        lVar21 = *param_4;
        iVar23 = *(int *)(lVar21 + 8);
        iVar11 = *(int *)(lVar21 + 0xc);
      }
      uVar19 = (ulong)uVar1;
      lVar24 = 0;
      iVar3 = iVar23;
      iVar4 = iVar11;
      if ((int)uVar1 < iVar12) {
        do {
          iVar2 = *(int *)(lVar18 + 0x10 + ((int)uVar19 + lVar24) * 8);
          local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          if (lVar24 < iVar4 - iVar3) {
            QString::operator=(&local_78,(QString *)(lVar21 + 0x10 + (iVar3 + lVar24) * 8));
LAB_1006ad850:
            pQVar15 = (QArrayData *)QString::fromAscii_helper("%",1);
            local_90 = (QArrayData *)QString::fromAscii_helper("%1",2);
            QString::arg(&local_88,&local_90,(long)iVar2,0,10,0x20);
            if (1 < *(int *)pQVar15 + 1U) {
              LOCK();
              *(int *)pQVar15 = *(int *)pQVar15 + 1;
              local_31 = *(int *)pQVar15 != 0;
              UNLOCK();
            }
            local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar15;
            QString::append(&local_80);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006ad8f1;
              }
              QArrayData::deallocate(local_88,2,8);
            }
LAB_1006ad8f1:
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006ad927;
              }
              QArrayData::deallocate(local_90,2,8);
            }
LAB_1006ad927:
            if (*(int *)pQVar15 != -1) {
              if (*(int *)pQVar15 != 0) {
                LOCK();
                *(int *)pQVar15 = *(int *)pQVar15 + -1;
                local_31 = *(int *)pQVar15 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006ad954;
              }
              QArrayData::deallocate(pQVar15,2,8);
            }
LAB_1006ad954:
            QString::replace(&local_70,&local_80,&local_78,1);
            if (*(int *)local_80.field0_0x0 != -1) {
              if (*(int *)local_80.field0_0x0 != 0) {
                LOCK();
                *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                local_31 = *(int *)local_80.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006ad99a;
              }
              QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
            }
          }
          else {
            lVar21 = *(long *)(lVar14 + 0x30);
            iVar3 = *(int *)(lVar21 + 8);
            if (iVar3 != *(int *)(lVar21 + 0xc)) {
              piVar17 = (int *)(lVar21 + 0x10 + (long)iVar3 * 8);
              lVar21 = (long)*(int *)(lVar21 + 0xc) * 8 + (long)iVar3 * -8;
              do {
                if (*piVar17 == iVar2) goto LAB_1006ad850;
                piVar17 = piVar17 + 2;
                lVar21 = lVar21 + -8;
              } while (lVar21 != 0);
            }
            FUN_1008e3970("","KeyValueDataParser",0,"Error: wrong optinal values format!");
          }
LAB_1006ad99a:
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006ad9ca;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_1006ad9ca:
          lVar24 = lVar24 + 1;
          lVar18 = *(long *)(lVar14 + 0x28);
          uVar19 = (ulong)*(int *)(lVar18 + 8);
          if ((long)((long)*(int *)(lVar18 + 0xc) - uVar19) <= lVar24) break;
          lVar21 = *param_4;
          iVar3 = *(int *)(lVar21 + 8);
          iVar4 = *(int *)(lVar21 + 0xc);
        } while( true );
      }
      pQVar15 = (QArrayData *)QString::fromAscii_helper("%",1);
      local_a8 = (QArrayData *)QString::fromAscii_helper("%1",2);
      QString::arg(&local_a0,&local_a8,(long)*(int *)(lVar14 + 0x20),0,10,0x20);
      if (1 < *(int *)pQVar15 + 1U) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + 1;
        local_31 = *(int *)pQVar15 != 0;
        UNLOCK();
      }
      local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar15;
      QString::append(&local_98);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006ada97;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1006ada97:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006adacd;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1006adacd:
      if (*(int *)pQVar15 != -1) {
        if (*(int *)pQVar15 != 0) {
          LOCK();
          *(int *)pQVar15 = *(int *)pQVar15 + -1;
          local_31 = *(int *)pQVar15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006adaf8;
        }
        QArrayData::deallocate(pQVar15,2,8);
      }
LAB_1006adaf8:
      QString::replace(&local_70,&local_98,param_3,1);
      if (iVar12 - uVar1 != iVar11 - iVar23) {
        local_c8 = *(Data **)(lVar14 + 0x30);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 == 0) {
            QListData::detach((int)&local_c8);
            lVar18 = (long)*(int *)(local_c8 + 8);
            lVar21 = *(long *)(lVar14 + 0x30);
            if (((Data *)(lVar21 + (long)*(int *)(lVar21 + 8) * 8) != local_c8 + lVar18 * 8) &&
               (lVar24 = *(int *)(local_c8 + 0xc) - lVar18,
               lVar24 != 0 && lVar18 <= *(int *)(local_c8 + 0xc))) {
              _memcpy(local_c8 + lVar18 * 8 + 0x10,
                      (void *)(lVar21 + 0x10 + (long)*(int *)(lVar21 + 8) * 8),lVar24 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + 1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
          }
        }
        local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
        local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
        if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
          iVar12 = 0;
          do {
            local_b0 = 1;
            iVar23 = *(int *)local_c0;
            iVar11 = QRegExp::captureCount();
            if (iVar11 < iVar23) {
              FUN_1008e3970("","KeyValueDataParser",0,"Error: wrong optional values format!");
            }
            else {
              QRegExp::cap((int)&local_d0);
              iVar23 = QRegExp::pos((int)lVar14);
              uVar1 = *(uint *)(local_d0 + 4);
              local_d8 = (QArrayData *)QString::fromAscii_helper("",0);
              QString::replace((int)&local_70,iVar23 + iVar12,(QString *)(ulong)uVar1);
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006adc97;
                }
                QArrayData::deallocate(local_d8,2,8);
              }
LAB_1006adc97:
              iVar12 = iVar12 - *(int *)(local_d0 + 4);
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006adce0;
                }
                QArrayData::deallocate(local_d0,2,8);
              }
            }
LAB_1006adce0:
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
            if ((bool)local_31) goto LAB_1006add40;
          }
          QListData::dispose(local_c8);
        }
      }
LAB_1006add40:
      if (local_138 == (long *)0x0) {
        if (*param_1 != 2) {
          local_108 = (QArrayData *)local_70.field0_0x0;
          if (1 < *(int *)local_70.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","KeyValueDataParser",0,
                        "Error: try to insert new \'%s\' with wrong open mode",
                        local_100 + *(long *)(local_100 + 0x10));
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006ade5f;
            }
            QArrayData::deallocate(local_100,1,8);
          }
LAB_1006ade5f:
          iVar12 = 1;
          if (*(int *)local_108 == -1) {
LAB_1006adea2:
            local_168 = (long *)0x0;
            local_138 = (long *)0x0;
          }
          else {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_31 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006adea2;
            }
            local_138 = (long *)0x0;
            QArrayData::deallocate(local_108,2,8);
            local_168 = (long *)0x0;
          }
          goto LAB_1006ae450;
        }
        lVar14 = *plVar13;
        plVar22 = *(long **)(*(long *)(lVar14 + 0x10) + 0x68);
        plVar20 = *(long **)(*(long *)(lVar14 + 0x10) + 0x78);
        lStack_180 = auVar27._8_8_;
        lStack_190 = auVar28._8_8_;
        if (plVar22 == (long *)0x0) {
          if (plVar20 == (long *)0x0) {
            iVar23 = 0;
            local_150 = (long *)0x0;
            plVar25 = (long *)0x0;
            iVar12 = 0;
            plVar22 = *(long **)(param_1 + 8);
            do {
              lVar21 = 0;
              if (lVar14 != 0) {
                lVar21 = *(long *)(lVar14 + 0x10);
              }
              local_110 = (QArrayData *)QString::fromAscii_helper("\n",1);
              iVar12 = QString::indexOf(lVar21 + 0x10,&local_110,iVar12,1);
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006ae2fe;
                }
                QArrayData::deallocate(local_110,2,8);
              }
LAB_1006ae2fe:
              if (iVar12 == -1) goto LAB_1006ae055;
              plVar25 = operator_new(0x68,(nothrow_t *)PTR_nothrow_100ba21c8);
              if (plVar25 == (long *)0x0) goto LAB_1006ae4e2;
              plVar25[2] = (long)puVar5;
              plVar25[3] = lStack_180;
              puVar7 = PTR_shared_null_100ba2188;
              plVar25[4] = (long)PTR_shared_null_100ba2188;
              QRegExp::QRegExp((QRegExp *)(plVar25 + 5));
              *(undefined4 *)(plVar25 + 6) = 0;
              plVar25[7] = (long)puVar7;
              plVar25[8] = (long)PTR_shared_null_100ba20d0;
              *(undefined4 *)(plVar25 + 9) = 0;
              plVar25[10] = (long)puVar6;
              plVar25[0xb] = lStack_190;
              plVar25[0xc] = 0;
              iVar11 = 0;
              if (*plVar13 != 0) {
                iVar11 = (int)*(undefined8 *)(*plVar13 + 0x10);
              }
              iVar12 = iVar12 + 1;
              QString::mid((int)&local_118,iVar11 + 0x10);
              QString::operator=((QString *)(plVar25 + 2),&local_118);
              if (*(int *)local_118.field0_0x0 != -1) {
                if (*(int *)local_118.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                  local_31 = *(int *)local_118.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006ae240;
                }
                QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
              }
LAB_1006ae240:
              lVar14 = *plVar22;
              *(long **)(lVar14 + 8) = plVar25;
              *plVar25 = lVar14;
              plVar25[1] = (long)plVar22;
              *plVar22 = (long)plVar25;
              iVar23 = iVar23 + 1;
              if (local_150 == (long *)0x0) {
                local_150 = plVar25;
              }
              lVar14 = *plVar13;
              plVar22 = plVar25;
            } while( true );
          }
LAB_1006ae043:
          iVar23 = 0;
          local_150 = (long *)0x0;
          plVar25 = (long *)0x0;
          plVar22 = plVar20;
        }
        else {
          iVar23 = 0;
          local_150 = (long *)0x0;
          plVar25 = (long *)0x0;
          if (plVar20 != (long *)0x0) goto LAB_1006ae043;
        }
LAB_1006ae055:
        local_138 = operator_new(0x68,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (local_138 != (long *)0x0) {
          local_138[2] = (long)puVar5;
          local_138[3] = lStack_180;
          puVar7 = PTR_shared_null_100ba2188;
          local_138[4] = (long)PTR_shared_null_100ba2188;
          QRegExp::QRegExp((QRegExp *)(local_138 + 5));
          *(undefined4 *)(local_138 + 6) = 0;
          local_138[7] = (long)puVar7;
          local_138[8] = (long)PTR_shared_null_100ba20d0;
          *(undefined4 *)(local_138 + 9) = 0;
          local_138[10] = (long)puVar6;
          local_138[0xb] = lStack_190;
          local_138[0xc] = 0;
          lVar14 = *plVar22;
          *(long **)(lVar14 + 8) = local_138;
          *local_138 = lVar14;
          local_138[1] = (long)plVar22;
          *plVar22 = (long)local_138;
          iVar23 = iVar23 + 1;
          plVar22 = local_138;
          goto LAB_1006ae110;
        }
        FUN_1008e3970("","KeyValueDataParser",0,"Error: allocation problems");
        local_138 = (long *)0x0;
        goto LAB_1006ae1b0;
      }
      if ((*(int *)(local_70.field0_0x0 + 4) == *(int *)(local_138[2] + 4)) || (*param_1 == 2)) {
        iVar23 = 0;
        local_150 = (long *)0x0;
        plVar25 = (long *)0x0;
        plVar22 = (long *)0x0;
LAB_1006ae110:
        cVar8 = FUN_1006af510();
        if (cVar8 == '\0') goto LAB_1006ae1b0;
        QString::operator=((QString *)(local_138 + 2),&local_70);
        local_168 = (long *)0x1;
        iVar12 = 1;
        if ((local_150 != (long *)0x0) && (plVar25 != (long *)0x0)) {
          lVar14 = *(long *)(*plVar13 + 0x10);
          *(long **)(lVar14 + 0x60) = local_150;
          *(long **)(lVar14 + 0x68) = plVar25;
        }
      }
      else {
        local_e8 = (QArrayData *)local_70.field0_0x0;
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        pQVar15 = local_e0 + *(long *)(local_e0 + 0x10);
        local_f8 = (QArrayData *)local_138[2];
        if (1 < *(int *)local_f8 + 1U) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + 1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","KeyValueDataParser",0,
                      "Error: try to change file size on replacing \'%s\' with \'%s\'",pQVar15,
                      local_f0 + *(long *)(local_f0 + 0x10));
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006adf84;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_1006adf84:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006adfba;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_1006adfba:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006adff0;
          }
          QArrayData::deallocate(local_e0,1,8);
        }
LAB_1006adff0:
        iVar12 = 1;
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ae02c;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1006ae02c:
        local_168 = (long *)0x0;
      }
      goto LAB_1006ae450;
    }
    goto LAB_1006ae4c3;
  }
  iVar12 = 4;
  local_168 = local_58;
  goto LAB_1006ae51c;
LAB_1006ae4e2:
  FUN_1008e3970("","KeyValueDataParser",0,"Error: allocation problems");
  local_138 = (long *)0x0;
LAB_1006ae1b0:
  bVar26 = iVar23 != 0;
  if (bVar26) {
    local_138 = (long *)0x0;
  }
  iVar12 = 9;
  while (bVar26) {
    lVar14 = *plVar22;
    plVar20 = (long *)plVar22[1];
    *(long **)(lVar14 + 8) = plVar20;
    *plVar20 = lVar14;
    *plVar22 = 0x112233;
    plVar22[1] = (long)&DAT_00445566;
    if (plVar22 != (long *)0x0) {
      FUN_1006b1fd0(plVar22);
      operator_delete(plVar22);
    }
    iVar23 = iVar23 + -1;
    bVar26 = iVar23 != 0;
    plVar22 = plVar20;
  }
LAB_1006ae450:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ae486;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1006ae486:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ae4bd;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1006ae4bd:
  if (iVar12 != 9) goto LAB_1006ae51c;
LAB_1006ae4c3:
  local_60 = local_60 + 1;
  local_50 = 1;
  if (local_60 == local_58) goto LAB_1006ae516;
  goto LAB_1006ad700;
LAB_1006ae516:
  iVar12 = 4;
LAB_1006ae51c:
  FUN_1006a6010(&local_68);
  bVar9 = (byte)local_168;
  if (iVar12 == 4) {
    pQVar15 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)pQVar15 + 1U) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + 1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","KeyValueDataParser",0,
                  "Error: can\'t insert new line by key \'%s\' because values do not match any existing format"
                  ,local_120 + *(long *)(local_120 + 0x10));
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006ae5c3;
      }
      QArrayData::deallocate(local_120,1,8);
    }
LAB_1006ae5c3:
    if (*(int *)pQVar15 != -1) {
      if (*(int *)pQVar15 != 0) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + -1;
        local_31 = *(int *)pQVar15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006ae5f9;
      }
      QArrayData::deallocate(pQVar15,2,8);
    }
LAB_1006ae5f9:
    bVar9 = 0;
  }
  FUN_1006a6010(local_48);
LAB_1006ae604:
  return bVar9 & 1;
}

