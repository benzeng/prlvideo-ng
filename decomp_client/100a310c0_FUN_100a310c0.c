
void FUN_100a310c0(long param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  piVar2 = (int *)*param_3;
  if (param_2 == 3) {
    if (3 < (ulong)(param_3[1] - (long)piVar2)) {
      *(bool *)(param_1 + 0x188) = *piVar2 == 0x7f;
    }
  }
  else if (param_2 == 2) {
    if (3 < (ulong)(param_3[1] - (long)piVar2)) {
      local_38 = (void *)0x0;
      pvStack_30 = (void *)0x0;
      local_28 = 0;
      FUN_100a314c0(param_1,*piVar2,&local_38);
      puVar4 = operator_new(0x18);
      puVar4[1] = 0;
      *puVar4 = 0;
      *puVar4 = puVar4;
      puVar4[1] = puVar4;
      puVar4[2] = 0;
      local_40 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      if (local_40 == (long *)0x0) {
        operator_delete(puVar4);
        local_40 = (long *)0x0;
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(local_40 + 1) = 1;
        local_40[2] = (long)puVar4;
        *local_40 = (long)&PTR_FUN_102280fa8;
      }
      FUN_100a29470(puVar4,*piVar2,local_38,(long)pvStack_30 - (long)local_38);
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))(*(long **)(param_1 + 0xa0),&local_40);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      if (local_38 != (void *)0x0) {
        if (pvStack_30 != local_38) {
          pvStack_30 = local_38;
        }
        operator_delete(local_38);
      }
    }
  }
  else if ((param_2 == 0) && (7 < (ulong)(param_3[1] - (long)piVar2))) {
    FUN_100a312a0(param_1,*piVar2,piVar2[1]);
    return;
  }
  return;
}

