
void FUN_10028de80(long *param_1,ushort *param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)param_2 = 0x40;
  *(undefined1 *)(param_2 + 2) = 1;
  (**(code **)(*param_1 + 0xe8))();
  lVar1 = param_1[0x1ff];
  *(uint *)(lVar1 + 0x24) =
       (uint)(byte)param_2[2] |
       (uint)*(byte *)((long)param_2 + 5) << 8 |
       (uint)(byte)param_2[3] << 0x10 | (uint)*(byte *)((long)param_2 + 7) << 0x18;
  *(undefined4 *)
   ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4410 +
   (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 0;
  *(undefined4 *)(lVar1 + 0x34) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0x113;
  *(uint *)(lVar1 + 0x20) = (uint)*param_2;
  return;
}

