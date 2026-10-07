
int FUN_100562500(long *param_1,long param_2,undefined1 *param_3)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  bool bVar12;
  QArrayData *local_150;
  undefined **local_148;
  void *local_140;
  undefined8 local_138;
  QArrayData *local_130;
  QString local_128;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  uint local_108;
  QString local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  undefined1 local_b1;
  undefined1 local_b0 [40];
  undefined1 local_88 [8];
  undefined1 *local_80;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar5 = -0x7ffffffd;
  local_38 = lVar7;
  if (param_1 == (long *)0x0) goto LAB_100562dac;
  *param_3 = 1;
  FUN_100098d30(local_b0);
  iVar4 = (**(code **)(*param_1 + 0x90))(param_1,local_b0);
  if (iVar4 < 0) {
    FUN_1008e3970("","StatesUtils",0,"Error : Failed to get disk image params, error 0x%X",iVar4);
    iVar5 = iVar4;
  }
  else {
    iVar5 = 0;
    if (local_88 != local_80) {
      puVar11 = local_80;
      do {
        cVar3 = FUN_100684c20(*(undefined4 *)(puVar11 + 0x10));
        if (cVar3 != '\0') {
          local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          FUN_10059da00(puVar11 + 0x10,&local_c8);
          QString::left((int)&local_d0);
          QString::operator=(&local_c0,&local_d0);
          if (*(int *)local_d0.field0_0x0 != -1) {
            if (*(int *)local_d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
              local_b1 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_10056263a;
            }
            QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
          }
LAB_10056263a:
          if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
            bVar2 = false;
          }
          else if (*(int *)(local_c0.field0_0x0 + 4) == 0) {
            bVar2 = false;
          }
          else {
            if (1 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("","StatesUtils",2,
                            "Checking if partition \'%s\' is EFI System partition",
                            local_d8 + *(long *)(local_d8 + 0x10));
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_b1 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_b1) goto LAB_1005626e3;
                }
                QArrayData::deallocate(local_d8,1,8);
              }
            }
LAB_1005626e3:
            plVar1 = *(long **)(param_2 + 0x150);
            local_f8 = (Data *)*plVar1;
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 == 0) {
                QListData::detach((int)&local_f8);
                lVar9 = (long)*(int *)(local_f8 + 8);
                lVar7 = *plVar1;
                if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_f8 + lVar9 * 8) &&
                   (lVar10 = *(int *)(local_f8 + 0xc) - lVar9,
                   lVar10 != 0 && lVar9 <= *(int *)(local_f8 + 0xc))) {
                  _memcpy(local_f8 + lVar9 * 8 + 0x10,
                          (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar10 * 8);
                }
              }
              else {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + 1;
                local_b1 = *(int *)local_f8 != 0;
                UNLOCK();
              }
            }
            local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
            local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
            bVar2 = false;
            bVar12 = false;
            if (*(int *)(local_f8 + 8) != *(int *)(local_f8 + 0xc)) {
              do {
                bVar2 = bVar12;
                local_e0 = 1;
                lVar7 = *(long *)local_f0;
                CHwHardDisk::getDeviceId();
                cVar3 = operator==(&local_100,&local_c0);
                if (*(int *)local_100.field0_0x0 != -1) {
                  if (*(int *)local_100.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                    local_b1 = *(int *)local_100.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_b1) goto LAB_100562834;
                  }
                  QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
                }
LAB_100562834:
                if (cVar3 != '\0') {
                  local_120 = *(Data **)(lVar7 + 0x98);
                  if (*(int *)local_120 != -1) {
                    if (*(int *)local_120 == 0) {
                      QListData::detach((int)&local_120);
                      lVar9 = (long)*(int *)(local_120 + 8);
                      lVar7 = *(long *)(lVar7 + 0x98);
                      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_120 + lVar9 * 8)
                         && (lVar10 = *(int *)(local_120 + 0xc) - lVar9,
                            lVar10 != 0 && lVar9 <= *(int *)(local_120 + 0xc))) {
                        _memcpy(local_120 + lVar9 * 8 + 0x10,
                                (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar10 * 8);
                      }
                    }
                    else {
                      LOCK();
                      *(int *)local_120 = *(int *)local_120 + 1;
                      local_b1 = *(int *)local_120 != 0;
                      UNLOCK();
                    }
                  }
                  local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
                  local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
                  local_108 = 1;
                  if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
                    do {
                      if (local_108 != 0) {
                        CHwHddPartition::getSystemName();
                        cVar3 = operator==(&local_128,&local_c8);
                        if (*(int *)local_128.field0_0x0 != -1) {
                          if (*(int *)local_128.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                            local_b1 = *(int *)local_128.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_b1) goto LAB_100562953;
                          }
                          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                        }
LAB_100562953:
                        if ((cVar3 == '\0') || (iVar5 = CHwHddPartition::getType(), iVar5 != 0xef))
                        {
                          local_108 = 0;
                        }
                        else {
                          bVar2 = true;
                          if (1 < DAT_1011b55f8) {
                            QString::toUtf8();
                            FUN_1008e3970("","StatesUtils",2,
                                          "Partition \'%s\' is EFI System partition",
                                          local_130 + *(long *)(local_130 + 0x10));
                            if (*(int *)local_130 != -1) {
                              if (*(int *)local_130 != 0) {
                                LOCK();
                                *(int *)local_130 = *(int *)local_130 + -1;
                                local_b1 = *(int *)local_130 != 0;
                                UNLOCK();
                                if ((bool)local_b1) goto LAB_100562a0a;
                              }
                              QArrayData::deallocate(local_130,1,8);
                            }
                          }
                        }
                      }
LAB_100562a0a:
                      local_118 = local_118 + 8;
                      uVar8 = local_108 ^ 1;
                      bVar12 = local_108 != 1;
                      local_108 = uVar8;
                    } while ((bVar12) && (local_118 != local_110));
                  }
                  if (*(int *)local_120 != -1) {
                    if (*(int *)local_120 != 0) {
                      LOCK();
                      *(int *)local_120 = *(int *)local_120 + -1;
                      local_b1 = *(int *)local_120 != 0;
                      UNLOCK();
                      if ((bool)local_b1) goto LAB_100562a80;
                    }
                    QListData::dispose(local_120);
                  }
                }
