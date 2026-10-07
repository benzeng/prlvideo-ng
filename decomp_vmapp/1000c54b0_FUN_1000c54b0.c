
undefined8 FUN_1000c54b0(long param_1)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  byte local_48;
  byte local_47;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(int *)(lVar5 + 0x14) - *(int *)(lVar5 + 0x10) & *(uint *)(lVar5 + 0x24)) < 0x18) {
    uVar7 = 0;
    FUN_1008e3970("","vm",0,"No events in the profile buffer: %d",
                  *(int *)(lVar2 + 0x14) - *(int *)(lVar2 + 0x10) & *(uint *)(lVar2 + 0x24));
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (0x17 < (*(int *)(lVar2 + 0x14) - *(int *)(lVar2 + 0x10) & *(uint *)(lVar2 + 0x24))) {
      do {
        FUN_1007d75f0(lVar5 + 0x10,&local_48,0x18);
        bVar3 = local_48 >> 2;
        if (bVar3 == 0) {
          FUN_1008e3970("","vm",0,
                        "[CVmProfiler::AnalyzeEvents]: ERROR: there are no stack frames in the event"
                       );
LAB_1000c567f:
          FUN_1000c5130(param_1,0);
          return 0;
        }
        uVar6 = (uint)bVar3 * 8 - 8;
        puVar4 = operator_new__((ulong)(uint)bVar3 << 3);
        *puVar4 = local_38;
        lVar5 = *(long *)(param_1 + 0x20);
        if ((*(int *)(lVar5 + 0x14) - *(int *)(lVar5 + 0x10) & *(uint *)(lVar5 + 0x24)) < uVar6) {
          FUN_1008e3970("","vm",0,
                        "[CVmProfiler::AnalyzeEvents]: ERROR: tried to read %d bytes but only %d bytes available"
                        ,uVar6);
          goto LAB_1000c567f;
        }
        if (uVar6 != 0) {
          FUN_1007d75f0(*(long *)(param_1 + 0x20) + 0x10,puVar4 + 1,uVar6);
        }
        lVar5 = *(long *)(param_1 + 0x48 + (ulong)local_47 * 8);
        bVar3 = local_48 >> 2;
        uVar6 = FUN_1000c4920(lVar5,&local_48,puVar4);
        if (uVar6 == bVar3) {
          piVar1 = (int *)(lVar5 + 0x448);
          *piVar1 = *piVar1 + 1;
        }
        else {
          FUN_1008e3970("","vm",0,
                        "CVcpuProfiler::ProcessEvents() Couldn\'t create new stat elements%i (%d)",
                        uVar6,(uint)bVar3);
        }
        operator_delete__(puVar4);
        lVar2 = *(long *)(param_1 + 0x20);
        lVar5 = *(long *)(param_1 + 0x20);
      } while (0x17 < (*(int *)(lVar2 + 0x14) - *(int *)(lVar2 + 0x10) & *(uint *)(lVar2 + 0x24)));
    }
    *(undefined4 *)(lVar5 + 4) = 0;
    uVar7 = 1;
  }
  return uVar7;
}

