
void FUN_1000d9960(long param_1)

{
  int *piVar1;
  Data *pDVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  QFileInfo *this;
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
  undefined1 local_a8 [32];
  QString local_88;
  QArrayData *local_80;
  Data *local_78;
  QDir local_70 [8];
  int *local_68;
  QString *local_60;
  QString *local_58;
  undefined4 local_50;
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  FUN_100040590(&local_48,*(undefined8 *)(param_1 + 0xf0));
  local_68 = local_48;
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_68);
      iVar4 = local_68[2];
      if (iVar4 != local_68[3]) {
        local_48 = local_48 + (long)local_48[2] * 2 + 4;
        piVar6 = local_68 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_68[3] * 8 + (long)iVar4 * -8;
        do {
          piVar1 = *(int **)local_48;
          *(int **)piVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_48 = local_48 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_31 = *local_48 != 0;
      UNLOCK();
    }
  }
  local_60 = (QString *)(local_68 + (long)local_68[2] * 2 + 4);
  local_58 = (QString *)(local_68 + (long)local_68[3] * 2 + 4);
  if (local_68[2] != local_68[3]) {
    do {
      local_50 = 1;
      QDir::QDir(local_70,local_60);
      cVar3 = QDir::exists();
      if (cVar3 != '\0') {
        QDir::setFilter(local_70,0x6009);
        QDir::setSorting(local_70,4);
        QDir::entryInfoList(&local_78,local_70,0xffffffff,0xffffffff);
        lVar5 = 0;
        if (*(int *)(local_78 + 8) < *(int *)(local_78 + 0xc)) {
          do {
            cVar3 = QFileInfo::isDir();
            if (cVar3 != '\0') {
              QFileInfo::absoluteFilePath();
              local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
              if (1 < *(int *)local_80 + 1U) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + 1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
              }
              QString::fromUtf8_helper((char *)&local_40,0x1db6890);
              QString::append(&local_88);
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000d9b61;
                }
                QArrayData::deallocate(local_40,2,8);
              }
LAB_1000d9b61:
              cVar3 = QFile::exists(&local_88);
              if (cVar3 != '\0') {
                local_b0 = (QArrayData *)local_88.field0_0x0;
                if (1 < *(int *)local_88.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
                  local_31 = *(int *)local_88.field0_0x0 != 0;
                  UNLOCK();
                }
                FUN_100b56ca0(local_a8,&local_b0);
                if (*(int *)local_b0 != -1) {
                  if (*(int *)local_b0 != 0) {
                    LOCK();
                    *(int *)local_b0 = *(int *)local_b0 + -1;
                    local_31 = *(int *)local_b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000d9bd7;
                  }
                  QArrayData::deallocate(local_b0,2,8);
                }
LAB_1000d9bd7:
                local_c0 = (QArrayData *)QString::fromAscii_helper("System",6);
                local_c8 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
                local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
                FUN_100b57250(&local_b8,local_a8,&local_c0,&local_c8,&local_d0);
                if (*(int *)local_d0 != -1) {
                  if (*(int *)local_d0 != 0) {
                    LOCK();
                    *(int *)local_d0 = *(int *)local_d0 + -1;
                    local_31 = *(int *)local_d0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000d9c73;
                  }
                  QArrayData::deallocate(local_d0,2,8);
                }
LAB_1000d9c73:
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000d9ca9;
                  }
                  QArrayData::deallocate(local_c8,2,8);
                }
LAB_1000d9ca9:
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 != 0) {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + -1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000d9cdf;
                  }
                  QArrayData::deallocate(local_c0,2,8);
                }
LAB_1000d9cdf:
                if ((*(int *)(local_b8 + 4) != 0) &&
                   (iVar4 = QString::compare(&local_b8,param_1 + 0x10,0), iVar4 == 0)) {
                  local_e0 = (QArrayData *)QString::fromAscii_helper("System",6);
                  local_e8 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
                  local_f0 = (QArrayData *)PTR_shared_null_1021e1288;
                  FUN_100b57250(&local_d8,local_a8,&local_e0,&local_e8,&local_f0);
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000d9da9;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
LAB_1000d9da9:
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 != 0) {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + -1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000d9ddf;
                    }
                    QArrayData::deallocate(local_e8,2,8);
                  }
