
bool FUN_10056b4c0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = _malloc(0x38);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error: allocation problems");
  }
  else {
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[4] = param_1;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x12a0);
    *(long **)(param_1 + 0x12a0) = plVar2;
    *plVar2 = param_1 + 0x1298;
    plVar2[1] = (long)puVar1;
    *puVar1 = plVar2;
  }
  return plVar2 != (long *)0x0;
}

