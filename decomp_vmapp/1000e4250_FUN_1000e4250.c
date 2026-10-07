
void FUN_1000e4250(void)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  Node *pNVar13;
  Node *pNVar14;
  char *pcVar15;
  QArrayData *pQVar16;
  size_t sVar17;
  long *plVar18;
  ushort *puVar19;
  Node *pNVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  bool bVar28;
  QArrayData *local_e248;
  QArrayData *local_e240;
  QArrayData *local_e238;
  QArrayData *local_e230;
  QArrayData *local_e228;
  QArrayData *local_e220;
  QArrayData *local_e218;
  QArrayData *local_e210;
  QArrayData *local_e208;
  QArrayData *local_e200;
  QString local_e1f8;
  QArrayData *local_e1f0;
  QArrayData *local_e1e8;
  char local_e1d9;
  QArrayData *local_e1d8;
  QString local_e1d0;
  QArrayData *local_e1c8;
  QString local_e1c0;
  QArrayData *local_e1b8;
  QString local_e1b0;
  QArrayData *local_e1a8;
  QString local_e1a0;
  QArrayData *local_e198;
  QArrayData *local_e190;
  QString local_e188;
  QFileInfo local_e180 [8];
  QDir local_e178 [8];
  QString local_e170;
  QArrayData *local_e168;
  QArrayData *local_e160;
  QArrayData *local_e158;
  QArrayData *local_e150;
  QArrayData *local_e148;
  undefined4 local_e13c;
  QArrayData *local_e138;
  QArrayData *local_e130;
  uint local_e124;
  long local_e120;
  QArrayData *local_e118;
  QArrayData *local_e110;
  undefined4 local_e104;
  QArrayData *local_e100;
  QArrayData *local_e0f8;
  undefined4 local_e0ec;
  QArrayData *local_e0e8;
  QArrayData *local_e0e0;
  int local_e0d4;
  QArrayData *local_e0d0;
  QArrayData *local_e0c8;
  QArrayData *local_e0c0;
  QArrayData *local_e0b8;
  QArrayData *local_e0b0;
  QArrayData *local_e0a8;
  QArrayData *local_e0a0;
  QArrayData *local_e098;
  QArrayData *local_e090;
  QArrayData *local_e088;
  QArrayData *local_e080;
  QArrayData *local_e078;
  QArrayData *local_e070;
  QArrayData *local_e068;
  QArrayData *local_e060;
  undefined1 local_e058 [8];
  undefined1 local_e050 [7];
  undefined1 local_e049;
  undefined1 local_e048 [12];
  undefined4 uStack_e03c;
  int local_e038 [14336];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  DAT_1011b6d28 = 0;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_e180,&local_e170);
  QFileInfo::dir();
  QFileInfo::~QFileInfo(local_e180);
  local_e190 = (QArrayData *)QString::fromAscii_helper("NVRAM.dat",9);
  QDir::filePath(&local_e188);
  if (*(int *)local_e190 != -1) {
    if (*(int *)local_e190 != 0) {
      LOCK();
      *(int *)local_e190 = *(int *)local_e190 + -1;
      local_e049 = *(int *)local_e190 != 0;
      UNLOCK();
      if ((bool)local_e049) goto LAB_1000e4343;
    }
    QArrayData::deallocate(local_e190,2,8);
  }
