
long FUN_100ca8a10(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *local_40;
  int local_34;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    return *(long *)(param_1 + 0x78);
  }
  FUN_100bf2780(9,3,"pcy_cache.c",0xea);
  puVar4 = (undefined8 *)FUN_100bf3540(0x28,"pcy_cache.c",0x83);
  if (puVar4 == (undefined8 *)0x0) goto LAB_100ca8d4c;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[4] = 0xffffffffffffffff;
  puVar4[3] = 0xffffffffffffffff;
  puVar4[2] = 0xffffffffffffffff;
  *(undefined8 **)(param_1 + 0x78) = puVar4;
  plVar5 = (long *)FUN_100c97d30(param_1,0x191,&local_34,0);
  if (plVar5 == (long *)0x0) {
    lVar7 = 0;
    if (local_34 != -1) goto LAB_100ca8d2d;
LAB_100ca8b18:
    lVar7 = FUN_100c97d30(param_1,0x59,&local_34,0);
    if (lVar7 == 0) {
      lVar7 = 0;
      if (local_34 == -1) goto LAB_100ca8d4c;
      goto LAB_100ca8d2d;
    }
    local_40 = *(long **)(param_1 + 0x78);
    iVar1 = FUN_100c60800(lVar7);
    if (iVar1 == 0) {
LAB_100ca8c85:
      FUN_100c60790(lVar7,FUN_100ca3a60);
      iVar2 = 0;
LAB_100ca8c97:
      local_40 = local_40 + 1;
      FUN_100c60790(*local_40,FUN_100ca90a0);
      *local_40 = 0;
      local_34 = iVar2;
      goto LAB_100ca8d4c;
    }
    lVar8 = FUN_100c5ff30(FUN_100ca8dc0);
    local_40[1] = lVar8;
    if (lVar8 == 0) goto LAB_100ca8c85;
    iVar1 = FUN_100c60800(lVar7);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar6 = FUN_100c60820(lVar7,iVar1);
        lVar8 = FUN_100ca90f0(uVar6,0,local_34);
        if (lVar8 == 0) goto LAB_100ca8c85;
        iVar2 = FUN_100bf7220(*(undefined8 *)(lVar8 + 8));
        if (iVar2 != 0x2ea) {
          iVar2 = FUN_100c60360(local_40[1],lVar8);
          if (iVar2 != -1) goto LAB_100ca8cfe;
          iVar3 = FUN_100c604e0(local_40[1],lVar8);
          iVar2 = 0;
          if (iVar3 != 0) goto LAB_100ca8c0c;
LAB_100ca8d08:
          FUN_100ca90a0(lVar8);
          FUN_100c60790(lVar7,FUN_100ca3a60);
          goto LAB_100ca8c97;
        }
        if (*local_40 != 0) {
LAB_100ca8cfe:
          *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 8;
          iVar2 = -1;
          goto LAB_100ca8d08;
        }
        *local_40 = lVar8;
LAB_100ca8c0c:
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(lVar7);
      } while (iVar1 < iVar2);
    }
    FUN_100c60790(lVar7,FUN_100ca3a60);
    local_34 = 1;
    lVar7 = FUN_100c97d30(param_1,0x2eb,&local_34,0);
    if (lVar7 == 0) {
      lVar7 = 0;
      if (local_34 == -1) goto LAB_100ca8cc7;
      goto LAB_100ca8d2d;
    }
    local_34 = FUN_100ca91d0(param_1,lVar7);
    lVar7 = 0;
    if (local_34 < 1) goto LAB_100ca8d2d;
LAB_100ca8cc7:
    lVar7 = FUN_100c97d30(param_1,0x2ec,&local_34,0);
    if (lVar7 == 0) {
      if (local_34 != -1) goto LAB_100ca8d2d;
    }
    else {
      if (*(int *)(lVar7 + 4) == 0x102) goto LAB_100ca8d2d;
      uVar6 = FUN_100c76990(lVar7);
      puVar4[2] = uVar6;
    }
  }
  else {
    if (*plVar5 == 0) {
      lVar8 = plVar5[1];
      lVar7 = 0;
      if (lVar8 != 0) goto LAB_100ca8aff;
    }
    else {
      lVar7 = 0;
      if (*(int *)(*plVar5 + 4) != 0x102) {
        uVar6 = FUN_100c76990();
        puVar4[3] = uVar6;
        lVar8 = plVar5[1];
        if (lVar8 == 0) goto LAB_100ca8b18;
LAB_100ca8aff:
        lVar7 = 0;
        if (*(int *)(lVar8 + 4) != 0x102) {
          uVar6 = FUN_100c76990();
          puVar4[4] = uVar6;
          goto LAB_100ca8b18;
        }
      }
    }
LAB_100ca8d2d:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 8;
  }
  if (plVar5 != (long *)0x0) {
    FUN_100ca73e0(plVar5);
  }
  if (lVar7 != 0) {
    FUN_100c837a0(lVar7);
  }
LAB_100ca8d4c:
  FUN_100bf2780(10,3,"pcy_cache.c",0xec);
  return *(long *)(param_1 + 0x78);
}

