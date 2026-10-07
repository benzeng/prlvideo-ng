
void FUN_1004dd6c0(undefined8 *param_1,undefined8 *param_2,QString *param_3,char param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  QArrayData QVar3;
  short sVar4;
  int *piVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  char cVar8;
  undefined2 uVar9;
  short sVar10;
  long lVar11;
  QArrayData *pQVar12;
  short *psVar13;
  short *psVar14;
  QArrayData *pQVar15;
  ulong uVar16;
  QArrayData QVar17;
  short *psVar18;
  QArrayData QVar19;
  long lVar20;
  int iVar21;
  short *psVar22;
  short sVar23;
  QArrayData *pQVar24;
  QArrayData *pQVar25;
  QTypedArrayData<unsigned_short> *pQVar26;
  QArrayData *pQVar27;
  bool bVar28;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_100bc3648;
  piVar5 = (int *)*param_2;
  param_1[1] = piVar5;
  if (1 < *piVar5 + 1U) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    local_40.field0_0x0._0_1_ = *piVar5 != 0;
    UNLOCK();
  }
  puVar1 = param_1 + 2;
  param_1[2] = PTR_shared_null_100ba2188;
  QString::toUtf8_helper(&local_40);
  lVar11 = _opendir_INODE64(CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_) +
                            *(long *)(CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_)
                                     + 0x10));
  piVar5 = (int *)CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004dd76c;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_),1,8);
  }
LAB_1004dd76c:
  if (lVar11 == 0) goto LAB_1004de184;
  QString::toUtf8_helper(&local_48);
  local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_4 == '\0') {
    QString::toUpper_helper(&local_58);
    pQVar27 = local_50;
    local_50 = (QArrayData *)local_58.field0_0x0;
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar27;
    if (*(int *)pQVar27 != -1) {
      if (*(int *)pQVar27 != 0) {
        LOCK();
        *(int *)pQVar27 = *(int *)pQVar27 + -1;
        local_31 = *(int *)pQVar27 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004dd7ed;
      }
      QArrayData::deallocate(pQVar27,2,8);
    }
  }