LAB_100562a80:
                local_f0 = local_f0 + 8;
                bVar12 = bVar2;
              } while (local_f0 != local_e8);
            }
            local_e0 = 1;
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_b1 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_100562aea;
              }
              QListData::dispose(local_f8);
            }
          }
LAB_100562aea:
          if (*(int *)local_c8.field0_0x0 != -1) {
            if (*(int *)local_c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
              local_b1 = *(int *)local_c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_100562b1f;
            }
            QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
          }
LAB_100562b1f:
          if (*(int *)local_c0.field0_0x0 != -1) {
            if (*(int *)local_c0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
              local_b1 = *(int *)local_c0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_100562b5b;
            }
            QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
          }
LAB_100562b5b:
          if (!bVar2) {
            local_148 = &PTR_FUN_10111db90;
            local_138 = 0;
            local_140 = (void *)0x0;
            iVar5 = FUN_100563210(param_1,puVar11 + 0x10,&local_148);
            if (iVar5 < 0) {
              bVar2 = true;
              FUN_1008e3970("","StatesUtils",0,
                            "Error : Reading disk storage boot sec data error 0x%X",iVar5);
            }
            else {
              iVar6 = FUN_1005634e0(&local_148);
              bVar2 = false;
              iVar5 = iVar4;
              if (iVar6 != 3) {
                *param_3 = 0;
                bVar2 = true;
                iVar5 = 0;
                if (1 < DAT_1011b55f8) {
                  QString::toUtf8();
                  FUN_1008e3970("","StatesUtils",2,
                                "BootCamp disk storage \'%s\' has non NTFS FS type %d",
                                local_150 + *(long *)(local_150 + 0x10),iVar6);
                  if (*(int *)local_150 != -1) {
                    iVar5 = 0;
                    if (*(int *)local_150 != 0) {
                      LOCK();
                      *(int *)local_150 = *(int *)local_150 + -1;
                      local_b1 = *(int *)local_150 != 0;
                      UNLOCK();
                      if ((bool)local_b1) goto LAB_100562cb5;
                    }
                    QArrayData::deallocate(local_150,1,8);
                  }
                }
              }
            }
LAB_100562cb5:
            local_148 = &PTR_FUN_10111db90;
            if (local_140 != (void *)0x0) {
              _free(local_140);
              local_138 = 0;
              local_140 = (void *)0x0;
            }
            iVar4 = iVar5;
            if (bVar2) break;
          }
        }
        puVar11 = *(undefined1 **)(puVar11 + 8);
        iVar5 = 0;
      } while (local_88 != puVar11);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_b1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_100562d63;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100562d63:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_b1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_100562d99;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100562d99:
  FUN_100098f20(local_88);
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100562dac:
  if (lVar7 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

