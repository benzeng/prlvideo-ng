
long * FUN_1008cbc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar4 = (long *)FUN_1008a4610(&DAT_100be50e0);
  if (plVar4 == (long *)0x0) {
    FUN_100887ce0(0x22,0x92,0x41,"v3_pcons.c",0x70);
  }
  else {
    iVar2 = FUN_100885600(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar5 = (undefined8 *)FUN_100885620(param_3,iVar2);
        pcVar1 = (char *)puVar5[1];
        iVar3 = _strcmp(pcVar1,"requireExplicitPolicy");
        plVar6 = plVar4;
        if ((iVar3 != 0) &&
           (iVar3 = _strcmp(pcVar1,"inhibitPolicyMapping"), plVar6 = plVar4 + 1, iVar3 != 0)) {
          FUN_100887ce0(0x22,0x92,0x6a,"v3_pcons.c",0x7c);
          FUN_1008890a0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
          goto LAB_1008cbe0f;
        }
        iVar3 = FUN_1008c4060(puVar5,plVar6);
        if (iVar3 == 0) goto LAB_1008cbe0f;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(param_3);
      } while (iVar2 < iVar3);
    }
    if (plVar4[1] != 0) {
      return plVar4;
    }
    if (*plVar4 != 0) {
      return plVar4;
    }
    FUN_100887ce0(0x22,0x92,0x97,"v3_pcons.c",0x83);
LAB_1008cbe0f:
    FUN_1008a4c40(plVar4,&DAT_100be50e0);
  }
  return (long *)0x0;
}

