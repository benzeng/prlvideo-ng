
int FUN_1005db1c0(QString *param_1,undefined8 param_2,long param_3,QString *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  QArrayData *pQVar4;
  long *plVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  QFileInfo local_150 [8];
  QArrayData *local_148;
  QFileInfo local_140 [8];
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QString local_120;
  QFileInfo local_118 [8];
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
  QString local_78;
  undefined4 local_70;
  int local_6c;
  long *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68 = (long *)0x0;
  iVar8 = FUN_1005da7e0();
  plVar5 = local_68;
  if (iVar8 < 0) goto LAB_1005db8d5;
  local_6c = 0;
  local_70 = 0;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar9 = 0;
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[2];
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
  local_88 = (QArrayData *)QString::fromAscii_helper("parentCID",9);
  lVar9 = FUN_1006aff80(lVar9,&local_80,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_59 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005db2a4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005db2a4:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_59 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005db2d4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005db2d4:
  if (lVar9 == 0) {
LAB_1005db81f:
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,
                  "Error: VMDK \'%s\' does not contain parentCID key,or values size is wrong or format is incorrect!"
                  ,local_90 + *(long *)(local_90 + 0x10));
    iVar8 = -0x7ffdd000;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_59 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1005db893;
      }
      QArrayData::deallocate(local_90,1,8);
    }
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x20);
    if ((*(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8) != 1) ||
       (*(int *)(*(long *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8) + 4) != 8))
    goto LAB_1005db81f;
    QString::toLatin1();
    if ((1 < *(uint *)local_98) || (*(long *)(local_98 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_98,*(uint *)(local_98 + 4) + 1,*(uint *)(local_98 + 8) >> 0x1f)
      ;
    }
    iVar8 = _sscanf((char *)(local_98 + *(long *)(local_98 + 0x10)),"%x",&local_6c);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_59 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1005db392;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1005db392:
    if (iVar8 == 1) {
      lVar9 = 0;
      if (plVar5 != (long *)0x0) {
        lVar9 = plVar5[2];
      }
      local_a8 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
      local_b0 = (QArrayData *)QString::fromAscii_helper("CID",3);
      lVar9 = FUN_1006aff80(lVar9,&local_a8,&local_b0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_59 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1005db425;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1005db425:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_59 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1005db45b;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1005db45b:
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x20);
        if ((*(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8) == 1) &&
           (*(int *)(*(long *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8) + 4) == 8)) {
          QString::toLatin1();
          if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_c0,*(uint *)(local_c0 + 4) + 1,*(uint *)(local_c0 + 8) >> 0x1f);
          }
          iVar8 = _sscanf((char *)(local_c0 + *(long *)(local_c0 + 0x10)),"%x",&local_70);
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_59 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_59) goto LAB_1005db519;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_1005db519:
          if (iVar8 == 1) {
            lVar9 = 0;
            if (plVar5 != (long *)0x0) {
              lVar9 = plVar5[2];
            }
            local_d0 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
            local_d8 = (QArrayData *)QString::fromAscii_helper("createType",10);
            lVar9 = FUN_1006aff80(lVar9,&local_d0,&local_d8);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_59 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005db5ac;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_1005db5ac:
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_59 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005db5e2;
              }
              QArrayData::deallocate(local_d0,2,8);
            }
