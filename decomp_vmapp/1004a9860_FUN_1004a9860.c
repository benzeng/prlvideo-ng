
undefined1 FUN_1004a9860(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = &local_40;
  local_38 = 0;
  local_40 = 0;
  for (lVar1 = *(long *)(param_3 + 8); lVar1 != param_3; lVar1 = *(long *)(lVar1 + 8)) {
    plVar5 = (long *)FUN_1004a8250(&local_48,lVar1 + 0x10);
    plVar6 = operator_new(0x10);
    plVar6[1] = 0;
    *plVar6 = 0;
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (long)&PTR_FUN_100bc26d8;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar2 = (long *)*plVar5;
    *plVar5 = (long)plVar6;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar5 = plVar2 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  local_50 = 0;
  uVar4 = FUN_1004a9060(param_1,param_2,&local_48,&local_50,0);
  FUN_1004a8350(&local_48,local_40);
  return uVar4;
}

