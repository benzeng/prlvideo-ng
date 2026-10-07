
void FUN_1002941e0(long *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long local_48 [2];
  undefined4 local_38;
  
  *(undefined1 *)(param_2 + 0x38) = 0x40;
  if ((*(byte *)(param_2 + 0x39) & 1) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1fe);
    uVar2 = *(ushort *)((long)param_1 + 0xfee);
    lVar3 = param_1[0x200];
    uVar7 = (*(uint *)(*(long *)(param_2 + 0x60) + 0x8c) & 0x3fffff) + 1;
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = 0;
    FUN_10008d2d0(local_48,*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x80),uVar7);
    lVar5 = local_48[0];
    uVar7 = uVar7 >> 3;
    if (uVar7 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(ulong *)(lVar5 + lVar8 * 8);
        if ((short)(uVar4 >> 0x30) != 0) {
          if (*(ulong *)((ulong)uVar1 * 0x80 + 0x46a8 + (ulong)uVar2 * 0x300 + lVar3) <
              (uVar4 >> 0x30) + (uVar4 & 0xffffffffffff)) {
            FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","FALSE",
                          "../Ahci/sata_hdd.cpp",0x6a,"ata_cmd_data_set_mgm");
          }
          else {
            plVar6 = (long *)(**(code **)(*param_1 + 0x108))(param_1);
            (**(code **)(*plVar6 + 0x260))(plVar6,uVar4 & 0xffffffffffff,uVar4 >> 0x30);
          }
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < uVar7);
    }
    FUN_10008d3f0(local_48);
  }
  return;
}