LAB_1000e4343:
  cVar4 = QIODevice::isOpen();
  if (cVar4 != '\0') {
    (**(code **)(DAT_1011b6d10 + 0x70))(&DAT_1011b6d10);
  }
  QFile::setFileName((QString *)&DAT_1011b6d10);
  cVar4 = QFile::exists(&local_e188);
  cVar5 = QFile::open(&DAT_1011b6d10,3);
  if (cVar5 == '\0') {
    QString::toUtf8();
    pcVar15 = "create";
    if (cVar4 != '\0') {
      pcVar15 = "open";
    }
    FUN_1008e3970("","vm",0,"Couldn\'t %s NVRAM file: %s",pcVar15,
                  local_e198 + *(long *)(local_e198 + 0x10));
    if (*(int *)local_e198 != -1) {
      if (*(int *)local_e198 != 0) {
        LOCK();
        *(int *)local_e198 = *(int *)local_e198 + -1;
        local_e049 = *(int *)local_e198 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e63c6;
      }
      QArrayData::deallocate(local_e198,1,8);
    }
  }
  else {
    if (cVar4 == '\0') {
LAB_1000e4778:
      FUN_1008e3970("","vm",0,"Creating empty NVRAM");
      QFile::resize(0x1011b6d10);
      FUN_1000e36d0(&DAT_1011b6d10);
    }
    else {
      cVar4 = (**(code **)(DAT_1011b6d10 + 0x88))(&DAT_1011b6d10,0x2000);
      if (cVar4 == '\0') {
        FUN_1008e3970("","vm",0,"Error seeking file for reading EFI values");
        goto LAB_1000e4778;
      }
      lVar11 = (**(code **)(DAT_1011b6d10 + 0x80))(&DAT_1011b6d10);
      lVar11 = lVar11 + -0x2000;
      if (0xe000 < lVar11) {
        uVar8 = (**(code **)(DAT_1011b6d10 + 0x80))(&DAT_1011b6d10);
        lVar11 = 0xe000;
        FUN_1008e3970("","vm",0,"NVRAM.dat has unexpected size %d. Expected size %d",uVar8,0x10000);
      }
      lVar12 = QIODevice::read((char *)&DAT_1011b6d10,(longlong)local_e038);
      if (lVar12 != lVar11) {
        FUN_1008e3970("","vm",0,"Error reading EFI variables section");
        goto LAB_1000e4778;
      }
      uVar26 = 4;
      if ((local_e038[0] != 2) && (uVar26 = 0, 1 < DAT_1011b55f8)) {
        uVar26 = 0;
        FUN_1008e3970("","vm",2,"NVRAM file version is %u",
                      *(undefined4 *)(lVar11 + -4 + (long)local_e038));
      }
      uVar7 = *(ushort *)((long)local_e038 + uVar26);
      if (uVar7 != 0) {
        puVar19 = (ushort *)((long)local_e038 + uVar26);
        do {
          if (uVar26 == lVar11 - 4U) break;
          bVar1 = (byte)puVar19[10];
          if ((lVar11 - 4U < (ulong)((int)uVar26 + (uint)uVar7)) ||
             ((uint)uVar7 != puVar19[1] + 0x16 + (uint)bVar1 * 2)) {
            FUN_1008e3970("","vm",0,
                          "Unable to parse the nvram.dat: entry size is invalid: offset %u, record_size %u, key_size %u, data_size %u"
                          ,uVar26,uVar7,bVar1,puVar19[1]);
            break;
          }
          if (((*(byte *)(*(long *)(DAT_1011c3698 + 0x109c8) + 499) & 10) != 0) ||
             ((*(byte *)((long)puVar19 + 0x15) & 1) != 0)) {
            QString::fromUtf16((ushort *)&local_e160,(int)puVar19 + 0x16);
            QString::normalized(&local_e158,&local_e160,1,0);
            FUN_1007d6cd0(local_e048,puVar19 + 2);
            uVar6 = *(undefined1 *)((long)puVar19 + 0x15);
            QByteArray::QByteArray
                      ((QByteArray *)&local_e168,(char *)(puVar19 + (ulong)bVar1 + 0xb),
                       (uint)puVar19[1]);
            FUN_1000e2b60(&local_e158,local_e048,uVar6,&local_e168);
            if (*(int *)local_e168 != -1) {
              if (*(int *)local_e168 != 0) {
                LOCK();
                *(int *)local_e168 = *(int *)local_e168 + -1;
                local_e049 = *(int *)local_e168 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e45ec;
              }
              QArrayData::deallocate(local_e168,1,8);
            }
LAB_1000e45ec:
            if (*(int *)local_e158 != -1) {
              if (*(int *)local_e158 != 0) {
                LOCK();
                *(int *)local_e158 = *(int *)local_e158 + -1;
                local_e049 = *(int *)local_e158 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e462b;
              }
              QArrayData::deallocate(local_e158,2,8);
            }
LAB_1000e462b:
            if (*(int *)local_e160 != -1) {
              if (*(int *)local_e160 != 0) {
                LOCK();
                *(int *)local_e160 = *(int *)local_e160 + -1;
                local_e049 = *(int *)local_e160 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e466e;
              }
              QArrayData::deallocate(local_e160,2,8);
            }
          }
LAB_1000e466e:
          uVar2 = *puVar19;
          uVar26 = (ulong)((int)uVar26 + (uint)uVar2);
          uVar7 = *(ushort *)((long)puVar19 + (ulong)uVar2);
          puVar19 = (ushort *)((long)puVar19 + (ulong)uVar2);
        } while (uVar7 != 0);
      }
    }
    if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) == 0x700) {
      local_e060 = (QArrayData *)QString::fromAscii_helper("ROM",3);
      FUN_100022e50(&DAT_1011b6d20,&local_e060,local_e058);
      if (*(int *)local_e060 != -1) {
        if (*(int *)local_e060 != 0) {
          LOCK();
          *(int *)local_e060 = *(int *)local_e060 + -1;
          local_e049 = *(int *)local_e060 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e4842;
        }
        QArrayData::deallocate(local_e060,2,8);
      }
LAB_1000e4842:
      local_e068 = (QArrayData *)QString::fromAscii_helper("MLB",3);
      FUN_100022e50(&DAT_1011b6d20,&local_e068,local_e050);
      if (*(int *)local_e068 != -1) {
        if (*(int *)local_e068 != 0) {
          LOCK();
          *(int *)local_e068 = *(int *)local_e068 + -1;
          local_e049 = *(int *)local_e068 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e48b0;
        }
        QArrayData::deallocate(local_e068,2,8);
      }
LAB_1000e48b0:
      iVar9 = _IORegistryEntryFromPath
                        (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,"IODeviceTree:/options")
      ;
      pNVar20 = DAT_1011b6d20;
      if (iVar9 == 0) {
        FUN_1008e3970("","vm",0,"Failed to create ioreg entry");
      }
      else {
        if (1 < *(int *)(DAT_1011b6d20 + 0x10) + 1U) {
          LOCK();
          pNVar13 = DAT_1011b6d20 + 0x10;
          *(int *)pNVar13 = *(int *)pNVar13 + 1;
          local_e049 = *(int *)pNVar13 != 0;
          UNLOCK();
        }
        pNVar13 = pNVar20;
        if ((((byte)pNVar20[0x28] & 1) == 0) && (1 < *(uint *)(pNVar20 + 0x10))) {
          pNVar13 = (Node *)QHashData::detach_helper
                                      ((_func_void_Node_ptr_void_ptr *)pNVar20,FUN_100022e20,0x22550
                                       ,0x18);
          if (*(int *)(pNVar20 + 0x10) != -1) {
            if (*(int *)(pNVar20 + 0x10) != 0) {
              LOCK();
              pNVar14 = pNVar20 + 0x10;
              *(int *)pNVar14 = *(int *)pNVar14 + -1;
              local_e049 = *(int *)pNVar14 != 0;
              UNLOCK();
              if ((bool)local_e049) goto LAB_1000e4964;
            }
            QHashData::free_helper((_func_void_Node_ptr *)pNVar20);
          }
        }
LAB_1000e4964:
        iVar10 = *(int *)(pNVar13 + 0x20);
        pNVar20 = pNVar13;
        if (iVar10 != 0) {
          plVar18 = *(long **)(pNVar13 + 8);
          do {
            pNVar20 = (Node *)*plVar18;
            if ((Node *)*plVar18 != pNVar13) break;
            iVar10 = iVar10 + -1;
            plVar18 = plVar18 + 1;
            pNVar20 = pNVar13;
          } while (iVar10 != 0);
        }
        if (pNVar20 != pNVar13) {
          uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
          do {
            pNVar14 = (Node *)QHashData::nextNode(pNVar20);
            local_e070 = *(QArrayData **)(pNVar20 + 0x10);
            if (1 < *(int *)local_e070 + 1U) {
              LOCK();
              *(int *)local_e070 = *(int *)local_e070 + 1;
              local_e049 = *(int *)local_e070 != 0;
              UNLOCK();
            }
            local_e088 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
            FUN_1007d6b20(&local_e098,&DAT_1011b6cc0);
            QString::toUpper();
            QString::arg(&local_e080,&local_e088,&local_e090,0,0x20);
            QString::arg(&local_e078,&local_e080,&local_e070,0,0x20);
            if (*(int *)local_e080 != -1) {
              if (*(int *)local_e080 != 0) {
                LOCK();
                *(int *)local_e080 = *(int *)local_e080 + -1;
                local_e049 = *(int *)local_e080 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4aa7;
              }
              QArrayData::deallocate(local_e080,2,8);
            }
LAB_1000e4aa7:
            if (*(int *)local_e090 != -1) {
              if (*(int *)local_e090 != 0) {
                LOCK();
                *(int *)local_e090 = *(int *)local_e090 + -1;
                local_e049 = *(int *)local_e090 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4ae3;
              }
              QArrayData::deallocate(local_e090,2,8);
            }
LAB_1000e4ae3:
            if (*(int *)local_e098 != -1) {
              if (*(int *)local_e098 != 0) {
                LOCK();
                *(int *)local_e098 = *(int *)local_e098 + -1;
                local_e049 = *(int *)local_e098 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4b1f;
              }
              QArrayData::deallocate(local_e098,2,8);
            }
LAB_1000e4b1f:
            if (*(int *)local_e088 != -1) {
              if (*(int *)local_e088 != 0) {
                LOCK();
                *(int *)local_e088 = *(int *)local_e088 + -1;
                local_e049 = *(int *)local_e088 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4b5b;
              }
              QArrayData::deallocate(local_e088,2,8);
            }
LAB_1000e4b5b:
            QString::toLatin1();
            if ((1 < *(uint *)local_e0a0) || (*(long *)(local_e0a0 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_e0a0,*(uint *)(local_e0a0 + 4) + 1,*(uint *)(local_e0a0 + 8) >> 0x1f
                        );
            }
            lVar11 = _CFStringCreateWithBytes
                               (uVar3,local_e0a0 + *(long *)(local_e0a0 + 0x10),
                                (long)*(int *)(local_e078 + 4),0x600,0);
            if (*(int *)local_e0a0 != -1) {
              if (*(int *)local_e0a0 != 0) {
                LOCK();
                *(int *)local_e0a0 = *(int *)local_e0a0 + -1;
                local_e049 = *(int *)local_e0a0 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4c06;
              }
              QArrayData::deallocate(local_e0a0,1,8);
            }
LAB_1000e4c06:
            if (lVar11 == 0) {
              FUN_1008e3970("","vm",0,"Error creating CFString from key");
            }
            else {
              lVar12 = _IORegistryEntryCreateCFProperty(iVar9,lVar11,uVar3,0);
              _CFRelease(lVar11);
              if (lVar12 == 0) {
                FUN_1008e3970("","vm",0,"Error getting key from ioreg");
              }
              else {
                pcVar15 = (char *)_CFDataGetBytePtr(lVar12);
                iVar10 = _CFDataGetLength(lVar12);
                QByteArray::QByteArray((QByteArray *)&local_e0a8,pcVar15,iVar10);
                FUN_1000e2b60(&local_e070,&DAT_1011b6cc0,7,&local_e0a8);
                if (*(int *)local_e0a8 != -1) {
                  if (*(int *)local_e0a8 != 0) {
                    LOCK();
                    *(int *)local_e0a8 = *(int *)local_e0a8 + -1;
                    local_e049 = *(int *)local_e0a8 != 0;
                    UNLOCK();
                    if ((bool)local_e049) goto LAB_1000e4cb9;
                  }
                  QArrayData::deallocate(local_e0a8,1,8);
                }
LAB_1000e4cb9:
                _CFRelease(lVar12);
              }
            }
            if (*(int *)local_e078 != -1) {
              if (*(int *)local_e078 != 0) {
                LOCK();
                *(int *)local_e078 = *(int *)local_e078 + -1;
                local_e049 = *(int *)local_e078 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4d4d;
              }
              QArrayData::deallocate(local_e078,2,8);
            }
LAB_1000e4d4d:
            if (*(int *)local_e070 != -1) {
              if (*(int *)local_e070 != 0) {
                LOCK();
                *(int *)local_e070 = *(int *)local_e070 + -1;
                local_e049 = *(int *)local_e070 != 0;
                UNLOCK();
                if ((bool)local_e049) goto LAB_1000e4d90;
              }
              QArrayData::deallocate(local_e070,2,8);
            }
LAB_1000e4d90:
            pNVar20 = pNVar14;
          } while (pNVar14 != pNVar13);
        }
        _IOObjectRelease(iVar9);
        if (*(int *)(pNVar13 + 0x10) != -1) {
          if (*(int *)(pNVar13 + 0x10) != 0) {
            LOCK();
            pNVar20 = pNVar13 + 0x10;
            *(int *)pNVar20 = *(int *)pNVar20 + -1;
            local_e049 = *(int *)pNVar20 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e4e02;
          }
          QHashData::free_helper((_func_void_Node_ptr *)pNVar13);
        }
      }
LAB_1000e4e02:
      cVar4 = FUN_1000e8080("platform-uuid");
      if (cVar4 == '\0') {
        pQVar16 = (QArrayData *)QString::fromAscii_helper("platform-uuid",0xd);
        local_e0b0 = pQVar16;
        CVmConfiguration::getVmIdentification();
        CVmIdentification::getVmUuid();
        QString::toLatin1();
        FUN_1000e2b60(&local_e0b0,&DAT_1011b6cd0,6,&local_e0b8);
        if (*(int *)local_e0b8 != -1) {
          if (*(int *)local_e0b8 != 0) {
            LOCK();
            *(int *)local_e0b8 = *(int *)local_e0b8 + -1;
            local_e049 = *(int *)local_e0b8 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e4ec7;
          }
          QArrayData::deallocate(local_e0b8,1,8);
        }
LAB_1000e4ec7:
        if (*(int *)local_e0c0 != -1) {
          if (*(int *)local_e0c0 != 0) {
            LOCK();
            *(int *)local_e0c0 = *(int *)local_e0c0 + -1;
            local_e049 = *(int *)local_e0c0 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e4f03;
          }
          QArrayData::deallocate(local_e0c0,2,8);
        }
LAB_1000e4f03:
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e4f36;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
      }
LAB_1000e4f36:
      pcVar15 = (char *)FUN_1007da5e0("devices.mac.boot_args","");
      if (*pcVar15 == '\0') {
        cVar4 = FUN_1000e8080("boot-args");
        if (cVar4 == '\0') {
          pcVar15 = "keepsyms=1 -serial=0x2";
          goto LAB_1000e4f6c;
        }
      }
      else {
LAB_1000e4f6c:
        pQVar16 = (QArrayData *)QString::fromAscii_helper("boot-args",9);
        local_e0c8 = pQVar16;
        sVar17 = _strlen(pcVar15);
        QByteArray::QByteArray((QByteArray *)&local_e0d0,pcVar15,(int)sVar17 + 1);
        FUN_1000e2b60(&local_e0c8,&DAT_1011b6cd0,6,&local_e0d0);
        if (*(int *)local_e0d0 != -1) {
          if (*(int *)local_e0d0 != 0) {
            LOCK();
            *(int *)local_e0d0 = *(int *)local_e0d0 + -1;
            local_e049 = *(int *)local_e0d0 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e4ffc;
          }
          QArrayData::deallocate(local_e0d0,1,8);
        }
LAB_1000e4ffc:
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e502f;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
      }
LAB_1000e502f:
      local_e0d4 = FUN_1007da300("devices.mac.csr-active-config",0xffffffff);
      if (local_e0d4 != -1) {
        pQVar16 = (QArrayData *)QString::fromAscii_helper("csr-active-config",0x11);
        local_e0e0 = pQVar16;
        QByteArray::QByteArray((QByteArray *)&local_e0e8,(char *)&local_e0d4,4);
        FUN_1000e2b60(&local_e0e0,&DAT_1011b6cd0,6,&local_e0e8);
        if (*(int *)local_e0e8 != -1) {
          if (*(int *)local_e0e8 != 0) {
            LOCK();
            *(int *)local_e0e8 = *(int *)local_e0e8 + -1;
            local_e049 = *(int *)local_e0e8 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e50dd;
          }
          QArrayData::deallocate(local_e0e8,1,8);
        }
LAB_1000e50dd:
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e510e;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
      }
LAB_1000e510e:
      local_e0ec = FUN_1007da300("vm.bios.macos.FirmwareFeatures",0x80000015);
      pQVar16 = (QArrayData *)QString::fromAscii_helper("FirmwareFeatures",0x10);
      local_e0f8 = pQVar16;
      QByteArray::QByteArray((QByteArray *)&local_e100,(char *)&local_e0ec,4);
      FUN_1000e2b60(&local_e0f8,&DAT_1011b6cc0,7,&local_e100);
      if (*(int *)local_e100 != -1) {
        if (*(int *)local_e100 != 0) {
          LOCK();
          *(int *)local_e100 = *(int *)local_e100 + -1;
          local_e049 = *(int *)local_e100 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e51b3;
        }
        QArrayData::deallocate(local_e100,1,8);
      }
LAB_1000e51b3:
      if (*(int *)pQVar16 != -1) {
        if (*(int *)pQVar16 != 0) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + -1;
          local_e049 = *(int *)pQVar16 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e51e4;
        }
        QArrayData::deallocate(pQVar16,2,8);
      }
LAB_1000e51e4:
      local_e104 = FUN_1007da300("vm.bios.macos.FirmwareFeaturesMask",0x800003ff);
      pQVar16 = (QArrayData *)QString::fromAscii_helper("FirmwareFeaturesMask",0x14);
      local_e110 = pQVar16;
      QByteArray::QByteArray((QByteArray *)&local_e118,(char *)&local_e104,4);
      FUN_1000e2b60(&local_e110,&DAT_1011b6cc0,7,&local_e118);
      if (*(int *)local_e118 != -1) {
        if (*(int *)local_e118 != 0) {
          LOCK();
          *(int *)local_e118 = *(int *)local_e118 + -1;
          local_e049 = *(int *)local_e118 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e5289;
        }
        QArrayData::deallocate(local_e118,1,8);
      }
LAB_1000e5289:
      if (*(int *)pQVar16 != -1) {
        if (*(int *)pQVar16 != 0) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + -1;
          local_e049 = *(int *)pQVar16 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e52ba;
        }
        QArrayData::deallocate(pQVar16,2,8);
      }
