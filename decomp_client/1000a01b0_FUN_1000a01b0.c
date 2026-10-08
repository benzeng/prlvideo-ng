
void FUN_1000a01b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *local_38;
  undefined8 local_30;
  
  local_30 = 0x38;
  pvVar5 = operator_new__(0x38,(nothrow_t *)PTR_nothrow_1021e1620);
  local_38 = operator_new(0x18);
  *(undefined4 *)(local_38 + 1) = 1;
  local_38[2] = (long)pvVar5;
  *local_38 = (long)&PTR_FUN_102282990;
  if (pvVar5 != (void *)0x0) {
    puVar2 = (undefined4 *)local_38[2];
    *puVar2 = 1;
    puVar2[1] = 3;
    puVar2[2] = 8;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0x10;
    puVar2[7] = *(undefined4 *)(param_3 + 4);
    puVar2[8] = 2;
    if (*(char *)(param_1 + 5) != '\0') {
      uVar6 = FUN_100319c40(*param_1);
      cVar4 = FUN_10032ec90(uVar6,param_3 + 0x10,*(undefined4 *)(param_3 + 0xc));
      if (cVar4 != '\0') {
        puVar2[8] = 3;
      }
    }
    cVar4 = FUN_10009fca0(param_1,&local_38,&local_30);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)(param_1[2] + 0x28) + 0x10))
                (param_1[2] + 0x28,param_2,&local_38,local_30);
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  return;
}

