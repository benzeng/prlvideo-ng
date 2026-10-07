
void FUN_10008c0d0(ulong *param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = ((uint)((param_1[2] >> 0xc) + 0x1f >> 3) & 0xfffffffc) + 0xfff & 0xfffff000;
    ___bzero(param_2,uVar6);
  }
  param_1[0x17] = param_2;
  *(uint *)(param_1 + 0x18) = uVar6;
  if (((ulong)(uint)param_1[1] != 0) && (param_2 != 0)) {
    uVar4 = *param_1 >> 0xc;
    uVar6 = (uint)((ulong)(uint)param_1[1] + *param_1 + 0xfffffffffff >> 0xc);
    if ((uint)uVar4 <= uVar6) {
      while( true ) {
        uVar5 = uVar4 >> 5 & 0x7ffffff;
        if ((*(uint *)(param_2 + uVar5 * 4) >> ((byte)uVar4 & 0x1f) & 1) == 0) {
          uVar3 = *(uint *)(param_2 + uVar5 * 4);
          do {
            puVar1 = (uint *)(param_2 + uVar5 * 4);
            LOCK();
            uVar2 = *puVar1;
            bVar7 = uVar3 == uVar2;
            if (bVar7) {
              *puVar1 = 1 << ((byte)uVar4 & 0x1f) | uVar3;
              uVar2 = uVar3;
            }
            uVar3 = uVar2;
            UNLOCK();
          } while (!bVar7);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar3;
        if (uVar6 < uVar3) break;
        param_2 = param_1[0x17];
      }
    }
  }
  return;
}

