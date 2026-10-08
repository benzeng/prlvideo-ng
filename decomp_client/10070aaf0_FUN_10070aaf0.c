
void FUN_10070aaf0(long param_1)

{
  int *piVar1;
  QString *pQVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  size_t sVar6;
  long lVar7;
  QString *pQVar8;
  uint uVar9;
  int *piVar10;
  QArrayData *pQVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  long local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  uint local_120;
  long local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  undefined *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8 [3];
  QArrayData *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  uint local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined *local_70;
  int *local_68;
  QDir local_60 [8];
  QArrayData *local_58;
  QString local_50;
  undefined *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e15e8;
  local_48 = PTR_shared_null_1021e15e8;
  FUN_100d842d0(&local_58);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070ab86;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10070ab86:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070abb6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10070abb6:
  QDir::QDir(local_60,&local_50);
  local_80 = (QArrayData *)QString::fromAscii_helper("*%1",3);
  puVar4 = PTR_s__dat_102274b38;
  iVar12 = -1;
  if (PTR_s__dat_102274b38 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s__dat_102274b38);
    iVar12 = (int)sVar6;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar12);
  QString::arg(&local_78,&local_80,&local_88,0,0x20);
  local_70 = puVar3;
  FUN_1000341d0(&local_70,&local_78);
  QDir::entryList(&local_68,local_60,&local_70,0xffffffff,0xffffffff);
  FUN_100039a80(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070ac82;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10070ac82:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070acb2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10070acb2:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070ace2;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10070ace2:
  local_a8 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_a8);
      iVar12 = local_a8[2];
      if (iVar12 != local_a8[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar10 = local_a8 + (long)iVar12 * 2 + 4;
        lVar7 = (long)local_a8[3] * 8 + (long)iVar12 * -8;
        do {
          piVar1 = *(int **)local_68;
          *(int **)piVar10 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_68 = local_68 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)local_a8[2] * 2 + 4;
  local_98 = local_a8 + (long)local_a8[3] * 2 + 4;
  local_90 = 1;
  if (local_a8[2] != local_a8[3]) {
    pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
    do {
      local_b0 = *(QArrayData **)local_a0;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      if (local_90 != 0) {
        local_e0 = puVar3;
        local_d8 = pQVar11;
        local_d0 = pQVar11;
        FUN_1005819a0(local_c8,&local_d0,&local_d8,&local_e0);
        if (*(int *)puVar3 != -1) {
          if (*(int *)puVar3 != 0) {
            LOCK();
            *(int *)puVar3 = *(int *)puVar3 + -1;
            local_31 = *(int *)puVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10070ae60;
          }
          FUN_1005596c0(&local_e0,puVar3 + (long)*(int *)(puVar3 + 8) * 8 + 0x10,
                        puVar3 + (long)*(int *)(puVar3 + 0xc) * 8 + 0x10);
          QListData::dispose((Data *)puVar3);
        }
LAB_10070ae60:
        if (*(int *)pQVar11 != -1) {
          if (*(int *)pQVar11 == 0) {
LAB_10070ae79:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_10070ae79;
          }
          if (*(int *)pQVar11 != -1) {
            if (*(int *)pQVar11 != 0) {
              LOCK();
              *(int *)pQVar11 = *(int *)pQVar11 + -1;
              local_31 = *(int *)pQVar11 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10070aec0;
            }
            QArrayData::deallocate(pQVar11,2,8);
          }
        }
LAB_10070aec0:
        local_e8.field0_0x0 = local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_e8);
        cVar5 = FUN_10070d740();
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10070af33;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_10070af33:
        puVar4 = PTR_s__dat_102274b38;
        if (cVar5 != '\0') {
          iVar12 = -1;
          if (PTR_s__dat_102274b38 != (undefined *)0x0) {
            sVar6 = _strlen(PTR_s__dat_102274b38);
            iVar12 = (int)sVar6;
          }
          local_f0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar12);
          pQVar8 = (QString *)QString::remove(&local_b0,&local_f0,1);
          QString::operator=(local_c8,pQVar8);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10070afc7;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_10070afc7:
          FUN_100581a70(&local_48,local_c8);
        }
        FUN_1000fec30(local_c8);
        local_90 = 0;
        pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
      }
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070b02a;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_10070b02a:
      local_a0 = local_a0 + 2;
      uVar9 = local_90 ^ 1;
      bVar13 = local_90 != 1;
      local_90 = uVar9;
    } while ((bVar13) && (local_a0 != local_98));
  }
  FUN_100039a80(&local_a8);
  local_f8 = (QArrayData *)QString::fromAscii_helper("LOADED",6);
  FUN_1007099c0(&local_48,&local_f8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070b0c9;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10070b0c9:
  FUN_10055a620(&local_118,&local_48);
  local_110 = (undefined8 *)(local_118 + 0x10 + (long)*(int *)(local_118 + 8) * 8);
  local_108 = (undefined8 *)(local_118 + 0x10 + (long)*(int *)(local_118 + 0xc) * 8);
  if (*(int *)(local_118 + 8) != *(int *)(local_118 + 0xc)) {
    param_1 = param_1 + 0x18;
    do {
      local_100 = 1;
      pQVar8 = (QString *)*local_110;
      FUN_10055a620(&local_138,param_1);
      local_130 = (undefined8 *)(local_138 + 0x10 + (long)*(int *)(local_138 + 8) * 8);
      local_128 = (undefined8 *)(local_138 + 0x10 + (long)*(int *)(local_138 + 0xc) * 8);
      local_120 = 1;
      if (*(int *)(local_138 + 8) == *(int *)(local_138 + 0xc)) {
        bVar13 = false;
      }
      else {
        bVar13 = false;
        do {
          if (local_120 == 0) {
LAB_10070b1ea:
            local_130 = local_130 + 1;
            local_120 = 1;
          }
          else {
            pQVar2 = (QString *)*local_130;
            cVar5 = operator==(pQVar2,pQVar8);
            if (cVar5 == '\0') goto LAB_10070b1ea;
            FUN_100580580(param_1,pQVar2);
            FUN_100581a70(param_1,pQVar8);
            local_130 = local_130 + 1;
            uVar9 = local_120 ^ 1;
            bVar13 = true;
            bVar14 = local_120 == 1;
            local_120 = uVar9;
            if (bVar14) break;
          }
        } while (local_130 != local_128);
      }
      FUN_1000fe670(&local_138);
      if (!bVar13) {
        FUN_100581a70(param_1,pQVar8);
      }
      local_110 = local_110 + 1;
    } while (local_110 != local_108);
  }
  local_100 = 1;
  FUN_1000fe670(&local_118);
  FUN_100039a80(&local_68);
  QDir::~QDir(local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070b2a8;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10070b2a8:
  FUN_1000fe670(&local_48);
  return;
}

