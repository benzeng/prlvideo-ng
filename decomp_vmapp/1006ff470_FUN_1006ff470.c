
undefined8 FUN_1006ff470(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 local_238 [512];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if ((((ulong)*(byte *)((long)param_1 + 0xbc) < 0x38) &&
      ((0x81000000000001U >> ((ulong)*(byte *)((long)param_1 + 0xbc) & 0x3f) & 1) != 0)) ||
     ((uVar2 = FUN_1006fe320((long)param_1 + 0x84), (uVar2 & 0xf000) == 0x8000 &&
      (*(char *)((long)param_1 + 0xbc) != '1')))) {
    iVar3 = FUN_1006fe320((long)param_1 + 0x9c);
    uVar6 = 0;
    if (0 < iVar3) {
      iVar3 = iVar3 + 0x200;
      do {
        iVar4 = (**(code **)(*param_1 + 0x10))(param_1[2],local_238,0x200);
        if (iVar4 != 0x200) {
          uVar6 = 0xffffffff;
          if (iVar4 != -1) {
            piVar5 = ___error();
            *piVar5 = 0x16;
          }
          break;
        }
        iVar3 = iVar3 + -0x200;
      } while (0x200 < iVar3);
    }
  }
  else {
    piVar5 = ___error();
    *piVar5 = 0x16;
    uVar6 = 0xffffffff;
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