LAB_1005db5e2:
            if (lVar9 != 0) {
              lVar2 = *(long *)(lVar9 + 0x20);
              if (*(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8) == 1) {
                lVar2 = *(long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
                iVar8 = QString::compare_helper
                                  (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                   "monolithicSparse",0xffffffff,1);
                uVar11 = 0x5b;
                if (iVar8 != 0) {
                  lVar2 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10 +
                                   (long)*(int *)(*(long *)(lVar9 + 0x20) + 8) * 8);
                  iVar8 = QString::compare_helper
                                    (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                     "monolithicFlat",0xffffffff,1);
                  uVar11 = 0x5a;
                  if (iVar8 != 0) {
                    lVar2 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10 +
                                     (long)*(int *)(*(long *)(lVar9 + 0x20) + 8) * 8);
                    iVar8 = QString::compare_helper
                                      (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                       "twoGbMaxExtentSparse",0xffffffff,1);
                    uVar11 = 0x5d;
                    if (iVar8 != 0) {
                      lVar2 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10 +
                                       (long)*(int *)(*(long *)(lVar9 + 0x20) + 8) * 8);
                      iVar8 = QString::compare_helper
                                        (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                                         "twoGbMaxExtentFlat",0xffffffff,1);
                      uVar11 = 0x5c;
                      if (iVar8 != 0) {
                        local_f0 = *(QArrayData **)
                                    (*(long *)(lVar9 + 0x20) + 0x10 +
                                    (long)*(int *)(*(long *)(lVar9 + 0x20) + 8) * 8);
                        if (1 < *(int *)local_f0 + 1U) {
                          LOCK();
                          *(int *)local_f0 = *(int *)local_f0 + 1;
                          local_59 = *(int *)local_f0 != 0;
                          UNLOCK();
                        }
                        QString::toLocal8Bit();
                        pQVar4 = local_e8;
                        lVar9 = *(long *)(local_e8 + 0x10);
                        QString::toUtf8();
                        FUN_1008e3970("","vdisk",0,
                                      "Error: unsupported create type \'%s\' of VMDK \'%s\'",
                                      pQVar4 + lVar9,local_f8 + *(long *)(local_f8 + 0x10));
                        if (*(int *)local_f8 != -1) {
                          if (*(int *)local_f8 != 0) {
                            LOCK();
                            *(int *)local_f8 = *(int *)local_f8 + -1;
                            local_59 = *(int *)local_f8 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1005db7a3;
                          }
                          QArrayData::deallocate(local_f8,1,8);
                        }
LAB_1005db7a3:
                        if (*(int *)local_e8 != -1) {
                          if (*(int *)local_e8 != 0) {
                            LOCK();
                            *(int *)local_e8 = *(int *)local_e8 + -1;
                            local_59 = *(int *)local_e8 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1005db7d9;
                          }
                          QArrayData::deallocate(local_e8,1,8);
                        }
LAB_1005db7d9:
                        iVar8 = -0x7ffdd000;
                        if (*(int *)local_f0 != -1) {
                          if (*(int *)local_f0 != 0) {
                            LOCK();
                            *(int *)local_f0 = *(int *)local_f0 + -1;
                            local_59 = *(int *)local_f0 != 0;
                            UNLOCK();
                            if ((bool)local_59) goto LAB_1005db893;
                          }
                          QArrayData::deallocate(local_f0,2,8);
                        }
                        goto LAB_1005db893;
                      }
                    }
                  }
                }
                lVar9 = 0;
                if (plVar5 != (long *)0x0) {
                  lVar9 = plVar5[2];
                }
                local_100 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
                local_108 = (QArrayData *)QString::fromAscii_helper("parentFileNameHint",0x12);
                lVar9 = FUN_1006aff80(lVar9,&local_100,&local_108);
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_59 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1005dbbaa;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_1005dbbaa:
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_59 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1005dbbe0;
                  }
                  QArrayData::deallocate(local_100,2,8);
                }