LAB_1000e52ba:
      local_e120 = DAT_1011c3698 + 0x110;
      iVar9 = FUN_1000b4970(&local_e120);
      local_e124 = -(uint)(iVar9 - 1U < 2) & 1;
      pQVar16 = (QArrayData *)QString::fromAscii_helper("VolumeLicense",0xd);
      local_e130 = pQVar16;
      QByteArray::QByteArray((QByteArray *)&local_e138,(char *)&local_e124,4);
      FUN_1000e2b60(&local_e130,&DAT_1011c3768,2,&local_e138);
      if (*(int *)local_e138 != -1) {
        if (*(int *)local_e138 != 0) {
          LOCK();
          *(int *)local_e138 = *(int *)local_e138 + -1;
          local_e049 = *(int *)local_e138 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e537a;
        }
        QArrayData::deallocate(local_e138,1,8);
      }
LAB_1000e537a:
      if (*(int *)pQVar16 != -1) {
        if (*(int *)pQVar16 != 0) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + -1;
          local_e049 = *(int *)pQVar16 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e53ab;
        }
        QArrayData::deallocate(pQVar16,2,8);
      }
LAB_1000e53ab:
      local_e13c = FUN_1007da300("vm.efi.mac_recovery",0);
      pQVar16 = (QArrayData *)QString::fromAscii_helper("ForceRecovery",0xd);
      local_e148 = pQVar16;
      QByteArray::QByteArray((QByteArray *)&local_e150,(char *)&local_e13c,4);
      FUN_1000e2b60(&local_e148,&DAT_1011c3768,2,&local_e150);
      if (*(int *)local_e150 != -1) {
        if (*(int *)local_e150 != 0) {
          LOCK();
          *(int *)local_e150 = *(int *)local_e150 + -1;
          local_e049 = *(int *)local_e150 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e544d;
        }
        QArrayData::deallocate(local_e150,1,8);
      }
