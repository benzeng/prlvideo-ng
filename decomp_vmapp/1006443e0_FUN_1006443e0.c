
void FUN_1006443e0(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  CHwNetAdapter *pCVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  CHwNetAdapter *pCVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  bool bVar18;
  QArrayData *local_120;
  QArrayData *local_118;
  Data *local_110;
  Data *local_108;
  int *local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QArrayData *local_e0;
  int *local_d8;
  undefined1 local_d0;
  long local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  uint local_b0;
  int *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  undefined *local_80;
  long local_78;
  long *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar12 = **(long **)(*(long *)(param_1 + 0x18) + 0x168);
  if (*(int *)(lVar12 + 0xc) != *(int *)(lVar12 + 8)) {
    return;
  }
  local_58 = PTR_shared_null_100ba2188;
  iVar10 = FUN_1006b3450(&local_58,1,0);
  if (iVar10 < 0) {
    FUN_1006c29a0(&local_68);
    QString::toUtf8();
    FUN_1008e3970("","pvsHostInfo",0,"makeBindableAdapterList() return error %#x, [%s]",iVar10,
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006444ac;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1006444ac:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006444dc;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1006444dc:
  FUN_10027a630(&local_78,&local_58);
  local_70 = (long *)(local_78 + 0x10 + (long)*(int *)(local_78 + 8) * 8);
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      pCVar4 = *(CHwNetAdapter **)(param_1 + 0x18);
      lVar12 = *local_70;
      local_70 = local_70 + 1;
      pCVar11 = operator_new(0x120);
      uVar3 = *(undefined4 *)(lVar12 + 0x18);
      FUN_1006b58c0(&local_48,lVar12 + 0x2a);
      uVar2 = *(undefined2 *)(lVar12 + 0x28);
      uVar1 = *(undefined1 *)(lVar12 + 0x30);
      local_50 = *(QArrayData **)(lVar12 + 0x20);
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      CHwNetAdapter::CHwNetAdapter
                (pCVar11,8,lVar12,lVar12 + 8,uVar3,&local_48,uVar2,uVar1,&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006445c3;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1006445c3:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006445f3;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1006445f3:
      cVar9 = FUN_1006c4c70(lVar12);
      if (cVar9 == '\0') {
        cVar9 = FUN_1006c4fe0(lVar12);
        if (cVar9 == '\0') {
          CHwNetAdapter::setNetAdapterType(pCVar11,0);
        }
        else {
          CHwNetAdapter::setNetAdapterType(pCVar11,1);
        }
      }
      else {
        CHwNetAdapter::setNetAdapterType(pCVar11,2);
      }
      CHostHardwareInfo::addNetworkAdapter(pCVar4);
    } while (local_70 != (long *)(local_78 + 0x10 + (long)*(int *)(local_78 + 0xc) * 8));
  }
  local_80 = PTR_shared_null_100ba2188;
  FUN_1006cd760(&local_80,1);
  plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x168);
  local_a0 = (Data *)*plVar5;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_a0);
      lVar13 = (long)*(int *)(local_a0 + 8);
      lVar12 = *plVar5;
      if (((Data *)(lVar12 + (long)*(int *)(lVar12 + 8) * 8) != local_a0 + lVar13 * 8) &&
         (lVar16 = *(int *)(local_a0 + 0xc) - lVar13,
         lVar16 != 0 && lVar13 <= *(int *)(local_a0 + 0xc))) {
        _memcpy(local_a0 + lVar13 * 8 + 0x10,
                (void *)(lVar12 + 0x10 + (long)*(int *)(lVar12 + 8) * 8),lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
    do {
      local_88 = 1;
      plVar5 = *(long **)local_98;
      local_a8 = (int *)PTR_shared_null_100ba2188;
      FUN_100650440(&local_c8,&local_80);
      local_c0 = (undefined8 *)(local_c8 + 0x10 + (long)*(int *)(local_c8 + 8) * 8);
      local_b8 = (undefined8 *)(local_c8 + 0x10 + (long)*(int *)(local_c8 + 0xc) * 8);
      local_b0 = 1;
      if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
        do {
          puVar6 = (undefined8 *)*local_c0;
          local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar6;
          if (1 < *(int *)local_e8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
          }
          local_e0 = (QArrayData *)puVar6[1];
          if (1 < *(int *)local_e0 + 1U) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + 1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
          }
          local_d8 = (int *)puVar6[2];
          if (1 < *local_d8 + 1U) {
            LOCK();
            *local_d8 = *local_d8 + 1;
            local_31 = *local_d8 != 0;
            UNLOCK();
          }
          local_d0 = *(undefined1 *)(puVar6 + 3);
          if (local_b0 != 0) {
            (**(code **)(*plVar5 + 0xb8))(&local_f0,plVar5);
            cVar9 = operator==(&local_e8,&local_f0);
            if (*(int *)local_f0.field0_0x0 != -1) {
              if (*(int *)local_f0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                local_31 = *(int *)local_f0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100644862;
              }
              QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
            }
LAB_100644862:
            if (cVar9 != '\0') {
              local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
              if (1 < *(int *)local_e0 + 1U) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + 1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
              }
              if (local_d8[1] != 0) {
                QString::fromUtf8_helper((char *)&local_40,0xa02eac);
                QString::append(&local_f8);
                if (*(int *)local_40 != -1) {
                  if (*(int *)local_40 != 0) {
                    LOCK();
                    *(int *)local_40 = *(int *)local_40 + -1;
                    local_31 = *(int *)local_40 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006448ec;
                  }
                  QArrayData::deallocate(local_40,2,8);
                }
LAB_1006448ec:
                QString::append(&local_f8);
              }
              FUN_10000c490(&local_a8,&local_f8);
              if (*(int *)local_f8.field0_0x0 != -1) {
                if (*(int *)local_f8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                  local_31 = *(int *)local_f8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100644950;
                }
                QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
              }
            }
LAB_100644950:
            local_b0 = 0;
          }
          FUN_10064fce0(&local_e8);
          local_c0 = local_c0 + 1;
          uVar15 = local_b0 ^ 1;
          bVar18 = local_b0 != 1;
          local_b0 = uVar15;
        } while ((bVar18) && (local_c0 != local_b8));
      }
      FUN_10064f8a0(&local_c8);
      local_100 = local_a8;
      if (*local_a8 != -1) {
        if (*local_a8 == 0) {
          QListData::detach((int)&local_100);
          iVar10 = local_100[2];
          if (iVar10 != local_100[3]) {
            piVar14 = local_a8 + (long)local_a8[2] * 2 + 4;
            piVar17 = local_100 + (long)iVar10 * 2 + 4;
            lVar12 = (long)local_100[3] * 8 + (long)iVar10 * -8;
            do {
              piVar7 = *(int **)piVar14;
              *(int **)piVar17 = piVar7;
              if (1 < *piVar7 + 1U) {
                LOCK();
                *piVar7 = *piVar7 + 1;
                local_31 = *piVar7 != 0;
                UNLOCK();
              }
              piVar17 = piVar17 + 2;
              piVar14 = piVar14 + 2;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
          }
        }
        else {
          LOCK();
          *local_a8 = *local_a8 + 1;
          local_31 = *local_a8 != 0;
          UNLOCK();
        }
      }
      CHwNetAdapter::setNetAddresses(plVar5,&local_100);
      FUN_100013180(&local_100);
      FUN_100013180(&local_a8);
      local_98 = local_98 + 8;
    } while (local_98 != local_90);
  }
  local_88 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100644aa9;
    }
    QListData::dispose(local_a0);
  }
