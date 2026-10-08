
undefined8 FUN_100c7efd0(undefined8 param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  char local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar6 = 0;
  if (param_2 != (int *)0x0) {
    iVar5 = *param_2;
    lVar8 = 0;
    if (0 < iVar5) {
      lVar2 = *(long *)(param_2 + 2);
      iVar7 = 0;
      do {
        cVar1 = *(char *)(lVar2 + lVar8);
        if ((cVar1 == '\x7f') || (((cVar1 < ' ' && (cVar1 != '\n')) && (cVar1 != '\r')))) {
          local_88[iVar7] = '.';
        }
        else {
          local_88[iVar7] = cVar1;
        }
        iVar4 = iVar7 + 1;
        bVar3 = 0x4e < iVar7;
        iVar7 = iVar4;
        if (bVar3) {
          iVar5 = FUN_100c58980(param_1,local_88,iVar4);
          uVar6 = 0;
          if (iVar5 < 1) goto LAB_100c7f0aa;
          iVar5 = *param_2;
          iVar7 = 0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
      if (0 < iVar7) {
        iVar5 = FUN_100c58980(param_1,local_88);
        uVar6 = 0;
        if (iVar5 < 1) goto LAB_100c7f0aa;
      }
    }
    uVar6 = 1;
  }
LAB_100c7f0aa:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

