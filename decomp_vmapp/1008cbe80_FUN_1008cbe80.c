
long * FUN_1008cbe80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  plVar4 = (long *)FUN_1008a4610(&DAT_100be51d0);
  puVar7 = (undefined8 *)0x0;
  if (plVar4 == (long *)0x0) {
LAB_1008cbfe0:
    FUN_100887ce0(0x22,0x93,0x41,"v3_ncons.c",0x95);
LAB_1008cc02a:
    if (plVar4 != (long *)0x0) {
      FUN_1008a4c40(plVar4,&DAT_100be51d0);
    }
    plVar4 = (long *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1008a4c40(puVar7,&DAT_100be52e8);
      plVar4 = (long *)0x0;
    }
  }
  else {
    iVar2 = FUN_100885600(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar5 = FUN_100885620(param_3,iVar2);
        pcVar1 = *(char **)(lVar5 + 8);
        iVar3 = _strncmp(pcVar1,"permitted",9);
        if ((iVar3 == 0) && (pcVar1[9] != '\0')) {
          local_40 = pcVar1 + 10;
          plVar8 = plVar4;
        }
        else {
          iVar3 = _strncmp(pcVar1,"excluded",8);
          if ((iVar3 != 0) || (pcVar1[8] == '\0')) {
            FUN_100887ce0(0x22,0x93,0x8f,"v3_ncons.c",0x82);
            puVar7 = (undefined8 *)0x0;
            goto LAB_1008cc02a;
          }
          local_40 = pcVar1 + 9;
          plVar8 = plVar4 + 1;
        }
        local_38 = *(undefined8 *)(lVar5 + 0x10);
        puVar6 = (undefined8 *)FUN_1008a4610(&DAT_100be52e8);
        puVar7 = (undefined8 *)0x0;
        if (puVar6 == (undefined8 *)0x0) goto LAB_1008cbfe0;
        lVar5 = FUN_1008c60b0(*puVar6,param_1,param_2,local_48,1);
        puVar7 = puVar6;
        if (lVar5 == 0) goto LAB_1008cc02a;
        lVar5 = *plVar8;
        if (lVar5 == 0) {
          lVar5 = FUN_100884e10();
          *plVar8 = lVar5;
          if (lVar5 == 0) goto LAB_1008cbfe0;
        }
        iVar3 = FUN_1008852e0(lVar5,puVar6);
        if (iVar3 == 0) goto LAB_1008cbfe0;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return plVar4;
}

