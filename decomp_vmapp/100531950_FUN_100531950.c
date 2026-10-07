
void FUN_100531950(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  QArrayData *pQVar13;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
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
    FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 1");
  }
  local_40 = (int *)PTR_shared_null_100ba2188;
  QMutex::lock();
  lVar3 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
  }
  QMutex::unlock();
  if (lVar3 == 0) {
    local_60 = (int *)param_2[4];
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_60);
        iVar6 = local_60[2];
        if (iVar6 != local_60[3]) {
          puVar10 = (undefined8 *)(param_2[4] + 0x10 + (long)*(int *)(param_2[4] + 8) * 8);
          piVar11 = local_60 + (long)iVar6 * 2 + 4;
          lVar8 = (long)local_60[3] * 8 + (long)iVar6 * -8;
          do {
            piVar2 = (int *)*puVar10;
            *(int **)piVar11 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar11 = piVar11 + 2;
            puVar10 = puVar10 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *local_60 = *local_60 + 1;
        local_31 = *local_60 != 0;
        UNLOCK();
      }
    }
    piVar11 = local_60 + (long)local_60[2] * 2 + 4;
    local_50 = local_60 + (long)local_60[3] * 2 + 4;
    local_58 = piVar11;
    if (local_60[2] != local_60[3]) {
      do {
        local_48 = 1;
        local_58 = piVar11;
        pQVar9 = (QArrayData *)QString::fromAscii_helper("",0);
        pQVar13 = *(QArrayData **)piVar11;
        if (1 < *(int *)pQVar13 + 1U) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + 1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
        }
        if (1 < *(int *)pQVar9 + 1U) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + 1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
        }
        iVar6 = *(int *)pQVar13;
        if (1 < iVar6 + 1U) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + 1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
          iVar6 = *(int *)pQVar13;
        }
        local_68 = 0x80000001;
        local_64 = 0;
        local_78 = pQVar9;
        local_70 = pQVar13;
        if (iVar6 != -1) {
          if (iVar6 != 0) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005324bd;
          }
          QArrayData::deallocate(pQVar13,2,8);
        }
LAB_1005324bd:
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005324ec;
          }
          QArrayData::deallocate(pQVar9,2,8);
        }
LAB_1005324ec:
        FUN_100532d70(&local_40);
        if (*(int *)pQVar13 != -1) {
          if (*(int *)pQVar13 != 0) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100532522;
          }
          QArrayData::deallocate(pQVar13,2,8);
        }
LAB_100532522:
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100532551;
          }
          QArrayData::deallocate(pQVar9,2,8);
        }
