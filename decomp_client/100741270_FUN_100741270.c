
undefined8 * FUN_100741270(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  Data *pDVar7;
  uint *puVar8;
  Data *pDVar9;
  uint *puVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  uint *puVar13;
  bool bVar14;
  QArrayData *local_1d0;
  QString local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString local_1b0;
  QString local_1a8;
  QString local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  undefined1 local_178 [8];
  QString local_170;
  QString local_168;
  QString local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  undefined1 local_f8 [8];
  QString local_f0;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  uint local_d0;
  Data *local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  uint local_78;
  Data *local_70;
  QArrayData *local_68;
  QSettings local_60 [16];
  QString local_50;
  QString local_48 [2];
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e12f0;
  QSettings::QSettings(local_60,(QObject *)0x0);
  QSettings::organizationName();
  QSettings::QSettings((QSettings *)local_48,&local_50,(QString *)(param_2 + 0x10),(QObject *)0x0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100741300;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100741300:
  QSettings::~QSettings(local_60);
  local_68 = (QArrayData *)QString::fromAscii_helper("PurchaseOrders",0xe);
  QSettings::beginGroup(local_48);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100741362;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100741362:
  QSettings::childGroups();
  local_90 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_90);
      iVar4 = *(int *)(local_90 + 8);
      if (iVar4 != *(int *)(local_90 + 0xc)) {
        pDVar7 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
        pDVar9 = local_90 + (long)iVar4 * 8 + 0x10;
        lVar5 = (long)*(int *)(local_90 + 0xc) * 8 + (long)iVar4 * -8;
        do {
          piVar1 = *(int **)pDVar7;
          *(int **)pDVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar9 = pDVar9 + 8;
          pDVar7 = pDVar7 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  local_78 = 1;
  pQVar12 = (QArrayData *)PTR_shared_null_1021e1288;
  puVar13 = (uint *)PTR_shared_null_1021e12f0;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_98 = *(QArrayData **)local_88;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      if (local_78 != 0) {
        QSettings::beginGroup(local_48);
        FUN_100740090(&local_c0);
        QSettings::childGroups();
        local_e8 = local_c8;
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 == 0) {
            QListData::detach((int)&local_e8);
            iVar4 = *(int *)(local_e8 + 8);
            if (iVar4 != *(int *)(local_e8 + 0xc)) {
              pDVar7 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
              pDVar9 = local_e8 + (long)iVar4 * 8 + 0x10;
              lVar5 = (long)*(int *)(local_e8 + 0xc) * 8 + (long)iVar4 * -8;
              do {
                piVar1 = *(int **)pDVar7;
                *(int **)pDVar9 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_31 = *piVar1 != 0;
                  UNLOCK();
                }
                pDVar9 = pDVar9 + 8;
                pDVar7 = pDVar7 + 8;
                lVar5 = lVar5 + -8;
              } while (lVar5 != 0);
            }
          }
          else {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + 1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
          }
        }
        local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
        local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
        local_d0 = 1;
        if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
          do {
            local_f0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_e0;
            if (1 < *(int *)local_f0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
              local_31 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
            }
            if (local_d0 != 0) {
              QSettings::beginGroup(local_48);
              FUN_100740760(&local_148);
              QSettings::endGroup();
              if ((*(int *)(*param_3 + 4) == 0) ||
                 (iVar4 = QString::compare(&local_138,param_3,0), iVar4 == 0)) {
                local_1d0 = pQVar12;
                FUN_1002f6080(&local_1c8,&local_1d0);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10074153a;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10074153a:
                QString::operator=(&local_1c8,&local_148);
                QString::operator=(&local_1c0,&local_140);
                QString::operator=(&local_1b8,&local_138);
                QString::operator=(&local_1b0,&local_130);
                QString::operator=(&local_1a8,&local_128);
                QString::operator=(&local_1a0,&local_120);
                QString::operator=(&local_198,&local_118);
                QString::operator=(&local_190,&local_110);
                QString::operator=(&local_188,&local_108);
                QString::operator=(&local_180,&local_100);
                FUN_100283c40(local_178,local_f8);
                QString::operator=(&local_170,&local_c0);
                QString::operator=(&local_168,&local_b8);
                QString::operator=(&local_160,&local_b0);
                QString::operator=(&local_158,&local_a8);
                QString::operator=(&local_150,&local_a0);
                if (1 < *puVar13) {
                  FUN_1005c0260(param_1);
                  puVar13 = (uint *)*param_1;
                }
                puVar2 = *(uint **)(puVar13 + 4);
                if (*(uint **)(puVar13 + 4) == (uint *)0x0) {
                  bVar3 = 1;
                  puVar10 = puVar13 + 2;
                }
                else {
                  do {
                    puVar10 = puVar2;
                    bVar3 = operator<((QString *)(puVar10 + 6),&local_f0);
                    puVar8 = puVar10 + 2;
                    if (bVar3 != 0) {
                      puVar8 = puVar10 + 4;
                    }
                    puVar2 = *(uint **)puVar8;
                  } while (*(uint **)puVar8 != (uint *)0x0);
                  bVar3 = bVar3 ^ 1;
                }
                FUN_1005bff10(puVar13,&local_f0,&local_1c8,puVar10,bVar3);
                FUN_100252c80(&local_170);
                FUN_100252e70(&local_1c8);
              }
              FUN_100252e70(&local_148);
              local_d0 = 0;
            }
            if (*(int *)local_f0.field0_0x0 != -1) {
              if (*(int *)local_f0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                local_31 = *(int *)local_f0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100741753;
              }
              QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
            }
LAB_100741753:
            local_e0 = local_e0 + 8;
            uVar6 = local_d0 ^ 1;
            bVar14 = local_d0 != 1;
            local_d0 = uVar6;
          } while ((bVar14) && (local_e0 != local_d8));
        }
        pDVar7 = local_e8;
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10074197c;
          }
          iVar4 = *(int *)(local_e8 + 0xc);
          if (iVar4 != *(int *)(local_e8 + 8)) {
            lVar5 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar4 * -8;
            pDVar9 = local_e8 + (long)iVar4 * 8 + 8;
            do {
              pQVar11 = *(QArrayData **)pDVar9;
              if (*(int *)pQVar11 == 0) {
LAB_100741950:
                QArrayData::deallocate(pQVar11,2,8);
              }
              else if (*(int *)pQVar11 != -1) {
                LOCK();
                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                local_31 = *(int *)pQVar11 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar11 = *(QArrayData **)pDVar9;
                  goto LAB_100741950;
                }
              }
              pDVar9 = pDVar9 + -8;
              lVar5 = lVar5 + 8;
            } while (lVar5 != 0);
          }
          QListData::dispose(pDVar7);
        }
