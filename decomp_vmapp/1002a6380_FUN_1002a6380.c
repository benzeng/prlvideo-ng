
ulong * FUN_1002a6380(ulong param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (((param_1 & 7) == 0) && (uVar9 = param_1 & 0xfff, 0x17 < 0x1000 - uVar9)) {
    uVar10 = param_1 & 0xfffffffffffff000;
    uVar8 = uVar10;
    if (0xafffffff < uVar10) {
      uVar8 = 0xffffffffffffffff;
      if (0xffffffff < uVar10) {
        uVar8 = uVar10 - 0x50000000;
      }
    }
    lVar6 = FUN_10008c320(DAT_1011c3688,uVar8,0x1000,1,1);
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar6 + 8 + uVar9);
      uVar1 = *(ushort *)(lVar6 + 0xe + uVar9);
      if ((iVar3 - 0x18U < 0x3fffffe9) && (uVar1 < 0x401)) {
        uVar8 = *(ulong *)(lVar6 + uVar9);
        uVar2 = *(undefined2 *)(lVar6 + 0xc + uVar9);
        uVar4 = *(ulong *)(lVar6 + 0x10 + uVar9);
        puVar7 = operator_new__((ulong)uVar1 * 0x20 + 0x48,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (puVar7 != (ulong *)0x0) {
          *puVar7 = param_1;
          puVar7[1] = uVar8;
          *(int *)(puVar7 + 2) = iVar3;
          *(undefined2 *)((long)puVar7 + 0x14) = uVar2;
          *(ushort *)((long)puVar7 + 0x16) = uVar1;
          puVar7[3] = uVar4;
          *(undefined4 *)(puVar7 + 8) = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          cVar5 = FUN_1002a65a0(puVar7,lVar6);
          if (cVar5 != '\0') {
            return puVar7;
          }
          FUN_1002a6200(puVar7);
          operator_delete__(puVar7);
          return (ulong *)0x0;
        }
        *(undefined4 *)(uVar9 + 4 + lVar6) = 0xf0000004;
      }
      uVar9 = uVar10;
      if (0xafffffff < uVar10) {
        uVar9 = 0xffffffffffffffff;
        if (0xffffffff < uVar10) {
          uVar9 = uVar10 - 0x50000000;
        }
      }
      FUN_10008c640(DAT_1011c3688,uVar9,0x1000,0,1,1);
    }
  }
  return (ulong *)0x0;
}

