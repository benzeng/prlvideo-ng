
undefined8 FUN_1002eae70(long param_1,long param_2)

{
  int *piVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_980;
  ushort local_97f;
  undefined2 local_97d;
  undefined1 local_978 [2368];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  if (*(int *)(param_2 + 0x44c) != 2) {
    uVar7 = FUN_1002de350(param_1,param_2);
    return uVar7;
  }
  puVar2 = (ushort *)(param_2 + 0x4d8);
  if ((*(uint *)(param_2 + 0x43c) < 4) ||
     (uVar3 = *(ushort *)(param_2 + 0x4da), *(uint *)(param_2 + 0x43c) != uVar3 + 4)) {
    uVar9 = 7;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]+BUF(%p:%d) -> Incorrect Data Length",puVar2);
    }
  }
  else {
    uVar4 = *puVar2;
    uVar8 = uVar4 & 0xfff;
    if (((int)(uVar8 - 0x10) < 0x20) &&
       (lVar6 = *(long *)(param_1 + 0x68 + (long)(int)(uVar8 - 0x10) * 8), lVar6 != 0)) {
      if ((0 < DAT_1011c568c) &&
         (FUN_1008e3970(&DAT_100b392f0,"USB",0,
                        "[ACL-U]+HDR(handle:%03x, bp:%x, bc:%x, len:%d) DEV(%p)",uVar8,
                        uVar4 >> 0xc & 3,uVar4 >> 0xe,uVar3,lVar6), 0 < DAT_1011c568c)) {
        FUN_1002da020(local_978,0x940,param_2 + 0x4dc,*(undefined2 *)(param_2 + 0x4da));
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]+IN:%s",local_978);
      }
      FUN_1002eb1b0(lVar6,puVar2);
      uVar9 = 0;
    }
    else {
      uVar9 = 7;
      if ((-1 < DAT_1011c568c) &&
         (FUN_1008e3970(&DAT_100b392f0,"USB",0,
                        "[ACL-U]+HDR(handle:%03x, bp:%x, bc:%x, len:%d) -> Incorrect handle",uVar8,
                        uVar4 >> 0xc & 3,uVar4 >> 0xe,uVar3), 0 < DAT_1011c568c)) {
        FUN_1002da020(local_978,0x940,param_2 + 0x4dc,*(undefined2 *)(param_2 + 0x4da));
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]+IN:%s",local_978);
      }
    }
  }
  local_980 = 1;
  local_97f = *(ushort *)(param_2 + 0x4d8) & 0xfff;
  local_97d = 1;
  FUN_1002eb5e0(param_1,0x13,&local_980,5,0,0);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x40 + (ulong)*(byte *)(param_2 + 0x44c) * 8);
  *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_2 + 0x468) = uVar9;
  if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
    FUN_1002da980(2,param_2);
  }
  uVar8 = *(uint *)(param_2 + 0x470);
  *(undefined4 *)(param_2 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(lVar6 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(lVar6 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((uVar8 & 4) != 0) {
    FUN_1002c9070(param_2);
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

