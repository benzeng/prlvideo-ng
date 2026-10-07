
int FUN_100615e80(QString *param_1,char param_2)

{
  uint uVar1;
  Data *pDVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  QArrayData *pQVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  QFileInfo *this;
  Data *pDVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar18;
  QArrayData *local_188;
  QArrayData *local_180;
  QFileInfo local_178 [8];
  QString local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  Data *local_148;
  QArrayData *local_140;
  QDir local_138 [8];
  QArrayData *local_130;
  Data *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined1 local_f0 [4];
  ushort local_ec;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QFileInfo local_40 [8];
  undefined1 local_38 [7];
  undefined1 local_31;
  
  QMutex::lock();
  pQVar8 = (QArrayData *)QString::fromAscii_helper("LoadDynPlugins: ",0x10);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100615ee2;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100615ee2:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    in_stack_fffffffffffffe68 = CONCAT44((int)((ulong)in_stack_fffffffffffffe68 >> 0x20),0x23a);
    FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","!sPathRaw.isEmpty()",
                  "PrlPlugins.cpp",in_stack_fffffffffffffe68,"LoadDynPlugins");
    if (*(int *)(param_1->field0_0x0 + 4) == 0) {
      iVar6 = -0x7ffffff7;
      FUN_1008e3970("","prlplg",0,"LoadDynPlugins(): Incoming path is empty");
      goto LAB_100616d2f;
    }
  }
  QFileInfo::QFileInfo(local_178,param_1);
  QFileInfo::canonicalFilePath();
  QFileInfo::~QFileInfo(local_178);
  plVar9 = DAT_1011cca50;
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
  uVar1 = *(uint *)(DAT_1011cca50 + 4);
  if (param_2 == '\0') {
    if (uVar1 == 0) goto LAB_100616198;
    uVar5 = qHash(&local_170,*(uint *)((long)DAT_1011cca50 + 0x24));
    plVar15 = *(long **)(plVar9[1] + ((ulong)uVar5 % (ulong)uVar1) * 8);
    if (plVar15 == plVar9) goto LAB_100616198;
    plVar13 = (long *)(plVar9[1] + ((ulong)uVar5 % (ulong)uVar1) * 8);
    do {
      plVar16 = plVar9;
      if (*(uint *)(plVar15 + 1) == uVar5) {
        cVar4 = operator==(&local_170,(QString *)(plVar15 + 2));
        plVar9 = (long *)*plVar13;
        plVar15 = plVar9;
        plVar16 = DAT_1011cca50;
        if (cVar4 != '\0') break;
      }
      plVar9 = plVar16;
      plVar13 = plVar15;
      plVar15 = (long *)*plVar13;
      plVar16 = plVar9;
    } while (plVar15 != plVar9);
    if (plVar9 == plVar16) goto LAB_100616198;
    QString::toUtf8();
    lVar17 = *(long *)(local_180 + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","prlplg",0,"LoadDynPlugins(): dir already scanned %s ( orig=%s) )",
                  local_180 + lVar17,local_188 + *(long *)(local_188 + 0x10));
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061614f;
      }
      QArrayData::deallocate(local_188,1,8);
    }
LAB_10061614f:
    iVar6 = -0x7ffbbdcb;
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100616cf9;
      }
      QArrayData::deallocate(local_180,1,8);
    }
  }
  else {
    if (uVar1 != 0) {
      uVar5 = qHash(&local_170,*(uint *)((long)DAT_1011cca50 + 0x24));
      uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
      plVar15 = *(long **)(plVar9[1] + ((ulong)uVar5 % (ulong)uVar1) * 8);
      if (plVar15 != plVar9) {
        plVar13 = (long *)(plVar9[1] + ((ulong)uVar5 % (ulong)uVar1) * 8);
        do {
          plVar16 = plVar9;
          if (*(uint *)(plVar15 + 1) == uVar5) {
            cVar4 = operator==(&local_170,(QString *)(plVar15 + 2));
            uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
            plVar9 = (long *)*plVar13;
            plVar15 = plVar9;
            plVar16 = DAT_1011cca50;
            if (cVar4 != '\0') break;
          }
          plVar9 = plVar16;
          plVar13 = plVar15;
          uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
          plVar15 = (long *)*plVar13;
          plVar16 = plVar9;
        } while (plVar15 != plVar9);
        if (plVar9 != plVar16) goto LAB_100616198;
      }
    }
    FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "s_Plugins.DirsList.contains(sPath)","PrlPlugins.cpp",CONCAT44(uVar18,0x244),
                  "LoadDynPlugins");
