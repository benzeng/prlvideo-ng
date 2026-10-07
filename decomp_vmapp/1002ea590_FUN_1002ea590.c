
void FUN_1002ea590(undefined8 param_1,undefined2 *param_2,long param_3)

{
  undefined2 uVar1;
  undefined1 local_31;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined2 local_2c;
  
  uVar1 = *(undefined2 *)((long)param_2 + 3);
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] CMD(%04x:%02x, handle:%04x) %s -> STS:%d (%p:%d)",
                  *param_2,*(undefined1 *)(param_2 + 1),uVar1,*(undefined8 *)(param_3 + 0x10),
                  *(undefined4 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x28),
                  *(undefined4 *)(param_3 + 0x30));
  }
  local_30 = 1;
  local_2f = *param_2;
  local_2d = *(undefined1 *)(param_3 + 8);
  local_31 = 0x14;
  if (*(char *)((long)param_2 + 5) == '\0') {
    local_31 = 0;
  }
  local_2c = uVar1;
  FUN_1002eb5e0(param_1,*(undefined1 *)(param_3 + 4),&local_30,6,&local_31,1);
  return;
}