LAB_1004dd7ed:
  local_60.field0_0x0 = param_3->field0_0x0;
  if (1 < *(uint *)local_60.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_60.field0_0x0 = *(uint *)local_60.field0_0x0 + 1;
    local_31 = *(uint *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  if ((1 < *(uint *)local_60.field0_0x0) || (*(long *)(local_60.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_60,(bool)((char)*(uint *)(local_60.field0_0x0 + 4) + '\x01'));
  }
  lVar20 = (long)(int)*(uint *)(local_60.field0_0x0 + 4) * 2;
  if (lVar20 != 0) {
    pQVar26 = local_60.field0_0x0 + *(long *)(local_60.field0_0x0 + 0x10);
    do {
      uVar9 = FUN_100541f50(*(undefined2 *)pQVar26);
      *(undefined2 *)pQVar26 = uVar9;
      pQVar26 = pQVar26 + 2;
      lVar20 = lVar20 + -2;
    } while (lVar20 != 0);
  }
  cVar8 = operator==(&local_60,param_3);
LAB_1004dd89f:
  while (lVar20 = _readdir_INODE64(), lVar20 != 0) {
    pQVar27 = (QArrayData *)(lVar20 + 0x15);
    iVar21 = (int)pQVar27;
    if (cVar8 == '\0') {
      _strlen((char *)pQVar27);
      QString::fromUtf8_helper((char *)&local_70,iVar21);
      QString::normalized(&local_68,&local_70,1,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004dd97a;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1004dd97a:
      local_78 = local_68;
      if (1 < *(uint *)local_68 + 1) {
        LOCK();
        *(uint *)local_68 = *(uint *)local_68 + 1;
        local_31 = *(uint *)local_68 != 0;
        UNLOCK();
      }
      if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
        QString::reallocData((uint)&local_78,(bool)((char)*(uint *)(local_68 + 4) + '\x01'));
      }
      uVar16 = (ulong)(int)*(uint *)(local_78 + 4);
      if ((uVar16 & 0x7fffffffffffffff) != 0) {
        pQVar27 = local_78 + *(long *)(local_78 + 0x10);
        pQVar15 = pQVar27 + uVar16 * 2;
        pQVar12 = local_78 + *(long *)(local_78 + 0x10) + uVar16 * 2;
        do {
          if (*(short *)pQVar27 == 0x2f) {
            pQVar27 = pQVar27 + 2;
          }
          else {
            pQVar24 = pQVar15;
            pQVar25 = pQVar27;
            if (pQVar27 != pQVar15) {
              do {
                pQVar25 = pQVar25 + 2;
                pQVar24 = pQVar15;
                if (pQVar12 == pQVar25) break;
                pQVar24 = pQVar25;
              } while (*(short *)pQVar25 != 0x2f);
            }
            if ((long)pQVar24 - (long)pQVar27 != 0) {
              sVar10 = FUN_100541f30(*(short *)pQVar27);
              *(short *)pQVar27 = sVar10;
              pQVar7 = pQVar27 + 2;
              pQVar25 = pQVar27;
              while (pQVar6 = pQVar7, pQVar6 != pQVar24) {
                sVar10 = FUN_100541f30(*(short *)(pQVar25 + 2));
                *(short *)(pQVar25 + 2) = sVar10;
                pQVar7 = pQVar25 + 4;
                pQVar25 = pQVar6;
              }
              if (*(short *)(pQVar24 + -2) == 0x2e) {
                if ((2 < (ulong)((long)pQVar24 - (long)pQVar27 >> 1)) ||
                   (sVar10 = *(short *)pQVar27, pQVar27 = pQVar24, sVar10 != 0x2e)) {
                  *(short *)(pQVar24 + -2) = -0xfd7;
                  pQVar27 = pQVar24;
                }
              }
              else {
                pQVar27 = pQVar24;
                if (*(short *)(pQVar24 + -2) == 0x20) {
                  *(short *)(pQVar24 + -2) = -0xfd8;
                }
              }
            }
          }
        } while (pQVar27 != pQVar15);
      }
      if (param_4 == '\0') {
        QString::toUpper_helper(&local_80);
        psVar13 = (short *)QString::utf16();
        psVar14 = (short *)QString::utf16();
        sVar10 = *psVar13;
        while (sVar10 != 0) {
          sVar4 = *psVar14;
          sVar23 = 0x2a;
          if (sVar4 == 0x2a) {
            psVar13 = psVar13 + 1;
            psVar18 = (short *)0x0;
            psVar22 = (short *)0x0;
            goto LAB_1004ddec0;
          }
          if ((sVar10 != sVar4) && (sVar4 != 0x3f)) {
            bVar28 = false;
            goto LAB_1004ddf22;
          }
          psVar14 = psVar14 + 1;
          psVar18 = psVar13 + 1;
          psVar13 = psVar13 + 1;
          sVar10 = *psVar18;
        }
LAB_1004ddf10:
        do {
          sVar10 = *psVar14;
          psVar14 = psVar14 + 1;
        } while (sVar10 == 0x2a);
        bVar28 = sVar10 == 0;
        goto LAB_1004ddf22;
      }
      psVar13 = (short *)QString::utf16();
      psVar14 = (short *)QString::utf16();
      sVar10 = *psVar13;
      while (sVar10 != 0) {
        sVar4 = *psVar14;
        sVar23 = 0x2a;
        if (sVar4 == 0x2a) {
          psVar13 = psVar13 + 1;
          psVar18 = (short *)0x0;
          psVar22 = (short *)0x0;
          goto LAB_1004dde40;
        }
        if ((sVar10 != sVar4) && (sVar4 != 0x3f)) {
          bVar28 = false;
          goto LAB_1004ddf60;
        }
        psVar14 = psVar14 + 1;
        psVar18 = psVar13 + 1;
        psVar13 = psVar13 + 1;
        sVar10 = *psVar18;
      }
LAB_1004dde90:
      do {
        sVar10 = *psVar14;
        psVar14 = psVar14 + 1;
      } while (sVar10 == 0x2a);
      bVar28 = sVar10 == 0;
      goto LAB_1004ddf60;
    }
    pQVar12 = (QArrayData *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10));
    QVar17 = *pQVar27;
    pQVar15 = pQVar27;
    while (QVar17 != (QArrayData)0x0) {
      QVar3 = *pQVar12;
      QVar19 = (QArrayData)0x2a;
      if (QVar3 == (QArrayData)0x2a) {
        pQVar15 = pQVar15 + 1;
        pQVar25 = (QArrayData *)0x0;
        pQVar24 = (QArrayData *)0x0;
        goto LAB_1004ddc20;
      }
      if ((QVar17 != QVar3) && (QVar3 != (QArrayData)0x3f)) goto LAB_1004ddd20;
      pQVar12 = pQVar12 + 1;
      pQVar25 = pQVar15 + 1;
      pQVar15 = pQVar15 + 1;
      QVar17 = *pQVar25;
    }
LAB_1004ddc60:
    do {
      QVar17 = *pQVar12;
      pQVar12 = pQVar12 + 1;
    } while (QVar17 == (QArrayData)0x2a);
    if (QVar17 == (QArrayData)0x0) goto LAB_1004ddc73;
LAB_1004ddd20:
    if (param_4 == '\0') {
      _strlen((char *)pQVar27);
      QString::fromUtf8_helper((char *)&local_a0,iVar21);
      QString::normalized(&local_98,&local_a0,1,0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ddd9a;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1004ddd9a:
      QString::toUpper_helper(&local_a8);
      psVar13 = (short *)QString::utf16();
      psVar14 = (short *)QString::utf16();
      sVar10 = *psVar13;
      while (sVar10 != 0) {
        sVar4 = *psVar14;
        sVar23 = 0x2a;
        if (sVar4 == 0x2a) {
          psVar13 = psVar13 + 1;
          psVar18 = (short *)0x0;
          psVar22 = (short *)0x0;
          goto LAB_1004de000;
        }
        if ((sVar10 != sVar4) && (sVar4 != 0x3f)) {
          bVar28 = false;
          goto LAB_1004de063;
        }
        psVar14 = psVar14 + 1;
        psVar18 = psVar13 + 1;
        psVar13 = psVar13 + 1;
        sVar10 = *psVar18;
      }
LAB_1004de050:
      do {
        sVar10 = *psVar14;
        psVar14 = psVar14 + 1;
      } while (sVar10 == 0x2a);
      bVar28 = sVar10 == 0;
      goto LAB_1004de063;
    }
  }
  _closedir(lVar11);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004de124;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004de124:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004de154;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004de154:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) goto LAB_1004de184;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,1,8);
  }