LAB_1000e544d:
      if (*(int *)pQVar16 != -1) {
        if (*(int *)pQVar16 != 0) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + -1;
          local_e049 = *(int *)pQVar16 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e5488;
        }
        QArrayData::deallocate(pQVar16,2,8);
      }
    }
LAB_1000e5488:
    if (*(uint *)(DAT_1011c3698 + 0xb58) < 3) {
      bVar28 = (*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) == 0x700;
    }
    else {
      bVar28 = false;
    }
    FUN_1000e7f30("ignore_bootopt","vm.efi.ignore_bootopt",bVar28);
    FUN_1000e7f30("stub_console","vm.efi.stub_console",
                  (*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) == 0x700);
    FUN_1000e7f30("x2apic","vm.efi.mac.x2apic",0);
    FUN_1000e7f30("SmbiosVersion","vm.efi.smbios_ver",0x207);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmStartupOptions();
    CVmStartupOptionsBase::getBios();
    uVar6 = CVmStartupBios::isEfiSecureBoot();
    iVar9 = FUN_1000e7f30("SecureBootEnable","vm.efi.secureboot",uVar6);
    pQVar16 = (QArrayData *)QString::fromAscii_helper("PK",2);
    FUN_1007d6a70(&local_e1a8,&DAT_1011b6ce0);
    if (1 < *(int *)pQVar16 + 1U) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + 1;
      local_e049 = *(int *)pQVar16 != 0;
      UNLOCK();
    }
    local_e1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar16;
    QString::append(&local_e1a0);
    if (DAT_1011c3780 == (undefined8 *)0x0) {
LAB_1000e5620:
      puVar27 = &DAT_1011c3780;
    }
    else {
      puVar23 = DAT_1011c3780;
      puVar27 = &DAT_1011c3780;
      do {
        while (puVar25 = puVar23, cVar4 = operator<((QString *)(puVar25 + 4),&local_e1a0),
              cVar4 != '\0') {
          puVar23 = (undefined8 *)puVar25[1];
          if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) goto LAB_1000e5600;
        }
        puVar27 = puVar25;
        puVar23 = (undefined8 *)*puVar25;
      } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