LAB_1005dbbe0:
                if (lVar9 != 0) {
                  lVar2 = *(long *)(lVar9 + 0x20);
                  if (*(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8) != 1) {
                    QString::toUtf8();
                    FUN_1008e3970("","vdisk",0,"Error: VMDK \'%s\' wrong parentFileNameHint format",
                                  local_110 + *(long *)(local_110 + 0x10));
                    iVar8 = -0x7ffdd000;
                    if (*(int *)local_110 != -1) {
                      if (*(int *)local_110 != 0) {
                        LOCK();
                        *(int *)local_110 = *(int *)local_110 + -1;
                        local_59 = *(int *)local_110 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1005db893;
                      }
                      QArrayData::deallocate(local_110,1,8);
                    }
                    goto LAB_1005db893;
                  }
                  QFileInfo::QFileInfo
                            (local_118,(QString *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8));
                  cVar6 = QFileInfo::isRelative();
                  if (cVar6 == '\0') {
                    QString::operator=(&local_78,
                                       (QString *)
                                       (*(long *)(lVar9 + 0x20) + 0x10 +
                                       (long)*(int *)(*(long *)(lVar9 + 0x20) + 8) * 8));
                  }
                  else {
                    QFileInfo::QFileInfo(local_140,param_1);
                    QFileInfo::absolutePath();
                    uVar7 = QDir::separator();
                    local_130 = local_138;
                    if (1 < *(uint *)local_138 + 1) {
                      LOCK();
                      *(uint *)local_138 = *(uint *)local_138 + 1;
                      local_59 = *(uint *)local_138 != 0;
                      UNLOCK();
                    }
                    uVar10 = *(uint *)(local_138 + 4);
                    if ((1 < *(uint *)local_138) ||
                       ((*(uint *)(local_138 + 8) & 0x7fffffff) < uVar10 + 2)) {
                      QString::reallocData((uint)&local_130,SUB41(uVar10 + 2,0));
                      uVar10 = *(uint *)(local_130 + 4);
                    }
                    *(uint *)(local_130 + 4) = uVar10 + 1;
                    *(undefined2 *)(local_130 + (long)(int)uVar10 * 2 + *(long *)(local_130 + 0x10))
                         = uVar7;
                    *(undefined2 *)
                     (local_130 +
                     (long)(int)*(uint *)(local_130 + 4) * 2 + *(long *)(local_130 + 0x10)) = 0;
                    if (1 < *(uint *)local_130 + 1) {
                      LOCK();
                      *(uint *)local_130 = *(uint *)local_130 + 1;
                      local_59 = *(uint *)local_130 != 0;
                      UNLOCK();
                    }
                    local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_130;
                    QString::append(&local_128);
                    QDir::fromNativeSeparators(&local_120);
                    QString::operator=(&local_78,&local_120);
                    if (*(int *)local_120.field0_0x0 != -1) {
                      if (*(int *)local_120.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                        local_59 = *(int *)local_120.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1005dbe08;
                      }
                      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                    }
LAB_1005dbe08:
                    if (*(int *)local_128.field0_0x0 != -1) {
                      if (*(int *)local_128.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                        local_59 = *(int *)local_128.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1005dbe3e;
                      }
                      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                    }
LAB_1005dbe3e:
                    if (*(int *)local_130 != -1) {
                      if (*(int *)local_130 != 0) {
                        LOCK();
                        *(int *)local_130 = *(int *)local_130 + -1;
                        local_59 = *(int *)local_130 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1005dbe74;
                      }
                      QArrayData::deallocate(local_130,2,8);
                    }
LAB_1005dbe74:
                    if (*(int *)local_138 != -1) {
                      if (*(int *)local_138 != 0) {
                        LOCK();
                        *(int *)local_138 = *(int *)local_138 + -1;
                        local_59 = *(int *)local_138 != 0;
                        UNLOCK();
                        if ((bool)local_59) goto LAB_1005dbeaa;
                      }
                      QArrayData::deallocate(local_138,2,8);
                    }
LAB_1005dbeaa:
                    QFileInfo::~QFileInfo(local_140);
                  }
                  QFileInfo::~QFileInfo(local_118);
                }
                if ((local_6c == -1) || (*(int *)(local_78.field0_0x0 + 4) != 0)) {
                  QFileInfo::QFileInfo(local_150,param_1);
                  QFileInfo::operator=((QFileInfo *)(param_3 + 0x208),local_150);
                  QFileInfo::~QFileInfo(local_150);
                  if (plVar5 != (long *)0x0) {
                    LOCK();
                    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                    UNLOCK();
                  }
                  plVar3 = *(long **)(param_3 + 0x200);
                  *(long **)(param_3 + 0x200) = plVar5;
                  if (plVar3 != (long *)0x0) {
                    LOCK();
                    plVar1 = plVar3 + 1;
                    lVar9 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)(*plVar3 + 0x10))();
                    }
                  }
                  *(long *)(param_3 + 0x238) = *(long *)(param_3 + 0x1c) << 9;
                  *(undefined4 *)(param_3 + 0x210) = local_70;
                  *(int *)(param_3 + 0x214) = local_6c;
                  FUN_1005dad30(&local_48,param_1);
                  *(undefined8 *)(param_3 + 0x220) = local_40;
                  *(undefined8 *)(param_3 + 0x218) = local_48;
                  FUN_1005dad30(&local_58,&local_78);
                  *(undefined8 *)(param_3 + 0x230) = local_50;
                  *(undefined8 *)(param_3 + 0x228) = local_58;
                  *(undefined4 *)(param_3 + 0x240) = uVar11;
                  iVar8 = 0;
                  QString::operator=(param_4,&local_78);
                }
                else {
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,
                                "Error: VMDK \'%s\' can\'t find parentFileNameHint line, but parentCID is not CID_NOPARENT, incorrect format"
                                ,local_148 + *(long *)(local_148 + 0x10));
                  iVar8 = -0x7ffdd000;
                  if (*(int *)local_148 != -1) {
                    if (*(int *)local_148 != 0) {
                      LOCK();
                      *(int *)local_148 = *(int *)local_148 + -1;
                      local_59 = *(int *)local_148 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005db893;
                    }
                    QArrayData::deallocate(local_148,1,8);
                  }
                }
                goto LAB_1005db893;
              }
            }
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,
                          "Error: can\'t find createType in root VMDK \'%s\', incorrect format!",
                          local_e0 + *(long *)(local_e0 + 0x10));
            iVar8 = -0x7ffdd000;
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_59 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005db893;
              }
              QArrayData::deallocate(local_e0,1,8);
            }
          }
          else {
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,"Error: VMDK \'%s\' wrong CID format",
                          local_c8 + *(long *)(local_c8 + 0x10));
            iVar8 = -0x7ffdd000;
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_59 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005db893;
              }
              QArrayData::deallocate(local_c8,1,8);
            }
          }
          goto LAB_1005db893;
        }
      }
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,
                    "Error: VMDK \'%s\' does not contain CID key,or values size is wrong or format is incorrect!"
                    ,local_b8 + *(long *)(local_b8 + 0x10));
      iVar8 = -0x7ffdd000;
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_59 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1005db893;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: VMDK \'%s\' wrong ParentCID format",
                    local_a0 + *(long *)(local_a0 + 0x10));
      iVar8 = -0x7ffdd000;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_59 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1005db893;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
    }
  }
LAB_1005db893:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_59 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005db8d5;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005db8d5:
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

