
undefined8 FUN_100666760(char *param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  FILE *pFVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined8 uVar9;
  ssize_t sVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  QArrayData **ppQVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined8 in_stack_ffffffffffffe398;
  undefined4 uVar19;
  int local_1c40;
  int local_1c38;
  QArrayData *local_1c20;
  QArrayData *local_1c18;
  QArrayData *local_1c10;
  QArrayData *local_1c08;
  uint *local_1c00;
  QArrayData *local_1bf8;
  QString local_1bf0;
  QArrayData *local_1be8;
  QArrayData *local_1be0;
  QArrayData *local_1bd8;
  QArrayData *local_1bd0;
  QArrayData *local_1bc8;
  QString local_1bc0;
  undefined1 local_1bb8 [4];
  ushort local_1bb4;
  QString local_1b28;
  QString local_1b20;
  QArrayData *local_1b18;
  QArrayData *local_1b10;
  QArrayData *local_1b08;
  QArrayData *local_1b00;
  QArrayData *local_1af8;
  QString local_1af0;
  QString local_1ae8;
  QArrayData *local_1ae0;
  QArrayData *local_1ad8;
  QArrayData *local_1ad0;
  QArrayData *local_1ac8;
  QArrayData *local_1ac0;
  QString local_1ab8;
  QString local_1ab0;
  QString local_1aa8;
  QString local_1aa0;
  QArrayData *local_1a98;
  QArrayData *local_1a90;
  QArrayData *local_1a88;
  QArrayData *local_1a80;
  QArrayData *local_1a78;
  QString local_1a70;
  QString local_1a68;
  string local_1a60 [24];
  string local_1a48 [24];
  QArrayData *local_1a30;
  QArrayData *local_1a28;
  QArrayData *local_1a20;
  QArrayData *local_1a18;
  QArrayData *local_1a10;
  QArrayData *local_1a08;
  QString local_1a00;
  QString local_19f8;
  QArrayData *local_19f0;
  QArrayData *local_19e8;
  QArrayData *local_19e0;
  QArrayData *local_19d8;
  long local_19d0;
  QString local_19c8;
  QArrayData *local_19c0;
  QArrayData *local_19b8;
  QString local_19b0;
  QArrayData *local_19a8;
  QArrayData *local_19a0;
  QArrayData *local_1998;
  QArrayData *local_1990;
  long local_1988;
  QString local_1980;
  QArrayData *local_1978;
  QArrayData *local_1970;
  QArrayData *local_1968;
  QString local_1960;
  QArrayData *local_1958;
  QArrayData *local_1950;
  QArrayData *local_1948;
  QArrayData *local_1940;
  QArrayData *local_1938;
  QArrayData *local_1930;
  QArrayData *local_1928;
  QArrayData *local_1920;
  QArrayData *local_1918;
  QArrayData *local_1910;
  QArrayData *local_1908;
  QArrayData *local_1900;
  QArrayData *local_18f8;
  QArrayData *local_18f0;
  QArrayData *local_18e8;
  QArrayData *local_18e0;
  QArrayData *local_18d8;
  uint *local_18d0;
  QString local_18c8;
  QArrayData *local_18c0;
  QArrayData *local_18b8;
  uint *local_18b0;
  QArrayData *local_18a8;
  QArrayData *local_18a0;
  QArrayData *local_1898;
  QArrayData *local_1890;
  uint *local_1888;
  QArrayData *local_1880;
  QArrayData *local_1878;
  undefined1 local_1869;
  char local_1868 [1024];
  char local_1468 [1040];
  char local_1058 [1024];
  char local_c58 [1024];
  char local_858 [1040];
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_1b28.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("win98/w98setup.bin",0x12);
  QString::toLower();
  QString::operator=(&local_1b28,&local_1bc0);
  if (*(int *)local_1bc0.field0_0x0 != -1) {
    if (*(int *)local_1bc0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1bc0.field0_0x0 = *(int *)local_1bc0.field0_0x0 + -1;
      local_1869 = *(int *)local_1bc0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_10066680a;
    }
    QArrayData::deallocate((QArrayData *)local_1bc0.field0_0x0,2,8);
  }
LAB_10066680a:
  iVar17 = 0;
  do {
    local_1bd8 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    iVar3 = -1;
    if (param_1 != (char *)0x0) {
      sVar4 = _strlen(param_1);
      iVar3 = (int)sVar4;
    }
    local_1be0 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
    QString::arg(&local_1bd0,&local_1bd8,&local_1be0,0,0x20);
    QString::arg(&local_1bc8,&local_1bd0,&local_1b28,0,0x20);
    if (*(int *)local_1bd0 != -1) {
      if (*(int *)local_1bd0 != 0) {
        LOCK();
        *(int *)local_1bd0 = *(int *)local_1bd0 + -1;
        local_1869 = *(int *)local_1bd0 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_1006668d7;
      }
      QArrayData::deallocate(local_1bd0,2,8);
    }
LAB_1006668d7:
    if (*(int *)local_1be0 != -1) {
      if (*(int *)local_1be0 != 0) {
        LOCK();
        *(int *)local_1be0 = *(int *)local_1be0 + -1;
        local_1869 = *(int *)local_1be0 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666913;
      }
      QArrayData::deallocate(local_1be0,2,8);
    }
LAB_100666913:
    if (*(int *)local_1bd8 != -1) {
      if (*(int *)local_1bd8 != 0) {
        LOCK();
        *(int *)local_1bd8 = *(int *)local_1bd8 + -1;
        local_1869 = *(int *)local_1bd8 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_10066694f;
      }
      QArrayData::deallocate(local_1bd8,2,8);
    }
LAB_10066694f:
    QString::toUtf8();
    iVar3 = _stat_INODE64(local_1be8 + *(long *)(local_1be8 + 0x10),local_1bb8);
    if (*(int *)local_1be8 != -1) {
      if (*(int *)local_1be8 != 0) {
        LOCK();
        *(int *)local_1be8 = *(int *)local_1be8 + -1;
        local_1869 = *(int *)local_1be8 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_1006669b8;
      }
      QArrayData::deallocate(local_1be8,1,8);
    }
LAB_1006669b8:
    if (iVar3 == 0) {
      uVar13 = 0;
      if ((local_1bb4 & 0xf000) == 0x8000) {
        param_2[0] = 0x803;
        param_2[1] = 1;
        uVar13 = 1;
      }
    }
    else {
      QString::toUpper();
      QString::operator=(&local_1b28,&local_1bf0);
      uVar13 = 4;
      if (*(int *)local_1bf0.field0_0x0 != -1) {
        if (*(int *)local_1bf0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1bf0.field0_0x0 = *(int *)local_1bf0.field0_0x0 + -1;
          local_1869 = *(int *)local_1bf0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_1869) goto LAB_100666a50;
        }
        QArrayData::deallocate((QArrayData *)local_1bf0.field0_0x0,2,8);
      }
    }
LAB_100666a50:
    if (*(int *)local_1bc8 != -1) {
      if (*(int *)local_1bc8 != 0) {
        LOCK();
        *(int *)local_1bc8 = *(int *)local_1bc8 + -1;
        local_1869 = *(int *)local_1bc8 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666a8c;
      }
      QArrayData::deallocate(local_1bc8,2,8);
    }
LAB_100666a8c:
    iVar3 = 0;
    if ((uVar13 | 4) != 4) break;
    iVar17 = iVar17 + 1;
    iVar3 = -1;
  } while (iVar17 < 2);
  if (*(int *)local_1b28.field0_0x0 != -1) {
    if (*(int *)local_1b28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b28.field0_0x0 = *(int *)local_1b28.field0_0x0 + -1;
      local_1869 = *(int *)local_1b28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_100666ae6;
    }
    QArrayData::deallocate((QArrayData *)local_1b28.field0_0x0,2,8);
  }
LAB_100666ae6:
  uVar9 = 0;
  if (iVar3 == 0) goto LAB_1006695ee;
  local_1aa8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("i386/prodspec.ini",0x11);
  local_1ab0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("amd64/prodspec.ini",0x12);
  QString::toLower();
  QString::operator=(&local_1aa8,&local_1ab8);
  if (*(int *)local_1ab8.field0_0x0 != -1) {
    if (*(int *)local_1ab8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1ab8.field0_0x0 = *(int *)local_1ab8.field0_0x0 + -1;
      local_1869 = *(int *)local_1ab8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_100666b83;
    }
    QArrayData::deallocate((QArrayData *)local_1ab8.field0_0x0,2,8);
  }
LAB_100666b83:
  iVar17 = 0;
  ppQVar15 = &local_1ac8;
  do {
    local_1ad0 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    iVar3 = -1;
    if (param_1 != (char *)0x0) {
      sVar4 = _strlen(param_1);
      iVar3 = (int)sVar4;
    }
    local_1ad8 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
    QString::arg(ppQVar15,&local_1ad0,&local_1ad8,0,0x20);
    QString::arg(&local_1ac0,ppQVar15,&local_1aa8,0,0x20);
    if (*(int *)local_1ac8 != -1) {
      if (*(int *)local_1ac8 != 0) {
        LOCK();
        *(int *)local_1ac8 = *(int *)local_1ac8 + -1;
        local_1869 = *(int *)local_1ac8 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666c5d;
      }
      QArrayData::deallocate(local_1ac8,2,8);
    }
LAB_100666c5d:
    if (*(int *)local_1ad8 != -1) {
      if (*(int *)local_1ad8 != 0) {
        LOCK();
        *(int *)local_1ad8 = *(int *)local_1ad8 + -1;
        local_1869 = *(int *)local_1ad8 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666c99;
      }
      QArrayData::deallocate(local_1ad8,2,8);
    }
LAB_100666c99:
    if (*(int *)local_1ad0 != -1) {
      if (*(int *)local_1ad0 != 0) {
        LOCK();
        *(int *)local_1ad0 = *(int *)local_1ad0 + -1;
        local_1869 = *(int *)local_1ad0 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666cd5;
      }
      QArrayData::deallocate(local_1ad0,2,8);
    }
LAB_100666cd5:
    QString::toUtf8();
    pFVar5 = _fopen((char *)(local_1ae0 + *(long *)(local_1ae0 + 0x10)),"r");
    if (*(int *)local_1ae0 != -1) {
      if (*(int *)local_1ae0 != 0) {
        LOCK();
        *(int *)local_1ae0 = *(int *)local_1ae0 + -1;
        local_1869 = *(int *)local_1ae0 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666d3a;
      }
      QArrayData::deallocate(local_1ae0,1,8);
    }
LAB_100666d3a:
    if (pFVar5 == (FILE *)0x0) {
      QString::toUpper();
      QString::operator=(&local_1aa8,&local_1ae8);
      iVar3 = 4;
      if (*(int *)local_1ae8.field0_0x0 != -1) {
        if (*(int *)local_1ae8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1ae8.field0_0x0 = *(int *)local_1ae8.field0_0x0 + -1;
          local_1869 = *(int *)local_1ae8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_1869) goto LAB_100666dd0;
        }
        QArrayData::deallocate((QArrayData *)local_1ae8.field0_0x0,2,8);
      }
    }
    else {
      param_2[1] = 1;
      iVar3 = 5;
    }