LAB_10074197c:
        QSettings::endGroup();
        pDVar7 = local_c8;
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100741a28;
          }
          iVar4 = *(int *)(local_c8 + 0xc);
          if (iVar4 != *(int *)(local_c8 + 8)) {
            lVar5 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar4 * -8;
            pDVar9 = local_c8 + (long)iVar4 * 8 + 8;
            do {
              pQVar12 = *(QArrayData **)pDVar9;
              if (*(int *)pQVar12 == 0) {
LAB_100741a00:
                QArrayData::deallocate(pQVar12,2,8);
              }
              else if (*(int *)pQVar12 != -1) {
                LOCK();
                *(int *)pQVar12 = *(int *)pQVar12 + -1;
                local_31 = *(int *)pQVar12 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar12 = *(QArrayData **)pDVar9;
                  goto LAB_100741a00;
                }
              }
              pDVar9 = pDVar9 + -8;
              lVar5 = lVar5 + 8;
            } while (lVar5 != 0);
          }
          QListData::dispose(pDVar7);
          pQVar12 = (QArrayData *)PTR_shared_null_1021e1288;
        }
LAB_100741a28:
        FUN_100252c80(&local_c0);
        local_78 = 0;
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100741a7c;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100741a7c:
      local_88 = local_88 + 8;
      uVar6 = local_78 ^ 1;
      bVar14 = local_78 != 1;
      local_78 = uVar6;
    } while ((bVar14) && (local_88 != local_80));
  }
  pDVar7 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100741b31;
    }
    iVar4 = *(int *)(local_90 + 0xc);
    if (iVar4 != *(int *)(local_90 + 8)) {
      lVar5 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar4 * -8;
      pDVar9 = local_90 + (long)iVar4 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar12 == 0) {
LAB_100741b10:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar9;
            goto LAB_100741b10;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_100741b31:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100741bc1;
    }
    iVar4 = *(int *)(local_70 + 0xc);
    if (iVar4 != *(int *)(local_70 + 8)) {
      lVar5 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = local_70 + (long)iVar4 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar12 == 0) {
LAB_100741ba0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar7;
            goto LAB_100741ba0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_100741bc1:
  QSettings::~QSettings((QSettings *)local_48);
  return param_1;
}

