
void FUN_100378790(long param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  ushort uVar9;
  uint uVar10;
  bool bVar11;
  long local_38;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  bVar11 = puVar8 == (ushort *)0x0;
  puVar6 = puVar8;
  if (bVar11) {
    puVar8 = (ushort *)0x0;
    puVar6 = *(ushort **)(param_1 + 8);
  }
  uVar1 = *puVar6;
  uVar9 = *puVar6;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < uVar9 + 1) {
    uVar10 = uVar3 + 4 + (uVar3 >> 1) & 0xfffffffc;
    puVar6 = operator_new__((ulong)uVar10);
    if (bVar11) {
      _memcpy(puVar6,*(void **)(param_1 + 8),(ulong)uVar3);
      *(uint *)(param_1 + 0x18) = uVar10;
    }
    else {
      _memcpy(puVar6,puVar8,(ulong)uVar3);
      *(uint *)(param_1 + 0x18) = uVar10;
      operator_delete__(puVar8);
    }
    *(ushort **)(param_1 + 0x10) = puVar6;
    uVar9 = *puVar6;
  }
  *puVar6 = uVar9 + 1;
  *(undefined1 *)((long)puVar6 + (ulong)uVar9) = 0;
  for (puVar4 = *(undefined8 **)(param_2 + 0x18); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    FUN_10037d360(&local_38,param_3,*(undefined1 *)((long)puVar4 + 0x2a),
                  *(undefined1 *)((long)puVar4 + 0x29));
    if (local_38 != 0) {
      lVar5 = *(long *)(local_38 + 8);
      uVar9 = 0x800;
      if (lVar5 != 0) {
        pbVar7 = (byte *)(*(long *)(lVar5 + 0x80) + 0x48);
        if (*(long *)(lVar5 + 0x80) == 0) {
          pbVar7 = (byte *)(lVar5 + 0x7c);
        }
        uVar9 = (ushort)*pbVar7 << 8;
      }
      uVar9 = (ushort)*(byte *)(local_38 + 0x2a) |
              uVar9 | (ushort)*(byte *)(local_38 + 0x29) << 0xc |
              (ushort)*(byte *)(local_38 + 0x2c) << 5;
      puVar8 = *(ushort **)(param_1 + 0x10);
      puVar6 = puVar8;
      if (puVar8 == (ushort *)0x0) {
        puVar6 = *(ushort **)(param_1 + 8);
      }
      uVar2 = *puVar6;
      uVar3 = *(uint *)(param_1 + 0x18);
      if (uVar3 < uVar2 + 2) {
        uVar10 = uVar3 + 5 + (uVar3 >> 1) & 0xfffffffc;
        puVar6 = operator_new__((ulong)uVar10);
        if (puVar8 == (ushort *)0x0) {
          _memcpy(puVar6,*(void **)(param_1 + 8),(ulong)uVar3);
          *(uint *)(param_1 + 0x18) = uVar10;
        }
        else {
          _memcpy(puVar6,puVar8,(ulong)uVar3);
          *(uint *)(param_1 + 0x18) = uVar10;
          operator_delete__(puVar8);
        }
        *(ushort **)(param_1 + 0x10) = puVar6;
        uVar2 = *puVar6;
        *puVar6 = uVar2 + 2;
        *(ushort *)((long)puVar6 + (ulong)uVar2) = uVar9;
        puVar8 = puVar6;
      }
      else {
        *puVar6 = uVar2 + 2;
        *(ushort *)((long)puVar6 + (ulong)uVar2) = uVar9;
        if (puVar8 == (ushort *)0x0) {
          puVar8 = *(ushort **)(param_1 + 8);
        }
      }
      *(char *)((long)puVar8 + (ulong)uVar1) = *(char *)((long)puVar8 + (ulong)uVar1) + '\x01';
    }
  }
  return;
}

