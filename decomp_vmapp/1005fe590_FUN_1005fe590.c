
undefined4 FUN_1005fe590(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
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
  char local_c1;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  char local_7a;
  undefined1 local_79;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QFileInfo::completeBaseName();
  QString::QString(&local_90,0x2e);
  QString::section(&local_98,&local_a0,&local_90,0xffffffff,0xffffffff,0);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_79 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005fe636;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1005fe636:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_79 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005fe66c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005fe66c:
  QFileInfo::completeBaseName();
  QString::QString(&local_88,0x2e);
  QString::section(&local_a8,&local_b0,&local_88,0xfffffffe,0xfffffffe,0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_79 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005fe6de;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1005fe6de:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_79 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005fe714;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005fe714:
  if ((*(int *)(local_98 + 4) == 0) || (*(int *)(local_a8 + 4) == 0)) {
    uVar5 = FUN_1005fe400();
    if (2 < DAT_1011b55f8) {
      QFileInfo::fileName();
      QString::toUtf8();
      FUN_1008e3970("Backup","vdisk",3,
                    "Wrong file name structure, add as unknown file [%s], err = 0x%X",
                    local_b8 + *(long *)(local_b8 + 0x10),uVar5);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_79 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005fea17;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_1005fea17:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_79 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005ff076;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
    }
  }
  else {
    local_c1 = '\0';
    uVar4 = QString::toUInt((bool *)&local_a8,(int)&local_c1);
    FUN_1007d6920(local_58,&local_98);
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("Backup","vdisk",3,"snapshot id: %s",local_d0 + *(long *)(local_d0 + 0x10));
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_79 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005fe7ef;
        }
        QArrayData::deallocate(local_d0,1,8);
      }
LAB_1005fe7ef:
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("Backup","vdisk",3,"part #: %u [%s]",uVar4,
                      local_d8 + *(long *)(local_d8 + 0x10));
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_79 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1005fe86e;
          }
          QArrayData::deallocate(local_d8,1,8);
        }
      }
    }