LAB_1000e5600:
      if (((undefined8 **)puVar27 == &DAT_1011c3780) ||
         (cVar4 = operator<(&local_e1a0,(QString *)(puVar27 + 4)), cVar4 != '\0'))
      goto LAB_1000e5620;
    }
    if (*(int *)local_e1a0.field0_0x0 != -1) {
      if (*(int *)local_e1a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e1a0.field0_0x0 = *(int *)local_e1a0.field0_0x0 + -1;
        local_e049 = *(int *)local_e1a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e5663;
      }
      QArrayData::deallocate((QArrayData *)local_e1a0.field0_0x0,2,8);
    }
LAB_1000e5663:
    if (*(int *)local_e1a8 != -1) {
      if (*(int *)local_e1a8 != 0) {
        LOCK();
        *(int *)local_e1a8 = *(int *)local_e1a8 + -1;
        local_e049 = *(int *)local_e1a8 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e569f;
      }
      QArrayData::deallocate(local_e1a8,2,8);
    }
LAB_1000e569f:
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_e049 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e56d2;
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1000e56d2:
    pQVar16 = (QArrayData *)QString::fromAscii_helper("KEK",3);
    FUN_1007d6a70(&local_e1b8,&DAT_1011b6ce0);
    if (1 < *(int *)pQVar16 + 1U) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + 1;
      local_e049 = *(int *)pQVar16 != 0;
      UNLOCK();
    }
    local_e1b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar16;
    QString::append(&local_e1b0);
    if (DAT_1011c3780 == (undefined8 *)0x0) {
LAB_1000e57a2:
      puVar23 = &DAT_1011c3780;
    }
    else {
      puVar25 = DAT_1011c3780;
      puVar23 = &DAT_1011c3780;
      do {
        while (puVar22 = puVar25, cVar4 = operator<((QString *)(puVar22 + 4),&local_e1b0),
              cVar4 != '\0') {
          puVar25 = (undefined8 *)puVar22[1];
          if ((undefined8 *)puVar22[1] == (undefined8 *)0x0) goto LAB_1000e5781;
        }
        puVar23 = puVar22;
        puVar25 = (undefined8 *)*puVar22;
      } while ((undefined8 *)*puVar22 != (undefined8 *)0x0);
LAB_1000e5781:
      if (((undefined8 **)puVar23 == &DAT_1011c3780) ||
         (cVar4 = operator<(&local_e1b0,(QString *)(puVar23 + 4)), cVar4 != '\0'))
      goto LAB_1000e57a2;
    }
    if (*(int *)local_e1b0.field0_0x0 != -1) {
      if (*(int *)local_e1b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e1b0.field0_0x0 = *(int *)local_e1b0.field0_0x0 + -1;
        local_e049 = *(int *)local_e1b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e57e5;
      }
      QArrayData::deallocate((QArrayData *)local_e1b0.field0_0x0,2,8);
    }
