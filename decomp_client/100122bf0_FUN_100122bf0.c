
undefined8 * FUN_100122bf0(undefined8 *param_1,long param_2,QString *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  Data *pDVar8;
  long lVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  QArrayData *local_f8;
  QString local_f0;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  undefined4 local_d0;
  QArrayData *local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  QString local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  Data *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  plVar1 = *(long **)(param_2 + 0x180);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar7 = (long)*(int *)(local_58 + 8);
      lVar6 = *plVar1;
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_58 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_58 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar7 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      iVar5 = CHwUsbDevice::getUsbType();
      if ((iVar5 == 0xd) || (iVar5 = CHwUsbDevice::getUsbType(), iVar5 == 0xe)) {
        if (*(int *)(param_3->field0_0x0 + 4) != 0) {
          (**(code **)(*plVar1 + 0xb8))(&local_60,plVar1);
          cVar3 = operator==(param_3,&local_60);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100122d28;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_100122d28:
          if (cVar3 == '\0') goto LAB_1001233c0;
        }
        (**(code **)(*plVar1 + 0xb8))(&local_70,plVar1);
        FUN_100b01b20(&local_68,&local_70,0);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100122d83;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100122d83:
        if (*(int *)(local_68.field0_0x0 + 4) != 0) {
          local_78 = (Data *)PTR_shared_null_1021e15e8;
          plVar1 = *(long **)(param_2 + 0x150);
          local_98 = (Data *)*plVar1;
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 == 0) {
              QListData::detach((int)&local_98);
              lVar7 = (long)*(int *)(local_98 + 8);
              lVar6 = *plVar1;
              if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_98 + lVar7 * 8) &&
                 (lVar9 = *(int *)(local_98 + 0xc) - lVar7,
                 lVar9 != 0 && lVar7 <= *(int *)(local_98 + 0xc))) {
                _memcpy(local_98 + lVar7 * 8 + 0x10,
                        (void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),lVar9 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + 1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
            }
          }
          local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
          local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
          if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
            do {
              local_80 = 1;
              lVar6 = *(long *)local_90;
              CHwHardDisk::getDeviceId();
              cVar3 = operator==(&local_a0,&local_68);
              if (*(int *)local_a0.field0_0x0 != -1) {
                if (*(int *)local_a0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                  local_31 = *(int *)local_a0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100122e99;
                }
                QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
              }
LAB_100122e99:
              if (cVar3 != '\0') {
                local_c0 = *(Data **)(lVar6 + 0x98);
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 == 0) {
                    QListData::detach((int)&local_c0);
                    lVar7 = (long)*(int *)(local_c0 + 8);
                    lVar6 = *(long *)(lVar6 + 0x98);
                    if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_c0 + lVar7 * 8) &&
                       (lVar9 = *(int *)(local_c0 + 0xc) - lVar7,
                       lVar9 != 0 && lVar7 <= *(int *)(local_c0 + 0xc))) {
                      _memcpy(local_c0 + lVar7 * 8 + 0x10,
                              (void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),lVar9 * 8);
                    }
                  }
                  else {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + 1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                  }
                }
                local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
                local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
                if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
                  do {
                    local_a8 = 1;
                    CHwHddPartition::getSystemName();
                    FUN_1000341d0(&local_78,&local_c8);
                    if (*(int *)local_c8 != -1) {
                      if (*(int *)local_c8 != 0) {
                        LOCK();
                        *(int *)local_c8 = *(int *)local_c8 + -1;
                        local_31 = *(int *)local_c8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100122fac;
                      }
                      QArrayData::deallocate(local_c8,2,8);
                    }
LAB_100122fac:
                    local_b8 = local_b8 + 8;
                  } while (local_b8 != local_b0);
                }
                local_a8 = 1;
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 != 0) {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + -1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100123000;
                  }
                  QListData::dispose(local_c0);
                }
              }
LAB_100123000:
              local_90 = local_90 + 8;
            } while (local_90 != local_88);
          }
          local_80 = 1;
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012304f;
            }
            QListData::dispose(local_98);
          }
