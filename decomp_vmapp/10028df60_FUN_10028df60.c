
void FUN_10028df60(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (*(char *)((long)param_1 + 0xfed) != '\0') {
    local_12 = 0;
    local_14 = 0;
    local_18 = 0;
    local_20 = 0x100000040;
    (**(code **)(*param_1 + 0xe8))(param_1,&local_20);
    lVar1 = param_1[0x1ff];
    *(uint *)(lVar1 + 0x24) =
         (uint)local_20._4_1_ |
         (uint)local_20._5_1_ << 8 | (uint)local_20._6_1_ << 0x10 | (uint)local_20._7_1_ << 0x18;
    uVar6 = (ulong)*(ushort *)(param_1 + 0x1fe);
    uVar4 = (ulong)*(ushort *)((long)param_1 + 0xfee);
    lVar2 = param_1[0x200];
    *(undefined4 *)(uVar4 * 0x80 + lVar2 + 0x4410 + uVar6 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0;
    *(undefined4 *)(lVar1 + 0x28) = 0x113;
    *(uint *)(lVar1 + 0x20) = (uint)(ushort)local_20;
    plVar5 = (long *)param_1[0x209];
    while (plVar5 != param_1 + 0x209) {
      lVar1 = *plVar5;
      plVar3 = (long *)plVar5[1];
      *(long **)(lVar1 + 8) = plVar3;
      *plVar3 = lVar1;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      plVar5 = (long *)param_1[0x209];
    }
    plVar5 = (long *)param_1[0x20b];
    while (plVar5 != param_1 + 0x20b) {
      lVar1 = *plVar5;
      plVar3 = (long *)plVar5[1];
      *(long **)(lVar1 + 8) = plVar3;
      *plVar3 = lVar1;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      plVar5 = (long *)param_1[0x20b];
    }
    *(undefined4 *)(param_1 + 0x202) = 0;
    *(undefined4 *)(uVar6 * 0x80 + 0x470c + uVar4 * 0x300 + lVar2) = 0;
    *(undefined1 *)(uVar4 * 0x40 + lVar2 + 0x4611 + uVar6 * 2) = 0;
  }
  return;
}