LAB_1005fe86e:
    bVar2 = FUN_1007ea210(local_58);
    if ((bVar2 | local_c1 == '\0') == 1) {
      uVar5 = FUN_1005fe400();
      if (DAT_1011b55f8 < 3) goto LAB_1005ff076;
      QFileInfo::fileName();
      QString::toUtf8();
      FUN_1008e3970("Backup","vdisk",3,
                    "Unable to parse file name, add as unknown file [%s], err = 0x%X",
                    local_e0 + *(long *)(local_e0 + 0x10),uVar5);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_79 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005fe92f;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_1005fe92f:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_79 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1005ff076;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
    }
    else {
      local_7a = '\0';
      (**(code **)(**(long **)(param_1[1] + 0x10) + 0xb8))
                (local_48,*(long **)(param_1[1] + 0x10),local_58,&local_7a);
      if (local_7a == '\0') {
        uVar5 = FUN_1005fe400();
        if (DAT_1011b55f8 < 3) goto LAB_1005ff076;
        QFileInfo::fileName();
        QString::toUtf8();
        FUN_1008e3970("Backup","vdisk",3,
                      "Is absent in snapshot tree, add as unknown file [%s], err = 0x%X",
                      local_f0 + *(long *)(local_f0 + 0x10),uVar5);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_79 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1005feca7;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_1005feca7:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_79 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1005ff076;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
      }
      else {
        uVar6 = (**(code **)(*(long *)*param_1 + 0x348))();
        if (uVar4 < uVar6) {
          plVar9 = (long *)0x0;
          if (param_1[1] != 0) {
            plVar9 = *(long **)(param_1[1] + 0x10);
          }
          (**(code **)(*plVar9 + 0xa0))(local_68);
          iVar7 = FUN_1007ea6f0(local_68);
          if (iVar7 == 0) {
            uVar5 = 0;
            if (DAT_1011b55f8 < 3) goto LAB_1005ff076;
            QFileInfo::fileName();
            QString::toUtf8();
            FUN_1008e3970("Backup","vdisk",3,"Skip \'current\' snapshot [%s]",
                          local_110 + *(long *)(local_110 + 0x10));
            if (*(int *)local_110 != -1) {
              if (*(int *)local_110 != 0) {
                LOCK();
                *(int *)local_110 = *(int *)local_110 + -1;
                local_79 = *(int *)local_110 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005fee7d;
              }
              QArrayData::deallocate(local_110,1,8);
            }
LAB_1005fee7d:
            uVar5 = 0;
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_79 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005ff076;
              }
              QArrayData::deallocate(local_118,2,8);
            }
          }
          else {
            plVar9 = (long *)0x0;
            if (param_1[1] != 0) {
              plVar9 = *(long **)(param_1[1] + 0x10);
            }
            (**(code **)(*plVar9 + 0x40))(local_78);
            iVar7 = FUN_1007ea6f0(local_78,local_58);
            if (iVar7 != 0) {
              cVar3 = FUN_1005b2f90(*param_1,local_58);
              if (cVar3 == '\0') {
                uVar5 = FUN_1005fe4d0();
                if (2 < DAT_1011b55f8) {
                  QFileInfo::fileName();
                  QString::toUtf8();
                  FUN_1008e3970("Backup","vdisk",3,
                                "Add [%s] for full backup (no cache file), err = 0x%X",
                                local_130 + *(long *)(local_130 + 0x10),uVar5);
                  if (*(int *)local_130 != -1) {
                    if (*(int *)local_130 != 0) {
                      LOCK();
                      *(int *)local_130 = *(int *)local_130 + -1;
                      local_79 = *(int *)local_130 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005ff040;
                    }
                    QArrayData::deallocate(local_130,1,8);
                  }
LAB_1005ff040:
                  if (*(int *)local_138 != -1) {
                    if (*(int *)local_138 != 0) {
                      LOCK();
                      *(int *)local_138 = *(int *)local_138 + -1;
                      local_79 = *(int *)local_138 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005ff076;
                    }
                    QArrayData::deallocate(local_138,2,8);
                  }
                }
              }
              else {
                uVar5 = FUN_1005fe4d0();
                if (2 < DAT_1011b55f8) {
                  FUN_1007d6a70(&local_148,local_58);
                  QString::toUtf8();
                  FUN_1008e3970("Backup","vdisk",3,"Add cached snapshot %s, err = 0x%X",
                                local_140 + *(long *)(local_140 + 0x10),uVar5);
                  if (*(int *)local_140 != -1) {
                    if (*(int *)local_140 != 0) {
                      LOCK();
                      *(int *)local_140 = *(int *)local_140 + -1;
                      local_79 = *(int *)local_140 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005febc4;
                    }
                    QArrayData::deallocate(local_140,1,8);
                  }
LAB_1005febc4:
                  if (*(int *)local_148 != -1) {
                    if (*(int *)local_148 != 0) {
                      LOCK();
                      *(int *)local_148 = *(int *)local_148 + -1;
                      local_79 = *(int *)local_148 != 0;
                      UNLOCK();
                      if ((bool)local_79) goto LAB_1005ff076;
                    }
                    QArrayData::deallocate(local_148,2,8);
                  }
                }
              }
              goto LAB_1005ff076;
            }
            uVar5 = 0;
            if (DAT_1011b55f8 < 3) goto LAB_1005ff076;
            QFileInfo::fileName();
            QString::toUtf8();
            FUN_1008e3970("Backup","vdisk",3,"Skip \'backup\' snapshot [%s]",
                          local_120 + *(long *)(local_120 + 0x10));
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_79 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005fef55;
              }
              QArrayData::deallocate(local_120,1,8);
            }
LAB_1005fef55:
            uVar5 = 0;
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_79 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_79) goto LAB_1005ff076;
              }
              QArrayData::deallocate(local_128,2,8);
            }
          }
        }
        else {
          uVar5 = FUN_1005fe400();
          if (DAT_1011b55f8 < 3) goto LAB_1005ff076;
          uVar8 = (**(code **)(*(long *)*param_1 + 0x348))();
          QFileInfo::fileName();
          QString::toUtf8();
          FUN_1008e3970("Backup","vdisk",3,
                        "Wrong storage index %u (max %u) , add as unknown file [%s], err = 0x%X",
                        uVar4,uVar8,local_100 + *(long *)(local_100 + 0x10),uVar5);
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_79 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005feda8;
            }
            QArrayData::deallocate(local_100,1,8);
          }
LAB_1005feda8:
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_79 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_79) goto LAB_1005ff076;
            }
            QArrayData::deallocate(local_108,2,8);
          }
        }
      }
    }
  }
LAB_1005ff076:
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_79 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005ff0b6;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005ff0b6:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_79 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005ff0ec;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005ff0ec:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

