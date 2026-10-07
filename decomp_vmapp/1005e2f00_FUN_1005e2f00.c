
/* WARNING: Type propagation algorithm not settling */

int FUN_1005e2f00(long *param_1,undefined8 param_2,uint param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *******ppppppplVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  QFileInfo *pQVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *plVar15;
  QArrayData *pQVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  QArrayData *pQVar20;
  bool bVar21;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  undefined *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  undefined *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  long *local_168;
  long *local_160;
  long local_158;
  undefined8 local_150;
  QString local_148;
  QArrayData *local_140;
  Data *local_138;
  Data *local_130;
  Data *local_128;
  Data *local_120;
  int local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QDir local_f8 [8];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  long *******local_c8;
  long *******local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  long *local_a8;
  long *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_51;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar19;
  QMutex::lock();
  (**(code **)(*param_1 + 0x28))(param_1);
  QDir::fromNativeSeparators(&local_78);
  local_80 = (QArrayData *)QString::fromAscii_helper("/",1);
  iVar7 = QString::lastIndexOf(&local_78,&local_80,0xffffffff,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_51 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_1005e2fba;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005e2fba:
  if (iVar7 == -1) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: wrong disk path \'%s\' of VMware descriptor ",
                  local_88 + *(long *)(local_88 + 0x10));
    iVar7 = -0x7ffffffd;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_51 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e45d8;
      }
      QArrayData::deallocate(local_88,1,8);
    }
  }
  else {
    QString::left((int)&local_90);
    QString::right((int)&local_98);
    local_a0 = (long *)0x0;
    local_a8 = (long *)0x0;
    local_ac = 0;
    local_c8 = (long *******)&local_c0;
    local_b8 = 0;
    local_c0 = (long *******)0x0;
    local_d8 = (QArrayData *)QString::fromAscii_helper("((-\\d{6})?\\.vmdk)$",0x12);
    QRegExp::QRegExp((QRegExp *)&local_d0,&local_d8,1,0);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_51 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e309c;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1005e309c:
    local_e8 = local_98;
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_51 = *(int *)local_98 != 0;
      UNLOCK();
    }
    local_70 = (QArrayData *)PTR_shared_null_100ba20d0;
    puVar10 = (undefined8 *)QString::replace((QRegExp *)&local_e8,&local_d0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_51 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e3110;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005e3110:
    QRegExp::pattern();
    local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar10;
    if (1 < *(int *)local_e0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
      local_51 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_e0);
    QRegExp::setPattern(&local_d0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_51 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e319a;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_1005e319a:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_51 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e31d0;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1005e31d0:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_51 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e320d;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1005e320d:
    QDir::QDir(local_f8,&local_90);
    QDir::setFilter(local_f8,0x6002);
    QDir::setSorting(local_f8,0);
    plVar3 = param_1 + 4;
    iVar7 = FUN_1005dda50(&local_78,param_3,plVar3,0,&local_a0,&local_a8);
    if (-1 < iVar7) {
      if ((local_a0 == (long *)0x0) || (local_a0[2] == 0)) {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,
                      "Error: can\'t find root snapshot for VMDK \'%s\', incorrect format!",
                      local_100 + *(long *)(local_100 + 0x10));
        iVar7 = -0x7ffdd000;
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_51 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1005e44c7;
          }
          QArrayData::deallocate(local_100,1,8);
        }
      }
      else {
        plVar11 = (long *)param_1[4];
        while (plVar11 != param_1 + 5) {
          QFileInfo::fileName();
          QFileInfo::fileName();
          pQVar20 = local_108;
          pQVar16 = local_110;
          if (1 < *(int *)local_108 + 1U) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + 1;
            local_51 = *(int *)local_108 != 0;
            UNLOCK();
          }
          if (1 < *(int *)local_110 + 1U) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + 1;
            local_51 = *(int *)local_110 != 0;
            UNLOCK();
          }
          if (1 < *(int *)local_108 + 1U) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + 1;
            local_51 = *(int *)local_108 != 0;
            UNLOCK();
          }
          if (1 < *(int *)local_110 + 1U) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + 1;
            local_51 = *(int *)local_110 != 0;
            UNLOCK();
          }
          local_68 = local_108;
          if (1 < *(int *)local_108 + 1U) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + 1;
            local_51 = *(int *)local_108 != 0;
            UNLOCK();
          }
          local_60 = local_110;
          if (1 < *(int *)local_110 + 1U) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + 1;
            local_51 = *(int *)local_110 != 0;
            UNLOCK();
          }
          FUN_1005d6500(&local_c8,&local_68);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_51 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e33cf;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1005e33cf:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_51 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e33ff;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_1005e33ff:
          if (*(int *)pQVar16 != -1) {
            if (*(int *)pQVar16 != 0) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              local_51 = *(int *)pQVar16 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e342e;
            }
            QArrayData::deallocate(pQVar16,2,8);
          }