LAB_10012304f:
          if (*(int *)(local_78 + 0xc) == *(int *)(local_78 + 8)) {
            FUN_1000341d0(&local_78,&local_68);
          }
          local_e8 = local_78;
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 == 0) {
              QListData::detach((int)&local_e8);
              iVar5 = *(int *)(local_e8 + 8);
              if (iVar5 != *(int *)(local_e8 + 0xc)) {
                pDVar8 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
                pDVar10 = local_e8 + (long)iVar5 * 8 + 0x10;
                lVar6 = (long)*(int *)(local_e8 + 0xc) * 8 + (long)iVar5 * -8;
                do {
                  piVar2 = *(int **)pDVar8;
                  *(int **)pDVar10 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  pDVar10 = pDVar10 + 8;
                  pDVar8 = pDVar8 + 8;
                  lVar6 = lVar6 + -8;
                } while (lVar6 != 0);
              }
            }
            else {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + 1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
            }
          }
          local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
          local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
          if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
            do {
              local_d0 = 1;
              pQVar11 = *(QArrayData **)local_e0;
              if (*(int *)(pQVar11 + 4) != 0) {
                if (1 < *(int *)pQVar11 + 1U) {
                  LOCK();
                  *(int *)pQVar11 = *(int *)pQVar11 + 1;
                  local_31 = *(int *)pQVar11 != 0;
                  UNLOCK();
                }
                local_f8 = pQVar11;
                bVar4 = (bool)QString::remove((int)&local_f8,0);
                MacUtils::getPartitionMountBySystemName(&local_f0,bVar4);
                FUN_1000341d0(param_1);
                if (*(int *)local_f0.field0_0x0 != -1) {
                  if (*(int *)local_f0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                    local_31 = *(int *)local_f0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001231c2;
                  }
                  QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
                }
LAB_1001231c2:
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001231f8;
                  }
                  QArrayData::deallocate(local_f8,2,8);
                }
              }
LAB_1001231f8:
              local_e0 = local_e0 + 8;
            } while (local_e0 != local_d8);
          }
          pDVar8 = local_e8;
          local_d0 = 1;
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001232d8;
            }
            iVar5 = *(int *)(local_e8 + 0xc);
            if (iVar5 != *(int *)(local_e8 + 8)) {
              lVar6 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar5 * -8;
              pDVar10 = local_e8 + (long)iVar5 * 8 + 8;
              do {
                pQVar11 = *(QArrayData **)pDVar10;
                if (*(int *)pQVar11 == 0) {
LAB_1001232b0:
                  QArrayData::deallocate(pQVar11,2,8);
                }
                else if (*(int *)pQVar11 != -1) {
                  LOCK();
                  *(int *)pQVar11 = *(int *)pQVar11 + -1;
                  local_31 = *(int *)pQVar11 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar11 = *(QArrayData **)pDVar10;
                    goto LAB_1001232b0;
                  }
                }
                pDVar10 = pDVar10 + -8;
                lVar6 = lVar6 + 8;
              } while (lVar6 != 0);
            }
            QListData::dispose(pDVar8);
          }
LAB_1001232d8:
          pDVar8 = local_78;
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100123390;
            }
            iVar5 = *(int *)(local_78 + 0xc);
            if (iVar5 != *(int *)(local_78 + 8)) {
              lVar6 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar5 * -8;
              pDVar10 = local_78 + (long)iVar5 * 8 + 8;
              do {
                pQVar11 = *(QArrayData **)pDVar10;
                if (*(int *)pQVar11 == 0) {
LAB_100123360:
                  QArrayData::deallocate(pQVar11,2,8);
                }
                else if (*(int *)pQVar11 != -1) {
                  LOCK();
                  *(int *)pQVar11 = *(int *)pQVar11 + -1;
                  local_31 = *(int *)pQVar11 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar11 = *(QArrayData **)pDVar10;
                    goto LAB_100123360;
                  }
                }
                pDVar10 = pDVar10 + -8;
                lVar6 = lVar6 + 8;
              } while (lVar6 != 0);
            }
            QListData::dispose(pDVar8);
          }
        }
LAB_100123390:
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001233c0;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_1001233c0:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