LAB_1000e57e5:
    if (*(int *)local_e1b8 != -1) {
      if (*(int *)local_e1b8 != 0) {
        LOCK();
        *(int *)local_e1b8 = *(int *)local_e1b8 + -1;
        local_e049 = *(int *)local_e1b8 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e5821;
      }
      QArrayData::deallocate(local_e1b8,2,8);
    }
LAB_1000e5821:
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_e049 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e5854;
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1000e5854:
    pQVar16 = (QArrayData *)QString::fromAscii_helper("db",2);
    FUN_1007d6a70(&local_e1c8,&DAT_1011b6cf0);
    if (1 < *(int *)pQVar16 + 1U) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + 1;
      local_e049 = *(int *)pQVar16 != 0;
      UNLOCK();
    }
    local_e1c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar16;
    QString::append(&local_e1c0);
    if (DAT_1011c3780 == (undefined8 *)0x0) {
LAB_1000e5928:
      puVar25 = &DAT_1011c3780;
    }
    else {
      puVar22 = DAT_1011c3780;
      puVar25 = &DAT_1011c3780;
      do {
        while (puVar24 = puVar22, cVar4 = operator<((QString *)(puVar24 + 4),&local_e1c0),
              cVar4 != '\0') {
          puVar22 = (undefined8 *)puVar24[1];
          if ((undefined8 *)puVar24[1] == (undefined8 *)0x0) goto LAB_1000e5901;
        }
        puVar25 = puVar24;
        puVar22 = (undefined8 *)*puVar24;
      } while ((undefined8 *)*puVar24 != (undefined8 *)0x0);
LAB_1000e5901:
      if (((undefined8 **)puVar25 == &DAT_1011c3780) ||
         (cVar4 = operator<(&local_e1c0,(QString *)(puVar25 + 4)), cVar4 != '\0'))
      goto LAB_1000e5928;
    }
    if (*(int *)local_e1c0.field0_0x0 != -1) {
      if (*(int *)local_e1c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e1c0.field0_0x0 = *(int *)local_e1c0.field0_0x0 + -1;
        local_e049 = *(int *)local_e1c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e596b;
      }
      QArrayData::deallocate((QArrayData *)local_e1c0.field0_0x0,2,8);
    }
LAB_1000e596b:
    if (*(int *)local_e1c8 != -1) {
      if (*(int *)local_e1c8 != 0) {
        LOCK();
        *(int *)local_e1c8 = *(int *)local_e1c8 + -1;
        local_e049 = *(int *)local_e1c8 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e59a7;
      }
      QArrayData::deallocate(local_e1c8,2,8);
    }
LAB_1000e59a7:
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_e049 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e59d8;
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1000e59d8:
    pQVar16 = (QArrayData *)QString::fromAscii_helper("dbx",3);
    FUN_1007d6a70(&local_e1d8,&DAT_1011b6cf0);
    if (1 < *(int *)pQVar16 + 1U) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + 1;
      local_e049 = *(int *)pQVar16 != 0;
      UNLOCK();
    }
    local_e1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar16;
    QString::append(&local_e1d0);
    if (DAT_1011c3780 == (undefined8 *)0x0) {
LAB_1000e5abb:
      puVar22 = &DAT_1011c3780;
    }
    else {
      puVar24 = DAT_1011c3780;
      puVar22 = &DAT_1011c3780;
      do {
        while (puVar21 = puVar24, cVar4 = operator<((QString *)(puVar21 + 4),&local_e1d0),
              cVar4 != '\0') {
          puVar24 = (undefined8 *)puVar21[1];
          if ((undefined8 *)puVar21[1] == (undefined8 *)0x0) goto LAB_1000e5a94;
        }
        puVar22 = puVar21;
        puVar24 = (undefined8 *)*puVar21;
      } while ((undefined8 *)*puVar21 != (undefined8 *)0x0);
LAB_1000e5a94:
      if (((undefined8 **)puVar22 == &DAT_1011c3780) ||
         (cVar4 = operator<(&local_e1d0,(QString *)(puVar22 + 4)), cVar4 != '\0'))
      goto LAB_1000e5abb;
    }
    if (*(int *)local_e1d0.field0_0x0 != -1) {
      if (*(int *)local_e1d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e1d0.field0_0x0 = *(int *)local_e1d0.field0_0x0 + -1;
        local_e049 = *(int *)local_e1d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e5afe;
      }
      QArrayData::deallocate((QArrayData *)local_e1d0.field0_0x0,2,8);
    }
LAB_1000e5afe:
    if (*(int *)local_e1d8 != -1) {
      if (*(int *)local_e1d8 != 0) {
        LOCK();
        *(int *)local_e1d8 = *(int *)local_e1d8 + -1;
        local_e049 = *(int *)local_e1d8 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e5b3a;
      }
      QArrayData::deallocate(local_e1d8,2,8);
    }
