
int FUN_1005dda50(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 long *param_5,long *param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  void *pvVar12;
  nothrow_t *pnVar13;
  int local_b0;
  int local_a4;
  QArrayData *local_a0;
  QArrayData *local_98;
  long *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_69 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  plVar1 = (long *)(param_4 + 8);
  local_b0 = (int)local_78.field0_0x0;
  pnVar13 = (nothrow_t *)PTR_nothrow_100ba21c8;
  do {
    pvVar8 = operator_new(0x248,pnVar13);
    pvVar12 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      FUN_1005d7f50(pvVar8);
      pvVar12 = pvVar8;
    }
    plVar9 = (long *)FUN_1005f2b80(pvVar12);
    if ((plVar9 == (long *)0x0) || (plVar9[2] == 0)) {
      FUN_1008e3970("","vdisk",0,"Error: memory problems!");
      local_b0 = -0x7ffffffe;
      local_a4 = 1;
    }
    else {
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      iVar6 = FUN_1005db1c0(&local_78,param_2,plVar9[2],&local_80);
      local_a4 = 1;
      if (iVar6 < 0) goto LAB_1005ddfd0;
      bVar4 = FUN_1007ea210(plVar9[2] + 0x228);
      if ((param_4 != 0 & bVar4) == 1) {
        if ((long *)*plVar1 == (long *)0x0) {
LAB_1005ddc1c:
          plVar11 = plVar1;
        }
        else {
          lVar2 = plVar9[2];
          plVar3 = (long *)*plVar1;
          plVar11 = plVar1;
          do {
            while (plVar10 = plVar3, iVar6 = FUN_1007ea6f0(plVar10 + 4,lVar2 + 0x218), iVar6 < 0) {
              plVar3 = (long *)plVar10[1];
              if ((long *)plVar10[1] == (long *)0x0) goto LAB_1005ddc00;
            }
            plVar11 = plVar10;
            plVar3 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
LAB_1005ddc00:
          if ((plVar11 == plVar1) || (iVar6 = FUN_1007ea6f0(lVar2 + 0x218,plVar11 + 4), iVar6 < 0))
          goto LAB_1005ddc1c;
        }
        if (plVar1 != plVar11) goto LAB_1005ddc2e;
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error: VMDK \'%s\' different root state, incorrect format",
                      local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 == -1) {
          local_b0 = -0x7ffdd000;
          iVar6 = local_b0;
        }
        else {
          local_b0 = -0x7ffdd000;
          iVar6 = local_b0;
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_69 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005ddfd0;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
      else {
LAB_1005ddc2e:
        if ((param_6 != (long *)0x0) && ((*param_6 == 0 || (*(long *)(*param_6 + 0x10) == 0)))) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          plVar11 = (long *)*param_6;
          *param_6 = (long)plVar9;
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar3 = plVar11 + 1;
            lVar2 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
        }
        FUN_1007d6bb0(&local_a0,plVar9[2] + 0x218);
        local_98 = local_a0;
        if (1 < *(int *)local_a0 + 1U) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + 1;
          local_69 = *(int *)local_a0 != 0;
          UNLOCK();
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_90 = plVar9;
        FUN_1007d6920(&local_68,&local_98);
        local_58 = local_90;
        if (local_90 == (long *)0x0) {
          local_40 = (long *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
          local_40 = local_90;
          if (local_90 != (long *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
          }
        }
        local_48 = local_60;
        local_50 = local_68;
        FUN_1005f2de0(param_3,&local_50);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar11 = local_40 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_40 + 0x10))();
          }
        }
        if (local_58 != (long *)0x0) {
          LOCK();
          plVar11 = local_58 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_58 + 0x10))();
          }
        }
        if (local_90 != (long *)0x0) {
          LOCK();
          plVar11 = local_90 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_69 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005dddf2;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1005dddf2:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_69 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005dde28;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1005dde28:
        cVar5 = FUN_1007ea210(plVar9[2] + 0x228);
        iVar6 = local_b0;
        if (cVar5 == '\0') {
          if (param_4 != 0) {
            if ((long *)*plVar1 == (long *)0x0) {
LAB_1005ddf26:
              plVar11 = plVar1;
            }
            else {
              lVar2 = plVar9[2];
              plVar3 = (long *)*plVar1;
              plVar11 = plVar1;
              do {
                while (plVar10 = plVar3, iVar7 = FUN_1007ea6f0(plVar10 + 4,lVar2 + 0x228), iVar7 < 0
                      ) {
                  plVar3 = (long *)plVar10[1];
                  if ((long *)plVar10[1] == (long *)0x0) goto LAB_1005ddf01;
                }
                plVar11 = plVar10;
                plVar3 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
LAB_1005ddf01:
              if ((plVar11 == plVar1) ||
                 (iVar7 = FUN_1007ea6f0(lVar2 + 0x228,plVar11 + 4), iVar7 < 0)) goto LAB_1005ddf26;
            }
            if (plVar1 != plVar11) goto LAB_1005ddf31;
          }
          local_a4 = 0;
          QString::operator=(&local_78,&local_80);
        }
        else {
LAB_1005ddf31:
          if (param_5 == (long *)0x0) {
            local_a4 = 3;
          }
          else {
            local_a4 = 3;
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            plVar11 = (long *)*param_5;
            *param_5 = (long)plVar9;
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar3 = plVar11 + 1;
              lVar2 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar2 == 1) {
                (**(code **)(*plVar11 + 0x10))();
              }
            }
          }
        }
      }
LAB_1005ddfd0:
      local_b0 = iVar6;
      pnVar13 = (nothrow_t *)PTR_nothrow_100ba21c8;
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_69 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005de030;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
    }
LAB_1005de030:
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar2 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  } while (local_a4 == 0);
  iVar6 = 0;
  if (local_a4 != 3) {
    iVar6 = local_b0;
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_69 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1005de282;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005de282:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

