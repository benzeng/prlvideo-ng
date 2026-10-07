
undefined8 FUN_1004e30b0(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    return 0;
  }
  *(byte *)(param_1 + 0x14) = (byte)(param_4 >> 0xc) & 1;
  uVar5 = param_2;
  if ((param_2 & 6) != 0) {
    uVar5 = 2;
  }
  uVar1 = (param_2 & 4) >> 1;
  if ((param_2 & 4) != 0) {
    uVar1 = 2;
  }
  iVar2 = _open((char *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10)),
                (param_2 >> 5 | param_2 >> 3 | uVar1 | uVar5) & 2 | 0x1000000);
  if (iVar2 != -1) {
    iVar3 = _fcntl(iVar2,0x43,0x400);
    if (iVar3 != -1) {
      _close(iVar2);
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  piVar4 = ___error();
  iVar2 = *piVar4;
  if (iVar2 < 0x3f) {
    uVar6 = 0xf0000019;
    switch(iVar2) {
    case 1:
      uVar6 = 0xf0000007;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e317e_caseD_3;
    case 9:
      uVar6 = 0xf0000012;
      break;
    case 0xd:
    case 0x1e:
      uVar6 = 0xf0000007;
      break;
    case 0xe:
      uVar6 = 0xf0000006;
      break;
    case 0x11:
      uVar6 = 0xf0000017;
      break;
    case 0x14:
      uVar6 = 0xf0000015;
      break;
    case 0x16:
    case 0x1d:
      uVar6 = 0xf0000003;
      break;
    case 0x17:
    case 0x18:
      uVar6 = 0xf000001b;
      break;
    case 0x1c:
      uVar6 = 0xf000000c;
    }
  }
  else {
    if (iVar2 == 0x3f) {
      return 0xf0000018;
    }
    if (iVar2 == 0x42) {
      return 0xf000000b;
    }
switchD_1004e317e_caseD_3:
    uVar6 = 0xf000001c;
  }
  return uVar6;
}

