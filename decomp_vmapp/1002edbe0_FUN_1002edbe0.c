
undefined8 FUN_1002edbe0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_978 [2376];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]-HDR(code:%02x, id:%02x, len:%d) %s",
                  *(undefined1 *)(param_2 + 8),*(undefined1 *)(param_2 + 9),
                  *(undefined2 *)(param_2 + 10),param_3);
    if ((*(short *)(param_2 + 10) != 0) && (0 < DAT_1011c568c)) {
      FUN_1002da020(local_978,0x940,param_2 + 0xc);
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]-OUT:%s",local_978);
    }
  }
  FUN_1002eb840(*param_1,param_2);
  if (lVar1 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

