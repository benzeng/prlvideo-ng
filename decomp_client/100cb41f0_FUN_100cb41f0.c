
long * FUN_100cb41f0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_100bf3540(0x38,"comp_lib.c",0xb);
  plVar3 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    *plVar2 = param_1;
    plVar3 = plVar2;
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x10))(plVar2);
      if (iVar1 == 0) {
        FUN_100bf3910(plVar2);
        plVar3 = (long *)0x0;
      }
    }
  }
  return plVar3;
}

