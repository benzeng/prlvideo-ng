
undefined8 FUN_1003cf6d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  size_t sVar13;
  undefined8 uVar14;
  QVariant *pQVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  undefined4 local_ec;
  QVariant local_e8;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  _func_void_Node_ptr *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  iVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  lVar12 = FUN_1003b0a60(*(undefined8 *)(param_2 + 0x18));
  puVar4 = PTR_s_VmConfig_1021f1e00;
  if (lVar12 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    FUN_1003dea50(param_1,param_4);
    return param_1;
  }
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar17 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar13 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar17 = (int)sVar13;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar17);
  FUN_1003ae3b0(&local_70,param_4,&local_78);
  FUN_1000626e0(&local_68,&local_70);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar17 = local_60[2];
      if (iVar17 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar16 = local_60 + (long)iVar17 * 2 + 4;
        lVar12 = (long)local_60[3] * 8 + (long)iVar17 * -8;
        do {
          piVar2 = *(int **)local_68;
          *(int **)piVar16 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar16 = piVar16 + 2;
          local_68 = local_68 + 2;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100036370(&local_68);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf899;
    }
    QHashData::free_helper(local_70);
  }
LAB_1003cf899:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf8c9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003cf8c9:
  if (local_48 != 0) {
    do {
      if (local_58 == local_50) break;
      local_80 = *(QArrayData **)local_58;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.CpuLimitType",0x19);
        cVar5 = QString::endsWith(&local_80,&local_88,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003cf966;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1003cf966:
        if (cVar5 == '\0') {
          local_a8 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.CpuLimitValue",0x1a);
          cVar5 = QString::endsWith(&local_80,&local_a8,1);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003cfa95;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1003cfa95:
          if (cVar5 != '\0') {
            uVar14 = FUN_1003b0a60(*(undefined8 *)(param_2 + 0x18));
            FUN_10015a340(uVar14);
            CHostHardwareInfoBase::getCpu();
            uVar7 = CHwCpu::getNumber();
            uVar11 = FUN_10011d8f0(uVar7);
            uVar14 = FUN_1003b0a60(*(undefined8 *)(param_2 + 0x18));
            FUN_10015a340(uVar14);
            CHostHardwareInfoBase::getCpu();
            uVar7 = CHwCpu::getNumber();
            uVar14 = FUN_1003b0a60(*(undefined8 *)(param_2 + 0x18));
            FUN_10015a340(uVar14);
            CHostHardwareInfoBase::getCpu();
            uVar8 = CHwCpu::getSpeed();
            uVar9 = FUN_10011d900(uVar7,uVar8);
            uVar14 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
            local_c0 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.CpuLimitValue",0x1a);
            FUN_1003e1800(&local_b8,uVar14,&local_c0,0);
            uVar10 = QVariant::toUInt((bool *)&local_b8);
            QVariant::~QVariant(&local_b8);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003cfbc1;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_1003cfbc1:
            QComboBox::currentIndex();
            QComboBox::itemData((int)&local_d0,iVar6);
            lVar12 = QVariant::toLongLong((bool *)&local_d0);
            QVariant::~QVariant(&local_d0);
            uVar3 = uVar9;
            if (lVar12 == 3) {
              uVar3 = uVar11;
              uVar11 = uVar9;
            }
            iVar17 = -1;
            if (puVar4 != (undefined *)0x0) {
              sVar13 = _strlen(puVar4);
              iVar17 = (int)sVar13;
            }
            local_d8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar17);
            uVar14 = FUN_1003ae480(&local_40,&local_d8);
            pQVar15 = (QVariant *)FUN_1002edf40(uVar14,&local_80);
            local_ec = (undefined4)
                       (long)((double)((float)uVar3 * ((float)uVar10 / (float)uVar11)) +
                             DAT_100e110f0);
            QVariant::QVariant(&local_e8,3,&local_ec,0);
            QVariant::operator=(pQVar15,&local_e8);
            QVariant::~QVariant(&local_e8);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003cfd10;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
          }
        }
        else {
          iVar17 = -1;
          if (puVar4 != (undefined *)0x0) {
            sVar13 = _strlen(puVar4);
            iVar17 = (int)sVar13;
          }
          local_90 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar17);
          uVar14 = FUN_1003ae480(&local_40,&local_90);
          pQVar15 = (QVariant *)FUN_1002edf40(uVar14,&local_80);
          QComboBox::currentIndex();
          QComboBox::itemData((int)&local_a0,iVar6);
          QVariant::operator=(pQVar15,&local_a0);
          QVariant::~QVariant(&local_a0);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003cfd10;
            }
            QArrayData::deallocate(local_90,2,8);
          }
        }
LAB_1003cfd10:
        local_48 = 0;
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003cfd47;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003cfd47:
      local_58 = local_58 + 2;
      uVar11 = local_48 ^ 1;
      bVar18 = local_48 != 1;
      local_48 = uVar11;
    } while (bVar18);
  }
  FUN_100036370(&local_60);
  FUN_1003dea50(param_1,&local_40);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QHashData::free_helper(local_40);
  }
  return param_1;
}

