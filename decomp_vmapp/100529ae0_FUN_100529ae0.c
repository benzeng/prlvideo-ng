
void FUN_100529ae0(undefined8 *param_1,undefined2 param_2,undefined4 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
  *param_1 = &PTR____cxa_pure_virtual_10111d5f0;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  pvVar5 = operator_new__((ulong)param_4,(nothrow_t *)PTR_nothrow_100ba21c8);
  plVar6 = operator_new(0x18);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = (long)pvVar5;
  *plVar6 = (long)&PTR_FUN_100bef320;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  plVar2 = (long *)param_1[2];
  param_1[2] = plVar6;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  LOCK();
  plVar2 = plVar6 + 1;
  lVar4 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((param_1[2] == 0) ||
     (puVar3 = *(undefined4 **)(param_1[2] + 0x10), puVar3 == (undefined4 *)0x0)) {
    FUN_1008e3970("","ChrProtocol",0,
                  "Failed to allocate memory (size=0x%08X bytes) for Coherence package",param_4);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    *(uint *)(param_1 + 3) = param_4;
    *(undefined2 *)((long)puVar3 + 0x12) = param_2;
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3[2] = 1;
    *(undefined2 *)(puVar3 + 4) = 0;
    puVar3[3] = 0;
  }
  return;
}

