
undefined8 FUN_1004e3760(long param_1,void *param_2,uint param_3,int *param_4,off_t param_5)

{
  ssize_t sVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  
  *param_4 = 0;
  sVar1 = _pread(*(int *)(param_1 + 0x10),param_2,(ulong)param_3,param_5);
  iVar4 = (int)sVar1;
  if (iVar4 != -1) {
    if ((param_3 != 0) && (iVar4 == 0)) {
      return 0xf000000e;
    }
    *param_4 = iVar4;
    return 0;
  }
  piVar2 = ___error();
  iVar4 = *piVar2;
  if (iVar4 < 0x3f) {
    uVar3 = 0xf0000019;
    switch(iVar4) {
    case 1:
      uVar3 = 0xf0000007;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e37c2_caseD_3;
    case 5:
      uVar3 = 0xf000001c;
      break;
    case 9:
      uVar3 = 0xf0000012;
      break;
    case 0xd:
    case 0x1e:
      uVar3 = 0xf0000007;
      break;
    case 0xe:
      uVar3 = 0xf0000006;
      break;
    case 0x11:
      uVar3 = 0xf0000017;
      break;
    case 0x14:
      uVar3 = 0xf0000015;
      break;
    case 0x16:
    case 0x1d:
      uVar3 = 0xf0000003;
      break;
    case 0x17:
    case 0x18:
      uVar3 = 0xf000001b;
      break;
    case 0x1c:
      uVar3 = 0xf000000c;
    }
  }
  else {
    if (iVar4 == 0x3f) {
      return 0xf0000018;
    }
    if (iVar4 == 0x42) {
      return 0xf000000b;
    }
switchD_1004e37c2_caseD_3:
    uVar3 = 0xf000001c;
  }
  return uVar3;
}

