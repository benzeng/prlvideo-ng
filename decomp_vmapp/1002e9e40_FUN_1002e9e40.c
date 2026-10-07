
undefined8 FUN_1002e9e40(long param_1,undefined2 *param_2,long param_3)

{
  undefined1 local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] CMD(%04x:%02x) %s (addr:%02x-%02x-%02x-%02x-%02x-%02x)",*param_2,
                  *(undefined1 *)(param_2 + 1),*(undefined8 *)(param_3 + 0x10),
                  *(undefined1 *)(param_2 + 4),*(undefined1 *)((long)param_2 + 7),
                  *(undefined1 *)(param_2 + 3),*(undefined1 *)((long)param_2 + 5),
                  *(undefined1 *)(param_2 + 2),*(undefined1 *)((long)param_2 + 3));
  }
  local_20 = 0;
  local_1f = 1;
  local_1e = 0x419;
  FUN_1002eb5e0(param_1,0xf,&local_20,4,0,0);
  FUN_100252ad0(param_1 + 0x40,(long)param_2 + 3,FUN_1002ebbe0,param_1);
  return 0;
}