LAB_1000d9ddf:
                  if (*(int *)local_e0 != -1) {
                    if (*(int *)local_e0 != 0) {
                      LOCK();
                      *(int *)local_e0 = *(int *)local_e0 + -1;
                      local_31 = *(int *)local_e0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000d9e15;
                    }
                    QArrayData::deallocate(local_e0,2,8);
                  }
LAB_1000d9e15:
                  if (*(int *)(local_d8 + 4) != 0) {
                    local_100 = (QArrayData *)QString::fromAscii_helper("System",6);
                    local_108 = (QArrayData *)QString::fromAscii_helper("Helper Version",0xe);
                    local_110 = (QArrayData *)PTR_shared_null_1021e1288;
                    FUN_100b57250(&local_f8,local_a8,&local_100,&local_108,&local_110);
                    if (*(int *)local_110 != -1) {
                      if (*(int *)local_110 != 0) {
                        LOCK();
                        *(int *)local_110 = *(int *)local_110 + -1;
                        local_31 = *(int *)local_110 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000d9ec2;
                      }
                      QArrayData::deallocate(local_110,2,8);
                    }
LAB_1000d9ec2:
                    if (*(int *)local_108 != -1) {
                      if (*(int *)local_108 != 0) {
                        LOCK();
                        *(int *)local_108 = *(int *)local_108 + -1;
                        local_31 = *(int *)local_108 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000d9ef8;
                      }
                      QArrayData::deallocate(local_108,2,8);
                    }
LAB_1000d9ef8:
                    if (*(int *)local_100 != -1) {
                      if (*(int *)local_100 != 0) {
                        LOCK();
                        *(int *)local_100 = *(int *)local_100 + -1;
                        local_31 = *(int *)local_100 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000d9f2e;
                      }
                      QArrayData::deallocate(local_100,2,8);
                    }
LAB_1000d9f2e:
                    local_120 = (QArrayData *)QString::fromAscii_helper("System",6);
                    local_128 = (QArrayData *)QString::fromAscii_helper("Protocols",9);
                    local_130 = (QArrayData *)QString::fromAscii_helper("-",1);
                    FUN_100b57250(&local_118,local_a8,&local_120,&local_128,&local_130);
                    if (*(int *)local_130 != -1) {
                      if (*(int *)local_130 != 0) {
                        LOCK();
                        *(int *)local_130 = *(int *)local_130 + -1;
                        local_31 = *(int *)local_130 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000d9fd4;
                      }
                      QArrayData::deallocate(local_130,2,8);
                    }
LAB_1000d9fd4:
                    if (*(int *)local_128 != -1) {
                      if (*(int *)local_128 != 0) {
                        LOCK();
                        *(int *)local_128 = *(int *)local_128 + -1;
                        local_31 = *(int *)local_128 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da00a;
                      }
                      QArrayData::deallocate(local_128,2,8);
                    }
LAB_1000da00a:
                    if (*(int *)local_120 != -1) {
                      if (*(int *)local_120 != 0) {
                        LOCK();
                        *(int *)local_120 = *(int *)local_120 + -1;
                        local_31 = *(int *)local_120 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da040;
                      }
                      QArrayData::deallocate(local_120,2,8);
                    }
LAB_1000da040:
                    local_140 = (QArrayData *)QString::fromAscii_helper("System",6);
                    local_148 = (QArrayData *)QString::fromAscii_helper("File Extensions",0xf);
                    local_150 = (QArrayData *)QString::fromAscii_helper("-",1);
                    FUN_100b57250(&local_138,local_a8,&local_140,&local_148,&local_150);
                    if (*(int *)local_150 != -1) {
                      if (*(int *)local_150 != 0) {
                        LOCK();
                        *(int *)local_150 = *(int *)local_150 + -1;
                        local_31 = *(int *)local_150 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da0e6;
                      }
                      QArrayData::deallocate(local_150,2,8);
                    }
LAB_1000da0e6:
                    if (*(int *)local_148 != -1) {
                      if (*(int *)local_148 != 0) {
                        LOCK();
                        *(int *)local_148 = *(int *)local_148 + -1;
                        local_31 = *(int *)local_148 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da11c;
                      }
                      QArrayData::deallocate(local_148,2,8);
                    }
LAB_1000da11c:
                    if (*(int *)local_140 != -1) {
                      if (*(int *)local_140 != 0) {
                        LOCK();
                        *(int *)local_140 = *(int *)local_140 + -1;
                        local_31 = *(int *)local_140 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da152;
                      }
                      QArrayData::deallocate(local_140,2,8);
                    }
LAB_1000da152:
                    QFileInfo::fileName();
                    FUN_1000f83b0(param_1 + 0x1a0,&local_80,&local_158,&local_d8,&local_f8,
                                  &local_118,&local_138);
                    if (*(int *)local_158 != -1) {
                      if (*(int *)local_158 != 0) {
                        LOCK();
                        *(int *)local_158 = *(int *)local_158 + -1;
                        local_31 = *(int *)local_158 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da1ca;
                      }
                      QArrayData::deallocate(local_158,2,8);
                    }
LAB_1000da1ca:
                    if (*(int *)local_138 != -1) {
                      if (*(int *)local_138 != 0) {
                        LOCK();
                        *(int *)local_138 = *(int *)local_138 + -1;
                        local_31 = *(int *)local_138 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da200;
                      }
                      QArrayData::deallocate(local_138,2,8);
                    }
LAB_1000da200:
                    if (*(int *)local_118 != -1) {
                      if (*(int *)local_118 != 0) {
                        LOCK();
                        *(int *)local_118 = *(int *)local_118 + -1;
                        local_31 = *(int *)local_118 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da236;
                      }
                      QArrayData::deallocate(local_118,2,8);
                    }
LAB_1000da236:
                    if (*(int *)local_f8 != -1) {
                      if (*(int *)local_f8 != 0) {
                        LOCK();
                        *(int *)local_f8 = *(int *)local_f8 + -1;
                        local_31 = *(int *)local_f8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000da26c;
                      }
                      QArrayData::deallocate(local_f8,2,8);
                    }
                  }
