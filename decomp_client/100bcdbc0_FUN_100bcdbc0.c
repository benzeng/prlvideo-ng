
undefined8 FUN_100bcdbc0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((param_2 - 5U < 2) && (iVar1 = FUN_100be7ae0(param_1 + 0x100), iVar1 == 0)) {
    FUN_100c62ee0(0x14,0xe9,0x41,"s3_lib.c",0xd69);
    return 0;
  }
  if (param_2 < 7) {
    if (param_2 == 5) {
      *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x38) = param_3;
    }
    else if (param_2 == 6) {
      *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x48) = param_3;
    }
  }
  else if (param_2 == 7) {
    *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x58) = param_3;
  }
  else if (param_2 == 0x38) {
    *(undefined8 *)(param_1 + 0x1d0) = param_3;
  }
  return 0;
}

