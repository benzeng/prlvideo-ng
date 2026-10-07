
void FUN_1002ea2d0(undefined8 param_1,undefined2 *param_2,long param_3)

{
  undefined2 uVar1;
  undefined1 local_980;
  undefined2 local_97f;
  undefined1 local_978;
  undefined1 local_977;
  undefined2 local_976;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = *(undefined2 *)((long)param_2 + 3);
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] CMD3(%04x:%02x, handle:%04x) %s -> STS:%d (%p:%d)",
                  *param_2,*(undefined1 *)(param_2 + 1),uVar1,*(undefined8 *)(param_3 + 0x10),
                  *(undefined4 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x28),
                  *(undefined4 *)(param_3 + 0x30));
    if ((*(char *)(param_2 + 1) != '\0') && (0 < DAT_1011c568c)) {
      FUN_1002da020(&local_978,0x940,(long)param_2 + 3);
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] IN3:%s",&local_978);
    }
  }
  local_976 = *param_2;
  local_978 = *(undefined1 *)(param_3 + 8);
  local_977 = 1;
  FUN_1002eb5e0(param_1,0xf,&local_978,4,0,0);
  local_980 = *(undefined1 *)(param_3 + 8);
  local_97f = uVar1;
  FUN_1002eb5e0(param_1,*(undefined1 *)(param_3 + 4),&local_980,3,*(undefined8 *)(param_3 + 0x28),
                *(undefined4 *)(param_3 + 0x30));
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

