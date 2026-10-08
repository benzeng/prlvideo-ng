
undefined8
FUN_100c5d810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,uint param_6,int param_7,uint param_8,uint param_9)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long local_80;
  char acStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar12 = 0;
  if ((int)param_8 < 0) {
    param_8 = uVar12;
  }
  if ((param_9 & 0x40) == 0) {
    if ((long)param_5 < 0) {
      param_5 = -param_5;
      uVar12 = 0x2d;
    }
    else {
      uVar12 = 0x2b;
      if ((param_9 & 2) == 0) {
        uVar12 = param_9 * 8 & 0x20;
      }
    }
  }
  if ((param_9 & 8) == 0) {
    pcVar10 = "";
  }
  else {
    pcVar11 = "";
    if (param_6 == 8) {
      pcVar11 = "0";
    }
    pcVar10 = "0x";
    if (param_6 != 0x10) {
      pcVar10 = pcVar11;
    }
  }
  pcVar11 = "0123456789abcdef";
  if ((param_9 & 0x20) != 0) {
    pcVar11 = "0123456789ABCDEF";
  }
  lVar1 = 0;
  do {
    lVar9 = lVar1;
    uVar6 = param_5 / param_6;
    lVar1 = lVar9 + 1;
    acStack_58[lVar9] = pcVar11[param_5 % (ulong)param_6];
    if (0x19 < lVar1) break;
    param_5 = uVar6;
  } while (uVar6 != 0);
  uVar4 = (uint)lVar9;
  if ((uint)lVar1 != 0x1a) {
    uVar4 = (uint)lVar1;
  }
  local_80 = (long)(int)uVar4;
  acStack_58[local_80] = '\0';
  iVar14 = param_8 - uVar4;
  if ((int)param_8 < (int)uVar4) {
    param_8 = uVar4;
  }
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  sVar7 = _strlen(pcVar10);
  iVar13 = ((param_7 + -1 + (uint)(uVar12 == 0)) - param_8) - (int)sVar7;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  iVar5 = iVar13;
  if (((param_9 & 0x10) != 0) && (iVar5 = 0, iVar14 < iVar13)) {
    iVar14 = iVar13;
  }
  iVar13 = -iVar5;
  if ((param_9 & 1) == 0) {
    iVar13 = iVar5;
  }
  iVar5 = iVar13;
  if (0 < iVar13) {
    do {
      iVar13 = FUN_100c5d720(param_1,param_2,param_3,param_4,0x20);
      uVar8 = 0;
      if (iVar13 == 0) goto LAB_100c5dae1;
      iVar13 = iVar5 + -1;
      bVar3 = 1 < iVar5;
      iVar5 = iVar13;
    } while (bVar3);
  }
  if (uVar12 != 0) {
    iVar5 = FUN_100c5d720(param_1,param_2,param_3,param_4,uVar12);
    uVar8 = 0;
    if (iVar5 == 0) goto LAB_100c5dae1;
  }
  cVar2 = *pcVar10;
  while (cVar2 != '\0') {
    pcVar10 = pcVar10 + 1;
    iVar5 = FUN_100c5d720(param_1,param_2,param_3,param_4,(int)cVar2);
    uVar8 = 0;
    if (iVar5 == 0) goto LAB_100c5dae1;
    cVar2 = *pcVar10;
  }
  if (0 < iVar14) {
    iVar14 = iVar14 + 1;
    do {
      iVar5 = FUN_100c5d720(param_1,param_2,param_3,param_4,0x30);
      uVar8 = 0;
      if (iVar5 == 0) goto LAB_100c5dae1;
      iVar14 = iVar14 + -1;
    } while (1 < iVar14);
  }
  pcVar11 = acStack_58 + (int)(uVar4 - 1);
  do {
    if (local_80 < 1) {
      if (iVar13 < 0) {
        iVar13 = iVar13 + -1;
        goto LAB_100c5dab0;
      }
      uVar8 = 1;
      break;
    }
    iVar14 = FUN_100c5d720(param_1,param_2,param_3,param_4,(int)*pcVar11);
    local_80 = local_80 + -1;
    pcVar11 = pcVar11 + -1;
    uVar8 = 0;
  } while (iVar14 != 0);
  goto LAB_100c5dae1;
  while (iVar13 = iVar13 + 1, iVar13 < -1) {
LAB_100c5dab0:
    iVar14 = FUN_100c5d720(param_1,param_2,param_3,param_4,0x20);
    uVar8 = 0;
    if (iVar14 == 0) goto LAB_100c5dae1;
  }
  uVar8 = 1;
LAB_100c5dae1:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

