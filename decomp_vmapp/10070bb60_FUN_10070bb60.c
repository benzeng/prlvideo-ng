
long * FUN_10070bb60(int param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  
  if ((param_1 == 0) || (param_1 == 3)) {
    plVar2 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar4 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_10070bd00(plVar2,param_1);
      plVar4 = plVar2;
    }
  }
  else {
    if (param_1 != 2) {
      pcVar3 = "unknown aio mode %d";
      goto LAB_10070bc59;
    }
    plVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar4 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_10070d660(plVar2);
      plVar4 = plVar2;
    }
  }
  if (plVar4 != (long *)0x0) {
    iVar1 = (**(code **)*plVar4)(plVar4,param_2);
    if (iVar1 != 0) {
      return plVar4;
    }
    FUN_1008e3970("","AbstractFile",0,"aio engine initialization failed");
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return (long *)0x0;
  }
  param_1 = FUN_100768f60();
  pcVar3 = "memory allocation error %d";
LAB_10070bc59:
  FUN_1008e3970("","AbstractFile",0,pcVar3,param_1);
  return (long *)0x0;
}