LAB_100666dd0:
    if (*(int *)local_1ac0 != -1) {
      if (*(int *)local_1ac0 != 0) {
        LOCK();
        *(int *)local_1ac0 = *(int *)local_1ac0 + -1;
        local_1869 = *(int *)local_1ac0 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666e0c;
      }
      QArrayData::deallocate(local_1ac0,2,8);
    }
LAB_100666e0c:
    if (iVar3 != 4) {
      if (iVar3 != 5) goto LAB_100667201;
      goto LAB_10066712e;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 2);
  QString::toLower();
  QString::operator=(&local_1ab0,&local_1af0);
  if (*(int *)local_1af0.field0_0x0 != -1) {
    if (*(int *)local_1af0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1af0.field0_0x0 = *(int *)local_1af0.field0_0x0 + -1;
      local_1869 = *(int *)local_1af0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_100666e85;
    }
    QArrayData::deallocate((QArrayData *)local_1af0.field0_0x0,2,8);
  }
LAB_100666e85:
  iVar17 = 0;
  do {
    local_1b08 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    iVar3 = -1;
    if (param_1 != (char *)0x0) {
      sVar4 = _strlen(param_1);
      iVar3 = (int)sVar4;
    }
    local_1b10 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
    QString::arg(&local_1b00,&local_1b08,&local_1b10,0,0x20);
    QString::arg(&local_1af8,&local_1b00,&local_1ab0,0,0x20);
    if (*(int *)local_1b00 != -1) {
      if (*(int *)local_1b00 != 0) {
        LOCK();
        *(int *)local_1b00 = *(int *)local_1b00 + -1;
        local_1869 = *(int *)local_1b00 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666f4b;
      }
      QArrayData::deallocate(local_1b00,2,8);
    }
LAB_100666f4b:
    if (*(int *)local_1b10 != -1) {
      if (*(int *)local_1b10 != 0) {
        LOCK();
        *(int *)local_1b10 = *(int *)local_1b10 + -1;
        local_1869 = *(int *)local_1b10 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666f87;
      }
      QArrayData::deallocate(local_1b10,2,8);
    }
LAB_100666f87:
    if (*(int *)local_1b08 != -1) {
      if (*(int *)local_1b08 != 0) {
        LOCK();
        *(int *)local_1b08 = *(int *)local_1b08 + -1;
        local_1869 = *(int *)local_1b08 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100666fc3;
      }
      QArrayData::deallocate(local_1b08,2,8);
    }
LAB_100666fc3:
    QString::toUtf8();
    pFVar5 = _fopen((char *)(local_1b18 + *(long *)(local_1b18 + 0x10)),"r");
    if (*(int *)local_1b18 != -1) {
      if (*(int *)local_1b18 != 0) {
        LOCK();
        *(int *)local_1b18 = *(int *)local_1b18 + -1;
        local_1869 = *(int *)local_1b18 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_10066702c;
      }
      QArrayData::deallocate(local_1b18,1,8);
    }
LAB_10066702c:
    if (pFVar5 == (FILE *)0x0) {
      QString::toUpper();
      QString::operator=(&local_1ab0,&local_1b20);
      iVar3 = 8;
      if (*(int *)local_1b20.field0_0x0 != -1) {
        if (*(int *)local_1b20.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1b20.field0_0x0 = *(int *)local_1b20.field0_0x0 + -1;
          local_1869 = *(int *)local_1b20.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_1869) goto LAB_1006670c0;
        }
        QArrayData::deallocate((QArrayData *)local_1b20.field0_0x0,2,8);
      }
    }
    else {
      param_2[1] = 2;
      iVar3 = 5;
    }
LAB_1006670c0:
    if (*(int *)local_1af8 != -1) {
      if (*(int *)local_1af8 != 0) {
        LOCK();
        *(int *)local_1af8 = *(int *)local_1af8 + -1;
        local_1869 = *(int *)local_1af8 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_1006670fc;
      }
      QArrayData::deallocate(local_1af8,2,8);
    }
LAB_1006670fc:
    ppQVar15 = (QArrayData **)0xffffffff;
    if (iVar3 != 8) {
      if (iVar3 == 5) goto LAB_10066712e;
      break;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 2);
  goto LAB_100667201;
LAB_10066712e:
  do {
    pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
    if (pcVar6 == (char *)0x0) goto LAB_1006671f7;
    iVar17 = _strncmp(local_1058,"Product=Windows 2000",0x14);
    if (iVar17 == 0) {
      *param_2 = 0x806;
      goto LAB_1006671f7;
    }
    iVar17 = _strncmp(local_1058,"Product=Windows Server 2003",0x1b);
    if (iVar17 == 0) {
      *param_2 = 0x808;
      goto LAB_1006671f7;
    }
    iVar17 = _strncmp(local_1058,"Product=Windows XP",0x12);
    if (iVar17 == 0) {
      *param_2 = 0x807;
      goto LAB_1006671f7;
    }
    iVar17 = _strncmp(local_1058,"Product=Windows NT",0x12);
  } while (iVar17 != 0);
  *param_2 = 0x805;
LAB_1006671f7:
  _fclose(pFVar5);
  ppQVar15 = (QArrayData **)0x0;
LAB_100667201:
  if (*(int *)local_1ab0.field0_0x0 != -1) {
    if (*(int *)local_1ab0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1ab0.field0_0x0 = *(int *)local_1ab0.field0_0x0 + -1;
      local_1869 = *(int *)local_1ab0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_100667244;
    }
    QArrayData::deallocate((QArrayData *)local_1ab0.field0_0x0,2,8);
  }
LAB_100667244:
  if (*(int *)local_1aa8.field0_0x0 != -1) {
    if (*(int *)local_1aa8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1aa8.field0_0x0 = *(int *)local_1aa8.field0_0x0 + -1;
      local_1869 = *(int *)local_1aa8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_100667280;
    }
    QArrayData::deallocate((QArrayData *)local_1aa8.field0_0x0,2,8);
  }
LAB_100667280:
  uVar9 = 0;
  if ((int)ppQVar15 == 0) goto LAB_1006695ee;
  local_1a68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("sources/idwbinfo.txt",0x14);
  QString::toLower();
  QString::operator=(&local_1a68,&local_1a70);
  if (*(int *)local_1a70.field0_0x0 != -1) {
    if (*(int *)local_1a70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a70.field0_0x0 = *(int *)local_1a70.field0_0x0 + -1;
      local_1869 = *(int *)local_1a70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_100667305;
    }
    QArrayData::deallocate((QArrayData *)local_1a70.field0_0x0,2,8);
  }
LAB_100667305:
  iVar17 = 0;
  do {
    local_1a88 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    iVar3 = -1;
    if (param_1 != (char *)0x0) {
      sVar4 = _strlen(param_1);
      iVar3 = (int)sVar4;
    }
    local_1a90 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
    QString::arg(&local_1a80,&local_1a88,&local_1a90,0,0x20);
    QString::arg(&local_1a78,&local_1a80,&local_1a68,0,0x20);
    if (*(int *)local_1a80 != -1) {
      if (*(int *)local_1a80 != 0) {
        LOCK();
        *(int *)local_1a80 = *(int *)local_1a80 + -1;
        local_1869 = *(int *)local_1a80 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_1006673cb;
      }
      QArrayData::deallocate(local_1a80,2,8);
    }
LAB_1006673cb:
    if (*(int *)local_1a90 != -1) {
      if (*(int *)local_1a90 != 0) {
        LOCK();
        *(int *)local_1a90 = *(int *)local_1a90 + -1;
        local_1869 = *(int *)local_1a90 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100667407;
      }
      QArrayData::deallocate(local_1a90,2,8);
    }
LAB_100667407:
    if (*(int *)local_1a88 != -1) {
      if (*(int *)local_1a88 != 0) {
        LOCK();
        *(int *)local_1a88 = *(int *)local_1a88 + -1;
        local_1869 = *(int *)local_1a88 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_100667443;
      }
      QArrayData::deallocate(local_1a88,2,8);
    }
LAB_100667443:
    QString::toUtf8();
    pFVar5 = _fopen((char *)(local_1a98 + *(long *)(local_1a98 + 0x10)),"r");
    if (*(int *)local_1a98 != -1) {
      if (*(int *)local_1a98 != 0) {
        LOCK();
        *(int *)local_1a98 = *(int *)local_1a98 + -1;
        local_1869 = *(int *)local_1a98 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_1006674ac;
      }
      QArrayData::deallocate(local_1a98,1,8);
    }
LAB_1006674ac:
    if (pFVar5 == (FILE *)0x0) {
      QString::toUpper();
      QString::operator=(&local_1a68,&local_1aa0);
      uVar13 = 4;
      if (*(int *)local_1aa0.field0_0x0 != -1) {
        if (*(int *)local_1aa0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1aa0.field0_0x0 = *(int *)local_1aa0.field0_0x0 + -1;
          local_1869 = *(int *)local_1aa0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_1869) goto LAB_10066771b;
        }
        QArrayData::deallocate((QArrayData *)local_1aa0.field0_0x0,2,8);
      }
    }
    else {
LAB_1006674dc:
      do {
        pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
        if (pcVar6 == (char *)0x0) break;
        iVar3 = _strncmp(local_1058,"BuildBranch=longhorn",0x14);
        if (((iVar3 != 0) && (iVar3 = _strncmp(local_1058,"BuildBranch=lh",0xe), iVar3 != 0)) &&
           (iVar3 = _strncmp(local_1058,"BuildBranch=win7",0x10), iVar3 != 0)) {
          iVar3 = _strncmp(local_1058,"BuildArch=x86",0xd);
          if (iVar3 == 0) {
            *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 1;
          }
          else {
            iVar3 = _strncmp(local_1058,"BuildArch=amd64",0xf);
            if (iVar3 != 0) goto LAB_1006674dc;
            *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 2;
          }
          if (*param_2 != 0xff) break;
          goto LAB_1006674dc;
        }
        cVar2 = FUN_10066fea0(param_1,param_2);
      } while ((cVar2 == '\0') || (*param_2 = 0x80a, param_2[1] == 0));
      _fclose(pFVar5);
      if (*param_2 != 0xff) goto LAB_100667700;
      FUN_100670270(param_1,param_2);
      lVar1 = *(long *)(param_2 + 6);
      iVar3 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"ServerNT",
                         0xffffffff,1);
      if (iVar3 == 0) {
        if (param_2[0x16] == 6) {
          if (((uint)param_2[0x17] < 2) && (cVar2 = FUN_10066fea0(param_1,param_2), cVar2 != '\0'))
          {
            *param_2 = 0x80a;
          }
          if ((param_2[0x17] & 0xfffffffeU) != 2) goto LAB_1006676e0;
          *param_2 = 0x80d;
        }
        else {
          if ((param_2[0x16] != 10) || (param_2[0x17] != 0)) goto LAB_1006676e0;
          *param_2 = 0x810;
        }
      }
      else {
LAB_1006676e0:
        uVar13 = 0;
        if (*param_2 == 0xff) goto LAB_10066771b;
      }
