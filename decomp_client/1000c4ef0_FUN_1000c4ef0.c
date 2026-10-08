
void FUN_1000c4ef0(long *param_1,uint param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *local_30;
  
  if ((param_2 == 0x30000004) && (param_3 == 0x30000006)) {
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e8f90(uVar3);
    puVar4 = operator_new(0x10);
    *puVar4 = &PTR_FUN_1021ee320;
    puVar4[1] = param_1;
    local_30 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_30 == (long *)0x0) {
      operator_delete(puVar4);
      local_30 = (long *)0x0;
    }
    else {
      *(undefined4 *)(local_30 + 1) = 1;
      local_30[2] = (long)puVar4;
      *local_30 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(param_1 + 0x17,&local_30);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  if ((param_2 & 0xfffffffe) == 0x30000004) {
    QTimer::start();
  }
  return;
}

