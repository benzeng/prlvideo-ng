
void FUN_100719b40(long param_1)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  int local_54;
  char *local_50;
  uint local_44;
  char *local_40;
  uint local_34;
  
  iVar4 = FUN_100714a30();
  iVar5 = _strcmp((char *)(param_1 + 0x20),"VZSRV");
  if (iVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x290);
    plVar11 = plVar1;
    do {
      plVar11 = (long *)*plVar11;
      plVar10 = plVar1;
      if (plVar11 == plVar1) goto LAB_100719bc0;
      iVar5 = _strcmp((char *)plVar11[2],"CPU_TOTAL");
    } while (iVar5 != 0);
    goto LAB_100719bd8;
  }
  goto LAB_100719c12;
  while (iVar4 = _strcmp((char *)plVar10[2],"cpu_total"), plVar11 = plVar10, iVar4 != 0) {
LAB_100719e10:
    plVar10 = (long *)*plVar11;
    if (plVar10 == plVar1) goto LAB_100719e66;
  }
  goto LAB_100719e28;
  while (iVar5 = _strcmp((char *)plVar11[2],"cpu_power"), plVar10 = plVar11, iVar5 != 0) {
LAB_100719bc0:
    plVar11 = (long *)*plVar10;
    if (plVar11 == plVar1) goto LAB_100719c12;
  }
LAB_100719bd8:
  local_40 = (char *)0x0;
  iVar5 = FUN_100715cc0();
  uVar7 = _strtoul((char *)plVar11[3],&local_40,10);
  if ((0 < (int)uVar7) && ((int)uVar7 < iVar5)) {
    uVar9 = 0xe;
    goto LAB_100719ccd;
  }
LAB_100719c12:
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar2 = *(uint *)(param_1 + 0xcc);
    if ((((uVar2 <= DAT_10116db74) &&
         ((uVar2 < DAT_10116db74 || (*(uint *)(param_1 + 200) < DAT_10116db70)))) ||
        ((DAT_10116db7c <= uVar2 &&
         ((DAT_10116db7c < uVar2 || (DAT_10116db78 < *(uint *)(param_1 + 200))))))) &&
       (iVar5 = FUN_10071e690(0xfffffff4,0), iVar5 != 0)) {
      uVar9 = 6;
      goto LAB_100719ccd;
    }
  }
  plVar1 = (long *)(param_1 + 0x290);
  plVar11 = plVar1;
  do {
    plVar11 = (long *)*plVar11;
    if (plVar11 == plVar1) goto LAB_100719ce3;
    iVar5 = _strcmp((char *)plVar11[2],"product");
  } while (iVar5 != 0);
  iVar4 = _strcasecmp((char *)plVar11[3],(&PTR_s_Any_10116e640)[iVar4]);
  if (iVar4 != 0) {
    uVar9 = 3;
LAB_100719ccd:
    FUN_10071b5b0(param_1,1,uVar9);
    return;
  }
LAB_100719ce3:
  plVar11 = (long *)*plVar1;
  plVar10 = plVar1;
  if (plVar11 != plVar1) {
    iVar4 = 0;
    do {
      iVar5 = _strcmp((char *)plVar11[2],"platform");
      iVar4 = iVar4 + (uint)(iVar5 == 0);
      plVar11 = (long *)*plVar11;
    } while (plVar11 != plVar1);
    if (0 < iVar4) {
      local_54 = 0;
      do {
        iVar5 = -1;
        plVar11 = plVar1;
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == plVar1) goto LAB_100719da0;
          iVar6 = _strcmp((char *)plVar11[2],"platform");
        } while ((iVar6 != 0) || (iVar5 = iVar5 + 1, iVar5 != local_54));
        pcVar3 = (char *)plVar11[3];
        sVar8 = _strlen(pcVar3);
        FUN_100720580(&local_44,pcVar3,sVar8 & 0xffffffff);
        if ((local_44 | 4) == 5) goto LAB_100719de0;
LAB_100719da0:
        local_54 = local_54 + 1;
      } while (local_54 < iVar4);
    }
    if (iVar4 != 0) {
      uVar9 = 2;
      goto LAB_100719ee5;
    }
  }
LAB_100719de0:
  do {
    plVar10 = (long *)*plVar10;
    plVar11 = plVar1;
    if (plVar10 == plVar1) goto LAB_100719e10;
    iVar4 = _strcmp((char *)plVar10[2],"NR_CPUS");
  } while (iVar4 != 0);
LAB_100719e28:
  local_50 = (char *)0x0;
  uVar7 = _strtoul((char *)plVar10[3],&local_50,10);
  iVar4 = FUN_100742710();
  if (((iVar4 < 1) || (iVar4 <= (int)uVar7)) || ((int)uVar7 == -1)) {
LAB_100719e66:
    iVar4 = 0;
    FUN_10071b5b0(param_1,5,0);
    plVar11 = plVar1;
    while (plVar11 = (long *)*plVar11, plVar11 != plVar1) {
      local_34 = 0;
      iVar5 = _strcasecmp("arch",(char *)plVar11[2]);
      if (iVar5 == 0) {
        pcVar3 = (char *)plVar11[3];
        sVar8 = _strlen(pcVar3);
        FUN_100720620(&local_34,pcVar3,sVar8 & 0xffffffff);
        if ((local_34 & 2) != 0) {
          return;
        }
        iVar4 = iVar4 + 1;
      }
    }
    if (iVar4 == 0) {
      return;
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 9;
  }
LAB_100719ee5:
  FUN_10071b5b0(param_1,1,uVar9);
  return;
}

