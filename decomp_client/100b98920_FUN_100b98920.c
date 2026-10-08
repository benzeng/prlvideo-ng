
void FUN_100b98920(long param_1)

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
  
  iVar4 = FUN_100b93810();
  iVar5 = _strcmp((char *)(param_1 + 0x20),"VZSRV");
  if (iVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x290);
    plVar11 = plVar1;
    do {
      plVar11 = (long *)*plVar11;
      plVar10 = plVar1;
      if (plVar11 == plVar1) goto LAB_100b989a0;
      iVar5 = _strcmp((char *)plVar11[2],"CPU_TOTAL");
    } while (iVar5 != 0);
    goto LAB_100b989b8;
  }
  goto LAB_100b989f2;
  while (iVar4 = _strcmp((char *)plVar10[2],"cpu_total"), plVar11 = plVar10, iVar4 != 0) {
LAB_100b98bf0:
    plVar10 = (long *)*plVar11;
    if (plVar10 == plVar1) goto LAB_100b98c46;
  }
  goto LAB_100b98c08;
  while (iVar5 = _strcmp((char *)plVar11[2],"cpu_power"), plVar10 = plVar11, iVar5 != 0) {
LAB_100b989a0:
    plVar11 = (long *)*plVar10;
    if (plVar11 == plVar1) goto LAB_100b989f2;
  }
LAB_100b989b8:
  local_40 = (char *)0x0;
  iVar5 = FUN_100b94aa0();
  uVar7 = _strtoul((char *)plVar11[3],&local_40,10);
  if ((0 < (int)uVar7) && ((int)uVar7 < iVar5)) {
    uVar9 = 0xe;
    goto LAB_100b98aad;
  }
LAB_100b989f2:
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar2 = *(uint *)(param_1 + 0xcc);
    if ((((uVar2 <= DAT_1022cf544) &&
         ((uVar2 < DAT_1022cf544 || (*(uint *)(param_1 + 200) < DAT_1022cf540)))) ||
        ((DAT_1022cf54c <= uVar2 &&
         ((DAT_1022cf54c < uVar2 || (DAT_1022cf548 < *(uint *)(param_1 + 200))))))) &&
       (iVar5 = FUN_100b9d470(0xfffffff4,0), iVar5 != 0)) {
      uVar9 = 6;
      goto LAB_100b98aad;
    }
  }
  plVar1 = (long *)(param_1 + 0x290);
  plVar11 = plVar1;
  do {
    plVar11 = (long *)*plVar11;
    if (plVar11 == plVar1) goto LAB_100b98ac3;
    iVar5 = _strcmp((char *)plVar11[2],"product");
  } while (iVar5 != 0);
  iVar4 = _strcasecmp((char *)plVar11[3],(&PTR_s_Any_1022d0010)[iVar4]);
  if (iVar4 != 0) {
    uVar9 = 3;
LAB_100b98aad:
    FUN_100b9a390(param_1,1,uVar9);
    return;
  }
LAB_100b98ac3:
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
          if (plVar11 == plVar1) goto LAB_100b98b80;
          iVar6 = _strcmp((char *)plVar11[2],"platform");
        } while ((iVar6 != 0) || (iVar5 = iVar5 + 1, iVar5 != local_54));
        pcVar3 = (char *)plVar11[3];
        sVar8 = _strlen(pcVar3);
        FUN_100b9f360(&local_44,pcVar3,sVar8 & 0xffffffff);
        if ((local_44 | 4) == 5) goto LAB_100b98bc0;
LAB_100b98b80:
        local_54 = local_54 + 1;
      } while (local_54 < iVar4);
    }
    if (iVar4 != 0) {
      uVar9 = 2;
      goto LAB_100b98cc5;
    }
  }
LAB_100b98bc0:
  do {
    plVar10 = (long *)*plVar10;
    plVar11 = plVar1;
    if (plVar10 == plVar1) goto LAB_100b98bf0;
    iVar4 = _strcmp((char *)plVar10[2],"NR_CPUS");
  } while (iVar4 != 0);
LAB_100b98c08:
  local_50 = (char *)0x0;
  uVar7 = _strtoul((char *)plVar10[3],&local_50,10);
  iVar4 = FUN_100bc14f0();
  if (((iVar4 < 1) || (iVar4 <= (int)uVar7)) || ((int)uVar7 == -1)) {
LAB_100b98c46:
    iVar4 = 0;
    FUN_100b9a390(param_1,5,0);
    plVar11 = plVar1;
    while (plVar11 = (long *)*plVar11, plVar11 != plVar1) {
      local_34 = 0;
      iVar5 = _strcasecmp("arch",(char *)plVar11[2]);
      if (iVar5 == 0) {
        pcVar3 = (char *)plVar11[3];
        sVar8 = _strlen(pcVar3);
        FUN_100b9f400(&local_34,pcVar3,sVar8 & 0xffffffff);
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
LAB_100b98cc5:
  FUN_100b9a390(param_1,1,uVar9);
  return;
}

