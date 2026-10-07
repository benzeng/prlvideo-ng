
undefined4 FUN_1006ff2b0(long *param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  ssize_t sVar7;
  size_t sVar8;
  size_t sVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 local_238 [512];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  if ((0x37 < (ulong)*(byte *)((long)param_1 + 0xbc)) ||
     ((0x81000000000001U >> ((ulong)*(byte *)((long)param_1 + 0xbc) & 0x3f) & 1) == 0)) {
    uVar2 = FUN_1006fe320((long)param_1 + 0x84);
    if (((uVar2 & 0xf000) != 0x8000) || (*(char *)((long)param_1 + 0xbc) == '1')) {
      piVar5 = ___error();
      *piVar5 = 0x16;
      uVar11 = 0xffffffff;
      goto LAB_1006ff427;
    }
  }
  if (param_2 == (char *)0x0) {
    param_2 = (char *)FUN_1006ffe90(param_1);
  }
  FUN_100700010(param_1);
  iVar3 = FUN_1006fe320((long)param_1 + 0x9c);
  FUN_1006fff50(param_1);
  FUN_1006fffb0(param_1);
  uVar6 = FUN_100701810(param_2);
  iVar4 = FUN_1006fe080(uVar6);
  uVar11 = 0xffffffff;
  if (iVar4 != -1) {
    iVar4 = _open(param_2,0x601,0x1b6);
    if (iVar4 != -1) {
      if (0 < iVar3) {
        sVar9 = (long)iVar3;
        do {
          iVar3 = (**(code **)(*param_1 + 0x10))(param_1[2],local_238,0x200);
          if (iVar3 != 0x200) {
            lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
            if (iVar3 != -1) {
              piVar5 = ___error();
              *piVar5 = 0x16;
            }
            goto LAB_1006ff427;
          }
          sVar8 = 0x200;
          if ((long)sVar9 < 0x201) {
            sVar8 = sVar9;
          }
          sVar7 = _write(iVar4,local_238,sVar8);
          if (sVar7 == -1) goto LAB_1006ff41c;
          bVar1 = 0x200 < (long)sVar9;
          sVar9 = sVar9 - 0x200;
        } while (bVar1);
      }
      iVar3 = _close(iVar4);
      uVar11 = 0;
      if (iVar3 == -1) {
        uVar11 = 0xffffffff;
      }
LAB_1006ff41c:
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_1006ff427:
  if (lVar10 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

