
void FUN_1002da7c0(int param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined1 local_978 [2376];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *(long *)(param_2 + 0x458);
  local_30 = lVar2;
  if (((*(char *)(lVar3 + 0xff) == '\b') && ((*(byte *)(lVar3 + 0xcb) & 3) == 2)) &&
     (*(int *)(param_2 + 0x43c) == 0x1f)) {
    if (param_1 <= DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] MSC CBW(sig:%08x tag:%08x dtl:%u flags:%02x lun:%02x len:%d)",
                    lVar3 + 0xcf,*(undefined4 *)(param_2 + 0x4d8),*(undefined4 *)(param_2 + 0x4dc),
                    *(undefined4 *)(param_2 + 0x4e0),*(undefined1 *)(param_2 + 0x4e4),
                    *(undefined1 *)(param_2 + 0x4e5),*(undefined1 *)(param_2 + 0x4e6));
    }
    bVar1 = *(byte *)(param_2 + 0x4e6);
    if ((bVar1 != 0) && (param_1 <= DAT_1011c568c)) {
      bVar4 = 0x10;
      if (bVar1 < 0x10) {
        bVar4 = bVar1;
      }
      FUN_1002da020(local_978,0x940,param_2 + 0x4e7,bVar4);
      FUN_1008e3970("","USB",0,"CB: %s",local_978);
    }
  }
  else if (param_1 <= DAT_1011c568c) {
    FUN_1002da020(local_978,0x940,param_2 + 0x4d8,*(undefined4 *)(param_2 + 0x43c));
    FUN_1008e3970("","USB",0,"[%s] DATA %s",*(long *)(param_2 + 0x458) + 0xcf,local_978);
  }
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

