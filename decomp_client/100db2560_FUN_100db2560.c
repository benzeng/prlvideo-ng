
long * FUN_100db2560(int param_1,undefined4 param_2)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 == -1) {
    plVar3 = operator_new(0x78,(nothrow_t *)PTR_nothrow_1021e1620);
    plVar2 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN_100db2790(plVar3);
      plVar2 = plVar3;
    }
  }
  else {
    plVar2 = operator_new(0x58,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar2 == (long *)0x0) {
      FUN_100df99c0("","AbstractFile",0,"Error allocating memory for handle pool");
      plVar2 = (long *)0x0;
    }
    else {
      FUN_100db4180(plVar2);
      cVar1 = (**(code **)(*plVar2 + 200))(plVar2,param_2,param_1);
      if (cVar1 == '\0') {
        FUN_100df99c0("","AbstractFile",0,"Error initializing handle pool");
        (**(code **)(*plVar2 + 8))(plVar2);
        plVar2 = (long *)0x0;
      }
    }
  }
  return plVar2;
}

