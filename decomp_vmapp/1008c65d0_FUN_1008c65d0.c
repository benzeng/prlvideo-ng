
undefined8 FUN_1008c65d0(int *param_1,undefined8 param_2,int param_3)

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
LAB_1008c66ca:
    FUN_100887ce0(0x22,0x7a,0x7d,"v3_alt.c",0x164);
    local_38 = 0;
    puVar8 = (undefined4 *)0x0;
  }
  else {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      if (*(long **)(param_1 + 6) == (long *)0x0) goto LAB_1008c66ca;
      uVar4 = *(undefined8 *)(**(long **)(param_1 + 6) + 0x20);
    }
    else {
      uVar4 = FUN_1008b7110(*(long *)(param_1 + 4));
    }
    iVar2 = -1;
    if (param_3 == 0) {
      local_38 = 0;
      do {
        iVar2 = FUN_1008bb860(uVar4,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        uVar5 = FUN_1008bb800(uVar4,iVar2);
        uVar5 = FUN_1008bb7e0(uVar5);
        lVar7 = FUN_1008afc30(uVar5);
        lVar1 = local_38;
        if ((lVar7 == 0) ||
           (puVar8 = (undefined4 *)FUN_1008c53c0(), lVar1 = lVar7, puVar8 == (undefined4 *)0x0))
        goto LAB_1008c678b;
        *(long *)(puVar8 + 2) = lVar7;
        *puVar8 = 1;
        iVar3 = FUN_1008852e0(param_2,puVar8);
      } while (iVar3 != 0);
    }
    else {
      local_38 = 0;
      do {
        iVar2 = FUN_1008bb860(uVar4,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        uVar5 = FUN_1008bb800(uVar4,iVar2);
        uVar6 = FUN_1008bb7e0(uVar5);
        lVar7 = FUN_1008afc30(uVar6);
        FUN_1008bb8f0(uVar4,iVar2);
        FUN_1008a0c10(uVar5);
        lVar1 = local_38;
        if ((lVar7 == 0) ||
           (puVar8 = (undefined4 *)FUN_1008c53c0(), lVar1 = lVar7, puVar8 == (undefined4 *)0x0))
        goto LAB_1008c678b;
        iVar2 = iVar2 + -1;
        *(long *)(puVar8 + 2) = lVar7;
        *puVar8 = 1;
        iVar3 = FUN_1008852e0(param_2,puVar8);
      } while (iVar3 != 0);
    }
    FUN_100887ce0(0x22,0x7a,0x41,"v3_alt.c",0x180);
    local_38 = 0;
  }
LAB_1008c67b3:
  FUN_1008c53e0(puVar8);
  FUN_1008afd70(local_38);
  return 0;
LAB_1008c678b:
  local_38 = lVar1;
  FUN_100887ce0(0x22,0x7a,0x41,"v3_alt.c",0x179);
  puVar8 = (undefined4 *)0x0;
  goto LAB_1008c67b3;
}

