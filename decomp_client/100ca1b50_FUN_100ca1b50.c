
undefined8 FUN_100ca1b50(int *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long local_38;
  
  if (param_1 == (int *)0x0) {
LAB_100ca1c4a:
    FUN_100c62ee0(0x22,0x7a,0x7d,"v3_alt.c",0x164);
    local_38 = 0;
    puVar8 = (undefined4 *)0x0;
  }
  else {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      if (*(long **)(param_1 + 6) == (long *)0x0) goto LAB_100ca1c4a;
      uVar4 = *(undefined8 *)(**(long **)(param_1 + 6) + 0x20);
    }
    else {
      uVar4 = FUN_100c92690(*(long *)(param_1 + 4));
    }
    iVar2 = -1;
    if (param_3 == 0) {
      local_38 = 0;
      do {
        iVar2 = FUN_100c96de0(uVar4,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        uVar5 = FUN_100c96d80(uVar4,iVar2);
        uVar5 = FUN_100c96d60(uVar5);
        lVar7 = FUN_100c8b1b0(uVar5);
        lVar1 = local_38;
        if ((lVar7 == 0) ||
           (puVar8 = (undefined4 *)FUN_100ca0940(), lVar1 = lVar7, puVar8 == (undefined4 *)0x0))
        goto LAB_100ca1d0b;
        *(long *)(puVar8 + 2) = lVar7;
        *puVar8 = 1;
        iVar3 = FUN_100c604e0(param_2,puVar8);
      } while (iVar3 != 0);
    }
    else {
      local_38 = 0;
      do {
        iVar2 = FUN_100c96de0(uVar4,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        uVar5 = FUN_100c96d80(uVar4,iVar2);
        uVar6 = FUN_100c96d60(uVar5);
        lVar7 = FUN_100c8b1b0(uVar6);
        FUN_100c96e70(uVar4,iVar2);
        FUN_100c7c190(uVar5);
        lVar1 = local_38;
        if ((lVar7 == 0) ||
           (puVar8 = (undefined4 *)FUN_100ca0940(), lVar1 = lVar7, puVar8 == (undefined4 *)0x0))
        goto LAB_100ca1d0b;
        iVar2 = iVar2 + -1;
        *(long *)(puVar8 + 2) = lVar7;
        *puVar8 = 1;
        iVar3 = FUN_100c604e0(param_2,puVar8);
      } while (iVar3 != 0);
    }
    FUN_100c62ee0(0x22,0x7a,0x41,"v3_alt.c",0x180);
    local_38 = 0;
  }
LAB_100ca1d33:
  FUN_100ca0960(puVar8);
  FUN_100c8b2f0(local_38);
  return 0;
LAB_100ca1d0b:
  local_38 = lVar1;
  FUN_100c62ee0(0x22,0x7a,0x41,"v3_alt.c",0x179);
  puVar8 = (undefined4 *)0x0;
  goto LAB_100ca1d33;
}

