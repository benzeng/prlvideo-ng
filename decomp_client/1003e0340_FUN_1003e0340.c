
void FUN_1003e0340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  QVariant *pQVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  QArrayData *local_148;
  QVariant local_140;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
  lVar6 = *(long *)(param_1 + 0x10);
  iVar8 = -1;
  if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
    iVar8 = (int)sVar3;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar8);
  uVar4 = FUN_1003b0ad0(*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18));
  FUN_1003e5550(&local_40,uVar4,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e03de;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003e03de:
  local_68 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_68);
      lVar6 = (long)*(int *)(local_68 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_68 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_68 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar6 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  puVar1 = PTR_s_VmConfig_1021f1e00;
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      lVar6 = (long)*(int *)local_60;
      local_80 = (QArrayData *)QString::fromAscii_helper("%1[%2].Index",0xc);
      puVar2 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
      iVar8 = -1;
      if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
        sVar3 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
        iVar8 = (int)sVar3;
      }
      local_88 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
      QString::arg(&local_78,&local_80,&local_88,0,0x20);
      QString::arg(&local_70,&local_78,lVar6,0,10,0x20);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e054f;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003e054f:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e0582;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1003e0582:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e05bf;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003e05bf:
      FUN_1003e1800(&local_98,*(undefined8 *)(param_1 + 0x10),&local_70);
      if ((local_98.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
        iVar8 = -1;
        if (puVar1 != (undefined *)0x0) {
          sVar3 = _strlen(puVar1);
          iVar8 = (int)sVar3;
        }
        local_a0 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar8);
        uVar4 = FUN_1003ae480(param_2,&local_a0);
        pQVar5 = (QVariant *)FUN_1002edf40(uVar4,&local_70);
        QVariant::operator=(pQVar5,&local_98);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e066a;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1003e066a:
        local_b8 = (QArrayData *)QString::fromAscii_helper("%1[%2].Type",0xb);
        puVar2 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
        iVar8 = -1;
        if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
          sVar3 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
          iVar8 = (int)sVar3;
        }
        local_c0 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
        QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
        QString::arg(&local_a8,&local_b0,lVar6,0,10,0x20);
        QString::operator=(&local_70,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0742;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_1003e0742:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0778;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1003e0778:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e07ae;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1003e07ae:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e07e4;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_1003e07e4:
        FUN_1003e1800(&local_d0,*(undefined8 *)(param_1 + 0x10),&local_70);
        QVariant::operator=(&local_98,&local_d0);
        QVariant::~QVariant(&local_d0);
        iVar8 = -1;
        if (puVar1 != (undefined *)0x0) {
          sVar3 = _strlen(puVar1);
          iVar8 = (int)sVar3;
        }
        local_d8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar8);
        uVar4 = FUN_1003ae480(param_2,&local_d8);
        pQVar5 = (QVariant *)FUN_1002edf40(uVar4,&local_70);
        QVariant::operator=(pQVar5,&local_98);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0892;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1003e0892:
        local_f0 = (QArrayData *)QString::fromAscii_helper("%1[%2].BootingNumber",0x14);
        puVar2 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
        iVar8 = -1;
        if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
          sVar3 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
          iVar8 = (int)sVar3;
        }
        local_f8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
        QString::arg(&local_e8,&local_f0,&local_f8,0,0x20);
        QString::arg(&local_e0,&local_e8,lVar6,0,10,0x20);
        QString::operator=(&local_70,&local_e0);
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0966;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_1003e0966:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e099c;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1003e099c:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e09d2;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_1003e09d2:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0a08;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1003e0a08:
        FUN_1003e1800(&local_108,*(undefined8 *)(param_1 + 0x10),&local_70);
        QVariant::operator=(&local_98,&local_108);
        QVariant::~QVariant(&local_108);
        iVar8 = -1;
        if (puVar1 != (undefined *)0x0) {
          sVar3 = _strlen(puVar1);
          iVar8 = (int)sVar3;
        }
        local_110 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar8);
        uVar4 = FUN_1003ae480(param_2,&local_110);
        pQVar5 = (QVariant *)FUN_1002edf40(uVar4,&local_70);
        QVariant::operator=(pQVar5,&local_98);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0ac1;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_1003e0ac1:
        local_128 = (QArrayData *)QString::fromAscii_helper("%1[%2].InUse",0xc);
        puVar2 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
        iVar8 = -1;
        if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
          sVar3 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
          iVar8 = (int)sVar3;
        }
        local_130 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
        QString::arg(&local_120,&local_128,&local_130,0,0x20);
        QString::arg(&local_118,&local_120,lVar6,0,10,0x20);
        QString::operator=(&local_70,&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0b95;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_1003e0b95:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0bcb;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1003e0bcb:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0c01;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_1003e0c01:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0c37;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1003e0c37:
        FUN_1003e1800(&local_140,*(undefined8 *)(param_1 + 0x10),&local_70);
        QVariant::operator=(&local_98,&local_140);
        QVariant::~QVariant(&local_140);
        iVar8 = -1;
        if (puVar1 != (undefined *)0x0) {
          sVar3 = _strlen(puVar1);
          iVar8 = (int)sVar3;
        }
        local_148 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar8);
        uVar4 = FUN_1003ae480(param_2,&local_148);
        pQVar5 = (QVariant *)FUN_1002edf40(uVar4,&local_70);
        QVariant::operator=(pQVar5,&local_98);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e0cf3;
          }
          QArrayData::deallocate(local_148,2,8);
        }
      }
LAB_1003e0cf3:
      QVariant::~QVariant(&local_98);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e0d2b;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1003e0d2b:
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e0d6e;
    }
    QListData::dispose(local_68);
  }
LAB_1003e0d6e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

