
void FUN_1002da980(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 local_968 [2368];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x458);
  local_28 = lVar1;
  if (((*(char *)(lVar2 + 0xff) == '\b') && ((*(byte *)(lVar2 + 0xcb) & 3) == 2)) &&
     (*(int *)(param_2 + 0x43c) == 0xd)) {
    if (param_1 <= DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] MSC CSW(sig:%08x tag:%08x res:%u sts:%02x)",lVar2 + 0xcf,
                    *(undefined4 *)(param_2 + 0x4d8),*(undefined4 *)(param_2 + 0x4dc),
                    *(undefined4 *)(param_2 + 0x4e0),*(undefined1 *)(param_2 + 0x4e4));
    }
  }
  else if (param_1 <= DAT_1011c568c) {
    FUN_1002da020(local_968,0x940,param_2 + 0x4d8,*(undefined4 *)(param_2 + 0x43c));
    FUN_1008e3970("","USB",0,"[%s] DATA %s",*(long *)(param_2 + 0x458) + 0xcf,local_968);
  }
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