LAB_100644aa9:
  plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x168);
  local_110 = (Data *)*plVar5;
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 == 0) {
      QListData::detach((int)&local_110);
      lVar13 = (long)*(int *)(local_110 + 8);
      lVar12 = *plVar5;
      if (((Data *)(lVar12 + (long)*(int *)(lVar12 + 8) * 8) != local_110 + lVar13 * 8) &&
         (lVar16 = *(int *)(local_110 + 0xc) - lVar13,
         lVar16 != 0 && lVar13 <= *(int *)(local_110 + 0xc))) {
        _memcpy(local_110 + lVar13 * 8 + 0x10,
                (void *)(lVar12 + 0x10 + (long)*(int *)(lVar12 + 8) * 8),lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
    }
  }
  local_108 = local_110 + (long)*(int *)(local_110 + 8) * 8 + 0x10;
  if (*(int *)(local_110 + 8) != *(int *)(local_110 + 0xc)) {
    do {
      uVar8 = *(undefined8 *)local_108;
      local_108 = local_108 + 8;
      local_120 = (QArrayData *)QString::fromAscii_helper("debug_hw_adapter_info",0x15);
      FUN_10064f4c0(&local_118,uVar8,&local_120);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100644bc6;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100644bc6:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100644bfc;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_100644bfc:
    } while (local_108 != local_110 + (long)*(int *)(local_110 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100644c41;
    }
    QListData::dispose(local_110);
  }
LAB_100644c41:
  FUN_10064f8a0(&local_80);
  FUN_10027a3f0(&local_78);
  FUN_10027a3f0(&local_58);
  return;
}

