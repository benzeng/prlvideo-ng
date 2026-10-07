
ulong FUN_10087a720(long param_1,uint param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  
  if (param_1 == 0) {
    uVar8 = 0x43;
    uVar11 = 0xb7;
LAB_10087a840:
    FUN_100887ce0(0x26,0x8e,uVar8,"eng_ctrl.c",uVar11);
    return 0;
  }
  FUN_10081d010(9,0x1e,"eng_ctrl.c",0xba);
  iVar14 = *(int *)(param_1 + 0xac);
  FUN_10081d010(10,0x1e,"eng_ctrl.c",0xbc);
  if (iVar14 < 1) {
    uVar8 = 0x82;
    uVar11 = 0xbf;
    goto LAB_10087a840;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x80);
  if (param_2 == 10) {
    return (ulong)(UNRECOVERED_JUMPTABLE != (code *)0x0);
  }
  if (7 < param_2 - 0xb) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10087a8c1:
                    /* WARNING: Could not recover jumptable at 0x00010087a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
      return uVar4;
    }
    uVar8 = 0x78;
    uVar11 = 0xe1;
    goto LAB_10087a840;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar11 = 0x8e;
    uVar8 = 0x78;
    uVar13 = 0xd4;
    goto LAB_10087aa58;
  }
  if ((*(byte *)(param_1 + 0xa8) & 2) != 0) goto LAB_10087a8c1;
  if (param_2 == 0xb) {
    puVar1 = *(uint **)(param_1 + 0xa0);
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    if (*puVar1 == 0) {
      return 0;
    }
    if (*(long *)(puVar1 + 2) == 0) {
      return 0;
    }
    return (ulong)*puVar1;
  }
  if ((param_2 == 0x11 || (param_2 & 0xfffffffd) == 0xd) && (param_4 == (char *)0x0)) {
    uVar11 = 0xac;
    uVar8 = 0x43;
    uVar13 = 0x7b;
    goto LAB_10087aa58;
  }
  puVar1 = *(uint **)(param_1 + 0xa0);
  if (param_2 == 0xd) {
    if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
      iVar14 = 0;
      puVar2 = puVar1;
      do {
        puVar9 = puVar2 + 8;
        if (*(char **)(puVar2 + 2) == (char *)0x0) break;
        iVar3 = _strcmp(*(char **)(puVar2 + 2),param_4);
        if (iVar3 == 0) {
          if (-1 < iVar14) {
            return (ulong)puVar1[(long)iVar14 * 8];
          }
          break;
        }
        iVar14 = iVar14 + 1;
        puVar2 = puVar9;
      } while (*puVar9 != 0);
    }
    uVar11 = 0xac;
    uVar8 = 0x89;
    uVar13 = 0x83;
    goto LAB_10087aa58;
  }
  if (puVar1 == (uint *)0x0) {
LAB_10087aa1e:
    uVar11 = 0xac;
    uVar8 = 0x8a;
    uVar13 = 0x8f;
LAB_10087aa58:
    FUN_100887ce0(0x26,uVar11,uVar8,"eng_ctrl.c",uVar13);
    return 0xffffffff;
  }
  uVar6 = *puVar1;
  iVar14 = 0;
  uVar10 = 0;
  if (uVar6 != 0) {
    iVar14 = 0;
    puVar2 = puVar1;
    do {
      uVar10 = uVar6;
      if (((uint)param_3 <= uVar6) || (*(long *)(puVar2 + 2) == 0)) break;
      iVar14 = iVar14 + 1;
      uVar6 = puVar2[8];
      uVar10 = 0;
      puVar2 = puVar2 + 8;
    } while (uVar6 != 0);
  }
  iVar3 = -1;
  if (uVar10 == (uint)param_3) {
    iVar3 = iVar14;
  }
  if (iVar3 < 0) goto LAB_10087aa1e;
  switch(param_2) {
  case 0xc:
    uVar4 = 0;
    if ((puVar1[(long)(iVar3 + 1) * 8] != 0) &&
       (uVar4 = 0, *(long *)(puVar1 + (long)(iVar3 + 1) * 8 + 2) != 0)) {
      uVar4 = (ulong)puVar1[(long)(iVar3 + 1) * 8];
    }
    break;
  default:
    uVar11 = 0xac;
    uVar8 = 0x6e;
    uVar13 = 0xaf;
    goto LAB_10087aa58;
  case 0xe:
    uVar4 = _strlen(*(char **)(puVar1 + (long)iVar3 * 8 + 2));
    break;
  case 0xf:
    pcVar7 = *(char **)(puVar1 + (long)iVar3 * 8 + 2);
    goto LAB_10087aabd;
  case 0x10:
    uVar4 = 0;
    if (*(char **)(puVar1 + (long)iVar3 * 8 + 4) != (char *)0x0) {
      uVar4 = _strlen(*(char **)(puVar1 + (long)iVar3 * 8 + 4));
    }
    break;
  case 0x11:
    pcVar7 = *(char **)(puVar1 + (long)iVar3 * 8 + 4);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
      lVar12 = 1;
      goto LAB_10087ab03;
    }
LAB_10087aabd:
    sVar5 = _strlen(pcVar7);
    lVar12 = sVar5 + 1;
LAB_10087ab03:
    uVar4 = FUN_1008823b0(param_4,lVar12,"%s",pcVar7);
    return uVar4;
  case 0x12:
    uVar4 = (ulong)puVar1[(long)iVar3 * 8 + 6];
  }
  return uVar4;
}

