
int FUN_1006636e0(char *param_1,char *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  QArrayData *local_7b0;
  QArrayData *local_7a8;
  QArrayData *local_7a0;
  QString local_798;
  QFileInfo local_790 [8];
  QArrayData *local_788;
  QString local_780;
  QFileInfo local_778 [8];
  QArrayData *local_770;
  QString local_768;
  QString local_760;
  QArrayData *local_758;
  QArrayData *local_750;
  QFileInfo local_748 [8];
  QArrayData *local_740;
  QString local_738;
  QArrayData *local_730;
  QArrayData *local_728;
  uint *local_720;
  QArrayData *local_718;
  QArrayData *local_710;
  QArrayData *local_708;
  QArrayData *local_700;
  QArrayData *local_6f8;
  QArrayData *local_6f0;
  QArrayData *local_6e8;
  QArrayData *local_6e0;
  QArrayData *local_6d8;
  QString local_6d0;
  QDir local_6c8 [8];
  QArrayData *local_6c0;
  QString local_6b8;
  QFileInfo local_6b0 [8];
  QArrayData *local_6a8;
  QArrayData *local_6a0;
  QString local_698;
  QFileInfo local_690 [8];
  QArrayData *local_688;
  QArrayData *local_680;
  QArrayData *local_678;
  QString local_670;
  QArrayData *local_668;
  QArrayData *local_660;
  QArrayData *local_658;
  int *local_650;
  int *local_648;
  int *local_640;
  uint local_638;
  QArrayData *local_630;
  QArrayData *local_628;
  QArrayData *local_620;
  QArrayData *local_618;
  QString local_610;
  QArrayData *local_608;
  QArrayData *local_600;
  QArrayData *local_5f8;
  QArrayData *local_5f0;
  int *local_5e8;
  int *local_5e0;
  int *local_5d8;
  uint local_5d0;
  QArrayData *local_5c8;
  QArrayData *local_5c0;
  QString local_5b8;
  QString local_5b0;
  QDir local_5a8 [8];
  QString local_5a0;
  QArrayData *local_598;
  QString local_590;
  QArrayData *local_588;
  QString local_580;
  QArrayData *local_578;
  QArrayData *local_570;
  QArrayData *local_568;
  QArrayData *local_560;
  QArrayData *local_558;
  QString local_550;
  QString local_548;
  undefined1 local_539;
  QArrayData **local_538;
  QArrayData **local_530;
  QArrayData **local_528;
  QArrayData **local_520;
  QArrayData **local_518;
  char *local_508;
  char *local_500;
  char *local_4f8;
  char *local_4f0;
  undefined8 local_4e8;
  char *local_4d8;
  char *local_4d0;
  char *local_4c8;
  char *local_4c0;
  char *local_4b8;
  char *local_4b0;
  char *local_4a8;
  char *local_4a0;
  char *local_498;
  undefined8 local_490;
  char local_488 [1040];
  undefined1 local_78 [16];
  QArrayData **local_68;
  QString *local_60;
  QString *local_58;
  QString *local_48;
  QString *local_40;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  if (param_1 != (char *)0x0) {
    _strlen(param_1);
  }
  QString::fromUtf8_helper((char *)&local_788,(int)param_1);
  QString::normalized(&local_780,&local_788,1,0);
  QFileInfo::QFileInfo(local_778,&local_780);
  if (*(int *)local_780.field0_0x0 != -1) {
    if (*(int *)local_780.field0_0x0 != 0) {
      LOCK();
      *(int *)local_780.field0_0x0 = *(int *)local_780.field0_0x0 + -1;
      local_539 = *(int *)local_780.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100663798;
    }
    QArrayData::deallocate((QArrayData *)local_780.field0_0x0,2,8);
  }
LAB_100663798:
  if (*(int *)local_788 != -1) {
    if (*(int *)local_788 != 0) {
      LOCK();
      *(int *)local_788 = *(int *)local_788 + -1;
      local_539 = *(int *)local_788 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_1006637d4;
    }
    QArrayData::deallocate(local_788,2,8);
  }
LAB_1006637d4:
  cVar2 = QFileInfo::exists();
  if ((cVar2 == '\0') || (cVar2 = QFileInfo::isDir(), cVar2 == '\0')) {
    FUN_1008e3970("DetectOS","DetectOS",0,"Detect OS: mount point dir \'%s\' does not exist !",
                  param_1);
  }
  else {
    iVar3 = FUN_100666760(param_1,param_3);
    iVar4 = 0;
    if (iVar3 == 0) goto LAB_10066553c;
  }
  if (param_2 != (char *)0x0) {
    _strlen(param_2);
  }
  iVar3 = (int)param_2;
  QString::fromUtf8_helper((char *)&local_7a0,iVar3);
  QString::normalized(&local_798,&local_7a0,1,0);
  QFileInfo::QFileInfo(local_790,&local_798);
  QFileInfo::operator=(local_778,local_790);
  QFileInfo::~QFileInfo(local_790);
  if (*(int *)local_798.field0_0x0 != -1) {
    if (*(int *)local_798.field0_0x0 != 0) {
      LOCK();
      *(int *)local_798.field0_0x0 = *(int *)local_798.field0_0x0 + -1;
      local_539 = *(int *)local_798.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_1006638d3;
    }
    QArrayData::deallocate((QArrayData *)local_798.field0_0x0,2,8);
  }
LAB_1006638d3:
  if (*(int *)local_7a0 != -1) {
    if (*(int *)local_7a0 != 0) {
      LOCK();
      *(int *)local_7a0 = *(int *)local_7a0 + -1;
      local_539 = *(int *)local_7a0 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_10066390f;
    }
    QArrayData::deallocate(local_7a0,2,8);
  }
LAB_10066390f:
  cVar2 = QFileInfo::isDir();
  if (cVar2 != '\0') {
    if (param_2 != (char *)0x0) {
      _strlen(param_2);
    }
    QString::fromUtf8_helper((char *)&local_740,iVar3);
    QString::normalized(&local_738,&local_740,1,0);
    if (*(int *)local_740 != -1) {
      if (*(int *)local_740 != 0) {
        LOCK();
        *(int *)local_740 = *(int *)local_740 + -1;
        local_539 = *(int *)local_740 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_10066399d;
      }
      QArrayData::deallocate(local_740,2,8);
    }
LAB_10066399d:
    QFileInfo::QFileInfo(local_748,&local_738);
    cVar2 = QFileInfo::exists();
    iVar4 = -1;
    if ((cVar2 != '\0') && (cVar2 = QFileInfo::isDir(), cVar2 != '\0')) {
      QFileInfo::suffix();
      local_758 = (QArrayData *)QString::fromAscii_helper("app",3);
      iVar3 = QString::compare(&local_750,&local_758,1);
      if (iVar3 == 0) {
        QFileInfo::absoluteFilePath();
        QDir::QDir((QDir *)&local_760,&local_768);
        local_770 = (QArrayData *)
                    QString::fromAscii_helper("Contents/SharedSupport/InstallESD.dmg",0x25);
        cVar2 = QDir::exists(&local_760);
        if (*(int *)local_770 != -1) {
          if (*(int *)local_770 != 0) {
            LOCK();
            *(int *)local_770 = *(int *)local_770 + -1;
            local_539 = *(int *)local_770 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_10066444b;
          }
          QArrayData::deallocate(local_770,2,8);
        }
LAB_10066444b:
        QDir::~QDir((QDir *)&local_760);
        if (*(int *)local_768.field0_0x0 != -1) {
          if (*(int *)local_768.field0_0x0 != 0) {
            LOCK();
            *(int *)local_768.field0_0x0 = *(int *)local_768.field0_0x0 + -1;
            local_539 = *(int *)local_768.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100664493;
          }
          QArrayData::deallocate((QArrayData *)local_768.field0_0x0,2,8);
        }
      }
      else {
        cVar2 = '\0';
      }
LAB_100664493:
      if (*(int *)local_758 != -1) {
        if (*(int *)local_758 != 0) {
          LOCK();
          *(int *)local_758 = *(int *)local_758 + -1;
          local_539 = *(int *)local_758 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_1006644cf;
        }
        QArrayData::deallocate(local_758,2,8);
      }
LAB_1006644cf:
      if (*(int *)local_750 != -1) {
        if (*(int *)local_750 != 0) {
          LOCK();
          *(int *)local_750 = *(int *)local_750 + -1;
          local_539 = *(int *)local_750 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_10066450b;
        }
        QArrayData::deallocate(local_750,2,8);
      }
LAB_10066450b:
      if ((cVar2 != '\0') && (iVar3 = FUN_100681280(&local_738,param_3 + 10), -1 < iVar3)) {
        *(undefined1 *)(param_3 + 9) = 1;
        *param_3 = 0x200000703;
        iVar4 = 0;
      }
    }
    QFileInfo::~QFileInfo(local_748);
    if (*(int *)local_738.field0_0x0 != -1) {
      if (*(int *)local_738.field0_0x0 != 0) {
        LOCK();
        *(int *)local_738.field0_0x0 = *(int *)local_738.field0_0x0 + -1;
        local_539 = *(int *)local_738.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100664581;
      }
      QArrayData::deallocate((QArrayData *)local_738.field0_0x0,2,8);
    }
LAB_100664581:
    iVar4 = -(uint)(iVar4 != 0);
    goto LAB_10066553c;
  }
  cVar2 = FUN_1006d81f0(1);
  if (cVar2 == '\0') {
    if (param_2 != (char *)0x0) {
      _strlen(param_2);
    }
    QString::fromUtf8_helper((char *)&local_6a0,iVar3);
    QString::normalized(&local_698,&local_6a0,1,0);
    QFileInfo::QFileInfo(local_690,&local_698);
    if (*(int *)local_698.field0_0x0 != -1) {
      if (*(int *)local_698.field0_0x0 != 0) {
        LOCK();
        *(int *)local_698.field0_0x0 = *(int *)local_698.field0_0x0 + -1;
        local_539 = *(int *)local_698.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100663acf;
      }
      QArrayData::deallocate((QArrayData *)local_698.field0_0x0,2,8);
    }
LAB_100663acf:
    if (*(int *)local_6a0 != -1) {
      if (*(int *)local_6a0 != 0) {
        LOCK();
        *(int *)local_6a0 = *(int *)local_6a0 + -1;
        local_539 = *(int *)local_6a0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100663b0b;
      }
      QArrayData::deallocate(local_6a0,2,8);
    }
LAB_100663b0b:
    QFileInfo::canonicalFilePath();
    QFileInfo::QFileInfo(local_6b0,&local_6b8);
    QFileInfo::suffix();
    local_6c0 = (QArrayData *)QString::fromAscii_helper("dmg",3);
    iVar4 = QString::compare(&local_6a8,&local_6c0,0);
    if (*(int *)local_6c0 != -1) {
      if (*(int *)local_6c0 != 0) {
        LOCK();
        *(int *)local_6c0 = *(int *)local_6c0 + -1;
        local_539 = *(int *)local_6c0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100663baf;
      }
      QArrayData::deallocate(local_6c0,2,8);
    }
LAB_100663baf:
    if (*(int *)local_6a8 != -1) {
      if (*(int *)local_6a8 != 0) {
        LOCK();
        *(int *)local_6a8 = *(int *)local_6a8 + -1;
        local_539 = *(int *)local_6a8 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100663beb;
      }
      QArrayData::deallocate(local_6a8,2,8);
    }
LAB_100663beb:
    QFileInfo::~QFileInfo(local_6b0);
    if (*(int *)local_6b8.field0_0x0 != -1) {
      if (*(int *)local_6b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_6b8.field0_0x0 = *(int *)local_6b8.field0_0x0 + -1;
        local_539 = *(int *)local_6b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100663c33;
      }
      QArrayData::deallocate((QArrayData *)local_6b8.field0_0x0,2,8);
    }
LAB_100663c33:
    bVar11 = true;
    if (iVar4 != 0) {
      QCoreApplication::applicationDirPath();
      QDir::QDir(local_6c8,&local_6d0);
      if (*(int *)local_6d0.field0_0x0 != -1) {
        if (*(int *)local_6d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_6d0.field0_0x0 = *(int *)local_6d0.field0_0x0 + -1;
          local_539 = *(int *)local_6d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663c99;
        }
        QArrayData::deallocate((QArrayData *)local_6d0.field0_0x0,2,8);
      }
LAB_100663c99:
      local_6e0 = (QArrayData *)
                  QString::fromAscii_helper("\"%1\" l \"%2\" \"%3\" \"%4\" \"%5\"",0x1a);
      FUN_1006e90c0(&local_6e8,local_6c8);
      if (param_2 != (char *)0x0) {
        _strlen(param_2);
      }
      QString::fromUtf8_helper((char *)&local_6f8,iVar3);
      QString::normalized(&local_6f0,&local_6f8,1,0);
      local_700 = (QArrayData *)QString::fromAscii_helper("sources/idwbinfo.txt",0x14);
      local_708 = (QArrayData *)QString::fromAscii_helper("x86/sources/idwbinfo.txt",0x18);
      local_710 = (QArrayData *)QString::fromAscii_helper("x64/sources/idwbinfo.txt",0x18);
      local_528 = &local_700;
      local_520 = &local_708;
      local_518 = &local_710;
      local_538 = &local_6e8;
      local_530 = &local_6f0;
      QString::multiArg((int)&local_6d8,(QString **)&local_6e0);
      if (*(int *)local_710 != -1) {
        if (*(int *)local_710 != 0) {
          LOCK();
          *(int *)local_710 = *(int *)local_710 + -1;
          local_539 = *(int *)local_710 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663de3;
        }
        QArrayData::deallocate(local_710,2,8);
      }
LAB_100663de3:
      if (*(int *)local_708 != -1) {
        if (*(int *)local_708 != 0) {
          LOCK();
          *(int *)local_708 = *(int *)local_708 + -1;
          local_539 = *(int *)local_708 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663e1f;
        }
        QArrayData::deallocate(local_708,2,8);
      }
LAB_100663e1f:
      if (*(int *)local_700 != -1) {
        if (*(int *)local_700 != 0) {
          LOCK();
          *(int *)local_700 = *(int *)local_700 + -1;
          local_539 = *(int *)local_700 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663e5b;
        }
        QArrayData::deallocate(local_700,2,8);
      }
LAB_100663e5b:
      if (*(int *)local_6f0 != -1) {
        if (*(int *)local_6f0 != 0) {
          LOCK();
          *(int *)local_6f0 = *(int *)local_6f0 + -1;
          local_539 = *(int *)local_6f0 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663e97;
        }
        QArrayData::deallocate(local_6f0,2,8);
      }
LAB_100663e97:
      if (*(int *)local_6f8 != -1) {
        if (*(int *)local_6f8 != 0) {
          LOCK();
          *(int *)local_6f8 = *(int *)local_6f8 + -1;
          local_539 = *(int *)local_6f8 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663ed3;
        }
        QArrayData::deallocate(local_6f8,2,8);
      }
LAB_100663ed3:
      if (*(int *)local_6e8 != -1) {
        if (*(int *)local_6e8 != 0) {
          LOCK();
          *(int *)local_6e8 = *(int *)local_6e8 + -1;
          local_539 = *(int *)local_6e8 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663f0f;
        }
        QArrayData::deallocate(local_6e8,2,8);
      }
LAB_100663f0f:
      if (*(int *)local_6e0 != -1) {
        if (*(int *)local_6e0 != 0) {
          LOCK();
          *(int *)local_6e0 = *(int *)local_6e0 + -1;
          local_539 = *(int *)local_6e0 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100663f4b;
        }
        QArrayData::deallocate(local_6e0,2,8);
      }
LAB_100663f4b:
      local_718 = (QArrayData *)PTR_shared_null_100ba20d0;
      cVar2 = FUN_100770460(&local_6d8,&local_718,0,0,0);
      bVar11 = true;
      if (cVar2 != '\0') {
        local_728 = (QArrayData *)QString::fromAscii_helper("sources/idwbinfo.txt",0x14);
        local_730 = (QArrayData *)QString::fromAscii_helper("/",1);
        QString::split(&local_720,&local_728,&local_730,0,1);
        if (1 < *local_720) {
          FUN_100022c80(&local_720,local_720[1]);
        }
        iVar4 = QString::indexOf(&local_718,local_720 + (long)(int)local_720[3] * 2 + 2,0,0);
        bVar11 = iVar4 != -1;
        FUN_100013180(&local_720);
        if (*(int *)local_730 != -1) {
          if (*(int *)local_730 != 0) {
            LOCK();
            *(int *)local_730 = *(int *)local_730 + -1;
            local_539 = *(int *)local_730 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_10066405a;
          }
          QArrayData::deallocate(local_730,2,8);
        }
LAB_10066405a:
        if (*(int *)local_728 != -1) {
          if (*(int *)local_728 != 0) {
            LOCK();
            *(int *)local_728 = *(int *)local_728 + -1;
            local_539 = *(int *)local_728 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100664096;
          }
          QArrayData::deallocate(local_728,2,8);
        }
      }
LAB_100664096:
      if (*(int *)local_718 != -1) {
        if (*(int *)local_718 != 0) {
          LOCK();
          *(int *)local_718 = *(int *)local_718 + -1;
          local_539 = *(int *)local_718 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_1006640d2;
        }
        QArrayData::deallocate(local_718,2,8);
      }
LAB_1006640d2:
      if (*(int *)local_6d8 != -1) {
        if (*(int *)local_6d8 != 0) {
          LOCK();
          *(int *)local_6d8 = *(int *)local_6d8 + -1;
          local_539 = *(int *)local_6d8 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_10066410e;
        }
        QArrayData::deallocate(local_6d8,2,8);
      }
LAB_10066410e:
      QDir::~QDir(local_6c8);
    }
    QFileInfo::~QFileInfo(local_690);
    if (bVar11) {
      local_4d8 = "hdiutil";
      local_4d0 = "attach";
      local_4c0 = "-quiet";
      local_4b8 = "-noverify";
      local_4b0 = "-private";
      local_4a8 = "-nobrowse";
      local_4a0 = "-mountpoint";
      local_4f8 = local_488;
      local_490 = 0;
      local_508 = "hdiutil";
      local_500 = "detach";
      local_4f0 = "-quiet";
      local_4e8 = 0;
      local_4c8 = param_2;
      local_498 = local_4f8;
      QDir::tempPath();
      QDir::cleanPath(&local_670);
      if (*(int *)local_678 != -1) {
        if (*(int *)local_678 != 0) {
          LOCK();
          *(int *)local_678 = *(int *)local_678 + -1;
          local_539 = *(int *)local_678 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_10066423a;
        }
        QArrayData::deallocate(local_678,2,8);
      }
LAB_10066423a:
      QString::toUtf8();
      iVar4 = _snprintf(local_488,0x401,"%s/XXXXXX",local_680 + *(long *)(local_680 + 0x10));
      if (*(int *)local_680 != -1) {
        if (*(int *)local_680 != 0) {
          LOCK();
          *(int *)local_680 = *(int *)local_680 + -1;
          local_539 = *(int *)local_680 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_1006642b0;
        }
        QArrayData::deallocate(local_680,1,8);
      }
LAB_1006642b0:
      if (iVar4 < 0x401) {
        pcVar6 = _mkdtemp(local_488);
        if (pcVar6 == (char *)0x0) {
          piVar7 = ___error();
          pcVar6 = _strerror(*piVar7);
          iVar5 = -1;
          FUN_1008e3970("DetectOS","DetectOS",0,"get_distro_type - mkdtemp(%s) error : %s\n",
                        local_488,pcVar6);
        }
        else {
          iVar4 = FUN_1006735c0(&local_4d8);
          if (iVar4 == 0) {
            iVar5 = FUN_100666760(local_488,param_3);
            iVar4 = FUN_1006735c0(&local_508);
            if (iVar4 == 0) {
              _rmdir(local_488);
            }
          }
          else {
            _rmdir(local_488);
            iVar4 = FUN_100662a80(param_2,local_488,0x401);
            if (iVar4 == 0) {
              iVar5 = FUN_100666760(local_488,param_3);
            }
            else {
              iVar5 = -1;
              FUN_1008e3970("DetectOS","DetectOS",0,
                            "get_distro_type - can not get mount point for %s",param_2);
            }
          }
        }
      }
      else {
        QString::toUtf8();
        FUN_1008e3970("DetectOS","DetectOS",0,"mount point path compose failed for \'%s\'\n",
                      local_688 + *(long *)(local_688 + 0x10));
        iVar5 = -1;
        if (*(int *)local_688 != -1) {
          if (*(int *)local_688 != 0) {
            LOCK();
            *(int *)local_688 = *(int *)local_688 + -1;
            local_539 = *(int *)local_688 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_10066460a;
          }
          QArrayData::deallocate(local_688,1,8);
        }
      }
LAB_10066460a:
      if (*(int *)local_670.field0_0x0 != -1) {
        if (*(int *)local_670.field0_0x0 != 0) {
          LOCK();
          *(int *)local_670.field0_0x0 = *(int *)local_670.field0_0x0 + -1;
          local_539 = *(int *)local_670.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100664646;
        }
        QArrayData::deallocate((QArrayData *)local_670.field0_0x0,2,8);
      }
LAB_100664646:
      iVar4 = 0;
      if (iVar5 == 0) goto LAB_10066553c;
    }
  }
  if (param_2 != (char *)0x0) {
    _strlen(param_2);
  }
  QString::fromUtf8_helper((char *)&local_558,iVar3);
  QString::normalized(&local_550,&local_558,1,0);
  if (*(int *)local_558 != -1) {
    if (*(int *)local_558 != 0) {
      LOCK();
      *(int *)local_558 = *(int *)local_558 + -1;
      local_539 = *(int *)local_558 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_1006646cb;
    }
    QArrayData::deallocate(local_558,2,8);
  }
LAB_1006646cb:
  local_560 = (QArrayData *)QString::fromAscii_helper("/dev/disk",9);
  local_568 = (QArrayData *)QString::fromAscii_helper("/dev/rdisk",10);
  QString::replace(&local_550,&local_560,&local_568,1);
  if (*(int *)local_568 != -1) {
    if (*(int *)local_568 != 0) {
      LOCK();
      *(int *)local_568 = *(int *)local_568 + -1;
      local_539 = *(int *)local_568 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100664756;
    }
    QArrayData::deallocate(local_568,2,8);
  }
LAB_100664756:
  if (*(int *)local_560 != -1) {
    if (*(int *)local_560 != 0) {
      LOCK();
      *(int *)local_560 = *(int *)local_560 + -1;
      local_539 = *(int *)local_560 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100664792;
    }
    QArrayData::deallocate(local_560,2,8);
  }
LAB_100664792:
  QString::toUtf8();
  FUN_1008e3970("DetectOS","DetectOS",0,"Detect OS: PATH \'%s\' ",
                local_570 + *(long *)(local_570 + 0x10));
  if (*(int *)local_570 != -1) {
    if (*(int *)local_570 != 0) {
      LOCK();
      *(int *)local_570 = *(int *)local_570 + -1;
      local_539 = *(int *)local_570 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100664806;
    }
    QArrayData::deallocate(local_570,1,8);
  }
LAB_100664806:
  cVar2 = QFile::exists(&local_550);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("DetectOS","DetectOS",0,"Detect OS: image disk \'%s\' does not exist !",
                  local_578 + *(long *)(local_578 + 0x10));
    if (*(int *)local_578 != -1) {
      if (*(int *)local_578 != 0) {
        LOCK();
        *(int *)local_578 = *(int *)local_578 + -1;
        local_539 = *(int *)local_578 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100664be1;
      }
      QArrayData::deallocate(local_578,1,8);
    }
LAB_100664be1:
    local_7a8 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_1007d6bd0(local_78);
    FUN_1007d6a70(&local_588,local_78);
    QString::fromUtf8_helper((char *)&local_580,0xadf4fa);
    QString::append(&local_580);
    if (*(int *)local_588 != -1) {
      if (*(int *)local_588 != 0) {
        LOCK();
        *(int *)local_588 = *(int *)local_588 + -1;
        local_539 = *(int *)local_588 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_10066489d;
      }
      QArrayData::deallocate(local_588,2,8);
    }
LAB_10066489d:
    QDir::tempPath();
    QDir::QDir((QDir *)&local_590,&local_548);
    if (*(int *)local_548.field0_0x0 != -1) {
      if (*(int *)local_548.field0_0x0 != 0) {
        LOCK();
        *(int *)local_548.field0_0x0 = *(int *)local_548.field0_0x0 + -1;
        local_539 = *(int *)local_548.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_1006648f8;
      }
      QArrayData::deallocate((QArrayData *)local_548.field0_0x0,2,8);
    }
LAB_1006648f8:
    cVar2 = QDir::exists(&local_590);
    if ((cVar2 == '\0') && (cVar2 = QDir::mkdir(&local_590), cVar2 == '\0')) {
      FUN_1008e3970("DetectOS","DetectOS",0,
                    "Detect OS: cannot create temporary directory to extract files from image disk !"
                   );
      local_7a8 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    else {
      cVar2 = QDir::cd(&local_590);
      if (cVar2 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("DetectOS","DetectOS",0,
                      "Detect OS: temporary directory \'%s\' is not accessable !",
                      local_598 + *(long *)(local_598 + 0x10));
        if (*(int *)local_598 != -1) {
          if (*(int *)local_598 != 0) {
            LOCK();
            *(int *)local_598 = *(int *)local_598 + -1;
            local_539 = *(int *)local_598 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100664c6f;
          }
          QArrayData::deallocate(local_598,1,8);
        }
LAB_100664c6f:
        local_7a8 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        QDir::absolutePath();
        QString::operator=(&local_580,&local_5a0);
        if (*(int *)local_5a0.field0_0x0 != -1) {
          if (*(int *)local_5a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5a0.field0_0x0 = *(int *)local_5a0.field0_0x0 + -1;
            local_539 = *(int *)local_5a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_1006649aa;
          }
          QArrayData::deallocate((QArrayData *)local_5a0.field0_0x0,2,8);
        }
LAB_1006649aa:
        QCoreApplication::applicationDirPath();
        QDir::QDir(local_5a8,&local_5b0);
        if (*(int *)local_5b0.field0_0x0 != -1) {
          if (*(int *)local_5b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5b0.field0_0x0 = *(int *)local_5b0.field0_0x0 + -1;
            local_539 = *(int *)local_5b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100664a05;
          }
          QArrayData::deallocate((QArrayData *)local_5b0.field0_0x0,2,8);
        }
LAB_100664a05:
        local_5c0 = (QArrayData *)
                    QString::fromAscii_helper("\"%1\" x -y -ssc- \"-o%2\" \"%3\"",0x1b);
        FUN_1006e90c0(&local_5c8,local_5a8);
        local_68 = &local_5c8;
        local_60 = &local_580;
        local_58 = &local_550;
        QString::multiArg((int)&local_5b8,(QString **)&local_5c0);
        if (*(int *)local_5c8 != -1) {
          if (*(int *)local_5c8 != 0) {
            LOCK();
            *(int *)local_5c8 = *(int *)local_5c8 + -1;
            local_539 = *(int *)local_5c8 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100664a97;
          }
          QArrayData::deallocate(local_5c8,2,8);
        }
LAB_100664a97:
        if (*(int *)local_5c0 != -1) {
          if (*(int *)local_5c0 != 0) {
            LOCK();
            *(int *)local_5c0 = *(int *)local_5c0 + -1;
            local_539 = *(int *)local_5c0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100664ad3;
          }
          QArrayData::deallocate(local_5c0,2,8);
        }
LAB_100664ad3:
        piVar7 = DAT_1011bcb78;
        local_5e8 = DAT_1011bcb78;
        if (*DAT_1011bcb78 != -1) {
          if (*DAT_1011bcb78 == 0) {
            QListData::detach((int)&local_5e8);
            iVar4 = local_5e8[2];
            if (iVar4 != local_5e8[3]) {
              piVar7 = DAT_1011bcb78 + (long)DAT_1011bcb78[2] * 2 + 4;
              piVar10 = local_5e8 + (long)iVar4 * 2 + 4;
              lVar8 = (long)local_5e8[3] * 8 + (long)iVar4 * -8;
              do {
                piVar1 = *(int **)piVar7;
                *(int **)piVar10 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_539 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar10 = piVar10 + 2;
                piVar7 = piVar7 + 2;
                lVar8 = lVar8 + -8;
              } while (lVar8 != 0);
            }
          }
          else {
            LOCK();
            *DAT_1011bcb78 = *DAT_1011bcb78 + 1;
            local_539 = *piVar7 != 0;
            UNLOCK();
          }
        }
        local_5e0 = local_5e8 + (long)local_5e8[2] * 2 + 4;
        local_5d8 = local_5e8 + (long)local_5e8[3] * 2 + 4;
        local_5d0 = 1;
        if (local_5e8[2] != local_5e8[3]) {
          do {
            local_5f0 = *(QArrayData **)local_5e0;
            if (1 < *(int *)local_5f0 + 1U) {
              LOCK();
              *(int *)local_5f0 = *(int *)local_5f0 + 1;
              local_539 = *(int *)local_5f0 != 0;
              UNLOCK();
            }
            if (local_5d0 != 0) {
              local_600 = (QArrayData *)QString::fromAscii_helper(" \"%1\"",5);
              QString::arg(&local_5f8,&local_600,&local_5f0,0,0x20);
              QString::append(&local_5b8);
              if (*(int *)local_5f8 != -1) {
                if (*(int *)local_5f8 != 0) {
                  LOCK();
                  *(int *)local_5f8 = *(int *)local_5f8 + -1;
                  local_539 = *(int *)local_5f8 != 0;
                  UNLOCK();
                  if ((bool)local_539) goto LAB_100664dcd;
                }
                QArrayData::deallocate(local_5f8,2,8);
              }
LAB_100664dcd:
              if (*(int *)local_600 != -1) {
                if (*(int *)local_600 != 0) {
                  LOCK();
                  *(int *)local_600 = *(int *)local_600 + -1;
                  local_539 = *(int *)local_600 != 0;
                  UNLOCK();
                  if ((bool)local_539) goto LAB_100664e09;
                }
                QArrayData::deallocate(local_600,2,8);
              }
LAB_100664e09:
              local_5d0 = 0;
            }
            if (*(int *)local_5f0 != -1) {
              if (*(int *)local_5f0 != 0) {
                LOCK();
                *(int *)local_5f0 = *(int *)local_5f0 + -1;
                local_539 = *(int *)local_5f0 != 0;
                UNLOCK();
                if ((bool)local_539) goto LAB_100664e4f;
              }
              QArrayData::deallocate(local_5f0,2,8);
            }
LAB_100664e4f:
            local_5e0 = local_5e0 + 2;
            uVar9 = local_5d0 ^ 1;
            bVar11 = local_5d0 != 1;
            local_5d0 = uVar9;
          } while ((bVar11) && (local_5e0 != local_5d8));
        }
        FUN_100013180(&local_5e8);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        local_608 = (QArrayData *)PTR_shared_null_100ba20d0;
        FUN_100770460(&local_5b8,&local_608,0,0,0);
        cVar2 = FUN_1006d81f0(1);
        if (cVar2 != '\0') {
          local_628 = (QArrayData *)
                      QString::fromAscii_helper("\"%1\" x -y -ssc- -eo-%2 \"-o%3\" \"%4\"",0x22);
          FUN_1006e90c0(&local_630,local_5a8);
          QString::arg(&local_620,&local_628,&local_630,0,0x20);
          QString::arg(&local_618,&local_620,0x40,0,10,0x20);
          local_48 = &local_580;
          local_40 = &local_550;
          QString::multiArg((int)&local_610,(QString **)&local_618);
          QString::operator=(&local_5b8,&local_610);
          if (*(int *)local_610.field0_0x0 != -1) {
            if (*(int *)local_610.field0_0x0 != 0) {
              LOCK();
              *(int *)local_610.field0_0x0 = *(int *)local_610.field0_0x0 + -1;
              local_539 = *(int *)local_610.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_539) goto LAB_100664fd3;
            }
            QArrayData::deallocate((QArrayData *)local_610.field0_0x0,2,8);
          }
LAB_100664fd3:
          if (*(int *)local_618 != -1) {
            if (*(int *)local_618 != 0) {
              LOCK();
              *(int *)local_618 = *(int *)local_618 + -1;
              local_539 = *(int *)local_618 != 0;
              UNLOCK();
              if ((bool)local_539) goto LAB_10066500f;
            }
            QArrayData::deallocate(local_618,2,8);
          }
LAB_10066500f:
          if (*(int *)local_620 != -1) {
            if (*(int *)local_620 != 0) {
              LOCK();
              *(int *)local_620 = *(int *)local_620 + -1;
              local_539 = *(int *)local_620 != 0;
              UNLOCK();
              if ((bool)local_539) goto LAB_10066504b;
            }
            QArrayData::deallocate(local_620,2,8);
          }
LAB_10066504b:
          if (*(int *)local_630 != -1) {
            if (*(int *)local_630 != 0) {
              LOCK();
              *(int *)local_630 = *(int *)local_630 + -1;
              local_539 = *(int *)local_630 != 0;
              UNLOCK();
              if ((bool)local_539) goto LAB_100665087;
            }
            QArrayData::deallocate(local_630,2,8);
          }
LAB_100665087:
          if (*(int *)local_628 != -1) {
            if (*(int *)local_628 != 0) {
              LOCK();
              *(int *)local_628 = *(int *)local_628 + -1;
              local_539 = *(int *)local_628 != 0;
              UNLOCK();
              if ((bool)local_539) goto LAB_1006650c3;
            }
            QArrayData::deallocate(local_628,2,8);
          }
LAB_1006650c3:
          piVar7 = DAT_1011bcb80;
          local_650 = DAT_1011bcb80;
          if (*DAT_1011bcb80 != -1) {
            if (*DAT_1011bcb80 == 0) {
              QListData::detach((int)&local_650);
              iVar4 = local_650[2];
              if (iVar4 != local_650[3]) {
                piVar7 = DAT_1011bcb80 + (long)DAT_1011bcb80[2] * 2 + 4;
                piVar10 = local_650 + (long)iVar4 * 2 + 4;
                lVar8 = (long)local_650[3] * 8 + (long)iVar4 * -8;
                do {
                  piVar1 = *(int **)piVar7;
                  *(int **)piVar10 = piVar1;
                  if (1 < *piVar1 + 1U) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    local_539 = *piVar1 != 0;
                    UNLOCK();
                  }
                  piVar10 = piVar10 + 2;
                  piVar7 = piVar7 + 2;
                  lVar8 = lVar8 + -8;
                } while (lVar8 != 0);
              }
            }
            else {
              LOCK();
              *DAT_1011bcb80 = *DAT_1011bcb80 + 1;
              local_539 = *piVar7 != 0;
              UNLOCK();
            }
          }
          local_648 = local_650 + (long)local_650[2] * 2 + 4;
          local_640 = local_650 + (long)local_650[3] * 2 + 4;
          local_638 = 1;
          if (local_650[2] != local_650[3]) {
            do {
              local_658 = *(QArrayData **)local_648;
              if (1 < *(int *)local_658 + 1U) {
                LOCK();
                *(int *)local_658 = *(int *)local_658 + 1;
                local_539 = *(int *)local_658 != 0;
                UNLOCK();
              }
              if (local_638 != 0) {
                local_668 = (QArrayData *)QString::fromAscii_helper(" \"%1\"",5);
                QString::arg(&local_660,&local_668,&local_658,0,0x20);
                QString::append(&local_5b8);
                if (*(int *)local_660 != -1) {
                  if (*(int *)local_660 != 0) {
                    LOCK();
                    *(int *)local_660 = *(int *)local_660 + -1;
                    local_539 = *(int *)local_660 != 0;
                    UNLOCK();
                    if ((bool)local_539) goto LAB_10066525d;
                  }
                  QArrayData::deallocate(local_660,2,8);
                }
LAB_10066525d:
                if (*(int *)local_668 != -1) {
                  if (*(int *)local_668 != 0) {
                    LOCK();
                    *(int *)local_668 = *(int *)local_668 + -1;
                    local_539 = *(int *)local_668 != 0;
                    UNLOCK();
                    if ((bool)local_539) goto LAB_100665299;
                  }
                  QArrayData::deallocate(local_668,2,8);
                }
LAB_100665299:
                local_638 = 0;
              }
              if (*(int *)local_658 != -1) {
                if (*(int *)local_658 != 0) {
                  LOCK();
                  *(int *)local_658 = *(int *)local_658 + -1;
                  local_539 = *(int *)local_658 != 0;
                  UNLOCK();
                  if ((bool)local_539) goto LAB_1006652df;
                }
                QArrayData::deallocate(local_658,2,8);
              }
LAB_1006652df:
              local_648 = local_648 + 2;
              uVar9 = local_638 ^ 1;
              bVar11 = local_638 != 1;
              local_638 = uVar9;
            } while ((bVar11) && (local_648 != local_640));
          }
          FUN_100013180(&local_650);
          lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
          FUN_100770460(&local_5b8,&local_608,0,0,0);
        }
        local_7a8 = (QArrayData *)local_580.field0_0x0;
        if (1 < *(int *)local_580.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + 1;
          local_539 = *(int *)local_580.field0_0x0 != 0;
          UNLOCK();
        }
        if (*(int *)local_608 != -1) {
          if (*(int *)local_608 != 0) {
            LOCK();
            *(int *)local_608 = *(int *)local_608 + -1;
            local_539 = *(int *)local_608 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_1006653aa;
          }
          QArrayData::deallocate(local_608,2,8);
        }
LAB_1006653aa:
        if (*(int *)local_5b8.field0_0x0 != -1) {
          if (*(int *)local_5b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5b8.field0_0x0 = *(int *)local_5b8.field0_0x0 + -1;
            local_539 = *(int *)local_5b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_1006653e6;
          }
          QArrayData::deallocate((QArrayData *)local_5b8.field0_0x0,2,8);
        }
LAB_1006653e6:
        QDir::~QDir(local_5a8);
      }
    }
    QDir::~QDir((QDir *)&local_590);
    if (*(int *)local_580.field0_0x0 != -1) {
      if (*(int *)local_580.field0_0x0 != 0) {
        LOCK();
        *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + -1;
        local_539 = *(int *)local_580.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_10066543a;
      }
      QArrayData::deallocate((QArrayData *)local_580.field0_0x0,2,8);
    }
  }
