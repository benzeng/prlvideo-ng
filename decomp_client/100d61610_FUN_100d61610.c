
void FUN_100d61610(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
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
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  int *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  int *local_38;
  undefined1 local_29;
  
  puVar3 = PTR_shared_null_1021e15e8;
  local_70 = (int *)PTR_shared_null_1021e15e8;
  local_78 = (QArrayData *)QString::fromAscii_helper("isolinux/isolinux.cfg",0x15);
  FUN_1000341d0(&local_70,&local_78);
  local_80 = (QArrayData *)QString::fromAscii_helper("README.diskdefines",0x12);
  FUN_1000341d0(&local_70,&local_80);
  local_88 = (QArrayData *)QString::fromAscii_helper("syslinux.cfg",0xc);
  FUN_1000341d0(&local_70,&local_88);
  local_90 = (QArrayData *)QString::fromAscii_helper("platform/i86pc/kernel/unix",0x1a);
  FUN_1000341d0(&local_70,&local_90);
  local_98 = (QArrayData *)QString::fromAscii_helper("dists/stable/Release",0x14);
  FUN_1000341d0(&local_70,&local_98);
  local_a0 = (QArrayData *)QString::fromAscii_helper("i386/prodspec.ini",0x11);
  FUN_1000341d0(&local_70,&local_a0);
  local_a8 = (QArrayData *)QString::fromAscii_helper("amd64/prodspec.ini",0x12);
  FUN_1000341d0(&local_70,&local_a8);
  local_b0 = (QArrayData *)QString::fromAscii_helper("sources/idwbinfo.txt",0x14);
  FUN_1000341d0(&local_70,&local_b0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("x86/sources/idwbinfo.txt",0x18);
  FUN_1000341d0(&local_70,&local_b8);
  local_c0 = (QArrayData *)QString::fromAscii_helper("x64/sources/idwbinfo.txt",0x18);
  FUN_1000341d0(&local_70,&local_c0);
  local_c8 = (QArrayData *)QString::fromAscii_helper("sources/lang.ini",0x10);
  FUN_1000341d0(&local_70,&local_c8);
  local_d0 = (QArrayData *)QString::fromAscii_helper("sources/product.ini",0x13);
  FUN_1000341d0(&local_70,&local_d0);
  local_d8 = (QArrayData *)QString::fromAscii_helper("sources/ei.cfg",0xe);
  FUN_1000341d0(&local_70,&local_d8);
  local_e0 = (QArrayData *)QString::fromAscii_helper("win98/w98setup.bin",0x12);
  FUN_1000341d0(&local_70,&local_e0);
  local_e8 = (QArrayData *)QString::fromAscii_helper("VERSION",7);
  FUN_1000341d0(&local_70,&local_e8);
  local_f0 = (QArrayData *)QString::fromAscii_helper("i586/VERSION",0xc);
  FUN_1000341d0(&local_70,&local_f0);
  local_f8 = (QArrayData *)QString::fromAscii_helper("x86_64/VERSION",0xe);
  FUN_1000341d0(&local_70,&local_f8);
  local_100 = (QArrayData *)
              QString::fromAscii_helper("System/Library/CoreServices/SystemVersion.plist",0x2f);
  FUN_1000341d0(&local_70,&local_100);
  local_108 = (QArrayData *)QString::fromAscii_helper(".discinfo",9);
  FUN_1000341d0(&local_70,&local_108);
  local_110 = (QArrayData *)QString::fromAscii_helper(".treeinfo",9);
  FUN_1000341d0(&local_70,&local_110);
  local_118 = (QArrayData *)QString::fromAscii_helper("content",7);
  FUN_1000341d0(&local_70,&local_118);
  local_120 = (QArrayData *)QString::fromAscii_helper(".disk/info",10);
  FUN_1000341d0(&local_70,&local_120);
  local_128 = (QArrayData *)QString::fromAscii_helper(".volume.inf",0xb);
  FUN_1000341d0(&local_70,&local_128);
  local_130 = (QArrayData *)QString::fromAscii_helper(".image_info",0xb);
  FUN_1000341d0(&local_70,&local_130);
  local_138 = (QArrayData *)QString::fromAscii_helper("etc/redhat-release",0x12);
  FUN_1000341d0(&local_70,&local_138);
  local_140 = (QArrayData *)QString::fromAscii_helper("etc/SuSE-release",0x10);
  FUN_1000341d0(&local_70,&local_140);
  local_148 = (QArrayData *)QString::fromAscii_helper("etc/lsb-release",0xf);
  FUN_1000341d0(&local_70,&local_148);
  local_150 = (QArrayData *)QString::fromAscii_helper("etc/mandrakelinux-release",0x19);
  FUN_1000341d0(&local_70,&local_150);
  local_158 = (QArrayData *)QString::fromAscii_helper("etc/xandros-desktop-version",0x1b);
  FUN_1000341d0(&local_70,&local_158);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("lib64",5);
  local_160 = pQVar4;
  FUN_1000341d0(&local_70,&local_160);
  DAT_1023188a8 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach(0x23188a8);
      iVar1 = DAT_1023188a8[2];
      if (iVar1 != DAT_1023188a8[3]) {
        piVar6 = local_70 + (long)local_70[2] * 2 + 4;
        piVar7 = DAT_1023188a8 + (long)iVar1 * 2 + 4;
        lVar5 = (long)DAT_1023188a8[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)piVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          piVar6 = piVar6 + 2;
          lVar5 = lVar5 + -8;
          pQVar4 = local_160;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_70 = *local_70 + 1;
      local_29 = *local_70 != 0;
      UNLOCK();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61b91;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100d61b91:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61bc0;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100d61bc0:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61bef;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100d61bef:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61c1e;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100d61c1e:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61c4d;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100d61c4d:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61c7c;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100d61c7c:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61cab;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100d61cab:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61cda;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100d61cda:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61d09;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100d61d09:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61d38;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100d61d38:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61d67;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100d61d67:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61d96;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100d61d96:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61dc5;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100d61dc5:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61df4;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100d61df4:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61e23;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100d61e23:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61e52;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100d61e52:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61e81;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100d61e81:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61eb0;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100d61eb0:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61edf;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100d61edf:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61f0e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100d61f0e:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61f3d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100d61f3d:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61f6c;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100d61f6c:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61f9b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100d61f9b:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61fca;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100d61fca:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d61ff9;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100d61ff9:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d62028;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100d62028:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d62057;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100d62057:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d62083;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100d62083:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d620af;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100d620af:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d620db;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100d620db:
  FUN_100039a80(&local_70);
  ___cxa_atexit(FUN_1002b5b40,&DAT_1023188a8,0x100000000);
  local_38 = (int *)puVar3;
  local_40 = (QArrayData *)QString::fromAscii_helper("sources/install.wim",0x13);
  FUN_1000341d0(&local_38,&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("sources/boot.wim",0x10);
  FUN_1000341d0(&local_38,&local_48);
  local_50 = (QArrayData *)QString::fromAscii_helper("x86/sources/install.wim",0x17);
  FUN_1000341d0(&local_38,&local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("x86/sources/boot.wim",0x14);
  FUN_1000341d0(&local_38,&local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("x64/sources/install.wim",0x17);
  FUN_1000341d0(&local_38,&local_60);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("x64/sources/boot.wim",0x14);
  local_68 = pQVar4;
  FUN_1000341d0(&local_38,&local_68);
  DAT_1023188b0 = local_38;
  if (*local_38 != -1) {
    if (*local_38 == 0) {
      QListData::detach(0x23188b0);
      iVar1 = DAT_1023188b0[2];
      if (iVar1 != DAT_1023188b0[3]) {
        piVar6 = local_38 + (long)local_38[2] * 2 + 4;
        piVar7 = DAT_1023188b0 + (long)iVar1 * 2 + 4;
        lVar5 = (long)DAT_1023188b0[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)piVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          piVar6 = piVar6 + 2;
          lVar5 = lVar5 + -8;
          pQVar4 = local_68;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_38 = *local_38 + 1;
      local_29 = *local_38 != 0;
      UNLOCK();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d6228e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100d6228e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d622ba;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d622ba:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d622e6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d622e6:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d62312;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d62312:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d6233e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d6233e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d6236a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d6236a:
  FUN_100039a80(&local_38);
  ___cxa_atexit(FUN_1002b5b40,&DAT_1023188b0,0x100000000);
  return;
}

