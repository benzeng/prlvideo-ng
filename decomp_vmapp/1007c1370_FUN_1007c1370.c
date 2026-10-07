
void FUN_1007c1370(long param_1,ulong param_2,QString *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  QArrayData *pQVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  QArrayData *pQVar10;
  long *plVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  QArrayData *local_110;
  QArrayData *local_100;
  QArrayData *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long *local_b0;
  QArrayData *local_a8;
  long *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long *local_68;
  QString local_60;
  ulong local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar6 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x10);
  }
  local_58 = param_2;
  local_38 = lVar15;
  if (uVar6 == param_2) {
    QMutex::lock();
    if (param_5 == 1) {
      FUN_1007d6bd0(local_48);
      FUN_1007d6a70(&local_60,local_48);
      QString::operator=((QString *)(param_1 + 0x48),&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_49 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c1608;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
LAB_1007c1608:
    *(int *)(param_1 + 0x40) = param_5;
    QMutex::unlock();
    FUN_1007d5240(*(undefined8 *)(param_1 + 0x28),param_5);
    if (param_5 == 0) {
      FUN_1007c0d50(param_1);
    }
    goto LAB_1007c1ef1;
  }
  if (param_5 == 0) {
    if (param_4 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      local_c0 = (QArrayData *)param_3->field0_0x0;
      if (1 < *(int *)local_c0 + 1U) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
      }
      FUN_1007d5330(uVar1,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_49 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c1438;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1007c1438:
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      local_c8 = (QArrayData *)param_3->field0_0x0;
      if (1 < *(int *)local_c8 + 1U) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + 1;
        local_49 = *(int *)local_c8 != 0;
        UNLOCK();
      }
      FUN_1007d5660(uVar1,&local_c8,0);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_49 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c14a2;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1007c14a2:
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      local_d0 = (QArrayData *)param_3->field0_0x0;
      if (1 < *(int *)local_d0 + 1U) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + 1;
        local_49 = *(int *)local_d0 != 0;
        UNLOCK();
      }
      FUN_1007d56c0(uVar1,uVar1,&local_d0,0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_49 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c150f;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
    }
LAB_1007c150f:
    QMutex::lock();
    bVar12 = true;
    local_d8 = (long *)0x0;
    plVar8 = *(long **)(param_1 + 0x88);
    if (*(uint *)(plVar8 + 4) != 0) {
      uVar9 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar8 + 0x24);
      plVar7 = *(long **)(plVar8[1] + ((ulong)uVar9 % (ulong)*(uint *)(plVar8 + 4)) * 8);
      if (plVar7 != plVar8) {
        do {
          if ((*(uint *)(plVar7 + 1) == uVar9) && (plVar7[2] == param_2)) {
            if (plVar7 != plVar8) {
              FUN_1007c37c0(&local_e0,param_1 + 0x88,&local_58);
              local_e8 = local_e0;
              if (local_e0 == (long *)0x0) goto LAB_1007c1ab2;
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
              local_d8 = local_e0;
              LOCK();
              plVar8 = local_e0 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)(*local_e0 + 0x10))(local_e0);
              }
              goto LAB_1007c1abc;
            }
            break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != plVar8);
      }
    }
    plVar8 = *(long **)(param_1 + 0x90);
    uVar9 = *(uint *)(plVar8 + 4);
    if (uVar9 != 0) {
      uVar5 = qHash(param_3,*(uint *)((long)plVar8 + 0x24));
      uVar6 = (ulong)uVar5 % (ulong)uVar9;
      plVar7 = *(long **)(plVar8[1] + uVar6 * 8);
      if (plVar7 != plVar8) {
        plVar13 = (long *)(plVar8[1] + uVar6 * 8);
        do {
          plVar11 = plVar7;
          plVar14 = plVar8;
          if (*(uint *)(plVar7 + 1) == uVar5) {
            cVar4 = operator==(param_3,(QString *)(plVar7 + 2));
            plVar8 = (long *)*plVar13;
            plVar14 = *(long **)(param_1 + 0x90);
            plVar11 = plVar8;
            if (cVar4 != '\0') break;
          }
          plVar8 = plVar14;
          plVar7 = (long *)*plVar11;
          plVar13 = plVar11;
          plVar14 = plVar8;
        } while (plVar7 != plVar8);
        if (plVar8 != plVar14) {
          FUN_1007c3990(&local_e8,(undefined8 *)(param_1 + 0x90),param_3);
          lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (local_e8 == (long *)0x0) {
LAB_1007c1ab2:
            local_e0 = (long *)0x0;
            local_d8 = local_e8;
          }
          else {
            LOCK();
            *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
            UNLOCK();
            local_d8 = local_e8;
            LOCK();
            plVar8 = local_e8 + 1;
            lVar3 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            local_e0 = local_e8;
            if ((int)lVar3 == 1) {
              (**(code **)(*local_e8 + 0x10))(local_e8);
            }
          }
LAB_1007c1abc:
          FUN_1007c3bf0(param_1 + 0x98,&local_d8);
          FUN_1007c3cd0(param_1 + 0xa0,param_3);
          bVar12 = false;
          QMutex::unlock();
          FUN_1007c10a0(param_1);
          if (local_e0 != (long *)0x0) {
            LOCK();
            plVar8 = local_e0 + 1;
            lVar3 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)(*local_e0 + 0x10))(local_e0);
            }
          }
          goto joined_r0x0001007c1ee3;
        }
      }
    }
    pQVar10 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)pQVar10 + 1U) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + 1;
      local_49 = *(int *)pQVar10 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
    lVar3 = *(long *)(local_f0 + 0x10);
    pQVar2 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_49 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sClient \'%s\' does not exist in list!",local_f0 + lVar3,
                  local_100 + *(long *)(local_100 + 0x10));
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_49 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c19f8;
      }
      QArrayData::deallocate(local_100,1,8);
    }
