
undefined8 FUN_100dabc60(long *param_1,char *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ssize_t sVar5;
  long lVar6;
  int *piVar7;
  undefined1 local_238 [512];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  iVar1 = _open(param_2,0);
  uVar4 = 0xffffffff;
  if (iVar1 == -1) goto LAB_100dabdbe;
  iVar2 = FUN_100da9450((long)param_1 + 0x9c);
  if (0x200 < iVar2) {
    do {
      if (param_3 != (code *)0x0) {
        iVar3 = (*param_3)(param_4);
        if (0 < iVar3) goto LAB_100dabda7;
      }
      sVar5 = _read(iVar1,local_238,0x200);
      if ((int)sVar5 != 0x200) {
        if ((int)sVar5 != -1) {
          piVar7 = ___error();
          *piVar7 = 0x16;
        }
        goto LAB_100dabda7;
      }
      lVar6 = (**(code **)(*param_1 + 0x18))(param_1[2],local_238,0x200);
      if (lVar6 == -1) goto LAB_100dabda7;
      iVar2 = iVar2 + -0x200;
    } while (0x200 < iVar2);
  }
  if (iVar2 < 1) {
LAB_100dabd81:
    _close(iVar1);
    uVar4 = 0;
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  else {
    sVar5 = _read(iVar1,local_238,(long)iVar2);
    if ((int)sVar5 != -1) {
      ___bzero(local_238 + iVar2,(long)(0x200 - iVar2));
      lVar6 = (**(code **)(*param_1 + 0x18))(param_1[2],local_238,0x200);
      if (lVar6 != -1) goto LAB_100dabd81;
    }
LAB_100dabda7:
    _close(iVar1);
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
    uVar4 = 0xffffffff;
  }
LAB_100dabdbe:
  if (lVar6 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