LAB_100616198:
    local_128 = (Data *)PTR_shared_null_100ba2188;
    pQVar8 = (QArrayData *)QString::fromAscii_helper("*.dylib",7);
    local_130 = pQVar8;
    FUN_10000c490(&local_128,&local_130);
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006161ff;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_1006161ff:
    QDir::QDir(local_138,&local_170);
    cVar4 = QDir::isReadable();
    if (cVar4 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","prlplg",0,"Specified directory \'%s\' is not readable",
                    local_140 + *(long *)(local_140 + 0x10));
      iVar6 = -0x7ffffffb;
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100616bfa;
        }
        QArrayData::deallocate(local_140,1,8);
      }
    }
    else {
      QDir::entryInfoList(&local_148,local_138,&local_128,2,0);
      if (*(int *)(local_148 + 0xc) == *(int *)(local_148 + 8)) {
        iVar6 = 0;
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          iVar6 = 0;
          FUN_1008e3970("","prlplg",3,"No any plugins found at \'%s\'",
                        local_150 + *(long *)(local_150 + 0x10));
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_31 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100616b8e;
            }
            QArrayData::deallocate(local_150,1,8);
          }
        }
      }
      else {
        iVar6 = 0;
        if (*(int *)(local_148 + 8) < *(int *)(local_148 + 0xc)) {
          lVar17 = 0;
          do {
            plVar9 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
            if (plVar9 == (long *)0x0) {
              iVar6 = -0x7ffffffe;
              FUN_1008e3970("","prlplg",0,"Can\'t allocate file entry. Out of memory.");
              break;
            }
            plVar9[2] = (long)PTR_shared_null_100ba20d0;
            *plVar9 = 0;
            *(undefined4 *)(plVar9 + 1) = 0;
            plVar9[6] = 0;
            plVar9[5] = 0;
            plVar9[4] = 0;
            plVar9[3] = 0;
            plVar9[7] = (long)(plVar9 + 7);
            plVar9[8] = (long)(plVar9 + 7);
            plVar9[9] = (long)(plVar9 + 9);
            plVar9[10] = (long)(plVar9 + 9);
            QFileInfo::absoluteFilePath();
            QString::operator=((QString *)(plVar9 + 2),&local_158);
            if (*(int *)local_158.field0_0x0 != -1) {
              if (*(int *)local_158.field0_0x0 != 0) {
                LOCK();
                *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
                local_31 = *(int *)local_158.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100616459;
              }
              QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
            }
LAB_100616459:
            if (2 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("","prlplg",3,"Trying to load \'%s\'",
                            local_100 + *(long *)(local_100 + 0x10));
              if (*(int *)local_100 != -1) {
                if (*(int *)local_100 != 0) {
                  LOCK();
                  *(int *)local_100 = *(int *)local_100 + -1;
                  local_31 = *(int *)local_100 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006164d6;
                }
                QArrayData::deallocate(local_100,1,8);
              }
            }
LAB_1006164d6:
            QFileInfo::QFileInfo(local_40,(QString *)(plVar9 + 2));
            iVar6 = QFileInfo::ownerId();
            if ((iVar6 == 0) && (iVar6 = QFileInfo::groupId(), iVar6 == 0)) {
              QString::toUtf8();
              iVar6 = _stat_INODE64(local_f8 + *(long *)(local_f8 + 0x10),local_f0);
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100616699;
                }
                QArrayData::deallocate(local_f8,1,8);
              }
LAB_100616699:
              uVar3 = local_ec;
              if (iVar6 == 0) {
                if (2 < DAT_1011b55f8) {
                  FUN_1008e3970("","prlplg",3,"perms from fstat = %#x",local_ec & 0xfff);
                }
                iVar6 = 0;
                if ((uVar3 & 0xe92) != 0) {
                  iVar6 = -0x7ffbdffb;
                  FUN_1008e3970("","prlplg",0,"Wrong permissions for file remained 0x%x",
                                uVar3 & 0xe92);
                }
              }
              else {
                piVar10 = ___error();
                iVar6 = -0x7ffbdffa;
                FUN_1008e3970("","prlplg",0,"stat() failed with errno = %d",*piVar10);
              }
            }
            else {
              QFileInfo::owner();
              QString::toUtf8();
              pQVar8 = local_48 + *(long *)(local_48 + 0x10);
              QFileInfo::group();
              QString::toUtf8();
              FUN_1008e3970("","prlplg",0,"Owner for plugin is not correct: %s:%s",pQVar8,
                            local_58 + *(long *)(local_58 + 0x10));
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100616598;
                }
                QArrayData::deallocate(local_58,1,8);
              }