LAB_1005e342e:
          if (*(int *)pQVar20 != -1) {
            if (*(int *)pQVar20 != 0) {
              LOCK();
              *(int *)pQVar20 = *(int *)pQVar20 + -1;
              local_51 = *(int *)pQVar20 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e345b;
            }
            QArrayData::deallocate(pQVar20,2,8);
          }
LAB_1005e345b:
          if (*(int *)pQVar16 != -1) {
            if (*(int *)pQVar16 != 0) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              local_51 = *(int *)pQVar16 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e348a;
            }
            QArrayData::deallocate(pQVar16,2,8);
          }
LAB_1005e348a:
          if (*(int *)pQVar20 != -1) {
            if (*(int *)pQVar20 != 0) {
              LOCK();
              *(int *)pQVar20 = *(int *)pQVar20 + -1;
              local_51 = *(int *)pQVar20 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e34b7;
            }
            QArrayData::deallocate(pQVar20,2,8);
          }
LAB_1005e34b7:
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_51 = *(int *)local_110 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e34f4;
            }
            QArrayData::deallocate(local_110,2,8);
          }
LAB_1005e34f4:
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_51 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_51) goto LAB_1005e352a;
            }
            QArrayData::deallocate(local_108,2,8);
          }
LAB_1005e352a:
          plVar2 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            do {
              plVar2 = (long *)plVar11[2];
              bVar21 = (long *)*plVar2 != plVar11;
              plVar11 = plVar2;
            } while (bVar21);
          }
          else {
            do {
              plVar11 = plVar2;
              plVar2 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        }
        QDir::entryInfoList(&local_138,local_f8,0xffffffff,0xffffffff);
        FUN_10005a020(&local_130,&local_138);
        local_128 = local_130 + (long)*(int *)(local_130 + 8) * 8 + 0x10;
        local_120 = local_130 + (long)*(int *)(local_130 + 0xc) * 8 + 0x10;
        local_118 = 1;
        if (*(int *)local_138 == -1) {
LAB_1005e37b8:
          for (; local_128 != local_120; local_128 = local_128 + 8) {
            QFileInfo::fileName();
            cVar6 = QRegExp::exactMatch(&local_d0);
            if (*(int *)local_140 != -1) {
              if (*(int *)local_140 != 0) {
                LOCK();
                *(int *)local_140 = *(int *)local_140 + -1;
                local_51 = *(int *)local_140 != 0;
                UNLOCK();
                if ((bool)local_51) goto LAB_1005e381f;
              }
              QArrayData::deallocate(local_140,2,8);
            }
LAB_1005e381f:
            if (cVar6 != '\0') {
              QFileInfo::fileName();
              ppppppplVar5 = local_c0;
              ppppppplVar14 = (long *******)&local_c0;
              if (local_c0 == (long *******)0x0) {
LAB_1005e389f:
                ppppppplVar14 = (long *******)&local_c0;
              }
              else {
                do {
                  while (ppppppplVar13 = ppppppplVar5,
                        cVar6 = operator<((QString *)(ppppppplVar13 + 4),&local_148), cVar6 != '\0')
                  {
                    ppppppplVar5 = (long *******)ppppppplVar13[1];
                    if ((long *******)ppppppplVar13[1] == (long *******)0x0) goto LAB_1005e387f;
                  }
                  ppppppplVar14 = ppppppplVar13;
                  ppppppplVar5 = (long *******)*ppppppplVar13;
                } while ((long *******)*ppppppplVar13 != (long *******)0x0);
LAB_1005e387f:
                if (((long ********)ppppppplVar14 == &local_c0) ||
                   (cVar6 = operator<(&local_148,(QString *)(ppppppplVar14 + 4)), cVar6 != '\0'))
                goto LAB_1005e389f;
              }
              if (*(int *)local_148.field0_0x0 != -1) {
                if (*(int *)local_148.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                  local_51 = *(int *)local_148.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_51) goto LAB_1005e38e3;
                }
                QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
              }
LAB_1005e38e3:
              if (&local_c0 == (long ********)ppppppplVar14) {
                local_160 = &local_158;
                local_150 = 0;
                local_158 = 0;
                local_168 = (long *)0x0;
                QFileInfo::absoluteFilePath();
                iVar7 = FUN_1005dda50(&local_170,param_3,&local_160,plVar3,&local_168,0);
                if (*(int *)local_170 != -1) {
                  if (*(int *)local_170 != 0) {
                    LOCK();
                    *(int *)local_170 = *(int *)local_170 + -1;
                    local_51 = *(int *)local_170 != 0;
                    UNLOCK();
                    if ((bool)local_51) goto LAB_1005e3990;
                  }
                  QArrayData::deallocate(local_170,2,8);
                }
LAB_1005e3990:
                iVar8 = 0;
                if (-1 < iVar7) {
                  lVar19 = 0;
                  if (local_168 != (long *)0x0) {
                    lVar19 = local_168[2];
                  }
                  lVar18 = 0;
                  if (local_a8 != (long *)0x0) {
                    lVar18 = local_a8[2];
                  }
                  iVar8 = FUN_1007ea6f0(lVar19 + 0x228,lVar18 + 0x218);
                  if (iVar8 == 0) {
                    QString::toUtf8();
                    pQVar20 = local_178 + *(long *)(local_178 + 0x10);
                    QFileInfo::absoluteFilePath();
                    QString::toUtf8();
                    pQVar16 = local_180 + *(long *)(local_180 + 0x10);
                    QFileInfo::absoluteFilePath();
                    QString::toUtf8();
                    FUN_1008e3970("","vdisk",0,
                                  "Error: disk \'%s\' is being opened in the middle of states path. Current VMDK \'%s\' has successor VMDK \'%s\'"
                                  ,pQVar20,pQVar16,local_190 + *(long *)(local_190 + 0x10));
                    if (*(int *)local_190 != -1) {
                      if (*(int *)local_190 != 0) {
                        LOCK();
                        *(int *)local_190 = *(int *)local_190 + -1;
                        local_51 = *(int *)local_190 != 0;
                        UNLOCK();
                        if ((bool)local_51) goto LAB_1005e3ba9;
                      }
                      QArrayData::deallocate(local_190,1,8);
                    }
LAB_1005e3ba9:
                    if (*(int *)local_198 != -1) {
                      if (*(int *)local_198 != 0) {
                        LOCK();
                        *(int *)local_198 = *(int *)local_198 + -1;
                        local_51 = *(int *)local_198 != 0;
                        UNLOCK();
                        if ((bool)local_51) goto LAB_1005e3bdf;
                      }
                      QArrayData::deallocate(local_198,2,8);
                    }
LAB_1005e3bdf:
                    if (*(int *)local_180 != -1) {
                      if (*(int *)local_180 != 0) {
                        LOCK();
                        *(int *)local_180 = *(int *)local_180 + -1;
                        local_51 = *(int *)local_180 != 0;
                        UNLOCK();
                        if ((bool)local_51) goto LAB_1005e3c15;
                      }
                      QArrayData::deallocate(local_180,1,8);
                    }
LAB_1005e3c15:
                    if (*(int *)local_188 != -1) {
                      if (*(int *)local_188 != 0) {
                        LOCK();
                        *(int *)local_188 = *(int *)local_188 + -1;
                        local_51 = *(int *)local_188 != 0;
                        UNLOCK();
                        if ((bool)local_51) goto LAB_1005e3c4b;
                      }
                      QArrayData::deallocate(local_188,2,8);
                    }
LAB_1005e3c4b:
                    iVar8 = 6;
                    iVar7 = -0x7ffffffd;
                    if (*(int *)local_178 != -1) {
                      if (*(int *)local_178 != 0) {
                        LOCK();
                        *(int *)local_178 = *(int *)local_178 + -1;
                        local_51 = *(int *)local_178 != 0;
                        UNLOCK();
                        if ((bool)local_51) goto LAB_1005e3d16;
                      }
                      QArrayData::deallocate(local_178,1,8);
                    }
                  }
                  else {
                    plVar11 = local_160;
                    if (local_160 == &local_158) {
                      iVar8 = 0;
                    }
                    else {
                      do {
                        local_40 = (long *)plVar11[6];
                        if (local_40 != (long *)0x0) {
                          LOCK();
                          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
                          UNLOCK();
                        }
                        local_50 = plVar11[4];
                        local_48 = plVar11[5];
                        FUN_1005f2f10(plVar3,param_1 + 5,&local_50);
                        if (local_40 != (long *)0x0) {
                          LOCK();
                          plVar2 = local_40 + 1;
                          lVar19 = *plVar2;
                          *(int *)plVar2 = (int)*plVar2 + -1;
                          UNLOCK();
                          if ((int)lVar19 == 1) {
                            (**(code **)(*local_40 + 0x10))();
                          }
                        }
                        plVar2 = (long *)plVar11[1];
                        if ((long *)plVar11[1] == (long *)0x0) {
                          do {
                            plVar15 = (long *)plVar11[2];
                            bVar21 = (long *)*plVar15 != plVar11;
                            plVar11 = plVar15;
                          } while (bVar21);
                        }
                        else {
                          do {
                            plVar15 = plVar2;
                            plVar2 = (long *)*plVar15;
                          } while ((long *)*plVar15 != (long *)0x0);
                        }
                        plVar11 = plVar15;
                      } while (plVar15 != &local_158);
                      iVar8 = 0;
                    }
                  }
                }
LAB_1005e3d16:
                if (local_168 != (long *)0x0) {
                  LOCK();
                  plVar11 = local_168 + 1;
                  lVar19 = *plVar11;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)lVar19 == 1) {
                    (**(code **)(*local_168 + 0x10))();
                  }
                }
                FUN_1005f29c0(&local_160,local_158);
                if (iVar8 != 0) goto LAB_1005e3d63;
              }
            }
            local_118 = 1;
          }
          iVar8 = 0xc;
        }
        else {
          if (*(int *)local_138 == 0) {
LAB_1005e3732:
            iVar8 = *(int *)(local_138 + 0xc);
            if (iVar8 != *(int *)(local_138 + 8)) {
              lVar19 = (long)*(int *)(local_138 + 8) * 8 + (long)iVar8 * -8;
              pQVar12 = (QFileInfo *)(local_138 + (long)iVar8 * 8 + 8);
              do {
                QFileInfo::~QFileInfo(pQVar12);
                pQVar12 = pQVar12 + -8;
                lVar19 = lVar19 + 8;
              } while (lVar19 != 0);
            }
            QListData::dispose(local_138);
          }
          else {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_51 = *(int *)local_138 != 0;
            UNLOCK();
            if (!(bool)local_51) goto LAB_1005e3732;
          }
          iVar8 = 0xc;
          if (local_118 != 0) goto LAB_1005e37b8;
        }
