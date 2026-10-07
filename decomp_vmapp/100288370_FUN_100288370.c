
long * FUN_100288370(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x3a0b0);
  if (plVar3 == (long *)(param_1 + 0x3a0b0)) {
    plVar3 = (long *)0x0;
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "../Scsi/Lsi/dev.cpp",0x2fc,"req_take");
  }
  else {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    plVar3 = plVar3 + -0x13;
  }
  return plVar3;
}

