
int FUN_1005b20e0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = param_1[0xc];
  local_28 = param_1[0xd];
  local_20 = lVar1;
  iVar2 = FUN_1005b1b60(*param_1,&local_30);
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"Cache file removing failed, err = 0x%X",iVar2);
  }
  if (lVar1 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

