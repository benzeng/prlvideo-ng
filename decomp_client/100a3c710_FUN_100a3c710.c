
void FUN_100a3c710(void)

{
  char cVar1;
  long *plVar2;
  char *pcVar3;
  
  plVar2 = operator_new(0xb0,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar2 == (long *)0x0) {
    DAT_1023112a8 = (long *)0x0;
    FUN_100df99c0("SIATOOL","SIAToolClient",0,"Can\'t create an instance of CSIALogicImpl");
    return;
  }
  FUN_100a372d0(plVar2);
  DAT_1023112a8 = plVar2;
  cVar1 = FUN_100a37db0(plVar2);
  if (cVar1 == '\0') {
    pcVar3 = "Can\'t initialize an instance of CSIALogicImpl";
  }
  else {
    if (((long *)DAT_1023112a8[2] != (long *)0x0) &&
       (cVar1 = (**(code **)(*(long *)DAT_1023112a8[2] + 0x10))(), cVar1 != '\0')) {
      return;
    }
    pcVar3 = "Can\'t start an instance of CSIALogicImpl";
  }
  FUN_100df99c0("SIATOOL","SIAToolClient",0,pcVar3);
  plVar2 = DAT_1023112a8;
  if ((long *)DAT_1023112a8[2] != (long *)0x0) {
    (**(code **)(*(long *)DAT_1023112a8[2] + 8))();
    if ((long *)plVar2[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[2] + 0x48))();
    }
    plVar2[2] = 0;
  }
  if ((long *)plVar2[3] != (long *)0x0) {
    (**(code **)(*(long *)plVar2[3] + 8))();
  }
  if (DAT_1023112a8 != (long *)0x0) {
    (**(code **)(*DAT_1023112a8 + 0x20))();
  }
  DAT_1023112a8 = (long *)0x0;
  return;
}