LAB_100616598:
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006165c8;
                }
                QArrayData::deallocate(local_60,2,8);
              }
LAB_1006165c8:
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006165f8;
                }
                QArrayData::deallocate(local_48,1,8);
              }
LAB_1006165f8:
              iVar6 = -0x7ffbdffb;
              if (*(int *)local_50 != -1) {
                if (*(int *)local_50 != 0) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + -1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10061673b;
                }
                QArrayData::deallocate(local_50,2,8);
              }
            }
LAB_10061673b:
            QFileInfo::~QFileInfo(local_40);
            if (iVar6 < 0) {
              QString::toUtf8();
              FUN_1008e3970("","prlplg",0,"Permissions check failed for %s!",
                            local_108 + *(long *)(local_108 + 0x10));
              if (*(int *)local_108 != -1) {
                if (*(int *)local_108 != 0) {
                  LOCK();
                  *(int *)local_108 = *(int *)local_108 + -1;
                  local_31 = *(int *)local_108 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100616a1f;
                }
                QArrayData::deallocate(local_108,1,8);
              }
            }
            else {
              QString::toUtf8();
              lVar11 = _dlopen(local_110 + *(long *)(local_110 + 0x10),2);
              *plVar9 = lVar11;
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 == 0) {
LAB_10061679c:
                  QArrayData::deallocate(local_110,1,8);
                }
                else {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if (!(bool)local_31) goto LAB_10061679c;
                }
                lVar11 = *plVar9;
              }
              if (lVar11 == 0) {
                uVar12 = _dlerror();
                iVar6 = -0x7ffbdfff;
                FUN_1008e3970("","prlplg",0,"Can\'t load library via system call [%s]",uVar12);
              }
              else {
                lVar11 = _dlsym(lVar11,"PrlInitPlugin");
                plVar9[3] = lVar11;
                lVar11 = _dlsym(*plVar9,"PrlFiniPlugin");
                plVar9[4] = lVar11;
                lVar11 = _dlsym(*plVar9,"PrlGetObjectInfo");
                plVar9[5] = lVar11;
                lVar11 = _dlsym(*plVar9,"PrlCreateObject");
                plVar9[6] = lVar11;
                if ((lVar11 == 0) || (plVar9[5] == 0)) {
                  QString::toUtf8();
                  FUN_1008e3970("","prlplg",0,"File %s has no exported mandatory functions",
                                local_118 + *(long *)(local_118 + 0x10));
                  iVar6 = -0x7ffbdffe;
                  if (*(int *)local_118 != -1) {
                    if (*(int *)local_118 != 0) {
                      LOCK();
                      *(int *)local_118 = *(int *)local_118 + -1;
                      local_31 = *(int *)local_118 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100616a17;
                    }
                    QArrayData::deallocate(local_118,1,8);
                  }
                }
                else if (((code *)plVar9[3] == (code *)0x0) ||
                        (iVar6 = (*(code *)plVar9[3])(), -1 < iVar6)) {
                  iVar7 = FUN_100618ad0(plVar9);
                  iVar6 = 0;
                  if (-1 < iVar7) goto LAB_100616a1f;
                  FUN_1008e3970("","prlplg",0,"Error enumerating and adding to list (0x%x)",iVar7);
                  iVar6 = iVar7;
                }
                else {
                  QString::toUtf8();
                  FUN_1008e3970("","prlplg",0,"File %s initialization failed with code 0x%x",
                                local_120 + *(long *)(local_120 + 0x10),iVar6);
                  if (*(int *)local_120 != -1) {
                    if (*(int *)local_120 != 0) {
                      LOCK();
                      *(int *)local_120 = *(int *)local_120 + -1;
                      local_31 = *(int *)local_120 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100616a17;
                    }
                    QArrayData::deallocate(local_120,1,8);
                  }
                }
LAB_100616a17:
                FUN_100618760(plVar9);
              }
            }