LAB_1000e5b3a:
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_e049 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_e049) goto LAB_1000e5b6d;
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1000e5b6d:
    if (iVar9 == 0) {
      local_e1d9 = '\x01';
      pQVar16 = (QArrayData *)QString::fromAscii_helper("SetupMode",9);
      local_e1e8 = pQVar16;
      QByteArray::QByteArray((QByteArray *)&local_e1f0,&local_e1d9,1);
      cVar4 = FUN_1000e2b60(&local_e1e8,&DAT_1011b6ce0,6,&local_e1f0);
      if (*(int *)local_e1f0 != -1) {
        if (*(int *)local_e1f0 != 0) {
          LOCK();
          *(int *)local_e1f0 = *(int *)local_e1f0 + -1;
          local_e049 = *(int *)local_e1f0 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e607a;
        }
        QArrayData::deallocate(local_e1f0,1,8);
      }
LAB_1000e607a:
      if (*(int *)pQVar16 != -1) {
        if (*(int *)pQVar16 != 0) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + -1;
          local_e049 = *(int *)pQVar16 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e60af;
        }
        QArrayData::deallocate(pQVar16,2,8);
      }
LAB_1000e60af:
      if (cVar4 == '\0') {
        FUN_1008e3970("","vm",0,"Error allocating memory for new data to SetVariable %s\n",
                      "SetupMode");
      }
      if ((undefined8 **)puVar27 != &DAT_1011c3780) {
        if ((*(byte *)(puVar27 + 6) & 1) != 0) {
          DAT_1011b6d28 =
               DAT_1011b6d28 + ((*(int *)(puVar27[4] + 4) * -2 + -0x16) - *(int *)(puVar27[5] + 4));
        }
        FUN_1000e85b0(&DAT_1011c3778,puVar27);
      }
      if ((undefined8 **)puVar23 != &DAT_1011c3780) {
        if ((*(byte *)(puVar23 + 6) & 1) != 0) {
          DAT_1011b6d28 =
               DAT_1011b6d28 + ((*(int *)(puVar23[4] + 4) * -2 + -0x16) - *(int *)(puVar23[5] + 4));
        }
        FUN_1000e85b0(&DAT_1011c3778,puVar23);
      }
      if ((undefined8 **)puVar25 != &DAT_1011c3780) {
        if ((*(byte *)(puVar25 + 6) & 1) != 0) {
          DAT_1011b6d28 =
               DAT_1011b6d28 + ((*(int *)(puVar25[4] + 4) * -2 + -0x16) - *(int *)(puVar25[5] + 4));
        }
        FUN_1000e85b0(&DAT_1011c3778,puVar25);
      }
      if ((undefined8 **)puVar22 != &DAT_1011c3780) {
        if ((*(byte *)(puVar22 + 6) & 1) != 0) {
          DAT_1011b6d28 =
               DAT_1011b6d28 + ((*(int *)(puVar22[4] + 4) * -2 + -0x16) - *(int *)(puVar22[5] + 4));
        }
        FUN_1000e85b0(&DAT_1011c3778,puVar22);
      }
      pQVar16 = (QArrayData *)QString::fromAscii_helper("SecureBootEnable",0x10);
      FUN_1007d6a70(&local_e200,&DAT_1011b6d00);
      if (1 < *(int *)pQVar16 + 1U) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + 1;
        local_e049 = *(int *)pQVar16 != 0;
        UNLOCK();
      }
      local_e1f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar16;
      QString::append(&local_e1f8);
      if (DAT_1011c3780 == (undefined8 *)0x0) {
LAB_1000e628b:
        puVar27 = &DAT_1011c3780;
      }
      else {
        puVar23 = DAT_1011c3780;
        puVar27 = &DAT_1011c3780;
        do {
          while (puVar25 = puVar23, cVar4 = operator<((QString *)(puVar25 + 4),&local_e1f8),
                cVar4 != '\0') {
            puVar23 = (undefined8 *)puVar25[1];
            if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) goto LAB_1000e626b;
          }
          puVar27 = puVar25;
          puVar23 = (undefined8 *)*puVar25;
        } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
LAB_1000e626b:
        if (((undefined8 **)puVar27 == &DAT_1011c3780) ||
           (cVar4 = operator<(&local_e1f8,(QString *)(puVar27 + 4)), cVar4 != '\0'))
        goto LAB_1000e628b;
      }
      if (*(int *)local_e1f8.field0_0x0 != -1) {
        if (*(int *)local_e1f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e1f8.field0_0x0 = *(int *)local_e1f8.field0_0x0 + -1;
          local_e049 = *(int *)local_e1f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e62ce;
        }
        QArrayData::deallocate((QArrayData *)local_e1f8.field0_0x0,2,8);
      }
LAB_1000e62ce:
      if (*(int *)local_e200 != -1) {
        if (*(int *)local_e200 != 0) {
          LOCK();
          *(int *)local_e200 = *(int *)local_e200 + -1;
          local_e049 = *(int *)local_e200 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e630a;
        }
        QArrayData::deallocate(local_e200,2,8);
      }
LAB_1000e630a:
      if (*(int *)pQVar16 != -1) {
        if (*(int *)pQVar16 != 0) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + -1;
          local_e049 = *(int *)pQVar16 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e633f;
        }
        QArrayData::deallocate(pQVar16,2,8);
      }
