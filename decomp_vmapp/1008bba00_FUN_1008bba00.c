
long * FUN_1008bba00(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (((param_1 == (long *)0x0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) &&
     (plVar2 = (long *)FUN_1008a0bf0(), plVar2 == (long *)0x0)) {
    return (long *)0x0;
  }
  if ((param_2 == 0) || (plVar2 == (long *)0x0)) {
    FUN_100887ce0(0xb,0x73,0x43,"x509name.c",0x160);
  }
  else {
    FUN_100899890(*plVar2);
    lVar3 = FUN_100822ed0(param_2);
    *plVar2 = lVar3;
    if ((lVar3 != 0) && (iVar1 = FUN_1008bbf30(plVar2,param_3,param_4,param_5), iVar1 != 0)) {
      if (param_1 == (long *)0x0) {
        return plVar2;
      }
      if (*param_1 != 0) {
        return plVar2;
      }
      *param_1 = (long)plVar2;
      return plVar2;
    }
  }
  if ((param_1 == (long *)0x0) || (plVar2 != (long *)*param_1)) {
    FUN_1008a0c10(plVar2);
  }
  return (long *)0x0;
}