LAB_1000da26c:
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 != 0) {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + -1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000da2a2;
                    }
                    QArrayData::deallocate(local_d8,2,8);
                  }
                }
LAB_1000da2a2:
                if (*(int *)local_b8 != -1) {
                  if (*(int *)local_b8 != 0) {
                    LOCK();
                    *(int *)local_b8 = *(int *)local_b8 + -1;
                    local_31 = *(int *)local_b8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000da2d8;
                  }
                  QArrayData::deallocate(local_b8,2,8);
                }
LAB_1000da2d8:
                FUN_100b57060(local_a8);
              }
              if (*(int *)local_88.field0_0x0 != -1) {
                if (*(int *)local_88.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                  local_31 = *(int *)local_88.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000da314;
                }
                QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
              }
LAB_1000da314:
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000da350;
                }
                QArrayData::deallocate(local_80,2,8);
              }
            }
LAB_1000da350:
            lVar5 = lVar5 + 1;
          } while (lVar5 < (long)*(int *)(local_78 + 0xc) - (long)*(int *)(local_78 + 8));
        }
        pDVar2 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000da3f0;
          }
          iVar4 = *(int *)(local_78 + 0xc);
          if (iVar4 != *(int *)(local_78 + 8)) {
            lVar5 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar4 * -8;
            this = (QFileInfo *)(local_78 + (long)iVar4 * 8 + 8);
            do {
              QFileInfo::~QFileInfo(this);
              this = this + -8;
              lVar5 = lVar5 + 8;
            } while (lVar5 != 0);
          }
          QListData::dispose(pDVar2);
        }
      }
LAB_1000da3f0:
      QDir::~QDir(local_70);
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  FUN_100039a80(&local_68);
  FUN_100039a80(&local_48);
  QMutex::unlock();
  return;
}

