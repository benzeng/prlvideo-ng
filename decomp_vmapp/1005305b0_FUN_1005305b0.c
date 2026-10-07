
void FUN_1005305b0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  QArrayData *pQVar10;
  undefined8 *puVar11;
  int *piVar12;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined4 local_b0;
  int local_ac;
  QArrayData *local_a8;
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  int *local_58;
  int *local_50;
  undefined4 local_48;
  int *local_40;
  undefined1 local_31;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 1");
  }
  local_40 = (int *)PTR_shared_null_100ba2188;
  QMutex::lock();
  lVar4 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
  }
  QMutex::unlock();
  if (lVar4 == 0) {
    local_60 = (int *)param_2[4];
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_60);
        iVar7 = local_60[2];
        if (iVar7 != local_60[3]) {
          puVar11 = (undefined8 *)(param_2[4] + 0x10 + (long)*(int *)(param_2[4] + 8) * 8);
          piVar12 = local_60 + (long)iVar7 * 2 + 4;
          lVar9 = (long)local_60[3] * 8 + (long)iVar7 * -8;
          do {
            piVar2 = (int *)*puVar11;
            *(int **)piVar12 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar12 = piVar12 + 2;
            puVar11 = puVar11 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
      else {
        LOCK();
        *local_60 = *local_60 + 1;
        local_31 = *local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)local_60[2] * 2 + 4;
    local_50 = local_60 + (long)local_60[3] * 2 + 4;
    if (local_60[2] != local_60[3]) {
      do {
        local_48 = 1;
        pQVar3 = *(QArrayData **)local_58;
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        pQVar10 = (QArrayData *)QString::fromAscii_helper("",0);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        iVar7 = *(int *)pQVar10;
        if (1 < iVar7 + 1U) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + 1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          iVar7 = *(int *)pQVar10;
        }
        local_68 = 0x80000001;
        local_64 = 0;
        local_78 = pQVar3;
        local_70 = pQVar10;
        if (iVar7 != -1) {
          if (iVar7 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005310cd;
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_1005310cd:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005310fc;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_1005310fc:
        FUN_100532d70(&local_40);
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100531132;
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_100531132:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100531161;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100531161:
        local_58 = local_58 + 2;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    FUN_100037320(&local_60);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 1 error");
    }
    if ((code *)param_2[1] != (code *)0x0) {
      (*(code *)param_2[1])(&local_40,param_2[2],0);
    }
    if (*(int *)(*param_2 + 4) != 0) {
      FUN_10052fd70(param_1,param_2,&local_40,(int)param_2[3],0);
    }
  }
  else {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 2");
    }
    lVar9 = *(long *)(lVar4 + 0x18);
    plVar1 = *(long **)(lVar4 + 0x90);
    local_98 = (int *)param_2[4];
    if (*local_98 != -1) {
      if (*local_98 == 0) {
        QListData::detach((int)&local_98);
        iVar7 = local_98[2];
        if (iVar7 != local_98[3]) {
          puVar11 = (undefined8 *)(param_2[4] + 0x10 + (long)*(int *)(param_2[4] + 8) * 8);
          piVar12 = local_98 + (long)iVar7 * 2 + 4;
          lVar8 = (long)local_98[3] * 8 + (long)iVar7 * -8;
          do {
            piVar2 = (int *)*puVar11;
            *(int **)piVar12 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar12 = piVar12 + 2;
            puVar11 = puVar11 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *local_98 = *local_98 + 1;
        local_31 = *local_98 != 0;
        UNLOCK();
      }
    }
    piVar12 = local_98 + (long)local_98[2] * 2 + 4;
    local_88 = local_98 + (long)local_98[3] * 2 + 4;
    local_90 = piVar12;
    if (local_98[2] != local_98[3]) {
      do {
        local_80 = 1;
        local_90 = piVar12;
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 2.1 [%s]",
                        local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100530880;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
        }
LAB_100530880:
        if (plVar1 == (long *)0x0) {
LAB_100530ace:
          if (2 < DAT_1011b55f8) {
            QString::toUtf8();
            FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 2.2 [%s]",
                          local_d0 + *(long *)(local_d0 + 0x10));
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100530b50;
              }
              QArrayData::deallocate(local_d0,1,8);
            }
          }
LAB_100530b50:
          if (lVar9 != 0) {
            local_d8 = (QArrayData *)PTR_shared_null_100ba20d0;
            cVar6 = FUN_1004d0e80(lVar9 + 0x48,piVar12,&local_d8);
            pQVar3 = local_d8;
            iVar7 = 0;
            if (cVar6 != '\0') {
              pQVar10 = *(QArrayData **)piVar12;
              if (1 < *(int *)pQVar10 + 1U) {
                LOCK();
                *(int *)pQVar10 = *(int *)pQVar10 + 1;
                local_31 = *(int *)pQVar10 != 0;
                UNLOCK();
              }
              if (1 < *(int *)local_d8 + 1U) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + 1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
              }
              if (1 < *(int *)pQVar10 + 1U) {
                LOCK();
                *(int *)pQVar10 = *(int *)pQVar10 + 1;
                local_31 = *(int *)pQVar10 != 0;
                UNLOCK();
              }
              iVar7 = *(int *)local_d8;
              if (1 < iVar7 + 1U) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + 1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                iVar7 = *(int *)local_d8;
              }
              if (iVar7 != -1) {
                if (iVar7 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100530c2a;
                }
                QArrayData::deallocate(local_d8,2,8);
              }
LAB_100530c2a:
              if (*(int *)pQVar10 != -1) {
                if (*(int *)pQVar10 != 0) {
                  LOCK();
                  *(int *)pQVar10 = *(int *)pQVar10 + -1;
                  local_31 = *(int *)pQVar10 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100530c57;
                }
                QArrayData::deallocate(pQVar10,2,8);
              }
LAB_100530c57:
              FUN_100532d70(&local_40);
              if (2 < DAT_1011b55f8) {
                QString::toUtf8();
                FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 2.2 ok [%s]",
                              local_f8 + *(long *)(local_f8 + 0x10));
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100530ce4;
                  }
                  QArrayData::deallocate(local_f8,1,8);
                }
              }
LAB_100530ce4:
              if (*(int *)pQVar3 != -1) {
                if (*(int *)pQVar3 != 0) {
                  LOCK();
                  *(int *)pQVar3 = *(int *)pQVar3 + -1;
                  local_31 = *(int *)pQVar3 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100530d0f;
                }
                QArrayData::deallocate(pQVar3,2,8);
              }
LAB_100530d0f:
              iVar7 = 0x13;
              if (*(int *)pQVar10 != -1) {
                if (*(int *)pQVar10 != 0) {
                  LOCK();
                  *(int *)pQVar10 = *(int *)pQVar10 + -1;
                  local_31 = *(int *)pQVar10 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100530d50;
                }
                QArrayData::deallocate(pQVar10,2,8);
              }
            }
