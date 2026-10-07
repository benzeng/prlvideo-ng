
undefined8
FUN_1002db3d0(long param_1,char param_2,char param_3,ushort param_4,ushort param_5,void *param_6,
             uint *param_7)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_5 == 0) {
    return 0x20;
  }
  if (DAT_101116bca < param_5) {
    return 0x20;
  }
  param_5 = param_5 - 1;
  uVar6 = (ulong)param_5;
  pbVar1 = (byte *)(param_1 + 0x3a + uVar6 * 4);
  if (param_3 == '\0') {
    if (-1 < param_2) {
      return 0x20;
    }
    if (param_4 != 0) {
      return 0x20;
    }
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[HUB%d] STS:%04x CHNG:%04x",uVar6,
                    *(undefined2 *)(param_1 + 0x3a + uVar6 * 4),
                    *(undefined2 *)(param_1 + 0x3c + uVar6 * 4));
    }
    uVar5 = 4;
    if (*param_7 < 4) {
      uVar5 = *param_7;
    }
    *param_7 = uVar5;
    _memcpy(param_6,pbVar1,(ulong)uVar5);
    return 0;
  }
  if (param_3 != '\x03') {
    if (param_3 != '\x01') {
      return 0x20;
    }
    if (param_2 < '\0') {
      return 0x20;
    }
    if (param_4 < 0x10) {
      switch(param_4) {
      case 1:
        *pbVar1 = *pbVar1 & 0xfd;
        if (DAT_1011c568c < 1) goto switchD_1002db51e_caseD_3;
        pcVar4 = "[HUB%u] Disable";
        break;
      case 2:
        *pbVar1 = *pbVar1 & 0xfb;
        if (DAT_1011c568c < 1) goto switchD_1002db51e_caseD_3;
        pcVar4 = "[HUB%u] Resume";
        break;
      default:
        goto switchD_1002db51e_caseD_3;
      case 4:
        if (DAT_1011c568c < 1) goto switchD_1002db51e_caseD_3;
        pcVar4 = "[HUB%u] Reset Clear";
        break;
      case 8:
        if (DAT_1011c568c < 1) goto switchD_1002db51e_caseD_3;
        pcVar4 = "[HUB%u] Power Off";
      }
    }
    else if (param_4 == 0x10) {
      pbVar1 = (byte *)(param_1 + 0x3c + uVar6 * 4);
      *pbVar1 = *pbVar1 & 0xfe;
      if (DAT_1011c568c < 1) goto switchD_1002db51e_caseD_3;
      pcVar4 = "[HUB%u] Connect Change Clear";
    }
    else if (param_4 == 0x11) {
      pbVar1 = (byte *)(param_1 + 0x3c + uVar6 * 4);
      *pbVar1 = *pbVar1 & 0xfd;
      if (DAT_1011c568c < 1) goto switchD_1002db51e_caseD_3;
      pcVar4 = "[HUB%u] Enable Change Clear";
    }
    else {
      if ((param_4 != 0x14) ||
         (pbVar1 = (byte *)(param_1 + 0x3c + uVar6 * 4), *pbVar1 = *pbVar1 & 0xef, DAT_1011c568c < 1
         )) goto switchD_1002db51e_caseD_3;
      pcVar4 = "[HUB%u] Reset Change Clear";
    }
    FUN_1008e3970("","USB",0,pcVar4,uVar6);
switchD_1002db51e_caseD_3:
    if (*(short *)(param_1 + 0x3c + uVar6 * 4) != 0) {
      return 0;
    }
    uVar5 = param_5 + 1;
    puVar2 = (uint *)(param_1 + 0xb8 + (ulong)(uVar5 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << ((byte)uVar5 & 0x1f));
    return 0;
  }
  if (param_2 < '\0') {
    return 0x20;
  }
  switch(param_4) {
  case 1:
    if (DAT_1011c568c < 1) goto switchD_1002db447_caseD_3;
    pcVar4 = "[HUB%u] Enable";
    break;
  case 2:
    *pbVar1 = *pbVar1 | 4;
    if (DAT_1011c568c < 1) goto switchD_1002db447_caseD_3;
    pcVar4 = "[HUB%u] Suspend";
    break;
  default:
    goto switchD_1002db447_caseD_3;
  case 4:
    if ((*pbVar1 & 1) != 0) {
      plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x28);
      (**(code **)(*plVar3 + 0x58))(plVar3,param_5 + 2);
      *(ushort *)(param_1 + 0x3a + uVar6 * 4) = *(ushort *)(param_1 + 0x3a + uVar6 * 4) & 0xfff9 | 2
      ;
      *(ushort *)(param_1 + 0x3c + uVar6 * 4) =
           *(ushort *)(param_1 + 0x3c + uVar6 * 4) & 0xffee | 0x10;
    }
    if (DAT_1011c568c < 1) goto switchD_1002db447_caseD_3;
    pcVar4 = "[HUB%u] Reset";
    break;
  case 8:
    if (DAT_1011c568c < 1) goto switchD_1002db447_caseD_3;
    pcVar4 = "[HUB%u] Power On";
  }
  FUN_1008e3970("","USB",0,pcVar4,uVar6);
switchD_1002db447_caseD_3:
  if (*(short *)(param_1 + 0x3c + uVar6 * 4) != 0) {
    uVar5 = param_5 + 1;
    puVar2 = (uint *)(param_1 + 0xb8 + (ulong)(uVar5 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
    FUN_1002db030(param_1);
  }
  return 0;
}

