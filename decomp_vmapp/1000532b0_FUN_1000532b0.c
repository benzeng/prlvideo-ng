
void FUN_1000532b0(long param_1,QString *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  long *in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  long local_910;
  long *local_900;
  long *local_8f8;
  int *local_8f0;
  QTypedArrayData<unsigned_short> *local_8e8;
  undefined1 local_8e0 [8];
  undefined4 local_8d8;
  long *local_8d4;
  undefined4 local_8c4;
  undefined4 local_8c0;
  long *local_48;
  int *local_40;
  undefined1 local_31;
  
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  plVar6 = operator_new(0x28);
  pQVar2 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = param_1;
  *plVar6 = (long)&PTR_FUN_100bef5a8;
  plVar6[3] = (long)pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  *(undefined1 *)(plVar6 + 4) = 0;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  cVar5 = FUN_100041750(uVar9,plVar6);
  if (cVar5 == '\0') {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  LOCK();
  plVar7 = plVar6 + 1;
  lVar8 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005339e;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10005339e:
  if (iStack0000000000000008 != 7) {
    if (((iStack0000000000000008 == 0xc) &&
        (FUN_100050e90(&local_48,param_1 + 0x78,in_stack_00000010), local_48 != (long *)0x0)) &&
       (*(undefined4 *)(local_48 + 7) = uStack000000000000000c, local_48 != (long *)0x0)) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    plVar6 = operator_new(0x850);
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = param_1;
    *plVar6 = (long)&PTR_FUN_100bef5f8;
    _memcpy(plVar6 + 3,&stack0x00000008,0x838);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    cVar5 = FUN_100041750(uVar9,plVar6);
    if (cVar5 == '\0') {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar7 = plVar6 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return;
  }
  QMutex::lock();
  local_910 = *(long *)(param_1 + 0x60);
  if (local_910 == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = uStack000000000000000c;
    *(undefined4 *)(param_1 + 0x38) = uStack0000000000000034;
    *(undefined4 *)(param_1 + 0x3c) = in_stack_00000038;
    *(undefined4 *)(param_1 + 0x48) = uStack0000000000000030;
    QString::operator=((QString *)(param_1 + 0x40),param_2);
    plVar6 = in_stack_00000028;
    piVar11 = (int *)*in_stack_00000028;
    if (*(int **)(param_1 + 0x50) != piVar11) {
      local_40 = piVar11;
      if (*piVar11 != -1) {
        if (*piVar11 == 0) {
          QListData::detach((int)&local_40);
          iVar1 = local_40[2];
          if (iVar1 != local_40[3]) {
            puVar10 = (undefined8 *)(*plVar6 + 0x10 + (long)*(int *)(*plVar6 + 8) * 8);
            piVar11 = local_40 + (long)iVar1 * 2 + 4;
            lVar8 = (long)local_40[3] * 8 + (long)iVar1 * -8;
            do {
              piVar3 = (int *)*puVar10;
              *(int **)piVar11 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
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
          *piVar11 = *piVar11 + 1;
          local_31 = *piVar11 != 0;
          UNLOCK();
        }
      }
      piVar11 = *(int **)(param_1 + 0x50);
      *(int **)(param_1 + 0x50) = local_40;
      local_40 = piVar11;
      FUN_100013180(&local_40);
    }
    local_910 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  QMutex::unlock();
  if (local_910 == 0) goto LAB_1000537ea;
  local_8d8 = uStack000000000000000c;
  local_8c4 = uStack0000000000000034;
  local_8c0 = in_stack_00000038;
  plVar7 = operator_new(0x78);
  uVar4 = uStack0000000000000030;
  plVar6 = in_stack_00000028;
  local_8e8 = param_2->field0_0x0;
  if (1 < *(int *)local_8e8 + 1U) {
    LOCK();
    *(int *)local_8e8 = *(int *)local_8e8 + 1;
    local_31 = *(int *)local_8e8 != 0;
    UNLOCK();
  }
  local_8f0 = (int *)*in_stack_00000028;
  if (*local_8f0 != -1) {
    if (*local_8f0 == 0) {
      QListData::detach((int)&local_8f0);
      iVar1 = local_8f0[2];
      if (iVar1 != local_8f0[3]) {
        puVar10 = (undefined8 *)(*plVar6 + 0x10 + (long)*(int *)(*plVar6 + 8) * 8);
        piVar11 = local_8f0 + (long)iVar1 * 2 + 4;
        lVar8 = (long)local_8f0[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = (int *)*puVar10;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
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
      *local_8f0 = *local_8f0 + 1;
      local_31 = *local_8f0 != 0;
      UNLOCK();
    }
  }
  FUN_1000539a0(plVar7,param_1,&local_8e8,uVar4,&local_8f0);
  FUN_100013180(&local_8f0);
  if (*(int *)local_8e8 != -1) {
    if (*(int *)local_8e8 != 0) {
      LOCK();
      *(int *)local_8e8 = *(int *)local_8e8 + -1;
      local_31 = *(int *)local_8e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100053716;
    }
    QArrayData::deallocate((QArrayData *)local_8e8,2,8);
  }
LAB_100053716:
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  local_900 = plVar7;
  FUN_100050e10(&local_8f8,param_1 + 0x78,&local_900);
  if (local_8f8 != (long *)0x0) {
    LOCK();
    plVar6 = local_8f8 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*local_8f8 + 0x10))();
    }
  }
  LOCK();
  plVar6 = plVar7 + 1;
  lVar8 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_8d4 = plVar7;
  uVar9 = FUN_1002a6120(local_910,1,1);
  FUN_1002a5a50(uVar9,0,local_8e0,0x894);
  FUN_1004c07d0(param_1,local_910,0);
  LOCK();
  plVar6 = plVar7 + 1;
  lVar8 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)(*plVar7 + 0x10))();
  }
LAB_1000537ea:
  FUN_10005aca0(&stack0x00000008);
  return;
}