LAB_100530d50:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100530d86;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_100530d86:
            if (iVar7 != 0) goto LAB_100530f40;
          }
          if (2 < DAT_1011b55f8) {
            QString::toUtf8();
            FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 2.3 [%s]",
                          local_100 + *(long *)(local_100 + 0x10));
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100530e10;
              }
              QArrayData::deallocate(local_100,1,8);
            }
          }
LAB_100530e10:
          pQVar3 = *(QArrayData **)piVar12;
          if (1 < *(int *)pQVar3 + 1U) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + 1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
          }
          pQVar10 = (QArrayData *)QString::fromAscii_helper("",0);
          if (1 < *(int *)pQVar3 + 1U) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + 1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
          }
          iVar7 = *(int *)pQVar10;
          if (1 < iVar7 + 1U) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + 1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            iVar7 = *(int *)pQVar10;
          }
          if (iVar7 != -1) {
            if (iVar7 != 0) {
              LOCK();
              *(int *)pQVar10 = *(int *)pQVar10 + -1;
              local_31 = *(int *)pQVar10 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100530ea7;
            }
            QArrayData::deallocate(pQVar10,2,8);
          }
LAB_100530ea7:
          if (*(int *)pQVar3 != -1) {
            if (*(int *)pQVar3 != 0) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + -1;
              local_31 = *(int *)pQVar3 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100530ed4;
            }
            QArrayData::deallocate(pQVar3,2,8);
          }
