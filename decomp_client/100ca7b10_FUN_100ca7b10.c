
undefined8 FUN_100ca7b10(long param_1,undefined4 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 uVar10;
  int iVar11;
  char *pcVar12;
  
  uVar10 = 0x33;
  switch(*param_2) {
  case 1:
    piVar4 = *(int **)(param_1 + 8);
    piVar1 = *(int **)(param_2 + 2);
    pcVar12 = *(char **)(piVar1 + 2);
    pcVar7 = *(char **)(piVar4 + 2);
    pcVar6 = _strchr(pcVar12,0x40);
    pcVar8 = _strchr(pcVar7,0x40);
    if (pcVar8 == (char *)0x0) {
      return 0x35;
    }
    if (pcVar6 == (char *)0x0) {
      if (*pcVar12 == '.') {
        iVar5 = *piVar4;
        iVar11 = iVar5 - *piVar1;
        if ((iVar11 != 0 && *piVar1 <= iVar5) &&
           (iVar5 = _strcasecmp(pcVar12,pcVar7 + iVar11), iVar5 == 0)) {
          return 0;
        }
        return 0x2f;
      }
    }
    else {
      sVar9 = (long)pcVar6 - (long)pcVar12;
      if (sVar9 != 0) {
        if (sVar9 != (long)pcVar8 - (long)pcVar7) {
          return 0x2f;
        }
        iVar5 = _strncmp(pcVar12,pcVar7,sVar9);
        if (iVar5 != 0) {
          return 0x2f;
        }
      }
      pcVar12 = pcVar6 + 1;
    }
    iVar5 = _strcasecmp(pcVar12,pcVar8 + 1);
    break;
  case 2:
    piVar4 = *(int **)(param_2 + 2);
    pcVar12 = *(char **)(piVar4 + 2);
    if (*pcVar12 == '\0') {
      return 0;
    }
    pcVar7 = *(char **)(*(int **)(param_1 + 8) + 2);
    iVar5 = **(int **)(param_1 + 8);
    iVar11 = iVar5 - *piVar4;
    if (iVar11 == 0 || iVar5 < *piVar4) {
      iVar5 = _strcasecmp(pcVar12,pcVar7);
    }
    else {
      if ((*pcVar12 != '.') && (pcVar7[(long)iVar11 + -1] != '.')) {
        return 0x2f;
      }
      iVar5 = _strcasecmp(pcVar12,pcVar7 + iVar11);
    }
    break;
  default:
    goto switchD_100ca7b44_caseD_3;
  case 4:
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_2 + 2);
    if ((*(int *)(lVar2 + 8) != 0) && (iVar5 = FUN_100c7c6f0(lVar2,0), iVar5 < 0)) {
      return 0x11;
    }
    if ((*(int *)(lVar3 + 8) != 0) && (iVar5 = FUN_100c7c6f0(lVar3,0), iVar5 < 0)) {
      return 0x11;
    }
    if (*(int *)(lVar2 + 0x20) < *(int *)(lVar3 + 0x20)) {
      return 0x2f;
    }
    iVar5 = _memcmp(*(void **)(lVar3 + 0x18),*(void **)(lVar2 + 0x18),(long)*(int *)(lVar3 + 0x20));
    break;
  case 6:
    piVar4 = *(int **)(param_2 + 2);
    pcVar12 = *(char **)(piVar4 + 2);
    pcVar7 = _strchr(*(char **)(*(long *)(param_1 + 8) + 8),0x3a);
    if (pcVar7 == (char *)0x0) {
      return 0x35;
    }
    if (pcVar7[1] != '/') {
      return 0x35;
    }
    if (pcVar7[2] != '/') {
      return 0x35;
    }
    pcVar6 = pcVar7 + 3;
    pcVar8 = _strchr(pcVar6,0x3a);
    if ((pcVar8 == (char *)0x0) && (pcVar8 = _strchr(pcVar6,0x2f), pcVar8 == (char *)0x0)) {
      sVar9 = _strlen(pcVar6);
      iVar5 = (int)sVar9;
    }
    else {
      iVar5 = (int)pcVar8 - (int)pcVar6;
    }
    if (iVar5 == 0) {
      return 0x35;
    }
    iVar11 = *piVar4;
    if (*pcVar12 == '.') {
      if ((iVar11 < iVar5) &&
         (iVar5 = _strncasecmp(pcVar7 + (((long)iVar5 + 3) - (long)iVar11),pcVar12,(long)iVar11),
         iVar5 == 0)) {
        return 0;
      }
      return 0x2f;
    }
    if (iVar11 != iVar5) {
      return 0x2f;
    }
    iVar5 = _strncasecmp(pcVar6,pcVar12,(long)iVar5);
  }
  uVar10 = 0x2f;
  if (iVar5 == 0) {
    uVar10 = 0;
  }
switchD_100ca7b44_caseD_3:
  return uVar10;
}