LAB_10066543a:
  if (*(int *)local_550.field0_0x0 != -1) {
    if (*(int *)local_550.field0_0x0 != 0) {
      LOCK();
      *(int *)local_550.field0_0x0 = *(int *)local_550.field0_0x0 + -1;
      local_539 = *(int *)local_550.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100665476;
    }
    QArrayData::deallocate((QArrayData *)local_550.field0_0x0,2,8);
  }
LAB_100665476:
  if (*(int *)(local_7a8 + 4) == 0) {
LAB_1006654fb:
    iVar4 = -1;
  }
  else {
    QString::toUtf8();
    iVar3 = FUN_100666760(local_7b0 + *(long *)(local_7b0 + 0x10),param_3);
    if (*(int *)local_7b0 != -1) {
      if (*(int *)local_7b0 != 0) {
        LOCK();
        *(int *)local_7b0 = *(int *)local_7b0 + -1;
        local_539 = *(int *)local_7b0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_1006654e8;
      }
      QArrayData::deallocate(local_7b0,1,8);
    }
LAB_1006654e8:
    FUN_1006f3770(&local_7a8);
    iVar4 = 0;
    if (iVar3 != 0) goto LAB_1006654fb;
  }
  if (*(int *)local_7a8 != -1) {
    if (*(int *)local_7a8 != 0) {
      LOCK();
      *(int *)local_7a8 = *(int *)local_7a8 + -1;
      local_539 = *(int *)local_7a8 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_10066553c;
    }
    QArrayData::deallocate(local_7a8,2,8);
  }
LAB_10066553c:
  QFileInfo::~QFileInfo(local_778);
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

