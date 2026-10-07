
void FUN_004110a0(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (*plVar2 == 0) {
    *plVar2 = param_2;
  }
  else {
    sVar1 = strlen((char *)plVar2[2]);
    plVar2 = (long *)FUN_00411010(plVar2,param_2,sVar1);
  }
  plVar2[1] = param_3;
  *(long **)(param_1 + 0x50) = plVar2;
  return;
}

