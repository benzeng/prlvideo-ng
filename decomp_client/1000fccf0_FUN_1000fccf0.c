
undefined8 FUN_1000fccf0(long param_1,uint *param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint local_34;
  undefined8 local_30;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar5 == 0) {
    return 0;
  }
  uVar7 = *param_2;
  lVar6 = 0;
  do {
    while( true ) {
      lVar4 = lVar5;
      uVar8 = *(uint *)(lVar4 + 0x18);
      if (uVar8 != uVar7) break;
      uVar8 = uVar7;
      if (param_2[1] <= *(uint *)(lVar4 + 0x1c)) goto LAB_1000fcd52;
LAB_1000fcd42:
      lVar5 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x10) == 0) {
        if (lVar6 == 0) {
          return 0;
        }
        uVar8 = *(uint *)(lVar6 + 0x18);
        lVar4 = lVar6;
        goto LAB_1000fcd6f;
      }
    }
    if (uVar8 < uVar7) goto LAB_1000fcd42;
LAB_1000fcd52:
    lVar5 = *(long *)(lVar4 + 8);
    lVar6 = lVar4;
  } while (*(long *)(lVar4 + 8) != 0);
LAB_1000fcd6f:
  if (uVar7 == uVar8) {
    if (param_2[1] < *(uint *)(lVar4 + 0x1c)) {
      return 0;
    }
  }
  else if (uVar7 < uVar8) {
    return 0;
  }
  plVar1 = (long *)FUN_1000fe380(param_1 + 0x20,param_2);
  lVar5 = 0;
  lVar6 = *(long *)(*plVar1 + 0x10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
    return 0;
  }
  do {
    while (uVar7 = *(uint *)(lVar6 + 0x18), uVar7 < param_3) {
      plVar1 = (long *)(lVar6 + 0x10);
      lVar6 = *plVar1;
      if (*plVar1 == 0) {
        if (lVar5 == 0) {
          return 0;
        }
        uVar7 = *(uint *)(lVar5 + 0x18);
        goto LAB_1000fcddf;
      }
    }
    plVar1 = (long *)(lVar6 + 8);
    lVar5 = lVar6;
    lVar6 = *plVar1;
  } while (*plVar1 != 0);
LAB_1000fcddf:
  if (param_3 < uVar7) {
    return 0;
  }
  puVar2 = (undefined8 *)FUN_1000fe380(param_1 + 0x20,param_2);
  puVar3 = (uint *)*puVar2;
  local_34 = param_3;
  if (1 < *puVar3) {
    FUN_1000ff180(puVar2);
    puVar3 = (uint *)*puVar2;
  }
  lVar5 = *(long *)(puVar3 + 4);
  lVar6 = 0;
  if (*(long *)(puVar3 + 4) != 0) {
    do {
      while (lVar4 = lVar5, uVar7 = *(uint *)(lVar4 + 0x18), uVar7 < param_3) {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          if (lVar6 == 0) goto LAB_1000fce51;
          uVar7 = *(uint *)(lVar6 + 0x18);
          lVar4 = lVar6;
          goto LAB_1000fce4c;
        }
      }
      lVar5 = *(long *)(lVar4 + 8);
      lVar6 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_1000fce4c:
    if (uVar7 <= param_3) goto LAB_1000fce69;
  }
LAB_1000fce51:
  local_30 = 0;
  lVar4 = FUN_1000ff080(puVar2,&local_34,&local_30);
LAB_1000fce69:
  return *(undefined8 *)(lVar4 + 0x20);
}

