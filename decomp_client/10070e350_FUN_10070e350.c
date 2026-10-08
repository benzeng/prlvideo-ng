
void FUN_10070e350(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  size_t sVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int *local_110;
  QString *local_108;
  QString *local_100;
  undefined4 local_f8;
  QString local_f0;
  QString local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined1 local_c8 [24];
  QArrayData *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  uint local_90;
  int *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined *local_68;
  int *local_60;
  QDir local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100d842d0(&local_50);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e3d8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10070e3d8:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e408;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10070e408:
  QDir::QDir(local_58,&local_48);
  local_78 = (QArrayData *)QString::fromAscii_helper("*%1",3);
  puVar3 = PTR_s__dat_102274b38;
  iVar10 = -1;
  if (PTR_s__dat_102274b38 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s__dat_102274b38);
    iVar10 = (int)sVar5;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar10);
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  puVar3 = PTR_shared_null_1021e15e8;
  local_68 = PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_68,&local_70);
  QDir::entryList(&local_60,local_58,&local_68,0xffffffff,0xffffffff);
  FUN_100039a80(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e4db;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10070e4db:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e50b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10070e50b:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e53b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10070e53b:
  local_88 = (int *)puVar3;
  local_a8 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_a8);
      iVar10 = local_a8[2];
      if (iVar10 != local_a8[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar8 = local_a8 + (long)iVar10 * 2 + 4;
        lVar6 = (long)local_a8[3] * 8 + (long)iVar10 * -8;
        do {
          piVar9 = *(int **)local_60;
          *(int **)piVar8 = piVar9;
          if (1 < *piVar9 + 1U) {
            LOCK();
            *piVar9 = *piVar9 + 1;
            local_31 = *piVar9 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_60 = local_60 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_shared_null_1021e1288;
  local_a0 = local_a8 + (long)local_a8[2] * 2 + 4;
  local_98 = local_a8 + (long)local_a8[3] * 2 + 4;
  local_90 = 1;
  if (local_a8[2] != local_a8[3]) {
    do {
      local_b0 = *(QArrayData **)local_a0;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      if (local_90 != 0) {
        local_d0 = puVar2;
        local_d8 = puVar2;
        local_e0 = puVar3;
        FUN_1005819a0(local_c8,&local_d0,&local_d8,&local_e0);
        if (*(int *)puVar3 != -1) {
          if (*(int *)puVar3 != 0) {
            LOCK();
            *(int *)puVar3 = *(int *)puVar3 + -1;
            local_31 = *(int *)puVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10070e6d4;
          }
          FUN_1005596c0(&local_e0,puVar3 + (long)*(int *)(puVar3 + 8) * 8 + 0x10,
                        puVar3 + (long)*(int *)(puVar3 + 0xc) * 8 + 0x10);
          QListData::dispose((Data *)puVar3);
        }
LAB_10070e6d4:
        if (*(int *)puVar2 != -1) {
          if (*(int *)puVar2 == 0) {
LAB_10070e6ef:
            QArrayData::deallocate((QArrayData *)puVar2,2,8);
          }
          else {
            LOCK();
            *(int *)puVar2 = *(int *)puVar2 + -1;
            local_31 = *(int *)puVar2 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_10070e6ef;
          }
          if (*(int *)puVar2 != -1) {
            if (*(int *)puVar2 != 0) {
              LOCK();
              *(int *)puVar2 = *(int *)puVar2 + -1;
              local_31 = *(int *)puVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10070e730;
            }
            QArrayData::deallocate((QArrayData *)puVar2,2,8);
          }
        }
LAB_10070e730:
        local_e8.field0_0x0 = local_48.field0_0x0;
        if (1 < *(int *)local_48.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_e8);
        cVar4 = FUN_10070d740();
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10070e7a9;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_10070e7a9:
        if (cVar4 != '\0') {
          local_f0.field0_0x0 = local_48.field0_0x0;
          if (1 < *(int *)local_48.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_f0);
          FUN_1000341d0(&local_88,&local_f0);
          if (*(int *)local_f0.field0_0x0 != -1) {
            if (*(int *)local_f0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
              local_31 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10070e820;
            }
            QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
          }
        }
LAB_10070e820:
        FUN_1000fec30(local_c8);
        local_90 = 0;
      }
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070e872;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_10070e872:
      local_a0 = local_a0 + 2;
      uVar7 = local_90 ^ 1;
      bVar11 = local_90 != 1;
      local_90 = uVar7;
    } while ((bVar11) && (local_a0 != local_98));
  }
  FUN_100039a80(&local_a8);
  local_110 = local_88;
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_110);
      iVar10 = local_110[2];
      if (iVar10 != local_110[3]) {
        piVar8 = local_88 + (long)local_88[2] * 2 + 4;
        piVar9 = local_110 + (long)iVar10 * 2 + 4;
        lVar6 = (long)local_110[3] * 8 + (long)iVar10 * -8;
        do {
          piVar1 = *(int **)piVar8;
          *(int **)piVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          piVar8 = piVar8 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  local_108 = (QString *)(local_110 + (long)local_110[2] * 2 + 4);
  local_100 = (QString *)(local_110 + (long)local_110[3] * 2 + 4);
  if (local_110[2] != local_110[3]) {
    do {
      local_f8 = 1;
      QFile::remove(local_108);
      local_108 = local_108 + 1;
    } while (local_108 != local_100);
  }
  local_f8 = 1;
  FUN_100039a80(&local_110);
  FUN_100039a80(&local_88);
  FUN_100039a80(&local_60);
  QDir::~QDir(local_58);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

