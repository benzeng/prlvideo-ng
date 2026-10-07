
undefined8 FUN_1004e3620(long param_1,void *param_2,uint param_3,int *param_4,off_t param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_4 = 0;
  sVar2 = _pwrite(*(int *)(param_1 + 0x10),param_2,(ulong)param_3,param_5);
  if ((int)sVar2 != -1) {
    *param_4 = (int)sVar2;
    return 0;
  }
  piVar3 = ___error();
  iVar1 = *piVar3;
  if (iVar1 < 0x3f) {
    uVar4 = 0xf0000019;
    switch(iVar1) {
    case 1:
      uVar4 = 0xf0000007;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e366d_caseD_3;
    case 5:
      uVar4 = 0xf000001c;
      break;
    case 9:
      uVar4 = 0xf0000012;
      break;
    case 0xd:
    case 0x1e:
      uVar4 = 0xf0000007;
      break;
    case 0xe:
      uVar4 = 0xf0000006;
      break;
    case 0x11:
      uVar4 = 0xf0000017;
      break;
    case 0x14:
      uVar4 = 0xf0000015;
      break;
    case 0x16:
    case 0x1d:
      uVar4 = 0xf0000003;
      break;
    case 0x17:
    case 0x18:
      uVar4 = 0xf000001b;
      break;
    case 0x1c:
      uVar4 = 0xf000000c;
    }
  }
  else {
    if (iVar1 == 0x3f) {
      return 0xf0000018;
    }
    if (iVar1 == 0x42) {
      return 0xf000000b;
    }
switchD_1004e366d_caseD_3:
    uVar4 = 0xf000001c;
  }
  return uVar4;
}