LAB_100532551:
        piVar11 = local_58 + 2;
        local_58 = piVar11;
      } while (piVar11 != local_50);
    }
    local_48 = 1;
    FUN_100037320(&local_60);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 1 error");
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
      FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 2");
    }
    lVar8 = *(long *)(lVar3 + 0x18);
    plVar1 = *(long **)(lVar3 + 0x90);
    local_98 = (int *)param_2[4];
    if (*local_98 != -1) {
      if (*local_98 == 0) {
        QListData::detach((int)&local_98);
        iVar6 = local_98[2];
        if (iVar6 != local_98[3]) {
          puVar10 = (undefined8 *)(param_2[4] + 0x10 + (long)*(int *)(param_2[4] + 8) * 8);
          piVar11 = local_98 + (long)iVar6 * 2 + 4;
          lVar7 = (long)local_98[3] * 8 + (long)iVar6 * -8;
          do {
            piVar2 = (int *)*puVar10;
            *(int **)piVar11 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar11 = piVar11 + 2;
            puVar10 = puVar10 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_98 = *local_98 + 1;
        local_31 = *local_98 != 0;
        UNLOCK();
      }
    }
    piVar11 = local_98 + (long)local_98[2] * 2 + 4;
    local_88 = local_98 + (long)local_98[3] * 2 + 4;
    local_90 = piVar11;
    if (local_98[2] != local_98[3]) {
      do {
        local_80 = 1;
        local_90 = piVar11;
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 2.1 [%s]",
                        local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100531c20;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
        }
LAB_100531c20:
        if (lVar8 == 0) {
LAB_100531ebd:
          if (2 < DAT_1011b55f8) {
            QString::toUtf8();
            FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 2.2 [%s]",
                          local_d0 + *(long *)(local_d0 + 0x10));
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100531f40;
              }
              QArrayData::deallocate(local_d0,1,8);
            }
          }
LAB_100531f40:
          if (plVar1 != (long *)0x0) {
            local_d8 = (QArrayData *)PTR_shared_null_100ba20d0;
            cVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,piVar11,&local_d8);
            pQVar13 = local_d8;
            iVar6 = 0;
            if (cVar4 != '\0') {
              if (1 < *(int *)local_d8 + 1U) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + 1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
              }
              pQVar9 = *(QArrayData **)piVar11;
              if (1 < *(int *)pQVar9 + 1U) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + 1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
              }
              if (1 < *(int *)local_d8 + 1U) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + 1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
              }
              iVar6 = *(int *)pQVar9;
              if (1 < iVar6 + 1U) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + 1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
                iVar6 = *(int *)pQVar9;
              }
              if (iVar6 != -1) {
                if (iVar6 != 0) {
                  LOCK();
                  *(int *)pQVar9 = *(int *)pQVar9 + -1;
                  local_31 = *(int *)pQVar9 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10053201c;
                }
                QArrayData::deallocate(pQVar9,2,8);
              }
LAB_10053201c:
              if (*(int *)pQVar13 != -1) {
                if (*(int *)pQVar13 != 0) {
                  LOCK();
                  *(int *)pQVar13 = *(int *)pQVar13 + -1;
                  local_31 = *(int *)pQVar13 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10053204b;
                }
                QArrayData::deallocate(pQVar13,2,8);
              }
LAB_10053204b:
              FUN_100532d70(&local_40);
              if (2 < DAT_1011b55f8) {
                QString::toUtf8();
                FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 2.2 ok [%s]",
                              local_f8 + *(long *)(local_f8 + 0x10));
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005320d2;
                  }
                  QArrayData::deallocate(local_f8,1,8);
                }
              }
LAB_1005320d2:
              if (*(int *)pQVar9 != -1) {
                if (*(int *)pQVar9 != 0) {
                  LOCK();
                  *(int *)pQVar9 = *(int *)pQVar9 + -1;
                  local_31 = *(int *)pQVar9 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005320fd;
                }
                QArrayData::deallocate(pQVar9,2,8);
              }
LAB_1005320fd:
              iVar6 = 0x13;
              if (*(int *)pQVar13 != -1) {
                if (*(int *)pQVar13 != 0) {
                  LOCK();
                  *(int *)pQVar13 = *(int *)pQVar13 + -1;
                  local_31 = *(int *)pQVar13 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100532140;
                }
                QArrayData::deallocate(pQVar13,2,8);
              }
            }
LAB_100532140:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100532176;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_100532176:
            if (iVar6 != 0) goto LAB_100532340;
          }
          if (2 < DAT_1011b55f8) {
            QString::toUtf8();
            FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 2.3 [%s]",
                          local_100 + *(long *)(local_100 + 0x10));
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100532200;
              }
              QArrayData::deallocate(local_100,1,8);
            }
          }
LAB_100532200:
          pQVar9 = (QArrayData *)QString::fromAscii_helper("",0);
          pQVar13 = *(QArrayData **)piVar11;
          if (1 < *(int *)pQVar13 + 1U) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + 1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
          }
          if (1 < *(int *)pQVar9 + 1U) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + 1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
          }
          iVar6 = *(int *)pQVar13;
          if (1 < iVar6 + 1U) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + 1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            iVar6 = *(int *)pQVar13;
          }
          if (iVar6 != -1) {
            if (iVar6 != 0) {
              LOCK();
              *(int *)pQVar13 = *(int *)pQVar13 + -1;
              local_31 = *(int *)pQVar13 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100532299;
            }
            QArrayData::deallocate(pQVar13,2,8);
          }
