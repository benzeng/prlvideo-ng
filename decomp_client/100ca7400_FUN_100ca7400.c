
long * FUN_100ca7400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  plVar4 = (long *)FUN_100c7fb90(&DAT_1022557e0);
  puVar7 = (undefined8 *)0x0;
  if (plVar4 == (long *)0x0) {
LAB_100ca7560:
    FUN_100c62ee0(0x22,0x93,0x41,"v3_ncons.c",0x95);
LAB_100ca75aa:
    if (plVar4 != (long *)0x0) {
      FUN_100c801c0(plVar4,&DAT_1022557e0);
    }
    plVar4 = (long *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_100c801c0(puVar7,&DAT_1022558f8);
      plVar4 = (long *)0x0;
    }
  }
  else {
    iVar2 = FUN_100c60800(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar5 = FUN_100c60820(param_3,iVar2);
        pcVar1 = *(char **)(lVar5 + 8);
        iVar3 = _strncmp(pcVar1,"permitted",9);
        if ((iVar3 == 0) && (pcVar1[9] != '\0')) {
          local_40 = pcVar1 + 10;
          plVar8 = plVar4;
        }
        else {
          iVar3 = _strncmp(pcVar1,"excluded",8);
          if ((iVar3 != 0) || (pcVar1[8] == '\0')) {
            FUN_100c62ee0(0x22,0x93,0x8f,"v3_ncons.c",0x82);
            puVar7 = (undefined8 *)0x0;
            goto LAB_100ca75aa;
          }
          local_40 = pcVar1 + 9;
          plVar8 = plVar4 + 1;
        }
        local_38 = *(undefined8 *)(lVar5 + 0x10);
        puVar6 = (undefined8 *)FUN_100c7fb90(&DAT_1022558f8);
        puVar7 = (undefined8 *)0x0;
        if (puVar6 == (undefined8 *)0x0) goto LAB_100ca7560;
        lVar5 = FUN_100ca1630(*puVar6,param_1,param_2,local_48,1);
        puVar7 = puVar6;
        if (lVar5 == 0) goto LAB_100ca75aa;
        lVar5 = *plVar8;
        if (lVar5 == 0) {
          lVar5 = FUN_100c60010();
          *plVar8 = lVar5;
          if (lVar5 == 0) goto LAB_100ca7560;
        }
        iVar3 = FUN_100c604e0(lVar5,puVar6);
        if (iVar3 == 0) goto LAB_100ca7560;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return plVar4;
}

