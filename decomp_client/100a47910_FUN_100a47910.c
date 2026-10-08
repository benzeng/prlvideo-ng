
undefined1 FUN_100a47910(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  local_48 = &local_40;
  puVar5 = operator_new(0x30);
  *(undefined4 *)(puVar5 + 4) = param_3;
  puVar5[5] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[2] = &local_40;
  if ((undefined8 **)*local_48 != (undefined8 **)0x0) {
    local_48 = (undefined8 **)*local_48;
  }
  local_40 = puVar5;
  FUN_1001879a0(puVar5,puVar5);
  local_38 = local_38 + 1;
  plVar6 = operator_new(0x18);
  *(undefined4 *)(plVar6 + 1) = 1;
  *plVar6 = (long)&PTR_FUN_102281270;
  plVar6[2] = param_4;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  plVar2 = (long *)puVar5[5];
  puVar5[5] = plVar6;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  LOCK();
  plVar2 = plVar6 + 1;
  lVar3 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  local_50 = 0;
  uVar4 = FUN_100a47580(param_1,param_2,&local_48,&local_50,1);
  FUN_100a36e50(&local_48,local_40);
  return uVar4;
}