LAB_1004de184:
  lVar11 = param_1[2];
  param_1[3] = lVar11 + 0x10 + (long)*(int *)(lVar11 + 0xc) * 8;
  param_1[4] = lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8;
  return;
  while( true ) {
    sVar23 = psVar14[1];
    psVar14 = psVar14 + 1;
    bVar28 = true;
    psVar18 = psVar14;
    psVar22 = psVar13;
    if (sVar23 == 0) break;
LAB_1004ddec0:
    if (sVar23 != 0x2a) {
      bVar28 = sVar10 != sVar23;
      psVar14 = psVar14 + 1;
      if (sVar23 != 0x3f && bVar28) {
        psVar14 = psVar18;
        psVar13 = psVar22;
      }
      sVar10 = *psVar13;
      if (sVar10 == 0) goto LAB_1004ddf10;
      if (sVar23 != 0x3f && bVar28) {
        psVar22 = psVar22 + 1;
      }
      sVar23 = *psVar14;
      psVar13 = psVar13 + 1;
      goto LAB_1004ddec0;
    }
  }
LAB_1004ddf22:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ddf60;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1004ddf60:
  if (bVar28) {
    FUN_10000c490(puVar1,&local_68);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ddfa4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004ddfa4:
  if (*(uint *)local_68 == 0xffffffff) goto LAB_1004dd89f;
  pQVar27 = local_68;
  if (*(uint *)local_68 == 0) goto LAB_1004dd890;
  LOCK();
  *(uint *)local_68 = *(uint *)local_68 - 1;
  uVar2 = *(uint *)local_68;
  UNLOCK();
  goto joined_r0x0001004ddfc7;
  while( true ) {
    sVar23 = psVar14[1];
    psVar14 = psVar14 + 1;
    bVar28 = true;
    psVar18 = psVar14;
    psVar22 = psVar13;
    if (sVar23 == 0) break;
LAB_1004dde40:
    if (sVar23 != 0x2a) {
      bVar28 = sVar10 != sVar23;
      psVar14 = psVar14 + 1;
      if (sVar23 != 0x3f && bVar28) {
        psVar14 = psVar18;
        psVar13 = psVar22;
      }
      sVar10 = *psVar13;
      if (sVar10 == 0) goto LAB_1004dde90;
      if (sVar23 != 0x3f && bVar28) {
        psVar22 = psVar22 + 1;
      }
      sVar23 = *psVar14;
      psVar13 = psVar13 + 1;
      goto LAB_1004dde40;
    }
  }
  goto LAB_1004ddf60;
  while( true ) {
    QVar19 = pQVar12[1];
    pQVar12 = pQVar12 + 1;
    pQVar25 = pQVar12;
    pQVar24 = pQVar15;
    if (QVar19 == (QArrayData)0x0) break;
LAB_1004ddc20:
    if (QVar19 != (QArrayData)0x2a) {
      bVar28 = QVar17 != QVar19;
      pQVar12 = pQVar12 + 1;
      if (QVar19 != (QArrayData)0x3f && bVar28) {
        pQVar12 = pQVar25;
        pQVar15 = pQVar24;
      }
      QVar17 = *pQVar15;
      if (QVar17 == (QArrayData)0x0) goto LAB_1004ddc60;
      if (QVar19 != (QArrayData)0x3f && bVar28) {
        pQVar24 = pQVar24 + 1;
      }
      QVar19 = *pQVar12;
      pQVar15 = pQVar15 + 1;
      goto LAB_1004ddc20;
    }
  }
LAB_1004ddc73:
  _strlen((char *)pQVar27);
  QString::fromUtf8_helper((char *)&local_90,iVar21);
  QString::normalized(&local_88,&local_90,1,0);
  FUN_10000c490(puVar1,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ddce5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004ddce5:
  if (*(uint *)local_90 == 0xffffffff) goto LAB_1004dd89f;
  pQVar27 = local_90;
  if (*(uint *)local_90 == 0) goto LAB_1004dd890;
  LOCK();
  *(uint *)local_90 = *(uint *)local_90 - 1;
  uVar2 = *(uint *)local_90;
  UNLOCK();
  goto joined_r0x0001004ddfc7;
  while( true ) {
    sVar23 = psVar14[1];
    psVar14 = psVar14 + 1;
    bVar28 = true;
    psVar18 = psVar14;
    psVar22 = psVar13;
    if (sVar23 == 0) break;
LAB_1004de000:
    if (sVar23 != 0x2a) {
      bVar28 = sVar10 != sVar23;
      psVar14 = psVar14 + 1;
      if (sVar23 != 0x3f && bVar28) {
        psVar14 = psVar18;
        psVar13 = psVar22;
      }
      sVar10 = *psVar13;
      if (sVar10 == 0) goto LAB_1004de050;
      if (sVar23 != 0x3f && bVar28) {
        psVar22 = psVar22 + 1;
      }
      sVar23 = *psVar14;
      psVar13 = psVar13 + 1;
      goto LAB_1004de000;
    }
  }
LAB_1004de063:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004de099;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1004de099:
  if (bVar28) {
    FUN_10000c490(puVar1,&local_98);
  }
  if (*(uint *)local_98 == 0xffffffff) goto LAB_1004dd89f;
  pQVar27 = local_98;
  if (*(uint *)local_98 == 0) goto LAB_1004dd890;
  LOCK();
  *(uint *)local_98 = *(uint *)local_98 - 1;
  uVar2 = *(uint *)local_98;
  UNLOCK();
joined_r0x0001004ddfc7:
  local_31 = uVar2 != 0;
  if ((bool)local_31) goto LAB_1004dd89f;
LAB_1004dd890:
  QArrayData::deallocate(pQVar27,2,8);
  goto LAB_1004dd89f;
}

