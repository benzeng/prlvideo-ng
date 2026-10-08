
undefined8 * FUN_100a693f0(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  void *pvVar14;
  long *local_88;
  long local_80;
  long local_78;
  QReadWriteLock local_70 [24];
  _func_void_Node_ptr *local_58;
  _func_void_Node_ptr *local_50;
  char local_41;
  long *local_40;
  undefined1 local_31;
  
  if ((((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x10), lVar11 == 0)) ||
      (*(int *)(lVar11 + 0x40) != 7)) || (*(int *)(lVar11 + 0x4c) != 5)) goto LAB_100a696d8;
  pvVar8 = operator_new(0x90,(nothrow_t *)PTR_nothrow_1021e1620);
  if (pvVar8 != (void *)0x0) {
    FUN_100aa0f20(pvVar8);
    puVar9 = operator_new(0x10,(nothrow_t *)PTR_nothrow_1021e1620);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = pvVar8;
      *(undefined4 *)(puVar9 + 1) = 0;
      plVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      if (plVar10 == (long *)0x0) {
        FUN_100a6a530(puVar9);
        operator_delete(puVar9);
        FUN_100df99c0("","IOCommunication",0,"Can\'t allocate memory!");
        goto LAB_100a696d8;
      }
      *(undefined4 *)(plVar10 + 1) = 1;
      plVar10[2] = (long)puVar9;
      *plVar10 = (long)&PTR_FUN_102281428;
      local_40 = (long *)0x0;
      lVar11 = 0;
      if (*param_2 != 0) {
        lVar11 = *(long *)(*param_2 + 0x10);
      }
      uVar3 = *(uint *)(lVar11 + 0x4c);
      if ((ulong)uVar3 == 0) {
        local_41 = '\0';
        *param_1 = 0;
        goto LAB_100a69a14;
      }
      uVar13 = 1;
      if (1 < uVar3) {
        uVar13 = (ulong)uVar3;
      }
      plVar4 = *(long **)(lVar11 + 0x80);
      if (plVar4 != (long *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_41 = '\x01';
      local_40 = plVar4;
      if (*(int *)(lVar11 + 0x84 + uVar13 * 8) == 0x6c) {
        pvVar14 = (void *)0x0;
        if (plVar4 != (long *)0x0) {
          pvVar14 = (void *)plVar4[2];
        }
        _memcpy(pvVar8,pvVar14,0x6c);
        lVar11 = 0;
        if (*param_2 != 0) {
          lVar11 = *(long *)(*param_2 + 0x10);
        }
        uVar3 = *(uint *)(lVar11 + 0x4c);
        if (1 < (ulong)uVar3) {
          local_40 = *(long **)(lVar11 + 0x88);
          if (local_40 != (long *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          iVar12 = *(int *)(lVar11 + 0x8c + (ulong)uVar3 * 8);
          local_41 = '\x01';
          if (iVar12 == 0) {
            *(undefined4 *)((long)pvVar8 + 0x60) = 0;
          }
          else {
            FUN_100a6dd10(local_70,&local_40,iVar12,&local_41);
            if ((local_41 == '\0') || (cVar7 = FUN_100a6ca80(local_70), cVar7 != '\0')) {
              *param_1 = 0;
              bVar5 = true;
            }
            else {
              if (local_40 != (long *)0x0) {
                LOCK();
                *(int *)(local_40 + 1) = (int)local_40[1] + 1;
                UNLOCK();
              }
              plVar4 = *(long **)((long)pvVar8 + 0x70);
              *(long **)((long)pvVar8 + 0x70) = local_40;
              if (plVar4 != (long *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                lVar11 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)(*plVar4 + 0x10))();
                }
              }
              *(int *)((long)pvVar8 + 0x60) = iVar12;
              bVar5 = false;
            }
            if (*(int *)(local_50 + 0x10) != -1) {
              if (*(int *)(local_50 + 0x10) != 0) {
                LOCK();
                pcVar2 = local_50 + 0x10;
                *(int *)pcVar2 = *(int *)pcVar2 + -1;
                local_31 = *(int *)pcVar2 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a6979c;
              }
              QHashData::free_helper(local_50);
            }
LAB_100a6979c:
            if (*(int *)(local_58 + 0x10) != -1) {
              if (*(int *)(local_58 + 0x10) != 0) {
                LOCK();
                pcVar2 = local_58 + 0x10;
                *(int *)pcVar2 = *(int *)pcVar2 + -1;
                local_31 = *(int *)pcVar2 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a697cb;
              }
              QHashData::free_helper(local_58);
            }
LAB_100a697cb:
            QReadWriteLock::~QReadWriteLock(local_70);
            if (bVar5) goto LAB_100a69a14;
          }
          lVar11 = 0;
          if (*param_2 != 0) {
            lVar11 = *(long *)(*param_2 + 0x10);
          }
          uVar3 = *(uint *)(lVar11 + 0x4c);
          if (2 < (ulong)uVar3) {
            plVar4 = *(long **)(lVar11 + 0x90);
            if (plVar4 != (long *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            if (local_40 != (long *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                lVar6 = *local_40;
                local_40 = plVar4;
                (**(code **)(lVar6 + 0x10))();
                plVar4 = local_40;
              }
            }
            local_40 = plVar4;
            iVar12 = *(int *)(lVar11 + 0x94 + (ulong)uVar3 * 8);
            local_41 = '\x01';
            if (iVar12 == 0) {
              *(undefined4 *)((long)pvVar8 + 100) = 0;
            }
            else {
              local_78 = 0;
              local_80 = 0;
              if (local_40 != (long *)0x0) {
                local_80 = local_40[2];
              }
              local_78 = FUN_100beeba0(&local_78,&local_80,iVar12);
              if (local_78 == 0) goto LAB_100a69a06;
              FUN_100be8ab0(local_78);
              if (local_40 != (long *)0x0) {
                LOCK();
                *(int *)(local_40 + 1) = (int)local_40[1] + 1;
                UNLOCK();
              }
              plVar4 = *(long **)((long)pvVar8 + 0x78);
              *(long **)((long)pvVar8 + 0x78) = local_40;
              if (plVar4 != (long *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                lVar11 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)(*plVar4 + 0x10))();
                }
              }
              *(int *)((long)pvVar8 + 100) = iVar12;
            }
            lVar11 = 0;
            if (*param_2 != 0) {
              lVar11 = *(long *)(*param_2 + 0x10);
            }
            uVar3 = *(uint *)(lVar11 + 0x4c);
            if (3 < (ulong)uVar3) {
              plVar4 = *(long **)(lVar11 + 0x98);
              if (plVar4 != (long *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              if (local_40 != (long *)0x0) {
                LOCK();
                plVar1 = local_40 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  lVar6 = *local_40;
                  local_40 = plVar4;
                  (**(code **)(lVar6 + 0x10))();
                  plVar4 = local_40;
                }
              }
              local_40 = plVar4;
              iVar12 = *(int *)(lVar11 + 0x9c + (ulong)uVar3 * 8);
              local_41 = '\x01';
              if (iVar12 != 0) {
                FUN_100a69f00(&local_88,&local_40,iVar12,&DAT_1023117c8,1);
                if (local_88 == (long *)0x0) {
LAB_100a69a57:
                  *param_1 = 0;
                  bVar5 = true;
                }
                else {
                  LOCK();
                  *(int *)(local_88 + 1) = (int)local_88[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar4 = local_88 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)(*local_88 + 0x10))(local_88);
                  }
                  if (local_88[2] == 0) goto LAB_100a69a57;
                  LOCK();
                  *(int *)(local_88 + 1) = (int)local_88[1] + 1;
                  UNLOCK();
                  plVar4 = *(long **)((long)pvVar8 + 0x80);
                  *(long **)((long)pvVar8 + 0x80) = local_88;
                  bVar5 = false;
                  if (plVar4 != (long *)0x0) {
                    LOCK();
                    plVar1 = plVar4 + 1;
                    lVar11 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    bVar5 = false;
                    if ((int)lVar11 == 1) {
                      (**(code **)(*plVar4 + 0x10))();
                      bVar5 = false;
                    }
                  }
                }
                if (local_88 != (long *)0x0) {
                  LOCK();
                  plVar4 = local_88 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)(*local_88 + 0x10))(local_88);
                  }
                }
                if (bVar5) goto LAB_100a69a14;
              }
              lVar11 = 0;
              if (*param_2 != 0) {
                lVar11 = *(long *)(*param_2 + 0x10);
              }
              uVar3 = *(uint *)(lVar11 + 0x4c);
              if (4 < (ulong)uVar3) {
                plVar4 = *(long **)(lVar11 + 0xa0);
                if (plVar4 != (long *)0x0) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                }
                if (local_40 != (long *)0x0) {
                  LOCK();
                  plVar1 = local_40 + 1;
                  lVar6 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    lVar6 = *local_40;
                    local_40 = plVar4;
                    (**(code **)(lVar6 + 0x10))();
                    plVar4 = local_40;
                  }
                }
                local_40 = plVar4;
                iVar12 = *(int *)(lVar11 + 0xa4 + (ulong)uVar3 * 8);
              }
              if (iVar12 == 0) {
                *(undefined4 *)((long)pvVar8 + 0x68) = 0;
              }
              else {
                *(int *)((long)pvVar8 + 0x68) = iVar12;
                if (local_40 != (long *)0x0) {
                  LOCK();
                  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
                  UNLOCK();
                }
                plVar4 = *(long **)((long)pvVar8 + 0x88);
                *(long **)((long)pvVar8 + 0x88) = local_40;
                if (plVar4 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar4 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                }
              }
              *(undefined4 *)((long)pvVar8 + 0x5c) = param_3;
              *param_1 = plVar10;
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
              goto LAB_100a69a14;
            }
          }
        }
        local_41 = '\0';
      }
LAB_100a69a06:
      *param_1 = 0;
LAB_100a69a14:
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      LOCK();
      plVar4 = plVar10 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return param_1;
      }
      (**(code **)(*plVar10 + 0x10))(plVar10);
      return param_1;
    }
    plVar10 = *(long **)((long)pvVar8 + 0x88);
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    plVar10 = *(long **)((long)pvVar8 + 0x80);
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    plVar10 = *(long **)((long)pvVar8 + 0x78);
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    plVar10 = *(long **)((long)pvVar8 + 0x70);
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    operator_delete(pvVar8);
  }
  FUN_100df99c0("","IOCommunication",0,"Can\'t allocate memory!");
LAB_100a696d8:
  *param_1 = 0;
  return param_1;
}

