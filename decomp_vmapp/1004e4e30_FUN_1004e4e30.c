
undefined8 FUN_1004e4e30(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = _fsync(*(int *)(param_1 + 0x10));
  uVar3 = 0;
  if (iVar1 == -1) {
    piVar2 = ___error();
    iVar1 = *piVar2;
    if (iVar1 < 0x3f) {
      uVar3 = 0xf0000019;
      switch(iVar1) {
      case 1:
        return 0xf0000007;
      case 2:
        goto switchD_1004e4e6b_caseD_2;
      case 9:
        return 0xf0000012;
      case 0xd:
      case 0x1e:
        return 0xf0000007;
      case 0xe:
        return 0xf0000006;
      case 0x11:
        return 0xf0000017;
      case 0x14:
        return 0xf0000015;
      case 0x16:
      case 0x1d:
        return 0xf0000003;
      case 0x17:
      case 0x18:
        return 0xf000001b;
      case 0x1c:
        return 0xf000000c;
      }
    }
    else {
      if (iVar1 == 0x3f) {
        return 0xf0000018;
      }
      if (iVar1 == 0x42) {
        return 0xf000000b;
      }
    }
    uVar3 = 0xf000001c;
  }
switchD_1004e4e6b_caseD_2:
  return uVar3;
}

