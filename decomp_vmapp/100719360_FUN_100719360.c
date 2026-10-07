
undefined8 FUN_100719360(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  iVar1 = _strcmp((char *)(param_1 + 0x20),"VZSRV");
  if (iVar1 == 0) {
    plVar3 = (long *)(param_1 + 0x290);
    plVar2 = plVar3;
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == plVar3) {
        return 0;
      }
      iVar1 = _strcmp((char *)plVar2[2],"nr_vms");
    } while (iVar1 != 0);
    iVar1 = _strcmp((char *)plVar2[3],"combined");
    plVar2 = plVar3;
    if (iVar1 == 0) {
      do {
        plVar2 = (long *)*plVar2;
        if (plVar2 == plVar3) {
          return 0xffffffff;
        }
        iVar1 = _strcmp((char *)plVar2[2],"VE_TOTAL");
      } while (iVar1 != 0);
      FUN_100722fa0(plVar3,"servers_total",plVar2[3]);
    }
  }
  return 0;
}

