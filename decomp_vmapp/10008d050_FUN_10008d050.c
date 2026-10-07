
undefined1 FUN_10008d050(ulong *param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 uVar9;
  bool bVar10;
  
  cVar3 = (**(code **)(*(long *)param_1[0xc] + 0x70))();
  if (cVar3 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar4 = (*param_1 >> 0xc) + 0x1f >> 3;
    *param_1 = param_2;
    param_1[2] = param_1[1] + param_2;
    uVar8 = ((uint)((param_1[1] + param_2 >> 0xc) + 0x1f >> 3) & 0xfffffffc) + 0xfff & 0xfffff000;
    ___bzero((uVar4 & 0xfffffffc) + param_1[0x17],uVar8 - ((uint)uVar4 & 0xfffffffc));
    *(uint *)(param_1 + 0x18) = uVar8;
    param_2 = param_2 >> 0xc;
    uVar4 = param_1[0x1d] - param_1[0x1c];
    if (uVar4 < param_2) {
      FUN_10008de40(param_1 + 0x1c);
    }
    else if ((param_2 < uVar4) && (param_2 = param_1[0x1c] + param_2, param_1[0x1d] != param_2)) {
      param_1[0x1d] = param_2;
    }
    uVar9 = 1;
    if (((param_1[1] & 0xffffffff) != 0) && (uVar4 = param_1[0x17], uVar4 != 0)) {
      uVar6 = *param_1 >> 0xc;
      uVar8 = (uint)((param_1[1] & 0xffffffff) + *param_1 + 0xfffffffffff >> 0xc);
      if ((uint)uVar6 <= uVar8) {
        while( true ) {
          uVar7 = uVar6 >> 5 & 0x7ffffff;
          if ((*(uint *)(uVar4 + uVar7 * 4) >> ((byte)uVar6 & 0x1f) & 1) == 0) {
            uVar5 = *(uint *)(uVar4 + uVar7 * 4);
            do {
              puVar1 = (uint *)(uVar4 + uVar7 * 4);
              LOCK();
              uVar2 = *puVar1;
              bVar10 = uVar5 == uVar2;
              if (bVar10) {
                *puVar1 = 1 << ((byte)uVar6 & 0x1f) | uVar5;
                uVar2 = uVar5;
              }
              uVar5 = uVar2;
              UNLOCK();
            } while (!bVar10);
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar5;
          if (uVar8 < uVar5) break;
          uVar4 = param_1[0x17];
        }
      }
    }
  }
  return uVar9;
}

