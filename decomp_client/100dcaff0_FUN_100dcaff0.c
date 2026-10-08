
bool FUN_100dcaff0(QString *param_1)

{
  int *piVar1;
  int iVar2;
  QArrayData *pQVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  QArrayData *local_1e0;
  int *local_1d8;
  QString *local_1d0;
  QString *local_1c8;
  int local_1c0;
  QArrayData *local_1b8;
  undefined *local_1b0;
  int *local_1a8;
  QString local_1a0;
  QString local_198;
  QDir local_190 [8];
  QArrayData *local_188;
  int *local_180;
  QString *local_178;
  QString *local_170;
  int local_168;
  QArrayData *local_160;
  undefined *local_158;
  int *local_150;
  QArrayData *local_148;
  int *local_140;
  QString *local_138;
  QString *local_130;
  int local_128;
  QArrayData *local_120;
  undefined *local_118;
  int *local_110;
  QString local_108;
  QString local_100;
  QDir local_f8 [8];
  QArrayData *local_f0;
  int *local_e8;
  QString *local_e0;
  QString *local_d8;
  int local_d0;
  QArrayData *local_c8;
  undefined *local_c0;
  int *local_b8;
  QString local_b0;
  QString local_a8;
  QDir local_a0 [8];
  QArrayData *local_98;
  int *local_90;
  QString *local_88;
  QString *local_80;
  int local_78;
  QArrayData *local_70;
  undefined *local_68;
  int *local_60;
  QString local_58;
  QDir local_50 [8];
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","HostUtils",3,"Checking mount point: %s",local_48 + *(long *)(local_48 + 0x10))
    ;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dcb079;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_100dcb079:
  iVar2 = FUN_100db9720(param_1);
  if (iVar2 != 2) {
    return false;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","HostUtils",3,"Checking mount point. Device has FAT32 FS");
  }
  QDir::QDir(local_50,param_1);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("[Ee][Ff][Ii]",0xc);
  local_68 = PTR_shared_null_1021e15e8;
  local_70 = pQVar3;
  FUN_1000341d0(&local_68,&local_70);
  QDir::entryList(&local_60,local_50,&local_68,1,0xffffffff);
  FUN_100039a80(&local_68);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dcb148;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100dcb148:
  local_90 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_90);
      iVar2 = local_90[2];
      if (iVar2 != local_90[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar5 = local_90 + (long)iVar2 * 2 + 4;
        lVar4 = (long)local_90[3] * 8 + (long)iVar2 * -8;
        do {
          piVar6 = *(int **)local_60;
          *(int **)piVar5 = piVar6;
          if (1 < *piVar6 + 1U) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            local_31 = *piVar6 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_60 = local_60 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_88 = (QString *)(local_90 + (long)local_90[2] * 2 + 4);
  local_80 = (QString *)(local_90 + (long)local_90[3] * 2 + 4);
  if (local_88 != local_80) {
    do {
      local_78 = 1;
      QString::operator=(&local_58,local_88);
      if (local_78 != 0) {
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","HostUtils",3,"rootEntry: %s",local_98 + *(long *)(local_98 + 0x10));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dcb2c0;
            }
            QArrayData::deallocate(local_98,1,8);
          }
        }
LAB_100dcb2c0:
        QDir::filePath(&local_a8);
        QDir::QDir(local_a0,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dcb31d;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_100dcb31d:
        local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        pQVar3 = (QArrayData *)QString::fromAscii_helper("[Bb][Oo][Oo][Tt]",0x10);
        local_c0 = PTR_shared_null_1021e15e8;
        local_c8 = pQVar3;
        FUN_1000341d0(&local_c0,&local_c8);
        QDir::entryList(&local_b8,local_a0,&local_c0,1,0xffffffff);
        FUN_100039a80(&local_c0);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dcb3bc;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100dcb3bc:
        local_e8 = local_b8;
        if (*local_b8 != -1) {
          if (*local_b8 == 0) {
            QListData::detach((int)&local_e8);
            iVar2 = local_e8[2];
            if (iVar2 != local_e8[3]) {
              piVar5 = local_b8 + (long)local_b8[2] * 2 + 4;
              piVar6 = local_e8 + (long)iVar2 * 2 + 4;
              lVar4 = (long)local_e8[3] * 8 + (long)iVar2 * -8;
              do {
                piVar1 = *(int **)piVar5;
                *(int **)piVar6 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_31 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar6 = piVar6 + 2;
                piVar5 = piVar5 + 2;
                lVar4 = lVar4 + -8;
              } while (lVar4 != 0);
            }
          }
          else {
            LOCK();
            *local_b8 = *local_b8 + 1;
            local_31 = *local_b8 != 0;
            UNLOCK();
          }
        }
        local_e0 = (QString *)(local_e8 + (long)local_e8[2] * 2 + 4);
        local_d8 = (QString *)(local_e8 + (long)local_e8[3] * 2 + 4);
        if (local_e8[2] != local_e8[3]) {
          do {
            local_d0 = 1;
            QString::operator=(&local_b0,local_e0);
            if (local_d0 != 0) {
              if (2 < DAT_10230ffd0) {
                QString::toUtf8();
                FUN_100df99c0("","HostUtils",3,"efiEntry: %s",local_f0 + *(long *)(local_f0 + 0x10))
                ;
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dcb530;
                  }
                  QArrayData::deallocate(local_f0,1,8);
                }
              }
LAB_100dcb530:
              QDir::filePath(&local_100);
              QDir::QDir(local_f8,&local_100);
              if (*(int *)local_100.field0_0x0 != -1) {
                if (*(int *)local_100.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                  local_31 = *(int *)local_100.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100dcb593;
                }
                QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
              }
LAB_100dcb593:
              local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
              pQVar3 = (QArrayData *)
                       QString::fromAscii_helper("[Bb][Oo][Oo][Tt][Xx]64.[Ee][Ff][Ii]",0x23);
              local_118 = PTR_shared_null_1021e15e8;
              local_120 = pQVar3;
              FUN_1000341d0(&local_118,&local_120);
              QDir::entryList(&local_110,local_f8,&local_118,2,0xffffffff);
              FUN_100039a80(&local_118);
              if (*(int *)pQVar3 != -1) {
                if (*(int *)pQVar3 != 0) {
                  LOCK();
                  *(int *)pQVar3 = *(int *)pQVar3 + -1;
                  local_31 = *(int *)pQVar3 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100dcb632;
                }
                QArrayData::deallocate(pQVar3,2,8);
              }
LAB_100dcb632:
              local_140 = local_110;
              if (*local_110 != -1) {
                if (*local_110 == 0) {
                  QListData::detach((int)&local_140);
                  iVar2 = local_140[2];
                  if (iVar2 != local_140[3]) {
                    piVar5 = local_110 + (long)local_110[2] * 2 + 4;
                    piVar6 = local_140 + (long)iVar2 * 2 + 4;
                    lVar4 = (long)local_140[3] * 8 + (long)iVar2 * -8;
                    do {
                      piVar1 = *(int **)piVar5;
                      *(int **)piVar6 = piVar1;
                      if (1 < *piVar1 + 1U) {
                        LOCK();
                        *piVar1 = *piVar1 + 1;
                        local_31 = *piVar1 != 0;
                        UNLOCK();
                      }
                      piVar6 = piVar6 + 2;
                      piVar5 = piVar5 + 2;
                      lVar4 = lVar4 + -8;
                    } while (lVar4 != 0);
                  }
                }
                else {
                  LOCK();
                  *local_110 = *local_110 + 1;
                  local_31 = *local_110 != 0;
                  UNLOCK();
                }
              }
              local_138 = (QString *)(local_140 + (long)local_140[2] * 2 + 4);
              local_130 = (QString *)(local_140 + (long)local_140[3] * 2 + 4);
              local_128 = 1;
              iVar2 = 0x16;
              if (local_140[2] != local_140[3]) {
                do {
                  local_128 = 1;
                  QString::operator=(&local_108,local_138);
                  if (local_128 != 0) {
                    iVar2 = 1;
                    if (DAT_10230ffd0 < 3) break;
                    QString::toUtf8();
                    FUN_100df99c0("","HostUtils",3,"bootEntry: %s",
                                  local_148 + *(long *)(local_148 + 0x10));
                    if (*(int *)local_148 == -1) break;
                    if (*(int *)local_148 != 0) {
                      LOCK();
                      *(int *)local_148 = *(int *)local_148 + -1;
                      local_31 = *(int *)local_148 != 0;
                      UNLOCK();
                      if ((bool)local_31) break;
                    }
                    QArrayData::deallocate(local_148,1,8);
                    break;
                  }
                  local_138 = local_138 + 1;
                  local_128 = 1;
                } while (local_138 != local_130);
              }
              FUN_100039a80(&local_140);
              FUN_100039a80(&local_110);
              if (*(int *)local_108.field0_0x0 != -1) {
                if (*(int *)local_108.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                  local_31 = *(int *)local_108.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100dcb80e;
                }
                QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
              }
LAB_100dcb80e:
              QDir::~QDir(local_f8);
              if (iVar2 != 0x16) goto LAB_100dcb859;
            }
            local_e0 = local_e0 + 1;
          } while (local_e0 != local_d8);
        }
        local_d0 = 1;
        iVar2 = 0xe;
LAB_100dcb859:
        FUN_100039a80(&local_e8);
        if (iVar2 == 0xe) {
          local_160 = (QArrayData *)QString::fromAscii_helper("[Uu][Bb][Uu][Nn][Tt][Uu]",0x18);
          local_158 = PTR_shared_null_1021e15e8;
          FUN_1000341d0(&local_158,&local_160);
          QDir::entryList(&local_150,local_a0,&local_158,1,0xffffffff);
          if (local_b8 != local_150) {
            local_40 = local_150;
            if (*local_150 != -1) {
              if (*local_150 == 0) {
                QListData::detach((int)&local_40);
                iVar2 = local_40[2];
                if (iVar2 != local_40[3]) {
                  piVar5 = local_150 + (long)local_150[2] * 2 + 4;
                  piVar6 = local_40 + (long)iVar2 * 2 + 4;
                  lVar4 = (long)local_40[3] * 8 + (long)iVar2 * -8;
                  do {
                    piVar1 = *(int **)piVar5;
                    *(int **)piVar6 = piVar1;
                    if (1 < *piVar1 + 1U) {
                      LOCK();
                      *piVar1 = *piVar1 + 1;
                      local_31 = *piVar1 != 0;
                      UNLOCK();
                    }
                    piVar6 = piVar6 + 2;
                    piVar5 = piVar5 + 2;
                    lVar4 = lVar4 + -8;
                  } while (lVar4 != 0);
                }
              }
              else {
                LOCK();
                *local_150 = *local_150 + 1;
                local_31 = *local_150 != 0;
                UNLOCK();
              }
            }
            piVar5 = local_40;
            local_40 = local_b8;
            local_b8 = piVar5;
            FUN_100039a80(&local_40);
          }
          FUN_100039a80(&local_150);
          FUN_100039a80(&local_158);
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dcb9c1;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_100dcb9c1:
          local_180 = local_b8;
          if (*local_b8 != -1) {
            if (*local_b8 == 0) {
              QListData::detach((int)&local_180);
              iVar2 = local_180[2];
              if (iVar2 != local_180[3]) {
                piVar5 = local_b8 + (long)local_b8[2] * 2 + 4;
                piVar6 = local_180 + (long)iVar2 * 2 + 4;
                lVar4 = (long)local_180[3] * 8 + (long)iVar2 * -8;
                do {
                  piVar1 = *(int **)piVar5;
                  *(int **)piVar6 = piVar1;
                  if (1 < *piVar1 + 1U) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    local_31 = *piVar1 != 0;
                    UNLOCK();
                  }
                  piVar6 = piVar6 + 2;
                  piVar5 = piVar5 + 2;
                  lVar4 = lVar4 + -8;
                } while (lVar4 != 0);
              }
            }
            else {
              LOCK();
              *local_b8 = *local_b8 + 1;
              local_31 = *local_b8 != 0;
              UNLOCK();
            }
          }
          local_178 = (QString *)(local_180 + (long)local_180[2] * 2 + 4);
          local_170 = (QString *)(local_180 + (long)local_180[3] * 2 + 4);
          if (local_180[2] != local_180[3]) {
            do {
              local_168 = 1;
              QString::operator=(&local_b0,local_178);
              if (local_168 != 0) {
                if (2 < DAT_10230ffd0) {
                  QString::toUtf8();
                  FUN_100df99c0("","HostUtils",3,"efiEntry: %s",
                                local_188 + *(long *)(local_188 + 0x10));
                  if (*(int *)local_188 != -1) {
                    if (*(int *)local_188 != 0) {
                      LOCK();
                      *(int *)local_188 = *(int *)local_188 + -1;
                      local_31 = *(int *)local_188 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dcbb30;
                    }
                    QArrayData::deallocate(local_188,1,8);
                  }
                }
LAB_100dcbb30:
                QDir::filePath(&local_198);
                QDir::QDir(local_190,&local_198);
                if (*(int *)local_198.field0_0x0 != -1) {
                  if (*(int *)local_198.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
                    local_31 = *(int *)local_198.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dcbb93;
                  }
                  QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
                }
LAB_100dcbb93:
                local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                pQVar3 = (QArrayData *)
                         QString::fromAscii_helper("[Gg][Rr][Uu][Bb][Xx]64.[Ee][Ff][Ii]",0x23);
                local_1b0 = PTR_shared_null_1021e15e8;
                local_1b8 = pQVar3;
                FUN_1000341d0(&local_1b0,&local_1b8);
                QDir::entryList(&local_1a8,local_190,&local_1b0,2,0xffffffff);
                FUN_100039a80(&local_1b0);
                if (*(int *)pQVar3 != -1) {
                  if (*(int *)pQVar3 != 0) {
                    LOCK();
                    *(int *)pQVar3 = *(int *)pQVar3 + -1;
                    local_31 = *(int *)pQVar3 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dcbc2d;
                  }
                  QArrayData::deallocate(pQVar3,2,8);
                }
LAB_100dcbc2d:
                local_1d8 = local_1a8;
                if (*local_1a8 != -1) {
                  if (*local_1a8 == 0) {
                    QListData::detach((int)&local_1d8);
                    iVar2 = local_1d8[2];
                    if (iVar2 != local_1d8[3]) {
                      piVar5 = local_1a8 + (long)local_1a8[2] * 2 + 4;
                      piVar6 = local_1d8 + (long)iVar2 * 2 + 4;
                      lVar4 = (long)local_1d8[3] * 8 + (long)iVar2 * -8;
                      do {
                        piVar1 = *(int **)piVar5;
                        *(int **)piVar6 = piVar1;
                        if (1 < *piVar1 + 1U) {
                          LOCK();
                          *piVar1 = *piVar1 + 1;
                          local_31 = *piVar1 != 0;
                          UNLOCK();
                        }
                        piVar6 = piVar6 + 2;
                        piVar5 = piVar5 + 2;
                        lVar4 = lVar4 + -8;
                      } while (lVar4 != 0);
                    }
                  }
                  else {
                    LOCK();
                    *local_1a8 = *local_1a8 + 1;
                    local_31 = *local_1a8 != 0;
                    UNLOCK();
                  }
                }
                local_1d0 = (QString *)(local_1d8 + (long)local_1d8[2] * 2 + 4);
                local_1c8 = (QString *)(local_1d8 + (long)local_1d8[3] * 2 + 4);
                local_1c0 = 1;
                iVar2 = 0x26;
                if (local_1d8[2] != local_1d8[3]) {
                  do {
                    local_1c0 = 1;
                    QString::operator=(&local_1a0,local_1d0);
                    if (local_1c0 != 0) {
                      iVar2 = 1;
                      if (DAT_10230ffd0 < 3) break;
                      QString::toUtf8();
                      FUN_100df99c0("","HostUtils",3,"bootEntry: %s",
                                    local_1e0 + *(long *)(local_1e0 + 0x10));
                      if (*(int *)local_1e0 == -1) break;
                      if (*(int *)local_1e0 != 0) {
                        LOCK();
                        *(int *)local_1e0 = *(int *)local_1e0 + -1;
                        local_31 = *(int *)local_1e0 != 0;
                        UNLOCK();
                        if ((bool)local_31) break;
                      }
                      QArrayData::deallocate(local_1e0,1,8);
                      break;
                    }
                    local_1d0 = local_1d0 + 1;
                    local_1c0 = 1;
                  } while (local_1d0 != local_1c8);
                }
                FUN_100039a80(&local_1d8);
                FUN_100039a80(&local_1a8);
                if (*(int *)local_1a0.field0_0x0 != -1) {
                  if (*(int *)local_1a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                    local_31 = *(int *)local_1a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dcbe1e;
                  }
                  QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
                }
LAB_100dcbe1e:
                QDir::~QDir(local_190);
                if (iVar2 != 0x26) goto LAB_100dcbe69;
              }
              local_178 = local_178 + 1;
            } while (local_178 != local_170);
          }
          local_168 = 1;
          iVar2 = 0x1e;
LAB_100dcbe69:
          FUN_100039a80(&local_180);
          if (iVar2 == 0x1e) {
            iVar2 = 0;
          }
        }
        FUN_100039a80(&local_b8);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dcbed1;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_100dcbed1:
        QDir::~QDir(local_a0);
        if (iVar2 != 0) goto LAB_100dcbf16;
      }
      local_88 = local_88 + 1;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  iVar2 = 6;
LAB_100dcbf16:
  FUN_100039a80(&local_90);
  FUN_100039a80(&local_60);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dcbf62;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100dcbf62:
  QDir::~QDir(local_50);
  return iVar2 != 6;
}