LAB_100667700:
      FUN_100671e80(param_1,param_2);
      uVar13 = 1;
      FUN_1006723a0(param_1,param_2);
    }
LAB_10066771b:
    if (*(int *)local_1a78 != -1) {
      if (*(int *)local_1a78 != 0) {
        LOCK();
        *(int *)local_1a78 = *(int *)local_1a78 + -1;
        local_1869 = *(int *)local_1a78 != 0;
        UNLOCK();
        if ((bool)local_1869) goto LAB_10066775e;
      }
      QArrayData::deallocate(local_1a78,2,8);
    }
LAB_10066775e:
    iVar3 = 0;
    if ((uVar13 | 4) != 4) goto LAB_10066778d;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 2);
  param_2[1] = 0;
  iVar3 = -1;
LAB_10066778d:
  if (*(int *)local_1a68.field0_0x0 != -1) {
    if (*(int *)local_1a68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a68.field0_0x0 = *(int *)local_1a68.field0_0x0 + -1;
      local_1869 = *(int *)local_1a68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1869) goto LAB_1006677c9;
    }
    QArrayData::deallocate((QArrayData *)local_1a68.field0_0x0,2,8);
  }
LAB_1006677c9:
  uVar9 = 0;
  if (iVar3 == 0) goto LAB_1006695ee;
  _strlen(param_1);
  std::string::__init((char *)local_1a48,(ulong)param_1);
  pbVar7 = (byte *)std::string::append((char *)local_1a48);
  if ((*pbVar7 & 1) == 0) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    pbVar7 = *(byte **)(pbVar7 + 0x10);
  }
  iVar17 = FUN_100672c80(pbVar7,param_2);
  if (iVar17 == 0) {
    _strlen(param_1);
    std::string::__init((char *)local_1a60,(ulong)param_1);
    pbVar7 = (byte *)std::string::append((char *)local_1a60);
    if ((*pbVar7 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
    }
    else {
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    iVar17 = FUN_100672c80(pbVar7,param_2);
    std::string::~string(local_1a60);
    std::string::~string(local_1a48);
    if (iVar17 != 0) goto LAB_1006678a4;
    param_2[1] = 3;
  }
  else {
    std::string::~string(local_1a48);
LAB_1006678a4:
    FUN_100672c80(param_1,param_2);
  }
  if (*param_2 != 0xff) {
    uVar9 = 0;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("DetectOS","DetectOS",2,
                    "Detect OS: OS ver (%d) Arch(s) (0x%X) distro detected on \'%s\'",*param_2,
                    param_2[1],param_1);
    }
    goto LAB_1006695ee;
  }
  _snprintf(local_858,0x401,"%s/System/Library/CoreServices/SystemVersion.plist");
  pFVar5 = _fopen(local_858,"r");
  if (pFVar5 == (FILE *)0x0) {
    _snprintf(local_858,0x401,"%s/com.apple.recovery.boot/SystemVersion.plist");
    pFVar5 = _fopen(local_858,"r");
    if (pFVar5 != (FILE *)0x0) goto LAB_10066792d;
    _snprintf(local_1468,0x401,"%s/.discinfo",param_1);
    pFVar5 = _fopen(local_1468,"r");
    if (pFVar5 == (FILE *)0x0) {
      _snprintf(local_448,0x401,"%s/isolinux/isolinux.cfg",param_1);
      pFVar5 = _fopen(local_448,"r");
      iVar17 = -1;
      if (pFVar5 != (FILE *)0x0) {
        ___bzero(local_1058,0x400);
        iVar17 = -1;
        do {
          pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
          if (pcVar6 == (char *)0x0) break;
          _strlen(local_1058);
          QString::fromUtf8_helper((char *)&local_19b8,(int)local_1058);
          QString::normalized(&local_19b0,&local_19b8,1,0);
          if (*(int *)local_19b8 != -1) {
            if (*(int *)local_19b8 != 0) {
              LOCK();
              *(int *)local_19b8 = *(int *)local_19b8 + -1;
              local_1869 = *(int *)local_19b8 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_1006681fb;
            }
            QArrayData::deallocate(local_19b8,2,8);
          }
LAB_1006681fb:
          ___bzero(local_1058,0x400);
          local_19c0 = (QArrayData *)QString::fromAscii_helper("CDLABEL=Fedora",0xe);
          iVar3 = QString::indexOf(&local_19b0,&local_19c0,0);
          if (*(int *)local_19c0 != -1) {
            if (*(int *)local_19c0 != 0) {
              LOCK();
              *(int *)local_19c0 = *(int *)local_19c0 + -1;
              local_1869 = *(int *)local_19c0 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_100668276;
            }
            QArrayData::deallocate(local_19c0,2,8);
          }
LAB_100668276:
          bVar18 = true;
          if (-1 < iVar3) {
            *param_2 = 0x907;
            param_2[2] = 1;
            QString::mid((int)&local_19c8,(int)&local_19b0);
            QString::operator=(&local_19b0,&local_19c8);
            if (*(int *)local_19c8.field0_0x0 != -1) {
              if (*(int *)local_19c8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_19c8.field0_0x0 = *(int *)local_19c8.field0_0x0 + -1;
                local_1869 = *(int *)local_19c8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_1006682fb;
              }
              QArrayData::deallocate((QArrayData *)local_19c8.field0_0x0,2,8);
            }
LAB_1006682fb:
            local_19d8 = (QArrayData *)QString::fromAscii_helper("-",1);
            QString::split(&local_19d0,&local_19b0,&local_19d8,0,1);
            if (*(int *)local_19d8 != -1) {
              if (*(int *)local_19d8 != 0) {
                LOCK();
                *(int *)local_19d8 = *(int *)local_19d8 + -1;
                local_1869 = *(int *)local_19d8 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_100668371;
              }
              QArrayData::deallocate(local_19d8,2,8);
            }
LAB_100668371:
            if (2 < *(int *)(local_19d0 + 0xc) - *(int *)(local_19d0 + 8)) {
              local_19e0 = *(QArrayData **)(local_19d0 + 0x20 + (long)*(int *)(local_19d0 + 8) * 8);
              if (1 < *(int *)local_19e0 + 1U) {
                LOCK();
                *(int *)local_19e0 = *(int *)local_19e0 + 1;
                local_1869 = *(int *)local_19e0 != 0;
                UNLOCK();
              }
              local_19e8 = (QArrayData *)QString::fromAscii_helper("i386",4);
              cVar2 = QString::startsWith(&local_19e0,&local_19e8,1);
              if (*(int *)local_19e8 != -1) {
                if (*(int *)local_19e8 != 0) {
                  LOCK();
                  *(int *)local_19e8 = *(int *)local_19e8 + -1;
                  local_1869 = *(int *)local_19e8 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_10066841b;
                }
                QArrayData::deallocate(local_19e8,2,8);
              }
LAB_10066841b:
              if (cVar2 != '\0') {
                param_2[1] = 1;
              }
              local_19f0 = (QArrayData *)QString::fromAscii_helper("x86_64",6);
              cVar2 = QString::startsWith(&local_19e0,&local_19f0,1);
              if (*(int *)local_19f0 != -1) {
                if (*(int *)local_19f0 != 0) {
                  LOCK();
                  *(int *)local_19f0 = *(int *)local_19f0 + -1;
                  local_1869 = *(int *)local_19f0 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_100668491;
                }
                QArrayData::deallocate(local_19f0,2,8);
              }
LAB_100668491:
              if (cVar2 != '\0') {
                param_2[1] = 2;
              }
              if (*(int *)local_19e0 != -1) {
                if (*(int *)local_19e0 != 0) {
                  LOCK();
                  *(int *)local_19e0 = *(int *)local_19e0 + -1;
                  local_1869 = *(int *)local_19e0 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_1006684d9;
                }
                QArrayData::deallocate(local_19e0,2,8);
              }
            }
LAB_1006684d9:
            iVar17 = 0;
            FUN_100013180(&local_19d0);
            bVar18 = false;
          }
          if (*(int *)local_19b0.field0_0x0 != -1) {
            if (*(int *)local_19b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_19b0.field0_0x0 = *(int *)local_19b0.field0_0x0 + -1;
              local_1869 = *(int *)local_19b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_10066852d;
            }
            QArrayData::deallocate((QArrayData *)local_19b0.field0_0x0,2,8);
          }
LAB_10066852d:
        } while (bVar18);
        _fclose(pFVar5);
      }
      uVar9 = 0;
      if (iVar17 == 0) goto LAB_1006695ee;
      _snprintf(local_448,0x401,"%s/isolinux/isolinux.cfg",param_1);
      pFVar5 = _fopen(local_448,"r");
      local_1c40 = -1;
      if (pFVar5 != (FILE *)0x0) {
        ___bzero(local_1058,0x400);
        local_1c40 = -1;
        do {
          pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
          if (pcVar6 == (char *)0x0) break;
          _strlen(local_1058);
          QString::fromUtf8_helper((char *)&local_1968,(int)local_1058);
          QString::normalized(&local_1960,&local_1968,1,0);
          if (*(int *)local_1968 != -1) {
            if (*(int *)local_1968 != 0) {
              LOCK();
              *(int *)local_1968 = *(int *)local_1968 + -1;
              local_1869 = *(int *)local_1968 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_100668646;
            }
            QArrayData::deallocate(local_1968,2,8);
          }
LAB_100668646:
          ___bzero(local_1058,0x400);
          local_1970 = (QArrayData *)QString::fromAscii_helper("CDLABEL=CentOS 7",0x10);
          iVar17 = QString::indexOf(&local_1960,&local_1970,0);
          if (*(int *)local_1970 != -1) {
            if (*(int *)local_1970 != 0) {
              LOCK();
              *(int *)local_1970 = *(int *)local_1970 + -1;
              local_1869 = *(int *)local_1970 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_1006686c0;
            }
            QArrayData::deallocate(local_1970,2,8);
          }
LAB_1006686c0:
          if (iVar17 < 0) {
            local_1978 = (QArrayData *)QString::fromAscii_helper("CDLABEL=CentOS",0xe);
            iVar17 = QString::indexOf(&local_1960,&local_1978,0);
            if (*(int *)local_1978 != -1) {
              if (*(int *)local_1978 != 0) {
                LOCK();
                *(int *)local_1978 = *(int *)local_1978 + -1;
                local_1869 = *(int *)local_1978 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_10066873b;
              }
              QArrayData::deallocate(local_1978,2,8);
            }
LAB_10066873b:
            bVar12 = 2;
            if (-1 < iVar17) {
              iVar17 = 0x90d;
              goto LAB_10066874e;
            }
          }
          else {
            iVar17 = 0x914;
LAB_10066874e:
            *param_2 = iVar17;
            param_2[2] = 1;
            QString::mid((int)&local_1980,(int)&local_1960);
            QString::operator=(&local_1960,&local_1980);
            if (*(int *)local_1980.field0_0x0 != -1) {
              if (*(int *)local_1980.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1980.field0_0x0 = *(int *)local_1980.field0_0x0 + -1;
                local_1869 = *(int *)local_1980.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_1006687c2;
              }
              QArrayData::deallocate((QArrayData *)local_1980.field0_0x0,2,8);
            }
LAB_1006687c2:
            local_1990 = (QArrayData *)QString::fromAscii_helper("-",1);
            QString::split(&local_1988,&local_1960,&local_1990,0,1);
            if (*(int *)local_1990 != -1) {
              if (*(int *)local_1990 != 0) {
                LOCK();
                *(int *)local_1990 = *(int *)local_1990 + -1;
                local_1869 = *(int *)local_1990 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_100668838;
              }
              QArrayData::deallocate(local_1990,2,8);
            }
LAB_100668838:
            bVar12 = 2;
            if (2 < *(int *)(local_1988 + 0xc) - *(int *)(local_1988 + 8)) {
              local_1998 = *(QArrayData **)(local_1988 + 0x20 + (long)*(int *)(local_1988 + 8) * 8);
              if (1 < *(int *)local_1998 + 1U) {
                LOCK();
                *(int *)local_1998 = *(int *)local_1998 + 1;
                local_1869 = *(int *)local_1998 != 0;
                UNLOCK();
              }
              local_19a0 = (QArrayData *)QString::fromAscii_helper("i386",4);
              cVar2 = QString::startsWith(&local_1998,&local_19a0,1);
              if (*(int *)local_19a0 != -1) {
                if (*(int *)local_19a0 != 0) {
                  LOCK();
                  *(int *)local_19a0 = *(int *)local_19a0 + -1;
                  local_1869 = *(int *)local_19a0 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_1006688e8;
                }
                QArrayData::deallocate(local_19a0,2,8);
              }
LAB_1006688e8:
              if (cVar2 != '\0') {
                param_2[1] = 1;
              }
              local_19a8 = (QArrayData *)QString::fromAscii_helper("x86_64",6);
              cVar2 = QString::startsWith(&local_1998,&local_19a8,1);
              if (*(int *)local_19a8 != -1) {
                if (*(int *)local_19a8 != 0) {
                  LOCK();
                  *(int *)local_19a8 = *(int *)local_19a8 + -1;
                  local_1869 = *(int *)local_19a8 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_10066895e;
                }
                QArrayData::deallocate(local_19a8,2,8);
              }
LAB_10066895e:
              if (cVar2 == '\0') {
                iVar17 = param_2[1];
              }
              else {
                param_2[1] = 2;
                iVar17 = 2;
              }
              if (iVar17 != 0) {
                local_1c40 = 0;
              }
              bVar12 = iVar17 != 0 | 2;
              if (*(int *)local_1998 != -1) {
                if (*(int *)local_1998 != 0) {
                  LOCK();
                  *(int *)local_1998 = *(int *)local_1998 + -1;
                  local_1869 = *(int *)local_1998 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_1006689e6;
                }
                QArrayData::deallocate(local_1998,2,8);
              }
            }
LAB_1006689e6:
            FUN_100013180(&local_1988);
          }
          if (*(int *)local_1960.field0_0x0 != -1) {
            if (*(int *)local_1960.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1960.field0_0x0 = *(int *)local_1960.field0_0x0 + -1;
              local_1869 = *(int *)local_1960.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_100668a2e;
            }
            QArrayData::deallocate((QArrayData *)local_1960.field0_0x0,2,8);
          }
LAB_100668a2e:
        } while (bVar12 == 2);
        _fclose(pFVar5);
      }
      uVar9 = 0;
      if (local_1c40 == 0) goto LAB_1006695ee;
      _snprintf(local_1468,0x401,"%s/content",param_1);
      pFVar5 = _fopen(local_1468,"r");
      if (pFVar5 == (FILE *)0x0) {
        _snprintf(local_448,0x401,"%s/syslinux.cfg",param_1);
        pFVar5 = _fopen(local_448,"r");
        local_1c40 = -1;
        if (pFVar5 != (FILE *)0x0) {
          ___bzero(local_1058,0x400);
          local_1c40 = -1;
          do {
            pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
            if (pcVar6 == (char *)0x0) break;
            _strlen(local_1058);
            QString::fromUtf8_helper((char *)&local_1930,(int)local_1058);
            QString::normalized(&local_1928,&local_1930,1,0);
            QString::trimmed();
            if (*(int *)local_1928 != -1) {
              if (*(int *)local_1928 != 0) {
                LOCK();
                *(int *)local_1928 = *(int *)local_1928 + -1;
                local_1869 = *(int *)local_1928 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_1006690e3;
              }
              QArrayData::deallocate(local_1928,2,8);
            }
LAB_1006690e3:
            if (*(int *)local_1930 != -1) {
              if (*(int *)local_1930 != 0) {
                LOCK();
                *(int *)local_1930 = *(int *)local_1930 + -1;
                local_1869 = *(int *)local_1930 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_10066911f;
              }
              QArrayData::deallocate(local_1930,2,8);
            }
LAB_10066911f:
            ___bzero(local_1058,0x400);
            local_1938 = (QArrayData *)QString::fromAscii_helper("default",7);
            cVar2 = QString::startsWith(&local_1920,&local_1938,0);
            if (cVar2 == '\0') {
              bVar18 = false;
            }
            else {
              local_1940 = (QArrayData *)QString::fromAscii_helper("openSUSE",8);
              iVar17 = QString::indexOf(&local_1920,&local_1940,0);
              bVar18 = iVar17 != -1;
              if (*(int *)local_1940 != -1) {
                if (*(int *)local_1940 != 0) {
                  LOCK();
                  *(int *)local_1940 = *(int *)local_1940 + -1;
                  local_1869 = *(int *)local_1940 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_1006691d2;
                }
                QArrayData::deallocate(local_1940,2,8);
              }
            }
LAB_1006691d2:
            if (*(int *)local_1938 != -1) {
              if (*(int *)local_1938 != 0) {
                LOCK();
                *(int *)local_1938 = *(int *)local_1938 + -1;
                local_1869 = *(int *)local_1938 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_10066920e;
              }
              QArrayData::deallocate(local_1938,2,8);
            }
LAB_10066920e:
            if (bVar18) {
              *param_2 = 0x90f;
              param_2[2] = 1;
            }
            else {
              local_1948 = (QArrayData *)QString::fromAscii_helper("kernel",6);
              cVar2 = QString::startsWith(&local_1920,&local_1948,0);
              if (*(int *)local_1948 != -1) {
                if (*(int *)local_1948 != 0) {
                  LOCK();
                  *(int *)local_1948 = *(int *)local_1948 + -1;
                  local_1869 = *(int *)local_1948 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_100669291;
                }
                QArrayData::deallocate(local_1948,2,8);
              }
LAB_100669291:
              if (cVar2 != '\0') {
                local_1950 = (QArrayData *)QString::fromAscii_helper("i386",4);
                iVar17 = QString::indexOf(&local_1920,&local_1950,0);
                if (*(int *)local_1950 != -1) {
                  if (*(int *)local_1950 != 0) {
                    LOCK();
                    *(int *)local_1950 = *(int *)local_1950 + -1;
                    local_1869 = *(int *)local_1950 != 0;
                    UNLOCK();
                    if ((bool)local_1869) goto LAB_100669306;
                  }
                  QArrayData::deallocate(local_1950,2,8);
                }
LAB_100669306:
                if (iVar17 != -1) {
                  param_2[1] = 1;
                }
                local_1958 = (QArrayData *)QString::fromAscii_helper("x86_64",6);
                iVar17 = QString::indexOf(&local_1920,&local_1958,0);
                if (*(int *)local_1958 != -1) {
                  if (*(int *)local_1958 != 0) {
                    LOCK();
                    *(int *)local_1958 = *(int *)local_1958 + -1;
                    local_1869 = *(int *)local_1958 != 0;
                    UNLOCK();
                    if ((bool)local_1869) goto LAB_100669380;
                  }
                  QArrayData::deallocate(local_1958,2,8);
                }
LAB_100669380:
                if (iVar17 != -1) {
                  param_2[1] = 2;
                }
              }
            }
            bVar18 = true;
            if ((*param_2 != 0xff) && (bVar18 = param_2[1] == 0, !bVar18)) {
              local_1c40 = 0;
            }
            if (*(int *)local_1920 != -1) {
              if (*(int *)local_1920 != 0) {
                LOCK();
                *(int *)local_1920 = *(int *)local_1920 + -1;
                local_1869 = *(int *)local_1920 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_1006693ec;
              }
              QArrayData::deallocate(local_1920,2,8);
            }
LAB_1006693ec:
          } while (bVar18);
          _fclose(pFVar5);
        }
        uVar9 = 0;
        if (local_1c40 == 0) goto LAB_1006695ee;
        _snprintf(local_448,0x401,"%s/VERSION",param_1);
        pFVar5 = _fopen(local_448,"r");
        if (pFVar5 == (FILE *)0x0) {
          _snprintf(local_448,0x401,"%s/i586/VERSION",param_1);
          pFVar5 = _fopen(local_448,"r");
          if (pFVar5 == (FILE *)0x0) {
            _snprintf(local_448,0x401,"%s/x86_64/VERSION",param_1);
            pFVar5 = _fopen(local_448,"r");
            if (pFVar5 == (FILE *)0x0) {
              _snprintf(local_1468,0x401,"%s/.disk/info",param_1);
              pFVar5 = _fopen(local_1468,"r");
              if (pFVar5 != (FILE *)0x0) {
                do {
                  pcVar6 = _fgets(local_1868,0x3ff,pFVar5);
                  if (pcVar6 == (char *)0x0) goto LAB_1006695e3;
                  iVar17 = _strncmp(local_1868,"Debian GNU/Linux ",0x11);
                  if (iVar17 == 0) {
                    *param_2 = 0x906;
                    goto LAB_10066a438;
                  }
                  iVar17 = _strncmp(local_1868,"Ubuntu",6);
                  if (iVar17 == 0) {
                    *param_2 = 0x90a;
                    goto LAB_10066a438;
                  }
                  iVar17 = _strncmp(local_1868,"Xandros ",8);
                  if (iVar17 == 0) {
                    param_2[0] = 0x909;
                    param_2[1] = 1;
                    goto LAB_10066a438;
                  }
                  iVar17 = _strncmp(local_1868,"Linux Mint",10);
                } while (iVar17 != 0);
                *param_2 = 0x912;
LAB_10066a438:
                pcVar6 = _strstr(local_1868,"i386");
                if (pcVar6 == (char *)0x0) {
                  pcVar6 = _strstr(local_1868,"amd64");
                  if (pcVar6 != (char *)0x0) {
                    param_2[1] = 2;
                  }
                }
                else {
                  param_2[1] = 1;
                }
                goto LAB_1006695e3;
              }
              _snprintf(local_448,0x401,"%s/README.diskdefines",param_1);
              pFVar5 = _fopen(local_448,"r");
              local_1c38 = -1;
              if (pFVar5 != (FILE *)0x0) {
                ___bzero(local_1058,0x400);
                local_1c38 = -1;
                do {
                  pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
                  if (pcVar6 == (char *)0x0) break;
                  _strlen(local_1058);
                  QString::fromUtf8_helper((char *)&local_18f0,(int)local_1058);
                  QString::normalized(&local_18e8,&local_18f0,1,0);
                  QString::trimmed();
                  if (*(int *)local_18e8 != -1) {
                    if (*(int *)local_18e8 != 0) {
                      LOCK();
                      *(int *)local_18e8 = *(int *)local_18e8 + -1;
                      local_1869 = *(int *)local_18e8 != 0;
                      UNLOCK();
                      if ((bool)local_1869) goto LAB_100669cba;
                    }
                    QArrayData::deallocate(local_18e8,2,8);
                  }
LAB_100669cba:
                  if (*(int *)local_18f0 != -1) {
                    if (*(int *)local_18f0 != 0) {
                      LOCK();
                      *(int *)local_18f0 = *(int *)local_18f0 + -1;
                      local_1869 = *(int *)local_18f0 != 0;
                      UNLOCK();
                      if ((bool)local_1869) goto LAB_100669cf6;
                    }
                    QArrayData::deallocate(local_18f0,2,8);
                  }
LAB_100669cf6:
                  ___bzero(local_1058,0x400);
                  local_18f8 = (QArrayData *)QString::fromAscii_helper("DISKNAME",8);
                  iVar17 = QString::indexOf(&local_18e0,&local_18f8,0);
                  if (iVar17 == -1) {
                    bVar18 = false;
                  }
                  else {
                    local_1900 = (QArrayData *)QString::fromAscii_helper("Ubuntu",6);
                    iVar17 = QString::indexOf(&local_18e0,&local_1900,0);
                    bVar18 = iVar17 != -1;
                    if (*(int *)local_1900 != -1) {
                      if (*(int *)local_1900 != 0) {
                        LOCK();
                        *(int *)local_1900 = *(int *)local_1900 + -1;
                        local_1869 = *(int *)local_1900 != 0;
                        UNLOCK();
                        if ((bool)local_1869) goto LAB_100669db5;
                      }
                      QArrayData::deallocate(local_1900,2,8);
                    }
                  }
LAB_100669db5:
                  if (*(int *)local_18f8 != -1) {
                    if (*(int *)local_18f8 != 0) {
                      LOCK();
                      *(int *)local_18f8 = *(int *)local_18f8 + -1;
                      local_1869 = *(int *)local_18f8 != 0;
                      UNLOCK();
                      if ((bool)local_1869) goto LAB_100669df1;
                    }
                    QArrayData::deallocate(local_18f8,2,8);
                  }
LAB_100669df1:
                  if (bVar18) {
                    *param_2 = 0x90a;
                    param_2[2] = 1;
                  }
                  else {
                    local_1908 = (QArrayData *)QString::fromAscii_helper("ARCH",4);
                    iVar17 = QString::indexOf(&local_18e0,&local_1908,0);
                    if (*(int *)local_1908 != -1) {
                      if (*(int *)local_1908 != 0) {
                        LOCK();
                        *(int *)local_1908 = *(int *)local_1908 + -1;
                        local_1869 = *(int *)local_1908 != 0;
                        UNLOCK();
                        if ((bool)local_1869) goto LAB_100669e76;
                      }
                      QArrayData::deallocate(local_1908,2,8);
                    }
LAB_100669e76:
                    if (iVar17 != -1) {
                      local_1910 = (QArrayData *)QString::fromAscii_helper("i386",4);
                      iVar17 = QString::indexOf(&local_18e0,&local_1910,0);
                      if (*(int *)local_1910 != -1) {
                        if (*(int *)local_1910 != 0) {
                          LOCK();
                          *(int *)local_1910 = *(int *)local_1910 + -1;
                          local_1869 = *(int *)local_1910 != 0;
                          UNLOCK();
                          if ((bool)local_1869) goto LAB_100669ef1;
                        }
                        QArrayData::deallocate(local_1910,2,8);
                      }
LAB_100669ef1:
                      if (iVar17 != -1) {
                        param_2[1] = 1;
                      }
                      local_1918 = (QArrayData *)QString::fromAscii_helper("x86_64",6);
                      iVar17 = QString::indexOf(&local_18e0,&local_1918,0);
                      if (*(int *)local_1918 != -1) {
                        if (*(int *)local_1918 != 0) {
                          LOCK();
                          *(int *)local_1918 = *(int *)local_1918 + -1;
                          local_1869 = *(int *)local_1918 != 0;
                          UNLOCK();
                          if ((bool)local_1869) goto LAB_100669f6f;
                        }
                        QArrayData::deallocate(local_1918,2,8);
                      }
LAB_100669f6f:
                      if (iVar17 != -1) {
                        param_2[1] = 2;
                      }
                    }
                  }
                  bVar18 = true;
                  if ((*param_2 != 0xff) && (bVar18 = param_2[1] == 0, !bVar18)) {
                    local_1c38 = 0;
                  }
                  if (*(int *)local_18e0 != -1) {
                    if (*(int *)local_18e0 != 0) {
                      LOCK();
                      *(int *)local_18e0 = *(int *)local_18e0 + -1;
                      local_1869 = *(int *)local_18e0 != 0;
                      UNLOCK();
                      if ((bool)local_1869) goto LAB_100669fdb;
                    }
                    QArrayData::deallocate(local_18e0,2,8);
                  }
LAB_100669fdb:
                } while (bVar18);
                _fclose(pFVar5);
              }
              uVar9 = 0;
              if (local_1c38 == 0) goto LAB_1006695ee;
              *param_2 = 0xff;
              _snprintf(local_448,0x401,"%s/.volume.inf",param_1);
              pFVar5 = _fopen(local_448,"r");
              if (pFVar5 != (FILE *)0x0) {
                pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
                if ((pcVar6 != (char *)0x0) && (iVar17 = _strncmp(local_1058,"VI\"",3), iVar17 == 0)
                   ) {
                  pcVar6 = _strstr(local_1058,"SOL_9_");
                  if (pcVar6 == (char *)0x0) {
                    pcVar6 = _strstr(local_1058,"SOL_10_");
                    if (pcVar6 == (char *)0x0) {
                      pcVar6 = _strstr(local_1058,"SOL_11_");
                      if (pcVar6 == (char *)0x0) {
                        pcVar6 = _strstr(local_1058,"SOL_");
                        if (pcVar6 == (char *)0x0) goto LAB_10066aa30;
                        *param_2 = 0xeff;
                      }
                      else {
                        *param_2 = 0xe03;
                      }
                    }
                    else {
                      *param_2 = 0xe02;
                    }
                  }
                  else {
                    *param_2 = 0xe01;
                  }
                  pcVar6 = _strstr(local_1058,"_X86\"");
                  if ((pcVar6 != (char *)0x0) ||
                     (pcVar6 = _strstr(local_1058,"_X86_"), pcVar6 != (char *)0x0)) {
                    param_2[1] = 1;
                  }
                }
LAB_10066aa30:
                _fclose(pFVar5);
                if (*param_2 != 0xff) goto LAB_1006695eb;
              }
              _snprintf(local_448,0x401,"%s/.image_info",param_1);
              pFVar5 = _fopen(local_448,"r");
              if (pFVar5 != (FILE *)0x0) {
                pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
                if (pcVar6 != (char *)0x0) {
                  do {
                    sVar4 = _strlen(local_1058);
                    local_18a8 = (QArrayData *)QString::fromAscii_helper(local_1058,(int)sVar4);
                    local_18b8 = (QArrayData *)QString::fromAscii_helper("=",1);
                    QString::split(&local_18b0,&local_18a8,&local_18b8,0,1);
                    if (*(int *)local_18b8 != -1) {
                      if (*(int *)local_18b8 != 0) {
                        LOCK();
                        *(int *)local_18b8 = *(int *)local_18b8 + -1;
                        local_1869 = *(int *)local_18b8 != 0;
                        UNLOCK();
                        if ((bool)local_1869) goto LAB_10066ab46;
                      }
                      QArrayData::deallocate(local_18b8,2,8);
                    }
LAB_10066ab46:
                    if (1 < (int)(local_18b0[3] - local_18b0[2])) {
                      if (1 < *local_18b0) {
                        FUN_100022c80(&local_18b0,local_18b0[1]);
                      }
                      QString::trimmed();
                      if (1 < *local_18b0) {
                        FUN_100022c80(&local_18b0,local_18b0[1]);
                      }
                      QString::trimmed();
                      iVar17 = QString::compare_helper
                                         (local_18c0 + *(long *)(local_18c0 + 0x10),
                                          *(undefined4 *)(local_18c0 + 4),"IMAGE_TYPE",0xffffffff,1)
                      ;
                      if ((iVar17 == 0) &&
                         (iVar17 = QString::compare_helper
                                             ((QArrayData *)
                                              (local_18c8.field0_0x0 +
                                              *(long *)(local_18c8.field0_0x0 + 0x10)),
                                              *(undefined4 *)(local_18c8.field0_0x0 + 4),"Text",
                                              0xffffffff,1), iVar17 == 0)) {
                        param_2[1] = 1;
                      }
                      iVar17 = QString::compare_helper
                                         (local_18c0 + *(long *)(local_18c0 + 0x10),
                                          *(undefined4 *)(local_18c0 + 4),"GRUB_TITLE",0xffffffff,1)
                      ;
                      if (iVar17 == 0) {
                        local_18d8 = (QArrayData *)QString::fromAscii_helper(".",1);
                        QString::split(&local_18d0,&local_18c8,&local_18d8,0,1);
                        if (*(int *)local_18d8 != -1) {
                          if (*(int *)local_18d8 != 0) {
                            LOCK();
                            *(int *)local_18d8 = *(int *)local_18d8 + -1;
                            local_1869 = *(int *)local_18d8 != 0;
                            UNLOCK();
                            if ((bool)local_1869) goto LAB_10066accb;
                          }
                          QArrayData::deallocate(local_18d8,2,8);
                        }
LAB_10066accb:
                        uVar13 = local_18d0[2];
                        if (local_18d0[3] != uVar13) {
                          if (1 < *local_18d0) {
                            FUN_100022c80(&local_18d0,local_18d0[1]);
                            uVar13 = local_18d0[2];
                          }
                          QString::operator=(&local_18c8,
                                             (QString *)(local_18d0 + (long)(int)uVar13 * 2 + 4));
                          iVar17 = QString::compare_helper
                                             ((QArrayData *)
                                              (local_18c8.field0_0x0 +
                                              *(long *)(local_18c8.field0_0x0 + 0x10)),
                                              *(undefined4 *)(local_18c8.field0_0x0 + 4),
                                              "Oracle Solaris 11",0xffffffff,1);
                          if (iVar17 == 0) {
                            *param_2 = 0xe03;
                          }
                        }
                        FUN_100013180(&local_18d0);
                      }
                      if (*(int *)local_18c8.field0_0x0 != -1) {
                        if (*(int *)local_18c8.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_18c8.field0_0x0 = *(int *)local_18c8.field0_0x0 + -1;
                          local_1869 = *(int *)local_18c8.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_1869) goto LAB_10066ad8d;
                        }
                        QArrayData::deallocate((QArrayData *)local_18c8.field0_0x0,2,8);
                      }
LAB_10066ad8d:
                      if (*(int *)local_18c0 != -1) {
                        if (*(int *)local_18c0 != 0) {
                          LOCK();
                          *(int *)local_18c0 = *(int *)local_18c0 + -1;
                          local_1869 = *(int *)local_18c0 != 0;
                          UNLOCK();
                          if ((bool)local_1869) goto LAB_10066adc9;
                        }
                        QArrayData::deallocate(local_18c0,2,8);
                      }
                    }
LAB_10066adc9:
                    FUN_100013180(&local_18b0);
                    if (*(int *)local_18a8 == 0) {
LAB_10066adfe:
                      QArrayData::deallocate(local_18a8,2,8);
                    }
                    else if (*(int *)local_18a8 != -1) {
                      LOCK();
                      *(int *)local_18a8 = *(int *)local_18a8 + -1;
                      local_1869 = *(int *)local_18a8 != 0;
                      UNLOCK();
                      if (!(bool)local_1869) goto LAB_10066adfe;
                    }
                    pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
                  } while (pcVar6 != (char *)0x0);
                }
                _fclose(pFVar5);
                if (*param_2 != 0xff) goto LAB_1006695eb;
              }
              _snprintf(local_c58,0x400,"%s/platform/i86pc/kernel/unix",param_1);
              iVar17 = _open(local_c58,0);
              if (iVar17 != -1) {
                local_1058[0x50] = '\0';
                local_1058[0x51] = '\0';
                local_1058[0x52] = '\0';
                local_1058[0x53] = '\0';
                local_1058[0x54] = '\0';
                local_1058[0x55] = '\0';
                local_1058[0x56] = '\0';
                local_1058[0x57] = '\0';
                local_1058[0x58] = '\0';
                local_1058[0x59] = '\0';
                local_1058[0x5a] = '\0';
                local_1058[0x5b] = '\0';
                local_1058[0x5c] = '\0';
                local_1058[0x5d] = '\0';
                local_1058[0x5e] = '\0';
                local_1058[0x5f] = '\0';
                local_1058[0x40] = '\0';
                local_1058[0x41] = '\0';
                local_1058[0x42] = '\0';
                local_1058[0x43] = '\0';
                local_1058[0x44] = '\0';
                local_1058[0x45] = '\0';
                local_1058[0x46] = '\0';
                local_1058[0x47] = '\0';
                local_1058[0x48] = '\0';
                local_1058[0x49] = '\0';
                local_1058[0x4a] = '\0';
                local_1058[0x4b] = '\0';
                local_1058[0x4c] = '\0';
                local_1058[0x4d] = '\0';
                local_1058[0x4e] = '\0';
                local_1058[0x4f] = '\0';
                local_1058[0x30] = '\0';
                local_1058[0x31] = '\0';
                local_1058[0x32] = '\0';
                local_1058[0x33] = '\0';
                local_1058[0x34] = '\0';
                local_1058[0x35] = '\0';
                local_1058[0x36] = '\0';
                local_1058[0x37] = '\0';
                local_1058[0x38] = '\0';
                local_1058[0x39] = '\0';
                local_1058[0x3a] = '\0';
                local_1058[0x3b] = '\0';
                local_1058[0x3c] = '\0';
                local_1058[0x3d] = '\0';
                local_1058[0x3e] = '\0';
                local_1058[0x3f] = '\0';
                local_1058[0x20] = '\0';
                local_1058[0x21] = '\0';
                local_1058[0x22] = '\0';
                local_1058[0x23] = '\0';
                local_1058[0x24] = '\0';
                local_1058[0x25] = '\0';
                local_1058[0x26] = '\0';
                local_1058[0x27] = '\0';
                local_1058[0x28] = '\0';
                local_1058[0x29] = '\0';
                local_1058[0x2a] = '\0';
                local_1058[0x2b] = '\0';
                local_1058[0x2c] = '\0';
                local_1058[0x2d] = '\0';
                local_1058[0x2e] = '\0';
                local_1058[0x2f] = '\0';
                local_1058[0x10] = '\0';
                local_1058[0x11] = '\0';
                local_1058[0x12] = '\0';
                local_1058[0x13] = '\0';
                local_1058[0x14] = '\0';
                local_1058[0x15] = '\0';
                local_1058[0x16] = '\0';
                local_1058[0x17] = '\0';
                local_1058[0x18] = '\0';
                local_1058[0x19] = '\0';
                local_1058[0x1a] = '\0';
                local_1058[0x1b] = '\0';
                local_1058[0x1c] = '\0';
                local_1058[0x1d] = '\0';
                local_1058[0x1e] = '\0';
                local_1058[0x1f] = '\0';
                local_1058[0] = '\0';
                local_1058[1] = '\0';
                local_1058[2] = '\0';
                local_1058[3] = '\0';
                local_1058[4] = '\0';
                local_1058[5] = '\0';
                local_1058[6] = '\0';
                local_1058[7] = '\0';
                local_1058[8] = '\0';
                local_1058[9] = '\0';
                local_1058[10] = '\0';
                local_1058[0xb] = '\0';
                local_1058[0xc] = '\0';
                local_1058[0xd] = '\0';
                local_1058[0xe] = '\0';
                local_1058[0xf] = '\0';
                local_1058[0x60] = '\0';
                local_1058[0x61] = '\0';
                local_1058[0x62] = '\0';
                local_1058[99] = '\0';
                while (sVar10 = _read(iVar17,local_1058 + 100,0x39c), 1 < sVar10 + 1U) {
                  pcVar6 = local_1058;
                  if (-1 < sVar10) {
                    do {
                      iVar3 = _strncmp(pcVar6,"@(#)SunOS ",10);
                      if (iVar3 == 0) {
                        param_2[2] = 1;
                        *(char **)param_2 = "itration";
                        iVar3 = _strncmp(pcVar6,"@(#)SunOS 5.9",0xd);
                        if ((iVar3 == 0) ||
                           (iVar3 = _strncmp(pcVar6,"@(#)SunOS Nexenta 5.9",0x15), iVar3 == 0)) {
                          *param_2 = 0xe01;
                        }
                        else {
                          iVar3 = _strncmp(pcVar6,"@(#)SunOS 5.10",0xe);
                          if ((iVar3 == 0) ||
                             (iVar3 = _strncmp(pcVar6,"@(#)SunOS Nexenta 5.10",0x16), iVar3 == 0)) {
                            *param_2 = 0xe02;
                          }
                          else {
                            iVar3 = _strncmp(pcVar6,"@(#)SunOS 5.11",0xe);
                            if ((iVar3 == 0) ||
                               (iVar3 = _strncmp(pcVar6,"@(#)SunOS Nexenta 5.11",0x16), iVar3 == 0))
                            {
                              *param_2 = 0xe03;
                            }
                          }
                        }
                        _close(iVar17);
                        goto LAB_1006695eb;
                      }
                      pcVar6 = pcVar6 + 1;
                    } while (pcVar6 <= local_1058 + sVar10);
                  }
                  _memmove(local_1058,local_1058 + sVar10,100);
                }
                _close(iVar17);
              }
              _snprintf(local_448,0x401,"%s/dists/stable/Release",param_1);
              pFVar5 = _fopen(local_448,"r");
              uVar9 = 0xffffffff;
              if (pFVar5 == (FILE *)0x0) goto LAB_1006695ee;
              ___bzero(local_1058,0x400);
              pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
              if (pcVar6 != (char *)0x0) {
                do {
                  _strlen(local_1058);
                  QString::fromUtf8_helper((char *)&local_1880,(int)local_1058);
                  QString::normalized(&local_1878,&local_1880,1,0);
                  if (*(int *)local_1880 != -1) {
                    if (*(int *)local_1880 != 0) {
                      LOCK();
                      *(int *)local_1880 = *(int *)local_1880 + -1;
                      local_1869 = *(int *)local_1880 != 0;
                      UNLOCK();
                      if ((bool)local_1869) goto LAB_10066b0fa;
                    }
                    QArrayData::deallocate(local_1880,2,8);
                  }
LAB_10066b0fa:
                  ___bzero(local_1058,0x400);
                  local_1890 = (QArrayData *)QString::fromAscii_helper(":",1);
                  QString::split(&local_1888,&local_1878,&local_1890,0,1);
                  if (*(int *)local_1890 != -1) {
                    if (*(int *)local_1890 != 0) {
                      LOCK();
                      *(int *)local_1890 = *(int *)local_1890 + -1;
                      local_1869 = *(int *)local_1890 != 0;
                      UNLOCK();
                      if ((bool)local_1869) goto LAB_10066b175;
                    }
                    QArrayData::deallocate(local_1890,2,8);
                  }
LAB_10066b175:
                  if (1 < (int)(local_1888[3] - local_1888[2])) {
                    if (1 < *local_1888) {
                      FUN_100022c80(&local_1888,local_1888[1]);
                    }
                    QString::trimmed();
                    if (1 < *local_1888) {
                      FUN_100022c80(&local_1888,local_1888[1]);
                    }
                    QString::trimmed();
                    iVar17 = QString::compare_helper
                                       (local_1898 + *(long *)(local_1898 + 0x10),
                                        *(undefined4 *)(local_1898 + 4),"Origin",0xffffffff,1);
                    if ((iVar17 == 0) &&
                       (iVar17 = QString::compare_helper
                                           (local_18a0 + *(long *)(local_18a0 + 0x10),
                                            *(undefined4 *)(local_18a0 + 4),"Debian",0xffffffff,1),
                       iVar17 == 0)) {
                      *param_2 = 0x906;
                    }
                    iVar17 = QString::compare_helper
                                       (local_1898 + *(long *)(local_1898 + 0x10),
                                        *(undefined4 *)(local_1898 + 4),"Architectures",0xffffffff,1
                                       );
                    if (iVar17 == 0) {
                      iVar17 = QString::compare_helper
                                         (local_18a0 + *(long *)(local_18a0 + 0x10),
                                          *(undefined4 *)(local_18a0 + 4),"i386",0xffffffff,1);
                      if (iVar17 == 0) {
                        param_2[1] = 1;
                      }
                      iVar17 = QString::compare_helper
                                         (local_18a0 + *(long *)(local_18a0 + 0x10),
                                          *(undefined4 *)(local_18a0 + 4),"amd64",0xffffffff,1);
                      if ((iVar17 == 0) ||
                         (iVar17 = QString::compare_helper
                                             (local_18a0 + *(long *)(local_18a0 + 0x10),
                                              *(undefined4 *)(local_18a0 + 4),"x86_64",0xffffffff,1)
                         , iVar17 == 0)) {
                        param_2[1] = 2;
                      }
                    }
                    if (*(int *)local_18a0 != -1) {
                      if (*(int *)local_18a0 != 0) {
                        LOCK();
                        *(int *)local_18a0 = *(int *)local_18a0 + -1;
                        local_1869 = *(int *)local_18a0 != 0;
                        UNLOCK();
                        if ((bool)local_1869) goto LAB_10066b35f;
                      }
                      QArrayData::deallocate(local_18a0,2,8);
                    }
LAB_10066b35f:
                    if (*(int *)local_1898 != -1) {
                      if (*(int *)local_1898 != 0) {
                        LOCK();
                        *(int *)local_1898 = *(int *)local_1898 + -1;
                        local_1869 = *(int *)local_1898 != 0;
                        UNLOCK();
                        if ((bool)local_1869) goto LAB_10066b39b;
                      }
                      QArrayData::deallocate(local_1898,2,8);
                    }
                  }
LAB_10066b39b:
                  FUN_100013180(&local_1888);
                  if (*(int *)local_1878 == 0) {
LAB_10066b3d0:
                    QArrayData::deallocate(local_1878,2,8);
                  }
                  else if (*(int *)local_1878 != -1) {
                    LOCK();
                    *(int *)local_1878 = *(int *)local_1878 + -1;
                    local_1869 = *(int *)local_1878 != 0;
                    UNLOCK();
                    if (!(bool)local_1869) goto LAB_10066b3d0;
                  }
                  pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
                } while (pcVar6 != (char *)0x0);
              }
              _fclose(pFVar5);
              goto LAB_1006695eb;
            }
            pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
            if (pcVar6 != (char *)0x0) {
              iVar17 = _strncmp(local_1058,"Mandrakelinux",0xd);
              if ((iVar17 == 0) || (iVar17 = _strncmp(local_1058,"Mandriva",8), iVar17 == 0)) {
                uVar9 = 0x200000903;
              }
              else {
                iVar17 = _strncmp(local_1058,"Mageia",6);
                if (iVar17 != 0) goto LAB_100669961;
                uVar9 = 0x200000911;
              }
              *(undefined8 *)param_2 = uVar9;
            }
          }
          else {
            pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
            if (pcVar6 != (char *)0x0) {
              iVar17 = _strncmp(local_1058,"Mandrakelinux",0xd);
              if ((iVar17 == 0) || (iVar17 = _strncmp(local_1058,"Mandriva",8), iVar17 == 0)) {
                param_2[0] = 0x903;
                param_2[1] = 1;
              }
              else {
                iVar17 = _strncmp(local_1058,"Mageia",6);
                if (iVar17 == 0) {
                  param_2[0] = 0x911;
                  param_2[1] = 1;
                }
              }
            }
          }
        }
        else {
          pcVar6 = _fgets(local_1058,0x3ff,pFVar5);
          if ((pcVar6 != (char *)0x0) &&
             ((iVar17 = _strncmp(local_1058,"Mandrakelinux",0xd), iVar17 == 0 ||
              (iVar17 = _strncmp(local_1058,"Mandriva",8), iVar17 == 0)))) {
            *param_2 = 0x903;
            pcVar6 = _strstr(local_1058,"i586");
            if (pcVar6 == (char *)0x0) {
              pcVar6 = _strstr(local_1058,"x86_64");
              if (pcVar6 != (char *)0x0) {
                param_2[1] = 2;
              }
            }
            else {
              param_2[1] = 1;
            }
          }
        }
LAB_100669961:
        _fclose(pFVar5);
        goto LAB_1006695eb;
      }
      pcVar6 = _fgets(local_1868,0x3ff,pFVar5);
      if (pcVar6 != (char *)0x0) {
        do {
          iVar17 = _strncmp(local_1868,"PRODUCT SUSE SLES",0x11);
          if (((((iVar17 == 0) ||
                (iVar17 = _strncmp(local_1868,"PRODUCT SUSE_SLES",0x11), iVar17 == 0)) ||
               (iVar17 = _strncmp(local_1868,"PRODUCT SUSE SLED",0x11), iVar17 == 0)) ||
              (iVar17 = _strncmp(local_1868,"PRODUCT SUSE_SLED",0x11), iVar17 == 0)) ||
             ((pcVar6 = _strstr(local_1868,"NAME"), pcVar6 != (char *)0x0 &&
              ((pcVar8 = _strstr(local_1868,"SUSE_SLES"), pcVar8 != (char *)0x0 ||
               (pcVar8 = _strstr(local_1868,"SUSE_SLED"), pcVar8 != (char *)0x0)))))) {
            *param_2 = 0x902;
LAB_100668cc1:
            if (param_2[1] != 0) break;
          }
          else {
            iVar17 = _strncmp(local_1868,"PRODUCT SUSE LINUX",0x12);
            if (((iVar17 == 0) ||
                (iVar17 = _strncmp(local_1868,"PRODUCT openSUSE",0x10), iVar17 == 0)) ||
               ((pcVar6 != (char *)0x0 &&
                (pcVar6 = _strstr(local_1868,"openSUSE"), pcVar6 != (char *)0x0)))) {
              *param_2 = 0x90f;
              goto LAB_100668cc1;
            }
            iVar17 = _strncmp(local_1868,"ARCH.i386",9);
            if ((iVar17 == 0) ||
               ((pcVar6 = _strstr(local_1868,"BASEARCHS"), pcVar6 != (char *)0x0 &&
                ((((pcVar8 = _strstr(local_1868,"i386"), pcVar8 != (char *)0x0 ||
                   (pcVar8 = _strstr(local_1868,"i486"), pcVar8 != (char *)0x0)) ||
                  (pcVar8 = _strstr(local_1868,"i586"), pcVar8 != (char *)0x0)) ||
                 (pcVar8 = _strstr(local_1868,"i686"), pcVar8 != (char *)0x0)))))) {
              param_2[1] = 1;
LAB_100668bbe:
              if (*param_2 != 0xff) break;
            }
            else {
              iVar17 = _strncmp(local_1868,"ARCH.x86_64",0xb);
              if ((iVar17 == 0) ||
                 ((pcVar6 != (char *)0x0 &&
                  (pcVar6 = _strstr(local_1868,"x86_64"), pcVar6 != (char *)0x0)))) {
                param_2[1] = 2;
                goto LAB_100668bbe;
              }
            }
          }
          pcVar6 = _fgets(local_1868,0x3ff,pFVar5);
        } while (pcVar6 != (char *)0x0);
      }
      goto LAB_1006695e3;
    }
    pcVar6 = _fgets(local_1868,0x3ff,pFVar5);
    if (pcVar6 != (char *)0x0) {
      do {
        iVar17 = _strncmp(local_1868,"Red Hat",7);
        if (iVar17 == 0) {
          *param_2 = 0x901;
LAB_100667b35:
          if (param_2[1] != 0) break;
        }
        else {
          iVar17 = _strncmp(local_1868,"RHEL-7.0",8);
          if (iVar17 == 0) {
            *param_2 = 0x913;
            goto LAB_100667b35;
          }
          iVar17 = _strncmp(local_1868,"Fedora",6);
          if (iVar17 == 0) {
            *param_2 = 0x907;
            goto LAB_100667b35;
          }
          iVar17 = _strncmp(local_1868,"CentOS",6);
          if (((iVar17 == 0) || (iVar17 = _strncmp(local_1868,"final",5), iVar17 == 0)) ||
             (iVar17 = _strncmp(local_1868,"Final",5), iVar17 == 0)) {
            *param_2 = 0x90d;
            goto LAB_100667b35;
          }
          iVar17 = _strncmp(local_1868,"Parallels Server Bare Metal",0x1b);
          if ((iVar17 == 0) ||
             (iVar17 = _strncmp(local_1868,"Parallels Cloud Server",0x16), iVar17 == 0)) {
            *param_2 = 0x910;
            goto LAB_100667b35;
          }
          iVar17 = _strncmp(local_1868,"i386",4);
          if (iVar17 == 0) {
            param_2[1] = 1;
LAB_100667b5d:
            if (*param_2 != 0xff) break;
          }
          else {
            iVar17 = _strncmp(local_1868,"x86_64",6);
            if (iVar17 == 0) {
              param_2[1] = 2;
              goto LAB_100667b5d;
            }
          }
        }
        pcVar6 = _fgets(local_1868,0x3ff,pFVar5);
      } while (pcVar6 != (char *)0x0);
    }
    _fclose(pFVar5);
    uVar9 = 0;
    if (*param_2 != 0xff) goto LAB_1006695ee;
    _snprintf(local_1468,0x401,"%s/.treeinfo",param_1);
    pFVar5 = _fopen(local_1468,"r");
    uVar9 = 0;
    if (pFVar5 == (FILE *)0x0) goto LAB_1006695ee;
    do {
      pcVar6 = _fgets(local_1868,0x3ff,pFVar5);
      if (pcVar6 == (char *)0x0) break;
      sVar4 = _strlen(local_1868);
      local_1bf8 = (QArrayData *)QString::fromAscii_helper(local_1868,(int)sVar4);
      local_1c08 = (QArrayData *)QString::fromAscii_helper("=",1);
      QString::split(&local_1c00,&local_1bf8,&local_1c08,0,1);
      if (*(int *)local_1c08 != -1) {
        if (*(int *)local_1c08 != 0) {
          LOCK();
          *(int *)local_1c08 = *(int *)local_1c08 + -1;
          local_1869 = *(int *)local_1c08 != 0;
          UNLOCK();
          if ((bool)local_1869) goto LAB_100667c7e;
        }
        QArrayData::deallocate(local_1c08,2,8);
      }
LAB_100667c7e:
      iVar17 = 4;
      if (1 < (int)(local_1c00[3] - local_1c00[2])) {
        if (1 < *local_1c00) {
          FUN_100022c80(&local_1c00,local_1c00[1]);
        }
        QString::trimmed();
        if (1 < *local_1c00) {
          FUN_100022c80(&local_1c00,local_1c00[1]);
        }
        QString::trimmed();
        iVar17 = QString::compare_helper
                           (local_1c10 + *(long *)(local_1c10 + 0x10),
                            *(undefined4 *)(local_1c10 + 4),"name",0xffffffff,1);
        if ((iVar17 == 0) &&
           ((iVar17 = QString::compare_helper
                                (local_1c18 + *(long *)(local_1c18 + 0x10),
                                 *(undefined4 *)(local_1c18 + 4),"CentOS-7",0xffffffff,1),
            iVar17 == 0 ||
            (iVar17 = QString::compare_helper
                                (local_1c18 + *(long *)(local_1c18 + 0x10),
                                 *(undefined4 *)(local_1c18 + 4),"CentOS Linux-7",0xffffffff,1),
            iVar17 == 0)))) {
          *param_2 = 0x914;
LAB_100667e4f:
          iVar17 = 5;
        }
        else {
          iVar3 = QString::compare_helper
                            (local_1c10 + *(long *)(local_1c10 + 0x10),
                             *(undefined4 *)(local_1c10 + 4),"family",0xffffffff,1);
          iVar17 = 0;
          if (iVar3 == 0) {
            local_1c20 = (QArrayData *)QString::fromAscii_helper("CentOS",6);
            cVar2 = QString::startsWith(&local_1c18,&local_1c20,1);
            if (*(int *)local_1c20 != -1) {
              if (*(int *)local_1c20 != 0) {
                LOCK();
                *(int *)local_1c20 = *(int *)local_1c20 + -1;
                local_1869 = *(int *)local_1c20 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_100667e2e;
              }
              QArrayData::deallocate(local_1c20,2,8);
            }
LAB_100667e2e:
            if (cVar2 != '\0') {
              *param_2 = 0x90d;
              goto LAB_100667e4f;
            }
          }
        }
        if (*(int *)local_1c18 != -1) {
          if (*(int *)local_1c18 != 0) {
            LOCK();
            *(int *)local_1c18 = *(int *)local_1c18 + -1;
            local_1869 = *(int *)local_1c18 != 0;
            UNLOCK();
            if ((bool)local_1869) goto LAB_100667e94;
          }
          QArrayData::deallocate(local_1c18,2,8);
        }
LAB_100667e94:
        if (*(int *)local_1c10 != -1) {
          if (*(int *)local_1c10 != 0) {
            LOCK();
            *(int *)local_1c10 = *(int *)local_1c10 + -1;
            local_1869 = *(int *)local_1c10 != 0;
            UNLOCK();
            if ((bool)local_1869) goto LAB_100667ee9;
          }
          QArrayData::deallocate(local_1c10,2,8);
        }
      }
LAB_100667ee9:
      FUN_100013180(&local_1c00);
      if (*(int *)local_1bf8 != -1) {
        if (*(int *)local_1bf8 != 0) {
          LOCK();
          *(int *)local_1bf8 = *(int *)local_1bf8 + -1;
          local_1869 = *(int *)local_1bf8 != 0;
          UNLOCK();
          if ((bool)local_1869) goto LAB_100667f2d;
        }
        QArrayData::deallocate(local_1bf8,2,8);
      }
LAB_100667f2d:
    } while (iVar17 != 5);
    _fclose(pFVar5);
  }
  else {
LAB_10066792d:
    param_2[1] = 1;
LAB_100667f60:
    pcVar8 = _fgets(local_448,0x400,pFVar5);
    pcVar6 = local_448;
    if (pcVar8 != (char *)0x0) {
      for (; (*pcVar6 == '\t' || (*pcVar6 == ' ')); pcVar6 = pcVar6 + 1) {
      }
      iVar17 = _strncmp(pcVar6,"<key>",5);
      if (iVar17 == 0) {
        pcVar8 = _strstr(pcVar6 + 5,"</key>");
        if (pcVar8 == (char *)0x0) goto LAB_1006695e3;
        *pcVar8 = '\0';
        _strncpy(local_1058,pcVar6 + 5,0x400);
        pcVar8 = _fgets(local_448,0x400,pFVar5);
        pcVar6 = local_448;
        if (pcVar8 == (char *)0x0) goto LAB_1006695e3;
        for (; (*pcVar6 == '\t' || (*pcVar6 == ' ')); pcVar6 = pcVar6 + 1) {
        }
        iVar17 = _strncmp(pcVar6,"<string>",8);
        if (iVar17 != 0) goto LAB_1006695e3;
        pcVar8 = _strstr(pcVar6 + 8,"</string>");
        if (pcVar8 == (char *)0x0) goto LAB_1006695e3;
        *pcVar8 = '\0';
        _strncpy(local_c58,pcVar6 + 8,0x400);
        iVar17 = _strcmp(local_1058,"ProductVersion");
        uVar19 = (undefined4)((ulong)in_stack_ffffffffffffe398 >> 0x20);
        if (iVar17 == 0) {
          sVar4 = _strlen(local_c58);
          local_1a30 = (QArrayData *)QString::fromAscii_helper(local_c58,(int)sVar4);
          local_1a08 = (QArrayData *)
                       QString::fromAscii_helper("(\\d{1,2})\\.(\\d{1,2})(\\.(\\d{1})){0,1}",0x24);
          QRegExp::QRegExp((QRegExp *)&local_1a00,&local_1a08,1);
          if (*(int *)local_1a08 != -1) {
            if (*(int *)local_1a08 != 0) {
              LOCK();
              *(int *)local_1a08 = *(int *)local_1a08 + -1;
              local_1869 = *(int *)local_1a08 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_100668d66;
            }
            QArrayData::deallocate(local_1a08,2,8);
          }
LAB_100668d66:
          cVar2 = QRegExp::exactMatch(&local_1a00);
          if (cVar2 == '\0') {
            bVar18 = false;
          }
          else {
            QRegExp::cap((int)&local_1a10);
            iVar17 = QString::toUInt((bool *)&local_1a10,0);
            param_2[0x16] = iVar17;
            if (*(int *)local_1a10 != -1) {
              if (*(int *)local_1a10 != 0) {
                LOCK();
                *(int *)local_1a10 = *(int *)local_1a10 + -1;
                local_1869 = *(int *)local_1a10 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_100668dec;
              }
              QArrayData::deallocate(local_1a10,2,8);
            }
LAB_100668dec:
            QRegExp::cap((int)&local_1a18);
            iVar17 = QString::toUInt((bool *)&local_1a18,0);
            param_2[0x17] = iVar17;
            if (*(int *)local_1a18 != -1) {
              if (*(int *)local_1a18 != 0) {
                LOCK();
                *(int *)local_1a18 = *(int *)local_1a18 + -1;
                local_1869 = *(int *)local_1a18 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_100668e57;
              }
              QArrayData::deallocate(local_1a18,2,8);
            }
LAB_100668e57:
            QRegExp::cap((int)&local_1a20);
            iVar17 = QString::toUInt((bool *)&local_1a20,0);
            param_2[0x18] = iVar17;
            if (*(int *)local_1a20 != -1) {
              if (*(int *)local_1a20 != 0) {
                LOCK();
                *(int *)local_1a20 = *(int *)local_1a20 + -1;
                local_1869 = *(int *)local_1a20 != 0;
                UNLOCK();
                if ((bool)local_1869) goto LAB_100668ec2;
              }
              QArrayData::deallocate(local_1a20,2,8);
            }
LAB_100668ec2:
            bVar18 = true;
            if (2 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("DetectOS","DetectOS",3,"Parse OS X version: \'%s\' => %u.%u.%u",
                            local_1a28 + *(long *)(local_1a28 + 0x10),param_2[0x16],
                            CONCAT44(uVar19,param_2[0x17]),param_2[0x18]);
              if (*(int *)local_1a28 != -1) {
                if (*(int *)local_1a28 != 0) {
                  LOCK();
                  *(int *)local_1a28 = *(int *)local_1a28 + -1;
                  local_1869 = *(int *)local_1a28 != 0;
                  UNLOCK();
                  if ((bool)local_1869) goto LAB_100668f76;
                }
                QArrayData::deallocate(local_1a28,1,8);
              }
            }
          }
LAB_100668f76:
          QRegExp::~QRegExp((QRegExp *)&local_1a00);
          if (*(int *)local_1a30 != -1) {
            if (*(int *)local_1a30 != 0) {
              LOCK();
              *(int *)local_1a30 = *(int *)local_1a30 + -1;
              local_1869 = *(int *)local_1a30 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_100668fbe;
            }
            QArrayData::deallocate(local_1a30,2,8);
          }
LAB_100668fbe:
          if (bVar18) {
            uVar13 = param_2[0x17];
            if (uVar13 == 5) {
              *param_2 = 0x702;
            }
            else if (uVar13 == 4) {
              *param_2 = 0x701;
            }
            else {
              *param_2 = 0x703;
            }
            bVar12 = 0;
            iVar17 = 0;
            if (param_2[0x16] != 0) {
              bVar11 = 0;
              iVar17 = 0;
              uVar14 = param_2[0x16];
              do {
                iVar17 = iVar17 + (uVar14 % 10 << (bVar11 & 0x1f));
                bVar11 = bVar11 + 4;
                bVar18 = 9 < uVar14;
                uVar14 = uVar14 / 10;
              } while (bVar18);
            }
            param_2[0x10] = iVar17;
            if (uVar13 == 0) {
              uVar14 = 0;
LAB_100669578:
              iVar3 = 1;
            }
            else {
              uVar14 = 0;
              iVar3 = 0;
              do {
                uVar14 = (uVar13 % 10 << (bVar12 & 0x1f)) + uVar14;
                iVar3 = iVar3 + 1;
                bVar12 = bVar12 + 4;
                bVar18 = 9 < uVar13;
                uVar13 = uVar13 / 10;
              } while (bVar18);
              if (iVar3 == 0) goto LAB_100669578;
            }
            uVar14 = iVar17 << ((byte)(iVar3 << 2) & 0x1f) | uVar14;
            param_2[0x10] = uVar14;
            bVar12 = 0;
            if (param_2[0x18] == 0) {
              uVar13 = 0;
LAB_1006695cf:
              iVar17 = 1;
            }
            else {
              uVar13 = 0;
              iVar17 = 0;
              uVar16 = param_2[0x18];
              do {
                uVar13 = (uVar16 % 10 << (bVar12 & 0x1f)) + uVar13;
                iVar17 = iVar17 + 1;
                bVar12 = bVar12 + 4;
                bVar18 = 9 < uVar16;
                uVar16 = uVar16 / 10;
              } while (bVar18);
              if (iVar17 == 0) goto LAB_1006695cf;
            }
            param_2[0x10] = uVar14 << ((byte)(iVar17 << 2) & 0x1f) | uVar13;
          }
          goto LAB_1006695e3;
        }
        iVar17 = _strcmp(local_1058,"ProductBuildVersion");
        if (iVar17 == 0) {
          _strlen(local_c58);
          QString::fromUtf8_helper((char *)&local_19f8,(int)local_c58);
          QString::operator=((QString *)(param_2 + 0xe),&local_19f8);
          if (*(int *)local_19f8.field0_0x0 != -1) {
            if (*(int *)local_19f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_19f8.field0_0x0 = *(int *)local_19f8.field0_0x0 + -1;
              local_1869 = *(int *)local_19f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1869) goto LAB_100667f60;
            }
            QArrayData::deallocate((QArrayData *)local_19f8.field0_0x0,2,8);
          }
        }
      }
      goto LAB_100667f60;
    }
LAB_1006695e3:
    _fclose(pFVar5);
  }
LAB_1006695eb:
  uVar9 = 0;
LAB_1006695ee:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

