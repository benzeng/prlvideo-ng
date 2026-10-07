
long FUN_1008cd490(long param_1)

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
  FUN_10081d010(9,3,"pcy_cache.c",0xea);
  puVar4 = (undefined8 *)FUN_10081ddd0(0x28,"pcy_cache.c",0x83);
  if (puVar4 == (undefined8 *)0x0) goto LAB_1008cd7cc;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[4] = 0xffffffffffffffff;
  puVar4[3] = 0xffffffffffffffff;
  puVar4[2] = 0xffffffffffffffff;
  *(undefined8 **)(param_1 + 0x78) = puVar4;
  plVar5 = (long *)FUN_1008bc7b0(param_1,0x191,&local_34,0);
  if (plVar5 == (long *)0x0) {
    lVar7 = 0;
    if (local_34 != -1) goto LAB_1008cd7ad;
LAB_1008cd598:
    lVar7 = FUN_1008bc7b0(param_1,0x59,&local_34,0);
    if (lVar7 == 0) {
      lVar7 = 0;
      if (local_34 == -1) goto LAB_1008cd7cc;
      goto LAB_1008cd7ad;
    }
    local_40 = *(long **)(param_1 + 0x78);
    iVar1 = FUN_100885600(lVar7);
    if (iVar1 == 0) {
LAB_1008cd705:
      FUN_100885590(lVar7,FUN_1008c84e0);
      iVar2 = 0;
LAB_1008cd717:
      local_40 = local_40 + 1;
      FUN_100885590(*local_40,FUN_1008cdb20);
      *local_40 = 0;
      local_34 = iVar2;
      goto LAB_1008cd7cc;
    }
    lVar8 = FUN_100884d30(FUN_1008cd840);
    local_40[1] = lVar8;
    if (lVar8 == 0) goto LAB_1008cd705;
    iVar1 = FUN_100885600(lVar7);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar6 = FUN_100885620(lVar7,iVar1);
        lVar8 = FUN_1008cdb70(uVar6,0,local_34);
        if (lVar8 == 0) goto LAB_1008cd705;
        iVar2 = FUN_100821ab0(*(undefined8 *)(lVar8 + 8));
        if (iVar2 != 0x2ea) {
          iVar2 = FUN_100885160(local_40[1],lVar8);
          if (iVar2 != -1) goto LAB_1008cd77e;
          iVar3 = FUN_1008852e0(local_40[1],lVar8);
          iVar2 = 0;
          if (iVar3 != 0) goto LAB_1008cd68c;
LAB_1008cd788:
          FUN_1008cdb20(lVar8);
          FUN_100885590(lVar7,FUN_1008c84e0);
          goto LAB_1008cd717;
        }
        if (*local_40 != 0) {
LAB_1008cd77e:
          *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 8;
          iVar2 = -1;
          goto LAB_1008cd788;
        }
        *local_40 = lVar8;
LAB_1008cd68c:
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(lVar7);
      } while (iVar1 < iVar2);
    }
    FUN_100885590(lVar7,FUN_1008c84e0);
    local_34 = 1;
    lVar7 = FUN_1008bc7b0(param_1,0x2eb,&local_34,0);
    if (lVar7 == 0) {
      lVar7 = 0;
      if (local_34 == -1) goto LAB_1008cd747;
      goto LAB_1008cd7ad;
    }
    local_34 = FUN_1008cdc50(param_1,lVar7);
    lVar7 = 0;
    if (local_34 < 1) goto LAB_1008cd7ad;
LAB_1008cd747:
    lVar7 = FUN_1008bc7b0(param_1,0x2ec,&local_34,0);
    if (lVar7 == 0) {
      if (local_34 != -1) goto LAB_1008cd7ad;
    }
    else {
      if (*(int *)(lVar7 + 4) == 0x102) goto LAB_1008cd7ad;
      uVar6 = FUN_10089b410(lVar7);
      puVar4[2] = uVar6;
    }
  }
  else {
    if (*plVar5 == 0) {
      lVar8 = plVar5[1];
      lVar7 = 0;
      if (lVar8 != 0) goto LAB_1008cd57f;
    }
    else {
      lVar7 = 0;
      if (*(int *)(*plVar5 + 4) != 0x102) {
        uVar6 = FUN_10089b410();
        puVar4[3] = uVar6;
        lVar8 = plVar5[1];
        if (lVar8 == 0) goto LAB_1008cd598;
LAB_1008cd57f:
        lVar7 = 0;
        if (*(int *)(lVar8 + 4) != 0x102) {
          uVar6 = FUN_10089b410();
          puVar4[4] = uVar6;
          goto LAB_1008cd598;
        }
      }
    }
LAB_1008cd7ad:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 8;
  }
  if (plVar5 != (long *)0x0) {
    FUN_1008cbe60(plVar5);
  }
  if (lVar7 != 0) {
    FUN_1008a8220(lVar7);
  }
LAB_1008cd7cc:
  FUN_10081d010(10,3,"pcy_cache.c",0xec);
  return *(long *)(param_1 + 0x78);
}

