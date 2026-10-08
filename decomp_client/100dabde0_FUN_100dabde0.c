
undefined8 FUN_100dabde0(long *param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 local_228 [512];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  ___bzero(local_228,0x200);
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1[2],local_228,0x200);
  uVar4 = 0xffffffff;
  if (iVar2 == -1) goto LAB_100dabe6b;
  if (iVar2 == 0x200) {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1[2],local_228,0x200);
    if (iVar2 == 0x200) {
      uVar4 = 0;
      goto LAB_100dabe6b;
    }
    if (iVar2 == -1) goto LAB_100dabe6b;
  }
  piVar3 = ___error();
  *piVar3 = 0x16;
LAB_100dabe6b:
  if (lVar1 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

