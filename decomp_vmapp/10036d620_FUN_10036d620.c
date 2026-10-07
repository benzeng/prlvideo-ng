
undefined4 FUN_10036d620(uint param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  bool bVar4;
  int local_44c;
  undefined1 local_448 [1024];
  long local_48 [3];
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48[2] = lVar1;
  uVar2 = 0;
  if (param_1 < 3) {
    uVar2 = (*DAT_1011c5af8)(*(undefined4 *)(&DAT_100b3d548 + (long)(int)param_1 * 4));
    local_48[0] = 0;
    local_48[1] = 0;
    bVar4 = param_2 != 0;
    if (bVar4) {
      local_48[0] = param_2;
    }
    uVar3 = (ulong)bVar4;
    if (param_3 != 0) {
      *(long *)((ulong)local_48 | uVar3 << 3) = param_3;
      uVar3 = (ulong)(bVar4 + 1);
    }
    (*DAT_1011c6af8)(uVar2,uVar3,local_48,0);
    (*DAT_1011c59f0)(uVar2);
    local_44c = 0;
    (*DAT_1011c61a0)(uVar2,0x8b81,&local_44c);
    if (local_44c == 0) {
      (*DAT_1011c6188)(uVar2,0x400,0,local_448);
      (*DAT_1011c5b78)(uVar2);
      uVar2 = 0;
    }
  }
  if (lVar1 != local_48[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

