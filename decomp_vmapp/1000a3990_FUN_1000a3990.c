
long * FUN_1000a3990(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x109e0) == 2) {
    plVar2 = operator_new(0x40);
    FUN_10010eac0(plVar2,param_1);
    *plVar2 = (long)&PTR_FUN_100ba9470;
  }
  else {
    if (*(int *)(param_1 + 0x109e0) != 1) {
      FUN_1008e3970("","vm",0,"Unknown hypervisor type %x");
      return (long *)0x0;
    }
    plVar2 = operator_new(0x2a0);
    FUN_100110040(plVar2,param_1);
  }
  iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}