LAB_100532299:
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005322c8;
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_1005322c8:
          FUN_100532d70(&local_40);
          if (*(int *)pQVar13 != -1) {
            if (*(int *)pQVar13 != 0) {
              LOCK();
              *(int *)pQVar13 = *(int *)pQVar13 + -1;
              local_31 = *(int *)pQVar13 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100532303;
            }
            QArrayData::deallocate(pQVar13,2,8);
          }
LAB_100532303:
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100532340;
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
        }
        else {
          FUN_1004d2110(&local_a8,lVar8 + 0x48,piVar11);
          uVar12 = *(uint *)(local_a8 + 4);
          iVar6 = 0;
          if (uVar12 != 0) {
            if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
              QString::reallocData((uint)&local_a8,(bool)((char)uVar12 + '\x01'));
              uVar12 = *(uint *)(local_a8 + 4);
            }
            lVar7 = (long)(int)uVar12 * 2;
            if (lVar7 != 0) {
              pQVar13 = local_a8 + *(long *)(local_a8 + 0x10);
              do {
                uVar5 = FUN_100541f50(*(undefined2 *)pQVar13);
                *(undefined2 *)pQVar13 = uVar5;
                pQVar13 = pQVar13 + 2;
                lVar7 = lVar7 + -2;
              } while (lVar7 != 0);
            }
            pQVar13 = local_a8;
            if (1 < *(int *)local_a8 + 1U) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + 1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
            }
            pQVar9 = *(QArrayData **)piVar11;
            if (1 < *(int *)pQVar9 + 1U) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + 1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_a8 + 1U) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + 1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
            }
            iVar6 = *(int *)pQVar9;
            if (1 < iVar6 + 1U) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + 1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              iVar6 = *(int *)pQVar9;
            }
            local_b0 = 0;
            local_ac = 0;
            local_b8 = pQVar9;
            if (iVar6 != -1) {
              if (iVar6 != 0) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + -1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100531d5d;
              }
              QArrayData::deallocate(pQVar9,2,8);
            }
LAB_100531d5d:
            if (*(int *)pQVar13 != -1) {
              if (*(int *)pQVar13 != 0) {
                LOCK();
                *(int *)pQVar13 = *(int *)pQVar13 + -1;
                local_31 = *(int *)pQVar13 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100531d8c;
              }
              QArrayData::deallocate(pQVar13,2,8);
            }
LAB_100531d8c:
            FUN_100532d70(&local_40);
            if (2 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 2.1 ok [%s]",
                            local_c8 + *(long *)(local_c8 + 0x10));
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100531e20;
                }
                QArrayData::deallocate(local_c8,1,8);
              }
            }
LAB_100531e20:
            if (*(int *)pQVar9 != -1) {
              if (*(int *)pQVar9 != 0) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + -1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100531e4b;
              }
              QArrayData::deallocate(pQVar9,2,8);
            }
LAB_100531e4b:
            iVar6 = 0x13;
            if (*(int *)pQVar13 != -1) {
              if (*(int *)pQVar13 != 0) {
                LOCK();
                *(int *)pQVar13 = *(int *)pQVar13 + -1;
                local_31 = *(int *)pQVar13 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100531e7f;
              }
              QArrayData::deallocate(pQVar13,2,8);
            }
          }
LAB_100531e7f:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100531eb5;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100531eb5:
          if (iVar6 == 0) goto LAB_100531ebd;
        }
LAB_100532340:
        piVar11 = local_90 + 2;
        local_90 = piVar11;
      } while (piVar11 != local_88);
    }
    local_80 = 1;
    FUN_100037320(&local_98);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"resolveGuestPaths stage 3");
    }
    if ((code *)param_2[1] != (code *)0x0) {
      (*(code *)param_2[1])(&local_40,param_2[2],0);
    }
    if (*(int *)(*param_2 + 4) != 0) {
      FUN_10052fd70(param_1,param_2,&local_40,(int)param_2[3],0);
    }
  }
  if (lVar3 != 0) {
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

