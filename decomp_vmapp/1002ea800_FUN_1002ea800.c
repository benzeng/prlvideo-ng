
undefined8 FUN_1002ea800(long param_1,undefined2 *param_2,long param_3)

{
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] CMD(%04x:%02x) %s (MAX_PER:%d(%d sec), MIN_PER:%d(%d sec), LAP:%02x%02x%02x, LEN:%d(%d sec)  NUM:%d)"
                  ,*param_2,*(undefined1 *)(param_2 + 1),*(undefined8 *)(param_3 + 0x10),
                  *(ushort *)((long)param_2 + 3),
                  (int)(long)((double)*(ushort *)((long)param_2 + 3) * DAT_100b392e0),
                  *(ushort *)((long)param_2 + 5),
                  (int)(long)((double)*(ushort *)((long)param_2 + 5) * DAT_100b392e0),
                  *(undefined1 *)((long)param_2 + 9),*(undefined1 *)(param_2 + 4),
                  *(undefined1 *)((long)param_2 + 7),*(byte *)(param_2 + 5),
                  (int)(long)((double)*(byte *)(param_2 + 5) * DAT_100b392e0),
                  *(undefined1 *)((long)param_2 + 0xb));
  }
  FUN_1002e9f10(param_1,param_2,param_3);
  FUN_1002529e0(param_1 + 0x40,FUN_1002ebbe0,param_1);
  return 0;
}