LAB_1007c19f8:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_49 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c1a2e;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_1007c1a2e:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_49 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c1a64;
      }
      QArrayData::deallocate(local_f0,1,8);
    }
LAB_1007c1a64:
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_49 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((bool)local_49) goto joined_r0x0001007c1ee3;
      }
      QArrayData::deallocate(pQVar10,2,8);
    }
  }
  else {
    if (param_5 != 1) {
      pQVar10 = *(QArrayData **)(param_1 + 0x20);
      if (1 < *(int *)pQVar10 + 1U) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + 1;
        local_49 = *(int *)pQVar10 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sUnknown client state %d",
                    local_110 + *(long *)(local_110 + 0x10),param_5);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_49 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c1760;
        }
        QArrayData::deallocate(local_110,1,8);
      }
LAB_1007c1760:
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_49 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c1ef1;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
      goto LAB_1007c1ef1;
    }
    QMutex::lock();
    bVar12 = true;
    plVar8 = *(long **)(param_1 + 0x88);
    if (*(uint *)(plVar8 + 4) != 0) {
      uVar9 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar8 + 0x24);
      plVar7 = *(long **)(plVar8[1] + ((ulong)uVar9 % (ulong)*(uint *)(plVar8 + 4)) * 8);
      if (plVar7 != plVar8) {
        do {
          if ((*(uint *)(plVar7 + 1) == uVar9) && (plVar7[2] == param_2)) {
            if (plVar7 != plVar8) {
              plVar8 = (long *)FUN_1007c35f0(param_1 + 0x90,param_3);
              FUN_1007c37c0(&local_68,param_1 + 0x88,&local_58);
              if (local_68 != (long *)0x0) {
                LOCK();
                *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                UNLOCK();
              }
              plVar7 = (long *)*plVar8;
              *plVar8 = (long)local_68;
              if (plVar7 != (long *)0x0) {
                LOCK();
                plVar8 = plVar7 + 1;
                lVar3 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)(*plVar7 + 0x10))();
                }
              }
              if (local_68 != (long *)0x0) {
                LOCK();
                plVar8 = local_68 + 1;
                lVar3 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)(*local_68 + 0x10))(local_68);
                }
              }
              QMutex::unlock();
              uVar1 = *(undefined8 *)(param_1 + 0x28);
              local_90 = (QArrayData *)param_3->field0_0x0;
              if (1 < *(int *)local_90 + 1U) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + 1;
                local_49 = *(int *)local_90 != 0;
                UNLOCK();
              }
              FUN_1007d5660(uVar1,&local_90,1);
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 != 0) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_49 = *(int *)local_90 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_1007c1c47;
                }
                QArrayData::deallocate(local_90,2,8);
              }
