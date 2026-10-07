
undefined8 FUN_1002edb10(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 local_978 [2376];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[L2CAP]-HDR(cid:%02x, len:%d)",
                  *(undefined2 *)(param_2 + 6),*(undefined2 *)(param_2 + 4));
    if ((*(short *)(param_2 + 4) != 0) && (0 < DAT_1011c568c)) {
      FUN_1002da020(local_978,0x940,param_2 + 8);
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[L2CAP]-OUT:%s",local_978);
    }
  }
  FUN_1002eb840(*param_1,param_2);
  if (lVar1 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

