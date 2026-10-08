
undefined8 * FUN_100742f00(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  Data *pDVar8;
  uint *puVar9;
  Data *pDVar10;
  uint *puVar11;
  QArrayData *pQVar12;
  uint *puVar13;
  bool bVar14;
  QArrayData *local_1a8;
  QString local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  QString local_178;
  QString local_170;
  QString local_168;
  QString local_160;
  QString local_158;
  undefined1 local_150 [8];
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
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  undefined1 local_d0 [8];
  QString local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  uint local_a8;
  Data *local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
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
      if ((bool)local_31) goto LAB_100742f85;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100742f85:
  QSettings::~QSettings(local_60);
  local_68 = (QArrayData *)QString::fromAscii_helper("PurchaseOrders",0xe);
  QSettings::beginGroup(local_48);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100742fe7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100742fe7:
  QSettings::childGroups();
  cVar4 = QtPrivate::QStringList_contains(&local_70,param_3,1);
  if (cVar4 != '\0') {
    QSettings::beginGroup(local_48);
    FUN_100740090(&local_98);
    QSettings::childGroups();
    local_c0 = local_a0;
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 == 0) {
        QListData::detach((int)&local_c0);
        iVar1 = *(int *)(local_c0 + 8);
        if (iVar1 != *(int *)(local_c0 + 0xc)) {
          pDVar8 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
          pDVar10 = local_c0 + (long)iVar1 * 8 + 0x10;
          lVar6 = (long)*(int *)(local_c0 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)pDVar8;
            *(int **)pDVar10 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar10 = pDVar10 + 8;
            pDVar8 = pDVar8 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + 1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
      }
    }
    local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
    local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
    local_a8 = 1;
    if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
      pQVar12 = (QArrayData *)PTR_shared_null_1021e1288;
      puVar13 = (uint *)PTR_shared_null_1021e12f0;
      do {
        local_c8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_b8;
        if (1 < *(int *)local_c8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
        }
        if (local_a8 != 0) {
          QSettings::beginGroup(local_48);
          FUN_100740760(&local_120);
          QSettings::endGroup();
          local_1a8 = pQVar12;
          FUN_1002f6080(&local_1a0,&local_1a8);
          if (*(int *)pQVar12 != -1) {
            if (*(int *)pQVar12 != 0) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_31 = *(int *)pQVar12 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007431dd;
            }
            QArrayData::deallocate(pQVar12,2,8);
          }
LAB_1007431dd:
          QString::operator=(&local_1a0,&local_120);
          QString::operator=(&local_198,&local_118);
          QString::operator=(&local_190,&local_110);
          QString::operator=(&local_188,&local_108);
          QString::operator=(&local_180,&local_100);
          QString::operator=(&local_178,&local_f8);
          QString::operator=(&local_170,&local_f0);
          QString::operator=(&local_168,&local_e8);
          QString::operator=(&local_160,&local_e0);
          QString::operator=(&local_158,&local_d8);
          FUN_100283c40(local_150,local_d0);
          QString::operator=(&local_148,&local_98);
          QString::operator=(&local_140,&local_90);
          QString::operator=(&local_138,&local_88);
          QString::operator=(&local_130,&local_80);
          QString::operator=(&local_128,&local_78);
          if (1 < *puVar13) {
            FUN_1005c0260(param_1);
            puVar13 = (uint *)*param_1;
          }
          puVar3 = *(uint **)(puVar13 + 4);
          if (*(uint **)(puVar13 + 4) == (uint *)0x0) {
            bVar5 = 1;
            puVar11 = puVar13 + 2;
          }
          else {
            do {
              puVar11 = puVar3;
              bVar5 = operator<((QString *)(puVar11 + 6),&local_c8);
              puVar9 = puVar11 + 2;
              if (bVar5 != 0) {
                puVar9 = puVar11 + 4;
              }
              puVar3 = *(uint **)puVar9;
            } while (*(uint **)puVar9 != (uint *)0x0);
            bVar5 = bVar5 ^ 1;
          }
          FUN_1005bff10(puVar13,&local_c8,&local_1a0,puVar11,bVar5);
          pQVar12 = (QArrayData *)PTR_shared_null_1021e1288;
          FUN_100252c80(&local_148);
          FUN_100252e70(&local_1a0);
          FUN_100252e70(&local_120);
          local_a8 = 0;
        }
        if (*(int *)local_c8.field0_0x0 != -1) {
          if (*(int *)local_c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
            local_31 = *(int *)local_c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007433fc;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
        }
LAB_1007433fc:
        local_b8 = local_b8 + 8;
        uVar7 = local_a8 ^ 1;
        bVar14 = local_a8 != 1;
        local_a8 = uVar7;
      } while ((bVar14) && (local_b8 != local_b0));
    }
    pDVar8 = local_c0;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007434d1;
      }
      iVar1 = *(int *)(local_c0 + 0xc);
      if (iVar1 != *(int *)(local_c0 + 8)) {
        lVar6 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_c0 + (long)iVar1 * 8 + 8;
        do {
          pQVar12 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar12 == 0) {
LAB_1007434b0:
            QArrayData::deallocate(pQVar12,2,8);
          }
          else if (*(int *)pQVar12 != -1) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar12 = *(QArrayData **)pDVar10;
              goto LAB_1007434b0;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar8);
    }
LAB_1007434d1:
    QSettings::endGroup();
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100743571;
      }
      iVar1 = *(int *)(local_a0 + 0xc);
      if (iVar1 != *(int *)(local_a0 + 8)) {
        lVar6 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar1 * -8;
        pDVar8 = local_a0 + (long)iVar1 * 8 + 8;
        do {
          pQVar12 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar12 == 0) {
LAB_100743550:
            QArrayData::deallocate(pQVar12,2,8);
          }
          else if (*(int *)pQVar12 != -1) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar12 = *(QArrayData **)pDVar8;
              goto LAB_100743550;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_a0);
    }
LAB_100743571:
    FUN_100252c80(&local_98);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100743611;
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if (iVar1 != *(int *)(local_70 + 8)) {
      lVar6 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_70 + (long)iVar1 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar12 == 0) {
LAB_1007435f0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar8;
            goto LAB_1007435f0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_100743611:
  QSettings::~QSettings((QSettings *)local_48);
  return param_1;
}

