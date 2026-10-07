
undefined8 FUN_100399b90(long param_1,ulong param_2,uint param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 8 + (param_2 & 0xffffffff) * 0xc);
  uVar2 = 0xf0000;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_4 == '\0') {
    uVar3 = 0;
    if (((param_3 & 0x100) != 0) && (uVar3 = 0, (param_3 & 0xfffffeff) < 5)) {
      uVar3 = *(uint *)(&DAT_100b3f2a0 + (long)(int)(param_3 & 0xfffffeff) * 4);
    }
    uVar2 = 0xf0000;
    switch(iVar1) {
    case 1:
    case 4:
      if (uVar3 != 3) {
        if (2 < uVar3) {
          return 0xf0000;
        }
        uVar2 = 0x30000;
        if (iVar1 == 4) {
          uVar2 = 0x70000;
        }
        return uVar2;
      }
    case 3:
      uVar2 = 0x70000;
      break;
    case 2:
      uVar2 = 0x70000;
      if (uVar3 == 4) {
        uVar2 = 0xf0000;
      }
      return uVar2;
    }
  }
  return uVar2;
}

