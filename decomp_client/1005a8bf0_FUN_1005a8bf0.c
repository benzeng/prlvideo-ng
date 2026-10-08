
long * FUN_1005a8bf0(long *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  QString *pQVar4;
  QVariant *pQVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  size_t sVar13;
  long *plVar14;
  Data *pDVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  QString *local_180;
  QString local_178;
  QArrayData *local_170;
  QVariant local_168;
  QArrayData *local_158;
  long local_150 [10];
  long *local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
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
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  uint *local_68;
  uint *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = (long)PTR_shared_null_1021e15e8;
  local_88 = *(Data **)(param_2 + 0x38);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_88);
      lVar16 = (long)*(int *)(local_88 + 8);
      lVar3 = *(long *)(param_2 + 0x38);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_88 + lVar16 * 8) &&
         (lVar17 = *(int *)(local_88 + 0xc) - lVar16,
         lVar17 != 0 && lVar16 <= *(int *)(local_88 + 0xc))) {
        _memcpy(local_88 + lVar16 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar17 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      local_70 = 1;
      pQVar4 = *(QString **)local_80;
      local_a8 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3",8);
      local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
      uVar9 = CAntivirusInfo::developer(pQVar4);
      CAntivirusInfo::enumToString(&local_b8,uVar9);
      QString::toLower();
      QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
      uVar9 = CAntivirusInfo::installationType();
      CAntivirusInfo::enumToString(&local_d0,uVar9);
      QString::toLower();
      QString::arg(&local_98,&local_a0,&local_c8,0,0x20);
      local_d8 = (QArrayData *)QString::fromAscii_helper("7_8",3);
      QString::arg(&local_90,&local_98,&local_d8,0,0x20);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8ded;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1005a8ded:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8e23;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1005a8e23:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8e59;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1005a8e59:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8e8f;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1005a8e8f:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8ec5;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1005a8ec5:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8efb;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1005a8efb:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8f31;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1005a8f31:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8f67;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1005a8f67:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a8f9d;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1005a8f9d:
      local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_58,0x1e41970);
      QString::append(&local_f8);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a9014;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1005a9014:
      local_f0.field0_0x0 = local_f8.field0_0x0;
      if (1 < *(int *)local_f8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
        local_31 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_50,0x1dc08d9);
      QString::append(&local_f0);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a9088;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005a9088:
      local_e8.field0_0x0 = local_f0.field0_0x0;
      if (1 < *(int *)local_f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_48,0x1e41970);
      QString::append(&local_e8);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a90f8;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1005a90f8:
      local_e0.field0_0x0 = local_e8.field0_0x0;
      if (1 < *(int *)local_e8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
        local_31 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1de3658);
      QString::append(&local_e0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a916e;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1005a916e:
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a91a4;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
LAB_1005a91a4:
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_31 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a91da;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_1005a91da:
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a9210;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_1005a9210:
      uVar12 = FUN_100748240();
      local_158 = (QArrayData *)QString::fromAscii_helper("is",2);
      uVar12 = FUN_100748290(uVar12,&local_158);
      FUN_100746cb0(local_150,uVar12,&local_e0);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a928b;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_1005a928b:
      if (*(int *)(local_150[0] + 4) != 0) {
        pQVar5 = *(QVariant **)PTR__WEB_STORE_AV_PRIORITY_1021e1258;
        iVar11 = -1;
        if (pQVar5 != (QVariant *)0x0) {
          sVar13 = _strlen((char *)pQVar5);
          iVar11 = (int)sVar13;
        }
        local_178.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar5,iVar11);
        plVar14 = local_100;
        if ((*(int *)((long)local_100 + 0x14) == 0) ||
           (uVar2 = *(uint *)(local_100 + 4), uVar2 == 0)) {
LAB_1005a9380:
          local_170 = (QArrayData *)PTR_shared_null_1021e1288;
        }
        else {
          uVar10 = qHash(&local_178,*(uint *)((long)local_100 + 0x24));
          uVar7 = (ulong)uVar10 % (ulong)uVar2;
          plVar19 = *(long **)(plVar14[1] + uVar7 * 8);
          if (plVar19 == plVar14) goto LAB_1005a9380;
          plVar21 = (long *)(plVar14[1] + uVar7 * 8);
          do {
            plVar18 = plVar14;
            plVar20 = plVar19;
            if (*(uint *)(plVar19 + 1) == uVar10) {
              cVar8 = operator==(&local_178,(QString *)(plVar19 + 2));
              plVar14 = (long *)*plVar21;
              plVar18 = local_100;
              plVar20 = plVar14;
              if (cVar8 != '\0') break;
            }
            plVar14 = plVar18;
            plVar19 = (long *)*plVar20;
            plVar18 = plVar14;
            plVar21 = plVar20;
          } while (plVar19 != plVar14);
          if (plVar14 == plVar18) goto LAB_1005a9380;
          local_170 = (QArrayData *)plVar14[3];
          if (1 < *(int *)local_170 + 1U) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + 1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
          }
        }
        iVar11 = QString::toInt((bool *)&local_170,0);
        QVariant::QVariant(&local_168,iVar11);
        QObject::setProperty((char *)pQVar4,pQVar5);
        QVariant::~QVariant(&local_168);
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            local_31 = *(int *)local_170 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a940c;
          }
          QArrayData::deallocate(local_170,2,8);
        }
