
undefined8 FUN_1002e9d40(long param_1,undefined2 *param_2,long param_3)

{
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] CMD(%04x:%02x) %s (LAP:%02x%02x%02x  LEN:%d(%d sec)  NUM:%d)",*param_2,
                  *(undefined1 *)(param_2 + 1),*(undefined8 *)(param_3 + 0x10),
                  *(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 2),
                  *(undefined1 *)((long)param_2 + 3),*(byte *)(param_2 + 3),
                  (int)(long)((double)*(byte *)(param_2 + 3) * DAT_100b392e0),
                  *(undefined1 *)((long)param_2 + 7));
  }
  local_18 = 0;
  local_17 = 1;
  local_16 = 0x401;
  FUN_1002eb5e0(param_1,0xf,&local_18,4,0,0);
  FUN_1002529e0(param_1 + 0x40,FUN_1002ebbe0,param_1);
  return 0;
}