LAB_1005e3d63:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_51 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_51) goto LAB_1005e3ea7;
          }
          iVar1 = *(int *)(local_130 + 0xc);
          if (iVar1 != *(int *)(local_130 + 8)) {
            lVar19 = (long)*(int *)(local_130 + 8) * 8 + (long)iVar1 * -8;
            pQVar12 = (QFileInfo *)(local_130 + (long)iVar1 * 8 + 8);
            do {
              QFileInfo::~QFileInfo(pQVar12);
              pQVar12 = pQVar12 + -8;
              lVar19 = lVar19 + 8;
            } while (lVar19 != 0);
          }
          QListData::dispose(local_130);
        }
LAB_1005e3ea7:
        if (iVar8 != 6) {
          if (iVar8 != 0xc) goto LAB_1005e44ef;
          iVar7 = FUN_1005de420(param_3,&local_a0,plVar3,param_4,&local_ac);
          if (-1 < iVar7) {
            if ((param_3 & 2) != 0) {
              local_1a0 = (QArrayData *)PTR_shared_null_100ba20d0;
              local_1a8 = (QArrayData *)PTR_shared_null_100ba20d0;
              local_1b0 = (QArrayData *)PTR_shared_null_100ba20d0;
              uVar9 = FUN_10069f960(&local_1a0,&local_1a8,&local_1b0);
              lVar19 = local_a8[2];
              *(undefined4 *)(lVar19 + 0x210) = uVar9;
              lVar19 = *(long *)(lVar19 + 0x200);
              uVar17 = 0;
              if (lVar19 != 0) {
                uVar17 = *(undefined8 *)(lVar19 + 0x10);
              }
              local_1b8 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
              local_1c0 = (QArrayData *)QString::fromAscii_helper("CID",3);
              puVar4 = PTR_shared_null_100ba2188;
              local_1c8 = PTR_shared_null_100ba2188;
              FUN_10000c490(&local_1c8,&local_1a0);
              cVar6 = FUN_1006ad450(uVar17,&local_1b8,&local_1c0,&local_1c8);
              FUN_100013180(&local_1c8);
              if (*(int *)local_1c0 != -1) {
                if (*(int *)local_1c0 != 0) {
                  LOCK();
                  *(int *)local_1c0 = *(int *)local_1c0 + -1;
                  local_51 = *(int *)local_1c0 != 0;
                  UNLOCK();
                  if ((bool)local_51) goto LAB_1005e4004;
                }
                QArrayData::deallocate(local_1c0,2,8);
              }
LAB_1005e4004:
              if (*(int *)local_1b8 != -1) {
                if (*(int *)local_1b8 != 0) {
                  LOCK();
                  *(int *)local_1b8 = *(int *)local_1b8 + -1;
                  local_51 = *(int *)local_1b8 != 0;
                  UNLOCK();
                  if ((bool)local_51) goto LAB_1005e403a;
                }
                QArrayData::deallocate(local_1b8,2,8);
              }
LAB_1005e403a:
              if (cVar6 == '\0') {
                QFileInfo::absoluteFilePath();
                QString::toUtf8();
                FUN_1008e3970("","vdisk",0,"Error: can\'t set CID for VMDK \'%s\'",
                              local_1d0 + *(long *)(local_1d0 + 0x10));
                if (*(int *)local_1d0 != -1) {
                  if (*(int *)local_1d0 != 0) {
                    LOCK();
                    *(int *)local_1d0 = *(int *)local_1d0 + -1;
                    local_51 = *(int *)local_1d0 != 0;
                    UNLOCK();
                    if ((bool)local_51) goto LAB_1005e4712;
                  }
                  QArrayData::deallocate(local_1d0,1,8);
                }
LAB_1005e4712:
                iVar8 = 6;
                iVar7 = -0x7ffdefdb;
                if (*(int *)local_1d8 != -1) {
                  if (*(int *)local_1d8 != 0) {
                    LOCK();
                    *(int *)local_1d8 = *(int *)local_1d8 + -1;
                    local_51 = *(int *)local_1d8 != 0;
                    UNLOCK();
                    if ((bool)local_51) goto LAB_1005e4862;
                  }
                  QArrayData::deallocate(local_1d8,2,8);
                }
              }
              else {
                uVar17 = 0;
                if (*(long *)(local_a8[2] + 0x200) != 0) {
                  uVar17 = *(undefined8 *)(*(long *)(local_a8[2] + 0x200) + 0x10);
                }
                local_1e0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                local_1e8 = (QArrayData *)QString::fromAscii_helper("ddb.longContentID",0x11);
                local_1f0 = puVar4;
                FUN_10000c490(&local_1f0,&local_1a8);
                cVar6 = FUN_1006ad450(uVar17,&local_1e0,&local_1e8,&local_1f0);
                FUN_100013180(&local_1f0);
                if (*(int *)local_1e8 != -1) {
                  if (*(int *)local_1e8 != 0) {
                    LOCK();
                    *(int *)local_1e8 = *(int *)local_1e8 + -1;
                    local_51 = *(int *)local_1e8 != 0;
                    UNLOCK();
                    if ((bool)local_51) goto LAB_1005e410a;
                  }
                  QArrayData::deallocate(local_1e8,2,8);
                }
LAB_1005e410a:
                if (*(int *)local_1e0 != -1) {
                  if (*(int *)local_1e0 != 0) {
                    LOCK();
                    *(int *)local_1e0 = *(int *)local_1e0 + -1;
                    local_51 = *(int *)local_1e0 != 0;
                    UNLOCK();
                    if ((bool)local_51) goto LAB_1005e4140;
                  }
                  QArrayData::deallocate(local_1e0,2,8);
                }
LAB_1005e4140:
                if (cVar6 == '\0') {
                  QFileInfo::absoluteFilePath();
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error: can\'t set ddb.longContentID for VMDK \'%s\'",
                                local_1f8 + *(long *)(local_1f8 + 0x10));
                  if (*(int *)local_1f8 != -1) {
                    if (*(int *)local_1f8 != 0) {
                      LOCK();
                      *(int *)local_1f8 = *(int *)local_1f8 + -1;
                      local_51 = *(int *)local_1f8 != 0;
                      UNLOCK();
                      if ((bool)local_51) goto LAB_1005e4821;
                    }
                    QArrayData::deallocate(local_1f8,1,8);
                  }
LAB_1005e4821:
                  iVar8 = 6;
                  iVar7 = -0x7ffdefdb;
                  if (*(int *)local_200 != -1) {
                    if (*(int *)local_200 != 0) {
                      LOCK();
                      *(int *)local_200 = *(int *)local_200 + -1;
                      local_51 = *(int *)local_200 != 0;
                      UNLOCK();
                      if ((bool)local_51) goto LAB_1005e4862;
                    }
                    QArrayData::deallocate(local_200,2,8);
                  }
                }
                else {
                  iVar7 = FUN_1005da290(&local_a8);
                  iVar8 = 0;
                  if (-1 < iVar7) goto LAB_1005e4862;
                  QFileInfo::absoluteFilePath();
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error: save of current VMDK \'%s\' failed [%x]",
                                local_208 + *(long *)(local_208 + 0x10),iVar7);
                  if (*(int *)local_208 != -1) {
                    if (*(int *)local_208 != 0) {
                      LOCK();
                      *(int *)local_208 = *(int *)local_208 + -1;
                      local_51 = *(int *)local_208 != 0;
                      UNLOCK();
                      if ((bool)local_51) goto LAB_1005e41ff;
                    }
                    QArrayData::deallocate(local_208,1,8);
                  }
LAB_1005e41ff:
                  iVar8 = 6;
                  if (*(int *)local_210 != -1) {
                    if (*(int *)local_210 != 0) {
                      LOCK();
                      *(int *)local_210 = *(int *)local_210 + -1;
                      local_51 = *(int *)local_210 != 0;
                      UNLOCK();
                      if ((bool)local_51) goto LAB_1005e4862;
                    }
                    QArrayData::deallocate(local_210,2,8);
                  }
                }
              }
LAB_1005e4862:
              if (*(int *)local_1b0 != -1) {
                if (*(int *)local_1b0 != 0) {
                  LOCK();
                  *(int *)local_1b0 = *(int *)local_1b0 + -1;
                  local_51 = *(int *)local_1b0 != 0;
                  UNLOCK();
                  if ((bool)local_51) goto LAB_1005e4898;
                }
                QArrayData::deallocate(local_1b0,2,8);
              }
LAB_1005e4898:
              if (*(int *)local_1a8 != -1) {
                if (*(int *)local_1a8 != 0) {
                  LOCK();
                  *(int *)local_1a8 = *(int *)local_1a8 + -1;
                  local_51 = *(int *)local_1a8 != 0;
                  UNLOCK();
                  if ((bool)local_51) goto LAB_1005e48ce;
                }
                QArrayData::deallocate(local_1a8,2,8);
              }
LAB_1005e48ce:
              if (*(int *)local_1a0 != -1) {
                if (*(int *)local_1a0 != 0) {
                  LOCK();
                  *(int *)local_1a0 = *(int *)local_1a0 + -1;
                  local_51 = *(int *)local_1a0 != 0;
                  UNLOCK();
                  if ((bool)local_51) goto LAB_1005e4904;
                }
                QArrayData::deallocate(local_1a0,2,8);
              }
LAB_1005e4904:
              if (iVar8 != 0) {
                if (iVar8 != 6) goto LAB_1005e44ef;
                goto LAB_1005e44c7;
              }
            }
            *(char *)(param_1 + 0xc) = (char)((param_3 & 2) >> 1);
            if (local_a8 != (long *)0x0) {
              LOCK();
              *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
              UNLOCK();
            }
            plVar3 = (long *)param_1[0xd];
            param_1[0xd] = (long)local_a8;
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar11 = plVar3 + 1;
              lVar19 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)(*plVar3 + 0x10))();
              }
            }
            if (local_a0 != (long *)0x0) {
              LOCK();
              *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
              UNLOCK();
            }
            plVar3 = (long *)param_1[0xe];
            param_1[0xe] = (long)local_a0;
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar11 = plVar3 + 1;
              lVar19 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)(*plVar3 + 0x10))();
              }
            }
            QString::operator=((QString *)(param_1 + 0xf),(QString *)(param_4 + 0x48));
            *(undefined4 *)(param_1 + 0x10) = local_ac;
            iVar7 = 0;
            goto LAB_1005e44ef;
          }
        }
      }
LAB_1005e44c7:
      FUN_1005f29c0(plVar3,param_1[5]);
      param_1[6] = 0;
      param_1[4] = (long)(param_1 + 5);
      param_1[5] = 0;
    }
LAB_1005e44ef:
    QDir::~QDir(local_f8);
    lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
    QRegExp::~QRegExp((QRegExp *)&local_d0);
    FUN_100603590(&local_c8,local_c0);
    if (local_a8 != (long *)0x0) {
      LOCK();
      plVar3 = local_a8 + 1;
      lVar18 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    if (local_a0 != (long *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      lVar18 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_51 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e45a2;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1005e45a2:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_51 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_51) goto LAB_1005e45d8;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
LAB_1005e45d8:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_51 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_1005e4608;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005e4608:
  QMutex::unlock();
  if (lVar19 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

