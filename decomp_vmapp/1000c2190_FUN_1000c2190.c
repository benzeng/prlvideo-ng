
long * FUN_1000c2190(undefined8 param_1,uint param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_2 < 2) {
    plVar3 = (long *)0x0;
    if (param_2 != 1) {
      plVar2 = operator_new(0x90,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar3 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        FUN_1000c1c60(plVar2,param_1);
        *(uint *)((long)plVar2 + 0x34) = param_2;
        iVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_4,param_3);
        plVar3 = plVar2;
        if (iVar1 == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
          plVar3 = (long *)0x0;
        }
      }
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Invalid debugger type %d",param_2);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

