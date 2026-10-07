
void FUN_100291510(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar2 = *(long *)(param_2 + 0x60);
  *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(lVar2 + 2);
  *(undefined1 *)(param_2 + 0x39) = *(undefined1 *)(lVar2 + 3);
  *(undefined1 *)(param_2 + 0x3d) = *(undefined1 *)(lVar2 + 4);
  *(undefined1 *)(param_2 + 0x3e) = *(undefined1 *)(lVar2 + 5);
  *(undefined1 *)(param_2 + 0x3f) = *(undefined1 *)(lVar2 + 6);
  *(undefined1 *)(param_2 + 0x3b) = *(undefined1 *)(lVar2 + 7);
  *(undefined1 *)(param_2 + 0x42) = *(undefined1 *)(lVar2 + 8);
  *(undefined1 *)(param_2 + 0x43) = *(undefined1 *)(lVar2 + 9);
  *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)(lVar2 + 10);
  *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(lVar2 + 0xb);
  *(undefined1 *)(param_2 + 0x3c) = *(undefined1 *)(lVar2 + 0xc);
  *(undefined1 *)(param_2 + 0x41) = *(undefined1 *)(lVar2 + 0xd);
  bVar1 = *(byte *)(lVar2 + 0xf);
  *(byte *)(param_2 + 0x3a) = bVar1;
  *(undefined4 *)(param_2 + 0x14) = 0;
  if ((bVar1 & 4) == 0) {
    if ((**(byte **)(param_2 + 0x48) & 0x20) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0);
    }
                    /* WARNING: Could not recover jumptable at 0x000100291649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined2 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(param_2 + 0x38) = 0x40;
  *(undefined1 *)(param_2 + 0x3c) = 1;
  (**(code **)(*param_1 + 0xe8))(param_1);
  lVar2 = param_1[0x1ff];
  *(uint *)(lVar2 + 0x24) =
       (uint)*(byte *)(param_2 + 0x3c) |
       (uint)*(byte *)(param_2 + 0x3d) << 8 |
       (uint)*(byte *)(param_2 + 0x3e) << 0x10 | (uint)*(byte *)(param_2 + 0x3f) << 0x18;
  *(undefined4 *)
   ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4410 +
   (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 0;
  *(undefined4 *)(lVar2 + 0x34) = 0;
  *(undefined4 *)(lVar2 + 0x28) = 0x113;
  *(uint *)(lVar2 + 0x20) = (uint)*(ushort *)(param_2 + 0x38);
  return;
}

