
bool FUN_10036d740(undefined4 param_1)

{
  long lVar1;
  bool bVar2;
  int local_42c;
  undefined1 local_428 [1024];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  (*DAT_1011c6418)();
  local_42c = 0;
  (*DAT_1011c6110)(param_1,0x8b82,&local_42c);
  bVar2 = local_42c != 0;
  if (!bVar2) {
    (*DAT_1011c60f0)(param_1,0x400,0,local_428);
  }
  if (lVar1 == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

