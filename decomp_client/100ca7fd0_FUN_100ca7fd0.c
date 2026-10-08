
long * FUN_100ca7fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar6 = FUN_100c9f650(param_3);
  iVar3 = FUN_100c60800(uVar6);
  if (iVar3 < 1) {
LAB_100ca816c:
    FUN_100c62ee0(0x22,0x9b,0x9a,"v3_pci.c",0x112);
  }
  else {
    iVar3 = 0;
    do {
      puVar7 = (undefined8 *)FUN_100c60820(uVar6,iVar3);
      pcVar1 = (char *)puVar7[1];
      if (pcVar1 == (char *)0x0) {
LAB_100ca8192:
        FUN_100c62ee0(0x22,0x9b,0x99,"v3_pci.c",0xf1);
LAB_100ca81b3:
        FUN_100c642a0(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_100ca823a;
      }
      if (*pcVar1 != '@') {
        if (puVar7[2] == 0) goto LAB_100ca8192;
        iVar11 = FUN_100ca8310(puVar7,&local_38,&local_40,&local_48);
        if (iVar11 != 0) goto LAB_100ca80f2;
        goto LAB_100ca81b3;
      }
      lVar8 = FUN_100c9d950(param_2,pcVar1 + 1);
      if (lVar8 == 0) {
        FUN_100c62ee0(0x22,0x9b,0x87,"v3_pci.c",0xfb);
        FUN_100c642a0(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_100ca823a;
      }
      iVar11 = 0;
      while (iVar4 = FUN_100c60800(lVar8), iVar11 < iVar4) {
        uVar9 = FUN_100c60820(lVar8,iVar11);
        iVar4 = FUN_100ca8310(uVar9,&local_38,&local_40,&local_48);
        iVar11 = iVar11 + 1;
        if (iVar4 == 0) {
          FUN_100c9d9c0(param_2,lVar8);
          goto LAB_100ca823a;
        }
      }
      FUN_100c9d9c0(param_2,lVar8);
LAB_100ca80f2:
      iVar3 = iVar3 + 1;
      iVar11 = FUN_100c60800(uVar6);
      lVar8 = local_38;
    } while (iVar3 < iVar11);
    if (local_38 == 0) goto LAB_100ca816c;
    uVar5 = FUN_100bf7220(local_38);
    if (((uVar5 & 0xfffffffd) == 0x299) && (local_48 != 0)) {
      FUN_100c62ee0(0x22,0x9b,0x9f,"v3_pci.c",0x118);
    }
    else {
      plVar10 = (long *)FUN_100ca7eb0();
      if (plVar10 != (long *)0x0) {
        plVar2 = (long *)plVar10[1];
        *plVar2 = lVar8;
        local_38 = 0;
        plVar2[1] = local_48;
        local_48 = 0;
        *plVar10 = local_40;
        local_40 = 0;
        goto LAB_100ca8280;
      }
      FUN_100c62ee0(0x22,0x9b,0x41,"v3_pci.c",0x11e);
    }
  }
LAB_100ca823a:
  if (local_38 != 0) {
    FUN_100c74e10();
    local_38 = 0;
  }
  if (local_40 != 0) {
    FUN_100c837a0();
    local_40 = 0;
  }
  plVar10 = (long *)0x0;
  if (local_48 != 0) {
    FUN_100c83920();
    local_48 = 0;
    plVar10 = (long *)0x0;
  }
LAB_100ca8280:
  FUN_100c60790(uVar6,FUN_100c9f0c0);
  return plVar10;
}

