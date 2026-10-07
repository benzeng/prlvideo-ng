
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1004affd0(undefined8 param_1,undefined8 param_2)

{
  uint in_EAX;
  int iVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  iVar1 = CVmVideo::getMemorySize();
  uStack_28 = (ulong)(uint)uStack_28;
  lVar2 = FUN_10052ac40(param_2,(long)&uStack_28 + 4);
  uVar8 = (ulong)uStack_28._4_4_;
  dVar9 = 0.0;
  if (uVar8 != 0) {
    uVar5 = 0;
    lVar7 = 0;
    lVar6 = 0;
    if (uStack_28._4_4_ != (uStack_28._4_4_ & 1)) {
      uVar5 = uVar8 - (uStack_28._4_4_ & 1);
      puVar3 = (ushort *)(lVar2 + 0x26);
      lVar4 = uVar8 - (uVar8 & 1);
      lVar7 = 0;
      lVar6 = 0;
      do {
        lVar7 = ((ulong)puVar3[-0x10] * (ulong)puVar3[-0x11] >> 8) + lVar7;
        lVar6 = ((ulong)*puVar3 * (ulong)puVar3[-1] >> 8) + lVar6;
        puVar3 = puVar3 + 0x20;
        lVar4 = lVar4 + -2;
      } while (lVar4 != 0);
    }
    lVar7 = lVar7 + lVar6;
    if (uVar8 != uVar5) {
      puVar3 = (ushort *)(lVar2 + (uVar5 * 0x10 + 3) * 2);
      do {
        lVar7 = lVar7 + ((ulong)*puVar3 * (ulong)puVar3[-1] >> 8);
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 0x10;
      } while (uVar5 < uVar8);
    }
    dVar9 = (double)lVar7;
  }
  return dVar9 <= (double)(uint)(iVar1 << 10) * _DAT_100b44b50;
}

