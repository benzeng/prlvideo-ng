
undefined8 FUN_1002eb840(long *param_1,ushort *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined1 local_978 [2376];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar2;
  if (0 < DAT_1011c568c) {
    uVar1 = *param_2;
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-HDR(handle:%03x, bp:%x, bc:%x, len:%d) DEV(%p)",
                  uVar1 & 0xfff,uVar1 >> 0xc & 3,uVar1 >> 0xe,param_2[1],
                  param_1[(long)(int)((uVar1 & 0xfff) - 0x10) + 0xd]);
    if (0 < DAT_1011c568c) {
      FUN_1002da020(local_978,0x940,param_2 + 2,param_2[1]);
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-OUT:%s",local_978);
    }
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + -0x14);
  if (lVar2 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

