
undefined8 FUN_1002c4980(long *param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  bool bVar15;
  QArrayData *local_140;
  QString local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QString local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  uint local_c0;
  QString local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  uint local_80;
  long *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"SARE: Process loaded list (count = %d)",
                  *(int *)(param_1[0x12] + 0xc) - *(int *)(param_1[0x12] + 8));
  }
  *(undefined4 *)(param_1 + 0x56) = 1;
  if ((long *)param_1[0x5d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5d] + 0x18))();
  }
  if ((long *)param_1[0x5e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5e] + 0x18))();
  }
  if ((long *)param_1[0x5f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5f] + 0x18))();
  }
  if (*(int *)(param_1[0x12] + 0xc) != *(int *)(param_1[0x12] + 8)) {
    FUN_100090a50(&local_78,DAT_1011c3698);
    if ((local_78 == (long *)0x0) || (local_78[2] == 0)) {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"Can\'t get host-hw-info. Usb devices resume will be skiped.");
      }
    }
    else {
      QMutex::lock();
      uVar9 = *(uint *)(DAT_1011c3698 + 0x5c0);
      iVar1 = *(int *)(DAT_1011c3698 + 0xb60);
      local_98 = (int *)param_1[0x12];
      if (*local_98 != -1) {
        if (*local_98 == 0) {
          QListData::detach((int)&local_98);
          iVar6 = local_98[2];
          if (iVar6 != local_98[3]) {
            puVar11 = (undefined8 *)(param_1[0x12] + 0x10 + (long)*(int *)(param_1[0x12] + 8) * 8);
            piVar13 = local_98 + (long)iVar6 * 2 + 4;
            lVar10 = (long)local_98[3] * 8 + (long)iVar6 * -8;
            do {
              piVar2 = (int *)*puVar11;
              *(int **)piVar13 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              piVar13 = piVar13 + 2;
              puVar11 = puVar11 + 1;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
        }
        else {
          LOCK();
          *local_98 = *local_98 + 1;
          local_31 = *local_98 != 0;
          UNLOCK();
        }
      }
      local_90 = local_98 + (long)local_98[2] * 2 + 4;
      local_88 = local_98 + (long)local_98[3] * 2 + 4;
      local_80 = 1;
      if (local_98[2] != local_98[3]) {
        do {
          local_a0 = *(QArrayData **)local_90;
          if (1 < *(int *)local_a0 + 1U) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + 1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
          }
          if (local_80 != 0) {
            if (*(int *)(local_a0 + 4) != 0) {
              QString::QString(&local_70,0x7c);
              QString::section(&local_a8,&local_a0,&local_70,0,0,0);
              if (*(int *)local_70.field0_0x0 != -1) {
                if (*(int *)local_70.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                  local_31 = *(int *)local_70.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002c4c2e;
                }
                QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
              }
LAB_1002c4c2e:
              iVar6 = QString::compare_helper
                                (local_a8 + *(long *)(local_a8 + 0x10),*(undefined4 *)(local_a8 + 4)
                                 ,"VIRTUAL@MOUSE@",0xffffffff);
              if (iVar6 == 0) {
                DAT_101116b50 = FUN_1002c4760(&local_a0,"devices.usb.enable_mouse",DAT_101116b50);
                DAT_101116b50 = FUN_1007da300("devices.usb.enable_mouse",DAT_101116b50);
                uVar7 = 2;
                if ((uVar9 & 0xffffff00) != 0x700 || iVar1 == 0) {
                  uVar7 = FUN_1002c4760(&local_a0,"devices.usb.mouse",DAT_101116b50);
                }
                DAT_101116b50 = uVar7;
                DAT_101116b50 = FUN_1007da300("devices.usb.mouse",DAT_101116b50);
              }
              else {
                iVar6 = QString::compare_helper
                                  (local_a8 + *(long *)(local_a8 + 0x10),
                                   *(undefined4 *)(local_a8 + 4),"VIRTUAL@KEYBOARD@",0xffffffff);
                if (iVar6 == 0) {
                  DAT_1011c5668 =
                       FUN_1002c4760(&local_a0,"devices.usb.enable_keyboard",DAT_1011c5668);
                  DAT_1011c5668 = FUN_1007da300("devices.usb.enable_keyboard",DAT_1011c5668);
                  DAT_1011c5668 = FUN_1002c4760(&local_a0,"devices.usb.keyboard",DAT_1011c5668);
                  DAT_1011c5668 = FUN_1007da300("devices.usb.keyboard",DAT_1011c5668);
                }
                else {
                  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0
                  ;
                  local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0
                  ;
                  plVar3 = *(long **)(local_78[2] + 0x180);
                  local_d8 = (Data *)*plVar3;
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 == 0) {
                      QListData::detach((int)&local_d8);
                      lVar12 = (long)*(int *)(local_d8 + 8);
                      lVar10 = *plVar3;
                      if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) !=
                           local_d8 + lVar12 * 8) &&
                         (lVar14 = *(int *)(local_d8 + 0xc) - lVar12,
                         lVar14 != 0 && lVar12 <= *(int *)(local_d8 + 0xc))) {
                        _memcpy(local_d8 + lVar12 * 8 + 0x10,
                                (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar14 * 8)
                        ;
                      }
                    }
                    else {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + 1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                    }
                  }
                  local_d0 = local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10;
                  local_c8 = local_d8 + (long)*(int *)(local_d8 + 0xc) * 8 + 0x10;
                  local_c0 = 1;
                  if (*(int *)(local_d8 + 8) != *(int *)(local_d8 + 0xc)) {
                    do {
                      if (local_c0 == 0) goto LAB_1002c54fa;
                      plVar3 = *(long **)local_d0;
                      iVar6 = (**(code **)(*plVar3 + 0xd8))(plVar3);
                      if (iVar6 == 0) {
                        (**(code **)(*plVar3 + 0xb8))(&local_e8,plVar3);
                        QString::QString(&local_68,0x7c);
                        QString::section(&local_e0,&local_e8,&local_68,0,1,0);
                        if (*(int *)local_68.field0_0x0 != -1) {
                          if (*(int *)local_68.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                            local_31 = *(int *)local_68.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c4eea;
                          }
                          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
                        }
LAB_1002c4eea:
                        QString::QString(&local_60,0x7c);
                        QString::section(&local_f0,&local_a0,&local_60,0,1,0);
                        if (*(int *)local_60.field0_0x0 != -1) {
                          if (*(int *)local_60.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                            local_31 = *(int *)local_60.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c4f4a;
                          }
                          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
                        }
LAB_1002c4f4a:
                        cVar4 = operator==(&local_e0,&local_f0);
                        if (*(int *)local_f0.field0_0x0 != -1) {
                          if (*(int *)local_f0.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                            local_31 = *(int *)local_f0.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c4f96;
                          }
                          QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
                        }
LAB_1002c4f96:
                        if (*(int *)local_e0.field0_0x0 != -1) {
                          if (*(int *)local_e0.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                            local_31 = *(int *)local_e0.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c4fcc;
                          }
                          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
                        }
LAB_1002c4fcc:
                        if (*(int *)local_e8 != -1) {
                          if (*(int *)local_e8 != 0) {
                            LOCK();
                            *(int *)local_e8 = *(int *)local_e8 + -1;
                            local_31 = *(int *)local_e8 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c5002;
                          }
                          QArrayData::deallocate(local_e8,2,8);
                        }
LAB_1002c5002:
                        if (cVar4 == '\0') goto LAB_1002c54f0;
                        (**(code **)(*plVar3 + 0xb8))(&local_100,plVar3);
                        QString::QString(&local_58,0x7c);
                        QString::section(&local_f8,&local_100,&local_58,2,2,0);
                        if (*(int *)local_58.field0_0x0 != -1) {
                          if (*(int *)local_58.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                            local_31 = *(int *)local_58.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c5085;
                          }
                          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
                        }
LAB_1002c5085:
                        QString::QString(&local_50,0x7c);
                        QString::section(&local_108,&local_a0,&local_50,2,2,0);
                        if (*(int *)local_50.field0_0x0 != -1) {
                          if (*(int *)local_50.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
                            local_31 = *(int *)local_50.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c50e8;
                          }
                          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
                        }
LAB_1002c50e8:
                        cVar4 = operator==(&local_f8,&local_108);
                        if (cVar4 == '\0') {
                          bVar15 = false;
LAB_1002c5209:
                          (**(code **)(*plVar3 + 0xb8))(&local_128,plVar3);
                          iVar6 = FUN_1002c6ef0(&local_128);
                          if (iVar6 == 0x5ac) {
                            uVar8 = FUN_1002c7030(&local_128);
                            bVar5 = true;
                            if ((uVar8 != 0x1000) && ((uVar8 & 0xfffff000) != 0x8000))
                            goto LAB_1002c5255;
                          }
                          else {
LAB_1002c5255:
                            iVar6 = FUN_1002c6ef0(&local_a0);
                            bVar5 = false;
                            if (iVar6 == 0x5ac) {
                              uVar8 = FUN_1002c7030(&local_a0);
                              bVar5 = (uVar8 & 0xfffff000) == 0x8000 || uVar8 == 0x1000;
                            }
                          }
                          if (*(int *)local_128 != -1) {
                            if (*(int *)local_128 != 0) {
                              LOCK();
                              *(int *)local_128 = *(int *)local_128 + -1;
                              local_31 = *(int *)local_128 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002c52cc;
                            }
                            QArrayData::deallocate(local_128,2,8);
                          }
LAB_1002c52cc:
                          if (bVar15) goto LAB_1002c52d5;
                        }
                        else {
                          (**(code **)(*plVar3 + 0xb8))(&local_118,plVar3);
                          QString::QString(&local_48,0x7c);
                          QString::section(&local_110,&local_118,&local_48,5,5,0);
                          if (*(int *)local_48.field0_0x0 != -1) {
                            if (*(int *)local_48.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                              local_31 = *(int *)local_48.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002c5180;
                            }
                            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
                          }
LAB_1002c5180:
                          QString::QString(&local_40,0x7c);
                          QString::section(&local_120,&local_a0,&local_40,5,5,0);
                          if (*(int *)local_40.field0_0x0 != -1) {
                            if (*(int *)local_40.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                              local_31 = *(int *)local_40.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002c51e3;
                            }
                            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
                          }
LAB_1002c51e3:
                          cVar4 = operator==(&local_110,&local_120);
                          bVar15 = true;
                          bVar5 = true;
                          if (cVar4 == '\0') goto LAB_1002c5209;
LAB_1002c52d5:
                          if (*(int *)local_120.field0_0x0 != -1) {
                            if (*(int *)local_120.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                              local_31 = *(int *)local_120.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002c530b;
                            }
                            QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                          }
LAB_1002c530b:
                          if (*(int *)local_110.field0_0x0 != -1) {
                            if (*(int *)local_110.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                              local_31 = *(int *)local_110.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002c5341;
                            }
                            QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                          }
LAB_1002c5341:
                          if (*(int *)local_118 != -1) {
                            if (*(int *)local_118 != 0) {
                              LOCK();
                              *(int *)local_118 = *(int *)local_118 + -1;
                              local_31 = *(int *)local_118 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002c5377;
                            }
                            QArrayData::deallocate(local_118,2,8);
                          }
                        }
LAB_1002c5377:
                        if (*(int *)local_108.field0_0x0 != -1) {
                          if (*(int *)local_108.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                            local_31 = *(int *)local_108.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c53b0;
                          }
                          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
                        }
LAB_1002c53b0:
                        if (*(int *)local_f8.field0_0x0 != -1) {
                          if (*(int *)local_f8.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                            local_31 = *(int *)local_f8.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c53e6;
                          }
                          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
                        }
LAB_1002c53e6:
                        if (*(int *)local_100 != -1) {
                          if (*(int *)local_100 != 0) {
                            LOCK();
                            *(int *)local_100 = *(int *)local_100 + -1;
                            local_31 = *(int *)local_100 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c541c;
                          }
                          QArrayData::deallocate(local_100,2,8);
                        }
LAB_1002c541c:
                        if (!bVar5) goto LAB_1002c54f0;
                        (**(code **)(*plVar3 + 0xb8))(&local_130,plVar3);
                        QString::operator=(&local_b0,&local_130);
                        if (*(int *)local_130.field0_0x0 != -1) {
                          if (*(int *)local_130.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                            local_31 = *(int *)local_130.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c5485;
                          }
                          QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
                        }
LAB_1002c5485:
                        (**(code **)(*plVar3 + 0xa8))(&local_138,plVar3);
                        QString::operator=(&local_b8,&local_138);
                        if (*(int *)local_138.field0_0x0 != -1) {
                          if (*(int *)local_138.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
                            local_31 = *(int *)local_138.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002c54fa;
                          }
                          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
                        }
                      }
                      else {
LAB_1002c54f0:
                        local_c0 = 0;
                      }
LAB_1002c54fa:
                      local_d0 = local_d0 + 8;
                      uVar8 = local_c0 ^ 1;
                      bVar15 = local_c0 != 1;
                      local_c0 = uVar8;
                    } while ((bVar15) && (local_d0 != local_c8));
                  }
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 != 0) {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + -1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002c5566;
                    }
                    QListData::dispose(local_d8);
                  }
LAB_1002c5566:
                  if (*(int *)(local_b0.field0_0x0 + 4) == 0) {
                    if (-1 < DAT_1011c568c) {
                      QString::toUtf8();
                      FUN_1008e3970("","USB",0,"SARE: Device %s is not available");
                      if (*(int *)local_140 != -1) {
                        if (*(int *)local_140 != 0) {
                          LOCK();
                          *(int *)local_140 = *(int *)local_140 + -1;
                          local_31 = *(int *)local_140 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1002c560e;
                        }
                        QArrayData::deallocate(local_140,1,8);
                      }
                    }
                  }
                  else {
                    FUN_1002b8890(param_1,0,&local_b0,&local_b8);
                  }
LAB_1002c560e:
                  if (*(int *)local_b8.field0_0x0 != -1) {
                    if (*(int *)local_b8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                      local_31 = *(int *)local_b8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002c564b;
                    }
                    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
                  }
LAB_1002c564b:
                  if (*(int *)local_b0.field0_0x0 != -1) {
                    if (*(int *)local_b0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                      local_31 = *(int *)local_b0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1002c5690;
                    }
                    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
                  }
                }
              }
LAB_1002c5690:
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002c56c6;
                }
                QArrayData::deallocate(local_a8,2,8);
              }
            }
LAB_1002c56c6:
            local_80 = 0;
          }
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c5703;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1002c5703:
          local_90 = local_90 + 2;
          uVar8 = local_80 ^ 1;
          bVar15 = local_80 != 1;
          local_80 = uVar8;
        } while ((bVar15) && (local_90 != local_88));
      }
      FUN_100013180(&local_98);
      lVar10 = FUN_100257d80(param_1);
      uVar9 = *(uint *)(lVar10 + 0x2030);
      do {
        LOCK();
        uVar8 = *(uint *)(lVar10 + 0x2030);
        bVar15 = uVar9 == uVar8;
        if (bVar15) {
          *(uint *)(lVar10 + 0x2030) = uVar9 | 8;
          uVar8 = uVar9;
        }
        uVar9 = uVar8;
        UNLOCK();
      } while (!bVar15);
      (**(code **)(*param_1 + 0x10))(param_1);
      QMutex::unlock();
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  return 0;
}

