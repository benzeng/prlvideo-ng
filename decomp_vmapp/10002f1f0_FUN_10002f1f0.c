
undefined8 FUN_10002f1f0(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_20;
  
  if (param_2 == 0) {
    if (1 < (param_4 | param_3)) {
      param_2 = (uint)(1 < param_3) * 2;
      goto LAB_10002f215;
    }
  }
  else {
LAB_10002f215:
    if (param_2 == 3) {
      uVar4 = 2;
      goto LAB_10002f235;
    }
    uVar4 = 1;
    if (param_2 == 2) goto LAB_10002f235;
    if (param_2 != 1) {
      FUN_1008e3970("","vm",0,"Can\'t find IDisk. Invalid bus type.");
      return 0;
    }
  }
  param_4 = param_4 + param_3 * 2;
  uVar4 = 0;
LAB_10002f235:
  FUN_100259060(&local_20,uVar4,param_4);
  plVar3 = local_20;
  uVar4 = 0;
  if (*(long *)(local_20[2] + 8) != 0) {
    plVar2 = (long *)___dynamic_cast(*(long *)(local_20[2] + 8),&PTR_vtable_100baea70,
                                     &PTR_vtable_100bef130,0xfffffffffffffffe);
    uVar4 = 0;
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
      plVar3 = local_20;
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return uVar4;
}

