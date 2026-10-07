
undefined8 FUN_1006fdb10(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar1 = FUN_1007001e0();
  if (iVar1 == 0) {
    do {
      uVar3 = FUN_1006ffe90(param_1);
      iVar1 = FUN_100701920(param_2,uVar3,6);
      if (iVar1 == 0) {
        if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
          FUN_1006fe570(param_1);
        }
        if (param_3 == 0) {
          ___strlcpy_chk(local_438,uVar3,0x400,0x400);
        }
        else {
          ___snprintf_chk(local_438,0x400,0,0x400,"%s/%s",param_3,uVar3);
        }
        iVar1 = FUN_1006fea80(param_1,uVar3);
LAB_1006fdc24:
        uVar3 = 0xffffffff;
        if (iVar1 != 0) goto LAB_1006fdc4c;
      }
      else {
        if (((ulong)*(byte *)(param_1 + 0xbc) < 0x38) &&
           ((0x81000000000001U >> ((ulong)*(byte *)(param_1 + 0xbc) & 0x3f) & 1) != 0)) {
LAB_1006fdbb4:
          iVar1 = FUN_1006ff470(param_1);
          goto LAB_1006fdc24;
        }
        uVar2 = FUN_1006fe320(param_1 + 0x84);
        if (((uVar2 & 0xf000) == 0x8000) && (*(char *)(param_1 + 0xbc) != '1')) goto LAB_1006fdbb4;
      }
      iVar1 = FUN_1007001e0(param_1);
    } while (iVar1 == 0);
  }
  uVar3 = 0xffffffff;
  if (iVar1 == 1) {
    uVar3 = 0;
  }
LAB_1006fdc4c:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

