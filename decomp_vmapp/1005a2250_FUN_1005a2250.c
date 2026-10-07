
int FUN_1005a2250(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_ce8 [3248];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  uVar3 = (**(code **)(*param_1 + 0x2e0))();
  FUN_10060b4c0(local_ce8,param_2,param_3,uVar3);
  iVar2 = FUN_10060b6d0(local_ce8);
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"HFS+ volume init failed");
  }
  else {
    iVar2 = FUN_10060c820(local_ce8,param_1);
    if (iVar2 < 0) {
      FUN_1008e3970("","vdisk",0,"HFS+ volume write failed");
    }
  }
  FUN_10060b5b0(local_ce8);
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

