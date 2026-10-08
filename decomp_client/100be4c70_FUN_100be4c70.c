
char * FUN_100be4c70(long param_1,char *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int local_3c;
  
  pcVar6 = (char *)0x0;
  if (((*(long *)(param_1 + 0x130) != 0) && (pcVar6 = (char *)0x0, 1 < param_3)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x130) + 0xf0), lVar1 != 0)) {
    iVar2 = FUN_100c60800(lVar1);
    pcVar6 = (char *)0x0;
    if (iVar2 != 0) {
      iVar2 = FUN_100c60800(lVar1);
      iVar7 = 0;
      pcVar6 = param_2;
      pcVar8 = param_2;
      local_3c = param_3;
      if (0 < iVar2) {
        do {
          lVar4 = FUN_100c60820(lVar1,iVar7);
          pcVar6 = *(char **)(lVar4 + 8);
          sVar5 = _strlen(pcVar6);
          iVar2 = (int)sVar5;
          if (local_3c < iVar2 + 1) {
            pcVar6 = pcVar8 + -1;
            if (pcVar8 == param_2) {
              pcVar6 = pcVar8;
            }
            *pcVar6 = '\0';
            return param_2;
          }
          _strcpy(pcVar8,pcVar6);
          pcVar6 = pcVar8 + (long)iVar2 + 1;
          pcVar8[iVar2] = ':';
          iVar7 = iVar7 + 1;
          iVar3 = FUN_100c60800(lVar1);
          pcVar8 = pcVar6;
          local_3c = local_3c - (iVar2 + 1);
        } while (iVar7 < iVar3);
      }
      pcVar6[-1] = '\0';
      pcVar6 = param_2;
    }
  }
  return pcVar6;
}

