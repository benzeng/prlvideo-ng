
undefined1 FUN_1002a65a0(ulong *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  
  uVar6 = *param_1;
  uVar10 = param_1[2];
  uVar12 = (int)uVar10 + 0xfff + ((uint)uVar6 & 0xfff) >> 0xc;
  lVar1 = (ulong)uVar12 - 1;
  puVar5 = operator_new__(lVar1 * 0x10 + 0x28,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar5 == (ulong *)0x0) {
    *(undefined4 *)((uVar6 & 0xfff) + 4 + param_2) = 0xf0000004;
    uVar8 = uVar6 & 0xfffffffffffff000;
    uVar10 = uVar8;
    if (10 < uVar6 >> 0x1c) {
      uVar10 = 0xffffffffffffffff;
      if (0xffffffff < uVar8) {
        uVar10 = uVar8 - 0x50000000;
      }
    }
    FUN_10008c640(DAT_1011c3688,uVar10,0x1000,0,1,1);
  }
  else {
    *puVar5 = uVar6;
    *(int *)(puVar5 + 1) = (int)uVar10;
    *(undefined4 *)((long)puVar5 + 0xc) = 1;
    *(undefined4 *)(puVar5 + 2) = 0;
    param_1[6] = (ulong)puVar5;
    puVar5[3] = uVar6 & 0xfffffffffffff000;
    puVar5[4] = param_2;
    *(undefined4 *)((long)puVar5 + 0x14) = 1;
    cVar3 = FUN_1002a5e30(puVar5,puVar5,0x10);
    if ((cVar3 != '\0') &&
       (uVar6 = (ulong)(*(ushort *)((long)param_1 + 0x14) + 7) & 0x1fff8,
       uVar6 + 0x18 + lVar1 * 8 <= (ulong)(uint)param_1[2])) {
      uVar9 = (uint)param_1[8];
      if (*(ushort *)((long)param_1 + 0x16) <= uVar9) {
        return 1;
      }
      uVar4 = uVar12 * 8 + 0x10 + (int)uVar6;
      puVar5 = (ulong *)param_1[6];
      uVar12 = (uint)puVar5[1];
      while( true ) {
        if (uVar12 < uVar4) break;
        uVar6 = (ulong)uVar12 - (ulong)uVar4;
        uVar10 = uVar6 & 0xffffffff;
        if (0xf < uVar6) {
          uVar10 = 0x10;
        }
        if ((int)uVar10 == 0) break;
        uVar6 = (*puVar5 & 0xfff) + (ulong)uVar4;
        puVar11 = param_1 + (ulong)uVar9 * 4 + 9;
        do {
          uVar12 = 0x1000 - (int)(uVar6 & 0xfff);
          uVar8 = (ulong)uVar12;
          if ((uint)uVar10 < uVar12) {
            uVar8 = uVar10;
          }
          _memcpy(puVar11,(void *)(*(long *)((long)puVar5 + (uVar6 >> 8 & 0xfffffffffffff0) + 0x20)
                                  + (uVar6 & 0xfff)),uVar8);
          uVar6 = uVar6 + uVar8;
          puVar11 = (ulong *)((long)puVar11 + uVar8);
          uVar12 = (uint)uVar10 - (int)uVar8;
          uVar10 = (ulong)uVar12;
        } while (uVar12 != 0);
        uVar12 = (uint)param_1[(ulong)uVar9 * 4 + 10];
        if (0x40000000 < uVar12) break;
        uVar2 = (uint)param_1[8];
        *(uint *)(param_1 + (ulong)uVar2 * 4 + 0xb) = uVar4;
        param_1[(ulong)uVar2 * 4 + 0xc] = 0;
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar12 + 0xfff + ((uint)param_1[(ulong)uVar9 * 4 + 9] & 0xfff) >> 0xc;
        }
        uVar4 = uVar4 + 0x10 + uVar7 * 8;
        puVar5 = (ulong *)param_1[6];
        uVar12 = (uint)puVar5[1];
        if (uVar12 < uVar4) break;
        uVar9 = uVar2 + 1;
        *(uint *)(param_1 + 8) = uVar9;
        if (*(ushort *)((long)param_1 + 0x16) <= uVar9) {
          return 1;
        }
      }
    }
    *(undefined4 *)((*param_1 & 0xfff) + 4 + param_2) = 0xf0000001;
  }
  return 0;
}