LAB_1005a940c:
        if (*(int *)local_178.field0_0x0 != -1) {
          if (*(int *)local_178.field0_0x0 != 0) {
            LOCK();
            *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
            local_31 = *(int *)local_178.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a9450;
          }
          QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
        }
LAB_1005a9450:
        local_180 = pQVar4;
        FUN_1000630f0(param_1,&local_180);
      }
      FUN_100252e70(local_150);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a94b3;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_1005a94b3:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005a94f0;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1005a94f0:
      local_80 = local_80 + 8;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a9533;
    }
    QListData::dispose(local_88);
  }
LAB_1005a9533:
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    uVar2 = puVar6[2];
    pDVar15 = (Data *)QListData::detach((int)param_1);
    lVar3 = *param_1;
    lVar16 = (long)*(int *)(lVar3 + 8);
    puVar1 = (uint *)(lVar3 + 0x10 + lVar16 * 8);
    if ((puVar6 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar17 = *(int *)(lVar3 + 0xc) - lVar16, lVar17 != 0 && lVar16 <= *(int *)(lVar3 + 0xc))) {
      _memcpy(puVar1,puVar6 + (long)(int)uVar2 * 2 + 4,lVar17 * 8);
    }
    if (*(int *)pDVar15 != -1) {
      if (*(int *)pDVar15 != 0) {
        LOCK();
        *(int *)pDVar15 = *(int *)pDVar15 + -1;
        local_31 = *(int *)pDVar15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a95aa;
      }
      QListData::dispose(pDVar15);
    }
  }
LAB_1005a95aa:
  puVar1 = (uint *)*param_1;
  puVar6 = puVar1 + (long)(int)puVar1[2] * 2 + 4;
  if (1 < *puVar1) {
    pDVar15 = (Data *)QListData::detach((int)param_1);
    lVar3 = *param_1;
    lVar16 = (long)*(int *)(lVar3 + 8);
    puVar1 = (uint *)(lVar3 + 0x10 + lVar16 * 8);
    if ((puVar6 != puVar1) &&
       (lVar17 = *(int *)(lVar3 + 0xc) - lVar16, lVar17 != 0 && lVar16 <= *(int *)(lVar3 + 0xc))) {
      _memcpy(puVar1,puVar6,lVar17 * 8);
    }
    if (*(int *)pDVar15 != -1) {
      if (*(int *)pDVar15 != 0) {
        LOCK();
        *(int *)pDVar15 = *(int *)pDVar15 + -1;
        local_31 = *(int *)pDVar15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a9624;
      }
      QListData::dispose(pDVar15);
    }
  }
LAB_1005a9624:
  local_68 = (uint *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 0xc) * 8);
  if (puVar6 != local_68) {
    local_60 = puVar6;
    FUN_1005ad490(&local_60,&local_68,puVar6,FUN_1005a9d60);
  }
  return param_1;
}

