
long * FUN_1008cca50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  uVar6 = FUN_1008c40d0(param_3);
  iVar3 = FUN_100885600(uVar6);
  if (iVar3 < 1) {
LAB_1008ccbec:
    FUN_100887ce0(0x22,0x9b,0x9a,"v3_pci.c",0x112);
  }
  else {
    iVar3 = 0;
    do {
      puVar7 = (undefined8 *)FUN_100885620(uVar6,iVar3);
      pcVar1 = (char *)puVar7[1];
      if (pcVar1 == (char *)0x0) {
LAB_1008ccc12:
        FUN_100887ce0(0x22,0x9b,0x99,"v3_pci.c",0xf1);
LAB_1008ccc33:
        FUN_1008890a0(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_1008cccba;
      }
      if (*pcVar1 != '@') {
        if (puVar7[2] == 0) goto LAB_1008ccc12;
        iVar11 = FUN_1008ccd90(puVar7,&local_38,&local_40,&local_48);
        if (iVar11 != 0) goto LAB_1008ccb72;
        goto LAB_1008ccc33;
      }
      lVar8 = FUN_1008c23d0(param_2,pcVar1 + 1);
      if (lVar8 == 0) {
        FUN_100887ce0(0x22,0x9b,0x87,"v3_pci.c",0xfb);
        FUN_1008890a0(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_1008cccba;
      }
      iVar11 = 0;
      while (iVar4 = FUN_100885600(lVar8), iVar11 < iVar4) {
        uVar9 = FUN_100885620(lVar8,iVar11);
        iVar4 = FUN_1008ccd90(uVar9,&local_38,&local_40,&local_48);
        iVar11 = iVar11 + 1;
        if (iVar4 == 0) {
          FUN_1008c2440(param_2,lVar8);
          goto LAB_1008cccba;
        }
      }
      FUN_1008c2440(param_2,lVar8);
LAB_1008ccb72:
      iVar3 = iVar3 + 1;
      iVar11 = FUN_100885600(uVar6);
      lVar8 = local_38;
    } while (iVar3 < iVar11);
    if (local_38 == 0) goto LAB_1008ccbec;
    uVar5 = FUN_100821ab0(local_38);
    if (((uVar5 & 0xfffffffd) == 0x299) && (local_48 != 0)) {
      FUN_100887ce0(0x22,0x9b,0x9f,"v3_pci.c",0x118);
    }
    else {
      plVar10 = (long *)FUN_1008cc930();
      if (plVar10 != (long *)0x0) {
        plVar2 = (long *)plVar10[1];
        *plVar2 = lVar8;
        local_38 = 0;
        plVar2[1] = local_48;
        local_48 = 0;
        *plVar10 = local_40;
        local_40 = 0;
        goto LAB_1008ccd00;
      }
      FUN_100887ce0(0x22,0x9b,0x41,"v3_pci.c",0x11e);
    }
  }
LAB_1008cccba:
  if (local_38 != 0) {
    FUN_100899890();
    local_38 = 0;
  }
  if (local_40 != 0) {
    FUN_1008a8220();
    local_40 = 0;
  }
  plVar10 = (long *)0x0;
  if (local_48 != 0) {
    FUN_1008a83a0();
    local_48 = 0;
    plVar10 = (long *)0x0;
  }
LAB_1008ccd00:
  FUN_100885590(uVar6,FUN_1008c3b40);
  return plVar10;
}

