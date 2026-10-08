
ushort FUN_100dab140(long param_1)

{
  char cVar1;
  ushort uVar2;
  size_t sVar3;
  
  uVar2 = FUN_100da9450(param_1 + 0x84);
  if ((uVar2 & 0xf000) != 0) {
    return uVar2;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  if (cVar1 < 0x32) {
    if ((cVar1 == '\0') &&
       (sVar3 = _strlen((char *)(param_1 + 0x20)), *(char *)(sVar3 + 0x1f + param_1) == '/')) {
switchD_100dab1ad_caseD_35:
      return uVar2 | 0x4000;
    }
switchD_100dab1ad_default:
    uVar2 = uVar2 | 0x8000;
  }
  else {
    switch((int)cVar1) {
    case 0x32:
      uVar2 = uVar2 | 0xa000;
      break;
    case 0x33:
      uVar2 = uVar2 | 0x2000;
      break;
    case 0x34:
      uVar2 = uVar2 | 0x6000;
      break;
    case 0x35:
      goto switchD_100dab1ad_caseD_35;
    case 0x36:
      uVar2 = uVar2 | 0x1000;
      break;
    default:
      goto switchD_100dab1ad_default;
    }
  }
  return uVar2;
}

