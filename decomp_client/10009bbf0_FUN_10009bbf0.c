
void FUN_10009bbf0(long param_1,long param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  long *local_58;
  undefined1 local_50 [8];
  uint *local_48;
  uint *local_40;
  uint *local_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  puVar3 = *(uint **)(param_1 + 0x50);
  if (1 < *puVar3) {
    FUN_10009c6d0(puVar1,puVar3[1]);
    puVar3 = (uint *)*puVar1;
  }
  puVar6 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar3) {
      FUN_10009c6d0(puVar1,puVar3[1]);
      puVar3 = (uint *)*puVar1;
    }
    if (puVar6 == puVar3 + (long)(int)puVar3[3] * 2 + 4) break;
    if (*(int *)(*(long *)(**(long **)puVar6 + 0x10) + 0x38) < 0) {
      local_40 = puVar6;
      FUN_10009bfd0(&local_38,puVar1,&local_40);
      puVar3 = (uint *)*puVar1;
      puVar6 = local_38;
    }
    else {
      puVar6 = puVar6 + 2;
    }
  }
  if (1 < *puVar3) {
    FUN_10009c6d0(puVar1,puVar3[1]);
    puVar3 = (uint *)*puVar1;
  }
  puVar6 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar3) {
      FUN_10009c6d0(puVar1,puVar3[1]);
      puVar3 = (uint *)*puVar1;
    }
    if (puVar6 == puVar3 + (long)(int)puVar3[3] * 2 + 4) break;
    if (*(long *)(*(long *)(**(long **)puVar6 + 0x10) + 0x10) == param_2) {
      if (*(int *)(*(long *)(**(long **)puVar6 + 0x10) + 0x18) != param_3) {
        QTimer::stop();
        local_48 = puVar6;
        FUN_10009bfd0(local_50,puVar1,&local_48);
      }
      return;
    }
    puVar6 = puVar6 + 2;
  }
  plVar4 = operator_new(0x48);
  FUN_10009a570(plVar4,param_1,param_2,param_3,param_4);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar4;
    *plVar5 = (long)&PTR_FUN_10226c8b8;
  }
  local_58 = plVar5;
  FUN_10009c1e0(puVar1,&local_58);
  QTimer::start();
  if (plVar5 == (long *)0x0) {
    return;
  }
  LOCK();
  plVar4 = plVar5 + 1;
  lVar2 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010009bdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}

