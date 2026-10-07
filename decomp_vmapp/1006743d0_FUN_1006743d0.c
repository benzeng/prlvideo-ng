
void FUN_1006743d0(void)

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
  
  puVar3 = PTR_shared_null_100ba2188;
  local_70 = (int *)PTR_shared_null_100ba2188;
  local_78 = (QArrayData *)QString::fromAscii_helper("isolinux/isolinux.cfg",0x15);
  FUN_10000c490(&local_70,&local_78);
  local_80 = (QArrayData *)QString::fromAscii_helper("README.diskdefines",0x12);
  FUN_10000c490(&local_70,&local_80);
  local_88 = (QArrayData *)QString::fromAscii_helper("syslinux.cfg",0xc);
  FUN_10000c490(&local_70,&local_88);
  local_90 = (QArrayData *)QString::fromAscii_helper("platform/i86pc/kernel/unix",0x1a);
  FUN_10000c490(&local_70,&local_90);
  local_98 = (QArrayData *)QString::fromAscii_helper("dists/stable/Release",0x14);
  FUN_10000c490(&local_70,&local_98);
  local_a0 = (QArrayData *)QString::fromAscii_helper("i386/prodspec.ini",0x11);
  FUN_10000c490(&local_70,&local_a0);
  local_a8 = (QArrayData *)QString::fromAscii_helper("amd64/prodspec.ini",0x12);
  FUN_10000c490(&local_70,&local_a8);
  local_b0 = (QArrayData *)QString::fromAscii_helper("sources/idwbinfo.txt",0x14);
  FUN_10000c490(&local_70,&local_b0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("x86/sources/idwbinfo.txt",0x18);
  FUN_10000c490(&local_70,&local_b8);
  local_c0 = (QArrayData *)QString::fromAscii_helper("x64/sources/idwbinfo.txt",0x18);
  FUN_10000c490(&local_70,&local_c0);
  local_c8 = (QArrayData *)QString::fromAscii_helper("sources/lang.ini",0x10);
  FUN_10000c490(&local_70,&local_c8);
  local_d0 = (QArrayData *)QString::fromAscii_helper("sources/product.ini",0x13);
  FUN_10000c490(&local_70,&local_d0);
  local_d8 = (QArrayData *)QString::fromAscii_helper("sources/ei.cfg",0xe);
  FUN_10000c490(&local_70,&local_d8);
  local_e0 = (QArrayData *)QString::fromAscii_helper("win98/w98setup.bin",0x12);
  FUN_10000c490(&local_70,&local_e0);
  local_e8 = (QArrayData *)QString::fromAscii_helper("VERSION",7);
  FUN_10000c490(&local_70,&local_e8);
  local_f0 = (QArrayData *)QString::fromAscii_helper("i586/VERSION",0xc);
  FUN_10000c490(&local_70,&local_f0);
  local_f8 = (QArrayData *)QString::fromAscii_helper("x86_64/VERSION",0xe);
  FUN_10000c490(&local_70,&local_f8);
  local_100 = (QArrayData *)
              QString::fromAscii_helper("System/Library/CoreServices/SystemVersion.plist",0x2f);
  FUN_10000c490(&local_70,&local_100);
  local_108 = (QArrayData *)QString::fromAscii_helper(".discinfo",9);
  FUN_10000c490(&local_70,&local_108);
  local_110 = (QArrayData *)QString::fromAscii_helper(".treeinfo",9);
  FUN_10000c490(&local_70,&local_110);
  local_118 = (QArrayData *)QString::fromAscii_helper("content",7);
  FUN_10000c490(&local_70,&local_118);
  local_120 = (QArrayData *)QString::fromAscii_helper(".disk/info",10);
  FUN_10000c490(&local_70,&local_120);
  local_128 = (QArrayData *)QString::fromAscii_helper(".volume.inf",0xb);
  FUN_10000c490(&local_70,&local_128);
  local_130 = (QArrayData *)QString::fromAscii_helper(".image_info",0xb);
  FUN_10000c490(&local_70,&local_130);
  local_138 = (QArrayData *)QString::fromAscii_helper("etc/redhat-release",0x12);
  FUN_10000c490(&local_70,&local_138);
  local_140 = (QArrayData *)QString::fromAscii_helper("etc/SuSE-release",0x10);
  FUN_10000c490(&local_70,&local_140);
  local_148 = (QArrayData *)QString::fromAscii_helper("etc/lsb-release",0xf);
  FUN_10000c490(&local_70,&local_148);
  local_150 = (QArrayData *)QString::fromAscii_helper("etc/mandrakelinux-release",0x19);
  FUN_10000c490(&local_70,&local_150);
  local_158 = (QArrayData *)QString::fromAscii_helper("etc/xandros-desktop-version",0x1b);
  FUN_10000c490(&local_70,&local_158);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("lib64",5);
  local_160 = pQVar4;
  FUN_10000c490(&local_70,&local_160);
  DAT_1011bcb78 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach(0x11bcb78);
      iVar1 = DAT_1011bcb78[2];
      if (iVar1 != DAT_1011bcb78[3]) {
        piVar6 = local_70 + (long)local_70[2] * 2 + 4;
        piVar7 = DAT_1011bcb78 + (long)iVar1 * 2 + 4;
        lVar5 = (long)DAT_1011bcb78[3] * 8 + (long)iVar1 * -8;
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
      if ((bool)local_29) goto LAB_100674951;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100674951:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674980;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100674980:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006749af;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1006749af:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006749de;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1006749de:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674a0d;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100674a0d:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674a3c;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100674a3c:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674a6b;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100674a6b:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674a9a;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100674a9a:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674ac9;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100674ac9:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674af8;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100674af8:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674b27;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100674b27:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674b56;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100674b56:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674b85;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100674b85:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674bb4;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100674bb4:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674be3;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100674be3:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674c12;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100674c12:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674c41;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100674c41:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674c70;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100674c70:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674c9f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100674c9f:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674cce;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100674cce:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674cfd;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100674cfd:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674d2c;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100674d2c:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674d5b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100674d5b:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674d8a;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100674d8a:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674db9;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100674db9:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674de8;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100674de8:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674e17;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100674e17:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674e43;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100674e43:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674e6f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100674e6f:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100674e9b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100674e9b:
  FUN_100013180(&local_70);
  ___cxa_atexit(FUN_100673910,&DAT_1011bcb78,0x100000000);
  local_38 = (int *)puVar3;
  local_40 = (QArrayData *)QString::fromAscii_helper("sources/install.wim",0x13);
  FUN_10000c490(&local_38,&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("sources/boot.wim",0x10);
  FUN_10000c490(&local_38,&local_48);
  local_50 = (QArrayData *)QString::fromAscii_helper("x86/sources/install.wim",0x17);
  FUN_10000c490(&local_38,&local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("x86/sources/boot.wim",0x14);
  FUN_10000c490(&local_38,&local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("x64/sources/install.wim",0x17);
  FUN_10000c490(&local_38,&local_60);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("x64/sources/boot.wim",0x14);
  local_68 = pQVar4;
  FUN_10000c490(&local_38,&local_68);
  DAT_1011bcb80 = local_38;
  if (*local_38 != -1) {
    if (*local_38 == 0) {
      QListData::detach(0x11bcb80);
      iVar1 = DAT_1011bcb80[2];
      if (iVar1 != DAT_1011bcb80[3]) {
        piVar6 = local_38 + (long)local_38[2] * 2 + 4;
        piVar7 = DAT_1011bcb80 + (long)iVar1 * 2 + 4;
        lVar5 = (long)DAT_1011bcb80[3] * 8 + (long)iVar1 * -8;
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
      if ((bool)local_29) goto LAB_10067504e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10067504e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10067507a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10067507a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006750a6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006750a6:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006750d2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006750d2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006750fe;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006750fe:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10067512a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10067512a:
  FUN_100013180(&local_38);
  ___cxa_atexit(FUN_100673910,&DAT_1011bcb80,0x100000000);
  return;
}

