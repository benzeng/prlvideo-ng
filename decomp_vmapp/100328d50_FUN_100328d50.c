
char * FUN_100328d50(long param_1,int param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_34;
  
  if ((param_2 == 0x1f03) && (299 < *(ushort *)(param_1 + 0xa62c))) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x821d,&local_34);
    uVar5 = 0;
    if (0 < local_34) {
      iVar6 = 0;
      pcVar7 = (char *)(param_1 + 0x6620);
      do {
        pcVar1 = (char *)(*(code *)DAT_1011c4a88[0x30b])(*DAT_1011c4a88,0x1f03,uVar5);
        sVar2 = _strlen(pcVar1);
        iVar8 = (int)sVar2;
        if ((iVar8 != 0) && (iVar8 + iVar6 < 0x4000)) {
          _memcpy(pcVar7,pcVar1,(long)iVar8);
          pcVar7[iVar8] = ' ';
          pcVar7 = pcVar7 + (iVar8 + 1);
          iVar6 = iVar8 + 1 + iVar6;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar4;
      } while ((int)uVar4 < local_34);
      uVar5 = 0;
      if (0 < iVar6) {
        uVar5 = (ulong)(iVar6 + -1);
      }
    }
    *(undefined1 *)(param_1 + 0x6620 + uVar5) = 0;
    pcVar7 = (char *)(param_1 + 0x6620);
  }
  else {
    pcVar1 = (char *)(*(code *)DAT_1011c4a88[0x76])(*DAT_1011c4a88,param_2);
    pcVar7 = "";
    if (pcVar1 != (char *)0x0) {
      pcVar7 = pcVar1;
    }
  }
  if (0x8b8b < param_2) {
    if (param_2 != 0x8b8c) {
      return pcVar7;
    }
    FUN_100305650(param_1,param_1 + 0x2620,0x4000,pcVar7);
    goto LAB_100328f6d;
  }
  pcVar1 = pcVar7;
  switch(param_2) {
  case 0x1f00:
    uVar4 = *(uint *)(param_1 + 0x25f8);
    pcVar3 = "Parallels and ";
    break;
  case 0x1f01:
    uVar4 = *(uint *)(param_1 + 0x25f8);
    pcVar3 = "Parallels using ";
    break;
  case 0x1f02:
    FUN_100305580(param_1,param_1 + 0x2620,0x4000,pcVar7);
    goto LAB_100328f6d;
  case 0x1f03:
    FUN_100305190(param_1,param_1 + 0x2620,0x4000,pcVar7);
LAB_100328f6d:
    pcVar1 = (char *)(param_1 + 0x2620);
  default:
    goto switchD_100328eae_default;
  }
  pcVar1 = (char *)(param_1 + 0x2620);
  if ((uVar4 & 0x20) != 0) {
    pcVar3 = "";
  }
  _snprintf(pcVar1,0x4000,"%s%s",pcVar3,pcVar7);
switchD_100328eae_default:
  return pcVar1;
}

