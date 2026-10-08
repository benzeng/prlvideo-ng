
long * FUN_100ca7210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar4 = (long *)FUN_100c7fb90(&DAT_1022556f0);
  if (plVar4 == (long *)0x0) {
    FUN_100c62ee0(0x22,0x92,0x41,"v3_pcons.c",0x70);
  }
  else {
    iVar2 = FUN_100c60800(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar5 = (undefined8 *)FUN_100c60820(param_3,iVar2);
        pcVar1 = (char *)puVar5[1];
        iVar3 = _strcmp(pcVar1,"requireExplicitPolicy");
        plVar6 = plVar4;
        if ((iVar3 != 0) &&
           (iVar3 = _strcmp(pcVar1,"inhibitPolicyMapping"), plVar6 = plVar4 + 1, iVar3 != 0)) {
          FUN_100c62ee0(0x22,0x92,0x6a,"v3_pcons.c",0x7c);
          FUN_100c642a0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
          goto LAB_100ca738f;
        }
        iVar3 = FUN_100c9f5e0(puVar5,plVar6);
        if (iVar3 == 0) goto LAB_100ca738f;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(param_3);
      } while (iVar2 < iVar3);
    }
    if (plVar4[1] != 0) {
      return plVar4;
    }
    if (*plVar4 != 0) {
      return plVar4;
    }
    FUN_100c62ee0(0x22,0x92,0x97,"v3_pcons.c",0x83);
LAB_100ca738f:
    FUN_100c801c0(plVar4,&DAT_1022556f0);
  }
  return (long *)0x0;
}

