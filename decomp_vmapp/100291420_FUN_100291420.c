
undefined8 FUN_100291420(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = **(uint **)(param_2 + 0x48) & 0x100;
  if (uVar2 == 0) {
    if (*(char *)((long)param_1 + 0xfec) == '\0') {
      return 0;
    }
    *(undefined1 *)((long)param_1 + 0xfec) = 0;
  }
  else {
    *(char *)((long)param_1 + 0xfec) = (char)(uVar2 >> 8);
  }
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined2 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(param_2 + 0x38) = 0x40;
  *(undefined1 *)(param_2 + 0x3c) = 1;
  (**(code **)(*param_1 + 0xe8))(param_1,param_2 + 0x38);
  lVar1 = param_1[0x1ff];
  *(uint *)(lVar1 + 0x24) =
       (uint)*(byte *)(param_2 + 0x3c) |
       (uint)*(byte *)(param_2 + 0x3d) << 8 |
       (uint)*(byte *)(param_2 + 0x3e) << 0x10 | (uint)*(byte *)(param_2 + 0x3f) << 0x18;
  *(undefined4 *)
   ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4410 +
   (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 0;
  *(undefined4 *)(lVar1 + 0x34) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0x113;
  *(uint *)(lVar1 + 0x20) = (uint)*(ushort *)(param_2 + 0x38);
  (**(code **)(param_2 + 0x50))(param_2,0);
  return 1;
}

