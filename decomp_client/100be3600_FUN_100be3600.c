
bool FUN_100be3600(int *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int local_190 [17];
  uint local_14c;
  undefined1 local_148 [280];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  bVar3 = false;
  local_30 = lVar1;
  if (param_3 < 0x21) {
    local_190[0] = *param_1;
    local_14c = param_3;
    ___memcpy_chk(local_148,param_2,(ulong)param_3,0x118);
    if ((param_3 < 0x10) && (local_190[0] == 2)) {
      ___bzero(local_148 + param_3,0x10 - param_3);
      local_14c = 0x10;
    }
    FUN_100bf2780(5,0xc,"ssl_lib.c",0x1d8);
    lVar2 = FUN_100c60fc0(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x20),local_190);
    FUN_100bf2780(6,0xc,"ssl_lib.c",0x1da);
    bVar3 = lVar2 != 0;
  }
  if (lVar1 == local_30) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