LAB_100530ed4:
          FUN_100532d70(&local_40);
          if (*(int *)pQVar10 != -1) {
            if (*(int *)pQVar10 != 0) {
              LOCK();
              *(int *)pQVar10 = *(int *)pQVar10 + -1;
              local_31 = *(int *)pQVar10 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100530f0f;
            }
            QArrayData::deallocate(pQVar10,2,8);
          }
LAB_100530f0f:
          if (*(int *)pQVar3 != -1) {
            if (*(int *)pQVar3 != 0) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + -1;
              local_31 = *(int *)pQVar3 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100530f40;
            }
            QArrayData::deallocate(pQVar3,2,8);
          }
        }
        else {
          bVar5 = (**(code **)(*plVar1 + 0x58))(plVar1,piVar12);
          local_a8 = (QArrayData *)PTR_shared_null_100ba20d0;
          cVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,piVar12,&local_a8);
          pQVar3 = local_a8;
          iVar7 = 0;
          if (cVar6 != '\0') {
            pQVar10 = *(QArrayData **)piVar12;
            if (1 < *(int *)pQVar10 + 1U) {
              LOCK();
              *(int *)pQVar10 = *(int *)pQVar10 + 1;
              local_31 = *(int *)pQVar10 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_a8 + 1U) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + 1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
            }
            if (1 < *(int *)pQVar10 + 1U) {
              LOCK();
              *(int *)pQVar10 = *(int *)pQVar10 + 1;
              local_31 = *(int *)pQVar10 != 0;
              UNLOCK();
            }
            local_ac = (bVar5 ^ 1) + 2;
            local_b8 = local_a8;
            iVar7 = *(int *)local_a8;
            if (1 < iVar7 + 1U) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + 1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              iVar7 = *(int *)local_a8;
            }
            local_b0 = 0;
            local_c0 = pQVar10;
            if (iVar7 != -1) {
              if (iVar7 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100530974;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
LAB_100530974:
            if (*(int *)pQVar10 != -1) {
              if (*(int *)pQVar10 != 0) {
                LOCK();
                *(int *)pQVar10 = *(int *)pQVar10 + -1;
                local_31 = *(int *)pQVar10 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005309a1;
              }
              QArrayData::deallocate(pQVar10,2,8);
            }
LAB_1005309a1:
            FUN_100532d70(&local_40);
            if (2 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 2.1 ok [%s]",
                            local_c8 + *(long *)(local_c8 + 0x10));
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100530a30;
                }
                QArrayData::deallocate(local_c8,1,8);
              }
            }
LAB_100530a30:
            if (*(int *)pQVar3 != -1) {
              if (*(int *)pQVar3 != 0) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + -1;
                local_31 = *(int *)pQVar3 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100530a5b;
              }
              QArrayData::deallocate(pQVar3,2,8);
            }
LAB_100530a5b:
            iVar7 = 0x13;
            if (*(int *)pQVar10 != -1) {
              if (*(int *)pQVar10 != 0) {
                LOCK();
                *(int *)pQVar10 = *(int *)pQVar10 + -1;
                local_31 = *(int *)pQVar10 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100530a90;
              }
              QArrayData::deallocate(pQVar10,2,8);
            }
          }
LAB_100530a90:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100530ac6;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100530ac6:
          if (iVar7 == 0) goto LAB_100530ace;
        }
LAB_100530f40:
        piVar12 = local_90 + 2;
        local_90 = piVar12;
      } while (piVar12 != local_88);
    }
    local_80 = 1;
    FUN_100037320(&local_98);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"resolveHostPaths stage 3");
    }
    if ((code *)param_2[1] != (code *)0x0) {
      (*(code *)param_2[1])(&local_40,param_2[2],0);
    }
    if (*(int *)(*param_2 + 4) != 0) {
      FUN_10052fd70(param_1,param_2,&local_40,(int)param_2[3],0);
    }
  }
  if (lVar4 != 0) {
    FUN_100026030(&DAT_1011cc7f8);
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100533160(&local_40,local_40);
  }
  return;
}