LAB_100616a1f:
            if (iVar6 < 0) {
              uVar12 = FUN_1007dd120(iVar6);
              QFileInfo::absoluteFilePath();
              QString::toUtf8();
              FUN_1008e3970("","prlplg",0,"Error %s(%#x) on loading plugin file \'%s\'",uVar12,iVar6
                            ,local_160 + *(long *)(local_160 + 0x10));
              if (*(int *)local_160 != -1) {
                if (*(int *)local_160 != 0) {
                  LOCK();
                  *(int *)local_160 = *(int *)local_160 + -1;
                  local_31 = *(int *)local_160 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100616ad1;
                }
                QArrayData::deallocate(local_160,1,8);
              }
LAB_100616ad1:
              if (*(int *)local_168 != -1) {
                if (*(int *)local_168 != 0) {
                  LOCK();
                  *(int *)local_168 = *(int *)local_168 + -1;
                  local_31 = *(int *)local_168 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100616b07;
                }
                QArrayData::deallocate(local_168,2,8);
              }
            }
LAB_100616b07:
            lVar17 = lVar17 + 1;
            iVar6 = 0;
          } while (lVar17 < (long)*(int *)(local_148 + 0xc) - (long)*(int *)(local_148 + 8));
        }
      }
LAB_100616b8e:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100616bfa;
        }
        iVar7 = *(int *)(local_148 + 0xc);
        if (iVar7 != *(int *)(local_148 + 8)) {
          lVar17 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar7 * -8;
          this = (QFileInfo *)(local_148 + (long)iVar7 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(this);
            this = this + -8;
            lVar17 = lVar17 + 8;
          } while (lVar17 != 0);
        }
        QListData::dispose(local_148);
      }
    }
LAB_100616bfa:
    QDir::~QDir(local_138);
    pDVar2 = local_128;
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100616ca1;
      }
      iVar7 = *(int *)(local_128 + 0xc);
      if (iVar7 != *(int *)(local_128 + 8)) {
        lVar17 = (long)*(int *)(local_128 + 8) * 8 + (long)iVar7 * -8;
        pDVar14 = local_128 + (long)iVar7 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar14;
          if (*(int *)pQVar8 == 0) {
LAB_100616c80:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar14;
              goto LAB_100616c80;
            }
          }
          pDVar14 = pDVar14 + -8;
          lVar17 = lVar17 + 8;
        } while (lVar17 != 0);
      }
      QListData::dispose(pDVar2);
    }
LAB_100616ca1:
    if (-1 < iVar6) {
      FUN_100022e50(&DAT_1011cca50,&local_170,local_38);
    }
    pQVar8 = (QArrayData *)QString::fromAscii_helper("LoadDynPlugins: after",0x15);
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100616cf9;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
  }
LAB_100616cf9:
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100616d2f;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_100616d2f:
  QMutex::unlock();
  return iVar6;
}

