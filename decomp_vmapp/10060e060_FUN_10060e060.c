
long * FUN_10060e060(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long *local_28;
  
  local_28 = (long *)0x0;
  iVar1 = FUN_1006177f0(param_1,&DAT_1011cca80,&local_28);
  plVar2 = local_28;
  *param_2 = iVar1;
  if (iVar1 < 0) {
    plVar2 = (long *)0x0;
    FUN_1008e3970("","crypt",0,"Error when creating object 0x%x",iVar1);
  }
  else {
    iVar1 = (**(code **)(*local_28 + 0x30))(local_28);
    *param_2 = iVar1;
    if (iVar1 < 0) {
      FUN_1008e3970("","crypt",0,"Error 0x%x initializing object.",iVar1);
      FUN_10060ddb0(plVar2);
      (**(code **)*plVar2)(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}

