
bool FUN_1002857c0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_1 + 0xa0);
  local_48 = *(undefined4 *)(param_1 + 0x90);
  local_44 = 3;
  local_40 = 0x1020;
  local_3c = 0;
  local_34 = 4;
  local_30 = 0x1020;
  local_2c = 0;
  local_38 = local_48;
  local_20 = lVar1;
  iVar3 = FUN_1000ed5c0(&local_48,0x10);
  if (((iVar3 == 0) || (iVar3 = FUN_1000ed5c0(lVar2 + 8,local_40), iVar3 == 0)) ||
     (iVar3 = FUN_1000ed5c0(&local_38,0x10), iVar3 == 0)) {
    if (lVar1 != local_20) {
LAB_100285880:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    bVar4 = true;
  }
  else {
    iVar3 = FUN_1000ed5c0(lVar2 + 0x1028,local_30);
    bVar4 = iVar3 == 0;
    if (lVar1 != local_20) goto LAB_100285880;
  }
  return bVar4;
}

