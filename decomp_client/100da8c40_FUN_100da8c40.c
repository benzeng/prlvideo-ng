
undefined8 FUN_100da8c40(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar1 = FUN_100dab310();
  if (iVar1 == 0) {
    do {
      uVar3 = FUN_100daafc0(param_1);
      iVar1 = FUN_100daca50(param_2,uVar3,6);
      if (iVar1 == 0) {
        if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
          FUN_100da96a0(param_1);
        }
        if (param_3 == 0) {
          ___strlcpy_chk(local_438,uVar3,0x400,0x400);
        }
        else {
          ___snprintf_chk(local_438,0x400,0,0x400,"%s/%s",param_3,uVar3);
        }
        iVar1 = FUN_100da9bb0(param_1,uVar3);
LAB_100da8d54:
        uVar3 = 0xffffffff;
        if (iVar1 != 0) goto LAB_100da8d7c;
      }
      else {
        if (((ulong)*(byte *)(param_1 + 0xbc) < 0x38) &&
           ((0x81000000000001U >> ((ulong)*(byte *)(param_1 + 0xbc) & 0x3f) & 1) != 0)) {
LAB_100da8ce4:
          iVar1 = FUN_100daa5a0(param_1);
          goto LAB_100da8d54;
        }
        uVar2 = FUN_100da9450(param_1 + 0x84);
        if (((uVar2 & 0xf000) == 0x8000) && (*(char *)(param_1 + 0xbc) != '1')) goto LAB_100da8ce4;
      }
      iVar1 = FUN_100dab310(param_1);
    } while (iVar1 == 0);
  }
  uVar3 = 0xffffffff;
  if (iVar1 == 1) {
    uVar3 = 0;
  }
LAB_100da8d7c:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

