
undefined8 * FUN_1006ec120(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  QArrayData *pQVar3;
  uint uVar4;
  bool bVar5;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [32];
  QArrayData *local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  uint local_70;
  undefined1 local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  cVar2 = FUN_1006d80e0();
  if (cVar2 == '\0') {
    pQVar3 = (QArrayData *)
             QString::fromAscii_helper("/private/var/log/prl_disp_service_server.log",0x2c);
    local_48 = pQVar3;
    FUN_10000c490(param_1,&local_48);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006ec199;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
LAB_1006ec199:
  FUN_1006e6ad0(&local_50);
  FUN_10000c490(param_1,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ec1de;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006ec1de:
  FUN_1006dc760(&local_60,0,0,0);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0xae9bed);
  QString::append(&local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ec258;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006ec258:
  FUN_10000c490(param_1,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ec294;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006ec294:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ec2c4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006ec2c4:
  FUN_100773330(local_68,0);
  FUN_1006ed730(&local_88,local_68);
  local_80 = (undefined8 *)(local_88 + 0x10 + (long)*(int *)(local_88 + 8) * 8);
  local_78 = (undefined8 *)(local_88 + 0x10 + (long)*(int *)(local_88 + 0xc) * 8);
  local_70 = 1;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      puVar1 = (undefined8 *)*local_80;
      local_a8 = (QArrayData *)*puVar1;
      if (1 < *(int *)local_a8 + 1U) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
      local_a0 = (int *)puVar1[1];
      if (1 < *local_a0 + 1U) {
        LOCK();
        *local_a0 = *local_a0 + 1;
        local_31 = *local_a0 != 0;
        UNLOCK();
      }
      local_98 = (int *)puVar1[2];
      if (1 < *local_98 + 1U) {
        LOCK();
        *local_98 = *local_98 + 1;
        local_31 = *local_98 != 0;
        UNLOCK();
      }
      local_90 = (int *)puVar1[3];
      if (1 < *local_90 + 1U) {
        LOCK();
        *local_90 = *local_90 + 1;
        local_31 = *local_90 != 0;
        UNLOCK();
      }
      if (local_70 != 0) {
        if (1 < *(int *)local_a8 + 1U) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + 1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
        }
        local_d0 = local_a8;
        FUN_1006ee2c0(local_c8,&local_d0);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec3fe;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1006ec3fe:
        local_e0 = (QArrayData *)QString::fromAscii_helper("%1/Library/Parallels/Downloads",0x1e);
        FUN_1006eef50(&local_e8,local_c8);
        QString::arg(&local_d8,&local_e0,&local_e8,0,0x20);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec471;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1006ec471:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec4a7;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1006ec4a7:
        local_f8 = (QArrayData *)QString::fromAscii_helper("%1/ksmac*.dmg*",0xe);
        QString::arg(&local_f0,&local_f8,&local_d8,0,0x20);
        FUN_10000c490(param_1,&local_f0);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec51a;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1006ec51a:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec550;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_1006ec550:
        local_108 = (QArrayData *)QString::fromAscii_helper("%1/kaspersky/KIS*.exe*",0x16);
        QString::arg(&local_100,&local_108,&local_d8,0,0x20);
        FUN_10000c490(param_1,&local_100);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec5cb;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_1006ec5cb:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec601;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1006ec601:
        local_118 = (QArrayData *)QString::fromAscii_helper("%1/modernmix_setup.exe*",0x17);
        QString::arg(&local_110,&local_118,&local_d8,0,0x20);
        FUN_10000c490(param_1,&local_110);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec67c;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_1006ec67c:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec6b2;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_1006ec6b2:
        local_128 = (QArrayData *)QString::fromAscii_helper("%1/ParallelsDesktop*.dmg*",0x19);
        QString::arg(&local_120,&local_128,&local_d8,0,0x20);
        FUN_10000c490(param_1,&local_120);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec72d;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1006ec72d:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec763;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1006ec763:
        local_138 = (QArrayData *)QString::fromAscii_helper("%1/start8_setup.exe*",0x14);
        QString::arg(&local_130,&local_138,&local_d8,0,0x20);
        FUN_10000c490(param_1,&local_130);
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec7de;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_1006ec7de:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec814;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_1006ec814:
        local_148 = (QArrayData *)QString::fromAscii_helper("%1/maclook-ir.exe*",0x12);
        QString::arg(&local_140,&local_148,&local_d8,0,0x20);
        FUN_10000c490(param_1,&local_140);
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec88f;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1006ec88f:
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec8c5;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1006ec8c5:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006ec8fb;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1006ec8fb:
        FUN_1006ee7c0(local_c8);
        local_70 = 0;
      }
      FUN_1006ed5b0(&local_a8);
      local_80 = local_80 + 1;
      uVar4 = local_70 ^ 1;
      bVar5 = local_70 != 1;
      local_70 = uVar4;
    } while ((bVar5) && (local_80 != local_78));
  }
  FUN_1006ed500(&local_88);
  FUN_1006ed500(local_68);
  return param_1;
}

