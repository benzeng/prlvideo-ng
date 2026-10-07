
undefined4 FUN_1002ea100(long param_1,undefined2 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  
  puVar1 = (undefined4 *)((long)param_2 + 3);
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] CMD(%04x:%02x) %s (addr:%02x-%02x-%02x-%02x-%02x-%02x, pkt:%04x, psrm:%02x, clk:%04x, role:%02x)"
                  ,*param_2,*(undefined1 *)(param_2 + 1),*(undefined8 *)(param_3 + 0x10),
                  *(undefined1 *)(param_2 + 4),*(undefined1 *)((long)param_2 + 7),
                  *(undefined1 *)(param_2 + 3),*(undefined1 *)((long)param_2 + 5),
                  *(undefined1 *)(param_2 + 2),*(undefined1 *)((long)param_2 + 3),
                  *(undefined2 *)((long)param_2 + 9),*(undefined1 *)((long)param_2 + 0xb),
                  *(undefined2 *)((long)param_2 + 0xd),*(undefined1 *)((long)param_2 + 0xf));
  }
  local_38 = 0;
  local_37 = 1;
  local_36 = 0x405;
  uVar2 = 0;
  FUN_1002eb5e0(param_1,0xf,&local_38,4,0,0);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)((long)param_2 + 7);
  *(undefined4 *)(param_1 + 0x60) = *puVar1;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  if (*(int *)(param_1 + 0x180) == 0) {
    FUN_1002ebf70(param_1,puVar1,0,0);
  }
  else {
    uVar2 = FUN_1002eb5e0(param_1,0x17,puVar1,6,0,0);
  }
  return uVar2;
}

