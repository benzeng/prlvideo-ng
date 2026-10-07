
undefined8 FUN_100590a20(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 local_48 [16];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x10) + 0xa0))(local_48);
  uVar4 = 0x80023000;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x28);
    plVar6 = (long *)(param_1 + 0x28);
    do {
      while (plVar5 = plVar2, iVar3 = FUN_1007ea6f0(plVar5 + 4,local_48), iVar3 < 0) {
        plVar2 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) goto LAB_100590ac0;
      }
      plVar6 = plVar5;
      plVar2 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_100590ac0:
    if (plVar6 == (long *)(param_1 + 0x28)) {
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      uVar4 = 0x80023000;
    }
    else {
      iVar3 = FUN_1007ea6f0(local_48,plVar6 + 4);
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      uVar4 = 0x80023000;
      if (-1 < iVar3) {
        *param_2 = (int)plVar6[6];
        QString::operator=((QString *)(param_2 + 6),(QString *)(plVar6 + 7));
        lVar1 = *(long *)(param_1 + 8);
        *(long *)(param_2 + 4) = *(long *)(param_1 + 0x10) - lVar1;
        *(long *)(param_2 + 2) = lVar1;
        uVar4 = 0;
      }
    }
  }
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