LAB_1000e633f:
      if ((undefined8 **)puVar27 != &DAT_1011c3780) {
        if ((*(byte *)(puVar27 + 6) & 1) != 0) {
          DAT_1011b6d28 =
               DAT_1011b6d28 + ((*(int *)(puVar27[4] + 4) * -2 + -0x16) - *(int *)(puVar27[5] + 4));
        }
        FUN_1000e85b0(&DAT_1011c3778,puVar27);
      }
    }
    else {
      local_e208 = (QArrayData *)PTR_shared_null_100ba20d0;
      if (((((undefined8 **)puVar27 == &DAT_1011c3780) && ((undefined8 **)puVar23 == &DAT_1011c3780)
           ) && ((undefined8 **)puVar25 == &DAT_1011c3780)) &&
         ((undefined8 **)puVar22 == &DAT_1011c3780)) {
        FUN_1008e3970("","vm",0,"Add variables to SecureBoot: PK, KEK, db, dbx\n");
        FUN_1000e9fd0(&local_e210,0x10);
        QByteArray::operator=((QByteArray *)&local_e208,(QByteArray *)&local_e210);
        if (*(int *)local_e210 != -1) {
          if (*(int *)local_e210 != 0) {
            LOCK();
            *(int *)local_e210 = *(int *)local_e210 + -1;
            local_e049 = *(int *)local_e210 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5c31;
          }
          QArrayData::deallocate(local_e210,1,8);
        }
LAB_1000e5c31:
        pQVar16 = (QArrayData *)QString::fromAscii_helper("KEK",3);
        local_e218 = pQVar16;
        cVar4 = FUN_1000e2b60(&local_e218,&DAT_1011b6ce0,0x27,&local_e208);
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5c9f;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
LAB_1000e5c9f:
        if (cVar4 == '\0') {
          FUN_1008e3970("","vm",0,"Error allocating memory for new data to SetVariable KEK\n");
        }
        FUN_1000e9fd0(&local_e220,0x11);
        QByteArray::operator=((QByteArray *)&local_e208,(QByteArray *)&local_e220);
        if (*(int *)local_e220 != -1) {
          if (*(int *)local_e220 != 0) {
            LOCK();
            *(int *)local_e220 = *(int *)local_e220 + -1;
            local_e049 = *(int *)local_e220 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5d22;
          }
          QArrayData::deallocate(local_e220,1,8);
        }
LAB_1000e5d22:
        pQVar16 = (QArrayData *)QString::fromAscii_helper("db",2);
        local_e228 = pQVar16;
        cVar4 = FUN_1000e2b60(&local_e228,&DAT_1011b6cf0,0x27,&local_e208);
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5d90;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
LAB_1000e5d90:
        if (cVar4 == '\0') {
          FUN_1008e3970("","vm",0,"Error allocating memory for new data to SetVariable db\n");
        }
        FUN_1000e9fd0(&local_e230,0x12);
        QByteArray::operator=((QByteArray *)&local_e208,(QByteArray *)&local_e230);
        if (*(int *)local_e230 != -1) {
          if (*(int *)local_e230 != 0) {
            LOCK();
            *(int *)local_e230 = *(int *)local_e230 + -1;
            local_e049 = *(int *)local_e230 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5e13;
          }
          QArrayData::deallocate(local_e230,1,8);
        }
LAB_1000e5e13:
        pQVar16 = (QArrayData *)QString::fromAscii_helper("dbx",3);
        local_e238 = pQVar16;
        cVar4 = FUN_1000e2b60(&local_e238,&DAT_1011b6cf0,0x27,&local_e208);
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5e81;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
LAB_1000e5e81:
        if (cVar4 == '\0') {
          FUN_1008e3970("","vm",0,"Error allocating memory for new data to SetVariable dbx\n");
        }
        FUN_1000e9fd0(&local_e240,0xf);
        QByteArray::operator=((QByteArray *)&local_e208,(QByteArray *)&local_e240);
        if (*(int *)local_e240 != -1) {
          if (*(int *)local_e240 != 0) {
            LOCK();
            *(int *)local_e240 = *(int *)local_e240 + -1;
            local_e049 = *(int *)local_e240 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5f04;
          }
          QArrayData::deallocate(local_e240,1,8);
        }
LAB_1000e5f04:
        pQVar16 = (QArrayData *)QString::fromAscii_helper("PK",2);
        local_e248 = pQVar16;
        cVar4 = FUN_1000e2b60(&local_e248,&DAT_1011b6ce0,0x27,&local_e208);
        if (*(int *)pQVar16 != -1) {
          if (*(int *)pQVar16 != 0) {
            LOCK();
            *(int *)pQVar16 = *(int *)pQVar16 + -1;
            local_e049 = *(int *)pQVar16 != 0;
            UNLOCK();
            if ((bool)local_e049) goto LAB_1000e5f72;
          }
          QArrayData::deallocate(pQVar16,2,8);
        }
LAB_1000e5f72:
        if (cVar4 == '\0') {
          FUN_1008e3970("","vm",0,"Error allocating memory for new data to SetVariable PK\n");
        }
      }
      if (*(int *)local_e208 != -1) {
        if (*(int *)local_e208 != 0) {
          LOCK();
          *(int *)local_e208 = *(int *)local_e208 + -1;
          local_e049 = *(int *)local_e208 != 0;
          UNLOCK();
          if ((bool)local_e049) goto LAB_1000e637d;
        }
        QArrayData::deallocate(local_e208,1,8);
      }
    }
LAB_1000e637d:
    lVar11 = *(long *)(DAT_1011c3698 + 0x1938);
    cVar4 = (**(code **)(DAT_1011b6d10 + 0x88))(&DAT_1011b6d10,0);
    if (cVar4 != '\0') {
      QIODevice::read((char *)&DAT_1011b6d10,lVar11 + 0xa0d8);
    }
  }
LAB_1000e63c6:
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_e188.field0_0x0 != -1) {
    if (*(int *)local_e188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e188.field0_0x0 = *(int *)local_e188.field0_0x0 + -1;
      local_e049 = *(int *)local_e188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_e049) goto LAB_1000e640c;
    }
    QArrayData::deallocate((QArrayData *)local_e188.field0_0x0,2,8);
  }
LAB_1000e640c:
  QDir::~QDir(local_e178);
  if (*(int *)local_e170.field0_0x0 != -1) {
    if (*(int *)local_e170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e170.field0_0x0 = *(int *)local_e170.field0_0x0 + -1;
      local_e049 = *(int *)local_e170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_e049) goto LAB_1000e6454;
    }
    QArrayData::deallocate((QArrayData *)local_e170.field0_0x0,2,8);
  }
LAB_1000e6454:
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

