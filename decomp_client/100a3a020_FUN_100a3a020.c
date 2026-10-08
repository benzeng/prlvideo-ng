
void FUN_100a3a020(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **local_98;
  long *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  long *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_1021e15e8;
  local_48 = PTR_shared_null_1021e15e8;
  lVar2 = *param_3;
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    plVar4 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    do {
      piVar3 = (int *)*plVar4;
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        FUN_1000341d0(&local_40,piVar3 + 2);
      }
      else if (iVar1 == 1) {
        FUN_1000341d0(&local_48,piVar3 + 2);
      }
      else if (iVar1 == 2) {
        FUN_10018c250(&local_58,param_2);
        local_50 = local_58;
        FUN_100a3c310(&local_50,*plVar4 + 8,*(undefined4 *)(*plVar4 + 0x10));
        if (local_58 != 0) {
          _PrlHandle_Free();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (long *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8));
  }
  local_98 = &local_40;
  if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
    plVar4 = operator_new(0x28);
    FUN_10018c650(&local_68,param_2);
    *plVar4 = (long)&PTR_FUN_102237f40;
    plVar4[1] = param_1;
    plVar4[2] = (long)local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    plVar4[3] = (long)local_60;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
    *(undefined4 *)(plVar4 + 4) = 0;
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)plVar4;
      *plVar5 = (long)&PTR_FUN_10226ca80;
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3a204;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100a3a204:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3a234;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100a3a234:
    uVar6 = FUN_10018c280(param_2);
    uVar6 = FUN_100319c30(uVar6);
    if (plVar5 != (long *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_70 = plVar5;
    FUN_10032fa90(uVar6,&local_70,local_98);
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(int *)(local_48 + 0xc) == *(int *)(local_48 + 8)) goto LAB_100a3a445;
  plVar4 = operator_new(0x28);
  FUN_10018c650(&local_80,param_2);
  *plVar4 = (long)&PTR_FUN_102237f40;
  plVar4[1] = param_1;
  plVar4[2] = (long)local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  plVar4[3] = (long)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  *(undefined4 *)(plVar4 + 4) = 1;
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar4;
    *plVar5 = (long)&PTR_FUN_10226ca80;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3a398;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a3a398:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3a3c8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a3a3c8:
  uVar6 = FUN_10018c280(param_2);
  uVar6 = FUN_100319c30(uVar6);
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88 = plVar5;
  FUN_10032fa90(uVar6,&local_88,&local_48);
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_100a3a445:
  FUN_100039a80(&local_48);
  FUN_100039a80(local_98);
  return;
}

