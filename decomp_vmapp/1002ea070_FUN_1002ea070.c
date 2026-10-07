
void FUN_1002ea070(undefined8 param_1,undefined2 *param_2,long param_3)

{
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] CMD(%04x:%02x) %s",*param_2,
                  *(undefined1 *)(param_2 + 1),*(undefined8 *)(param_3 + 0x10));
  }
  local_28 = 1;
  local_27 = *param_2;
  local_25 = *(undefined1 *)(param_3 + 8);
  FUN_1002eb5e0(param_1,*(undefined1 *)(param_3 + 4),&local_28,4,*(undefined8 *)(param_3 + 0x28),
                *(undefined4 *)(param_3 + 0x30));
  return;
}

