
void FUN_10008c8b0(ulong *param_1,ulong param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_2 < *param_1) {
    if ((DAT_1011c3740 != 0) && (*(int *)(DAT_1011c3740 + 0x10) != 0)) {
      FUN_1000d60e0(DAT_1011c3740,param_2,param_3);
    }
    if ((param_3 != 0) && (uVar5 = param_1[0x17], uVar5 != 0)) {
      uVar4 = param_2 >> 0xc;
      uVar7 = (uint)(param_3 + param_2 + 0xfffffffffff >> 0xc);
      if ((uint)uVar4 <= uVar7) {
        while( true ) {
          uVar6 = uVar4 >> 5 & 0x7ffffff;
          if ((*(uint *)(uVar5 + uVar6 * 4) >> ((byte)uVar4 & 0x1f) & 1) == 0) {
            uVar3 = *(uint *)(uVar5 + uVar6 * 4);
            do {
              puVar1 = (uint *)(uVar5 + uVar6 * 4);
              LOCK();
              uVar2 = *puVar1;
              bVar8 = uVar3 == uVar2;
              if (bVar8) {
                *puVar1 = 1 << ((byte)uVar4 & 0x1f) | uVar3;
                uVar2 = uVar3;
              }
              uVar3 = uVar2;
              UNLOCK();
            } while (!bVar8);
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if (uVar7 < uVar3) break;
          uVar5 = param_1[0x17];
        }
      }
    }
  }
  return;
}