LAB_1007c1c47:
              uVar1 = *(undefined8 *)(param_1 + 0x28);
              local_98 = (QArrayData *)param_3->field0_0x0;
              if (1 < *(int *)local_98 + 1U) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + 1;
                local_49 = *(int *)local_98 != 0;
                UNLOCK();
              }
              FUN_1007d56c0(uVar1,uVar1,&local_98,1);
              if (*(int *)local_98 != -1) {
                if (*(int *)local_98 != 0) {
                  LOCK();
                  *(int *)local_98 = *(int *)local_98 + -1;
                  local_49 = *(int *)local_98 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_1007c1cba;
                }
                QArrayData::deallocate(local_98,2,8);
              }
LAB_1007c1cba:
              local_a0 = (long *)0x0;
              cVar4 = FUN_10079cab0(param_2,&local_a0);
              uVar1 = *(undefined8 *)(param_1 + 0x28);
              if (cVar4 == '\0') {
                local_b8 = (QArrayData *)param_3->field0_0x0;
                if (1 < *(int *)local_b8 + 1U) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + 1;
                  local_49 = *(int *)local_b8 != 0;
                  UNLOCK();
                }
                FUN_1007d5290(uVar1,&local_b8);
                if (*(int *)local_b8 != -1) {
                  if (*(int *)local_b8 != 0) {
                    LOCK();
                    *(int *)local_b8 = *(int *)local_b8 + -1;
                    local_49 = *(int *)local_b8 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1007c1f71;
                  }
                  QArrayData::deallocate(local_b8,2,8);
                }
              }
              else {
                local_a8 = (QArrayData *)param_3->field0_0x0;
                if (1 < *(int *)local_a8 + 1U) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + 1;
                  local_49 = *(int *)local_a8 != 0;
                  UNLOCK();
                }
                local_b0 = local_a0;
                if (local_a0 != (long *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                }
                FUN_1007d52e0(uVar1,&local_a8,&local_b0);
                if (local_b0 != (long *)0x0) {
                  LOCK();
                  plVar8 = local_b0 + 1;
                  lVar3 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
                    (**(code **)(*local_b0 + 0x10))();
                  }
                }
                if (*(int *)local_a8 != -1) {
                  if (*(int *)local_a8 != 0) {
                    LOCK();
                    *(int *)local_a8 = *(int *)local_a8 + -1;
                    local_49 = *(int *)local_a8 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1007c1f71;
                  }
                  QArrayData::deallocate(local_a8,2,8);
                }
              }
LAB_1007c1f71:
              if (local_a0 == (long *)0x0) {
                bVar12 = false;
              }
              else {
                LOCK();
                plVar8 = local_a0 + 1;
                lVar3 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                bVar12 = false;
                if ((int)lVar3 == 1) {
                  (**(code **)(*local_a0 + 0x10))();
                  bVar12 = false;
                }
              }
              goto joined_r0x0001007c1ee3;
            }
            break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != plVar8);
      }
    }
    local_78 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_49 = *(int *)local_78 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar10 = local_70 + *(long *)(local_70 + 0x10);
    local_88 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sClient \'%s\' does not exist in list!",pQVar10,
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c1e4f;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1007c1e4f:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c1e7f;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1007c1e7f:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c1eaf;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1007c1eaf:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_49 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_49) goto joined_r0x0001007c1ee3;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
joined_r0x0001007c1ee3:
  if (bVar12) {
    QMutex::unlock();
  }
LAB_1007c1ef1:
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

