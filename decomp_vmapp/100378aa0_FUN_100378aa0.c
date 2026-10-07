
void FUN_100378aa0(long param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  ushort uVar9;
  undefined8 *puVar10;
  uint uVar11;
  bool bVar12;
  long local_38;
  
  lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
    puVar7 = *(ushort **)(param_1 + 0x10);
    puVar6 = puVar7;
    if (puVar7 == (ushort *)0x0) {
      puVar6 = *(ushort **)(param_1 + 8);
    }
    uVar1 = *puVar6;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 < uVar1 + 1) {
      uVar11 = uVar3 + 4 + (uVar3 >> 1) & 0xfffffffc;
      puVar6 = operator_new__((ulong)uVar11);
      if (puVar7 == (ushort *)0x0) {
        _memcpy(puVar6,*(void **)(param_1 + 8),(ulong)uVar3);
        *(uint *)(param_1 + 0x18) = uVar11;
      }
      else {
        _memcpy(puVar6,puVar7,(ulong)uVar3);
        *(uint *)(param_1 + 0x18) = uVar11;
        operator_delete__(puVar7);
      }
      *(ushort **)(param_1 + 0x10) = puVar6;
      uVar1 = *puVar6;
    }
    *puVar6 = uVar1 + 1;
    *(bool *)((long)puVar6 + (ulong)uVar1) = lVar5 != 0;
  }
  puVar10 = (undefined8 *)(param_1 + 0x10);
  puVar7 = (ushort *)*puVar10;
  bVar12 = puVar7 == (ushort *)0x0;
  puVar6 = puVar7;
  if (bVar12) {
    puVar7 = *(ushort **)(param_1 + 8);
    puVar6 = (ushort *)0x0;
  }
  uVar1 = *puVar7;
  uVar9 = *puVar7;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < uVar9 + 1) {
    uVar11 = uVar3 + 4 + (uVar3 >> 1) & 0xfffffffc;
    puVar7 = operator_new__((ulong)uVar11);
    if (bVar12) {
      _memcpy(puVar7,*(void **)(param_1 + 8),(ulong)uVar3);
      *(uint *)(param_1 + 0x18) = uVar11;
    }
    else {
      _memcpy(puVar7,puVar6,(ulong)uVar3);
      *(uint *)(param_1 + 0x18) = uVar11;
      operator_delete__(puVar6);
    }
    *puVar10 = puVar7;
    uVar9 = *puVar7;
  }
  *puVar7 = uVar9 + 1;
  *(undefined1 *)((long)puVar7 + (ulong)uVar9) = 0;
  for (puVar4 = (undefined8 *)param_2[2]; puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    if (((*(byte *)((long)puVar4 + 0x2d) & 2) == 0) &&
       (FUN_10037d3f0(&local_38,param_3,*(undefined1 *)((long)puVar4 + 0x2a),
                      *(undefined1 *)((long)puVar4 + 0x29)), local_38 != 0)) {
      lVar5 = puVar4[1];
      uVar9 = 0x800;
      if (lVar5 != 0) {
        pbVar8 = (byte *)(*(long *)(lVar5 + 0x80) + 0x48);
        if (*(long *)(lVar5 + 0x80) == 0) {
          pbVar8 = (byte *)(lVar5 + 0x7c);
        }
        uVar9 = (ushort)*pbVar8 << 8;
      }
      uVar9 = (ushort)*(byte *)((long)puVar4 + 0x2a) |
              uVar9 | (ushort)*(byte *)((long)puVar4 + 0x29) << 0xc |
              (ushort)*(byte *)((long)puVar4 + 0x2c) << 5;
      puVar7 = (ushort *)*puVar10;
      puVar6 = puVar7;
      if (puVar7 == (ushort *)0x0) {
        puVar6 = *(ushort **)(param_1 + 8);
      }
      uVar2 = *puVar6;
      uVar3 = *(uint *)(param_1 + 0x18);
      if (uVar3 < uVar2 + 2) {
        uVar11 = uVar3 + 5 + (uVar3 >> 1) & 0xfffffffc;
        puVar6 = operator_new__((ulong)uVar11);
        if (puVar7 == (ushort *)0x0) {
          _memcpy(puVar6,*(void **)(param_1 + 8),(ulong)uVar3);
          *(uint *)(param_1 + 0x18) = uVar11;
        }
        else {
          _memcpy(puVar6,puVar7,(ulong)uVar3);
          *(uint *)(param_1 + 0x18) = uVar11;
          operator_delete__(puVar7);
        }
        *puVar10 = puVar6;
        uVar2 = *puVar6;
        *puVar6 = uVar2 + 2;
        *(ushort *)((long)puVar6 + (ulong)uVar2) = uVar9;
        puVar7 = puVar6;
      }
      else {
        *puVar6 = uVar2 + 2;
        *(ushort *)((long)puVar6 + (ulong)uVar2) = uVar9;
        if (puVar7 == (ushort *)0x0) {
          puVar7 = *(ushort **)(param_1 + 8);
        }
      }
      *(char *)((long)puVar7 + (ulong)uVar1) = *(char *)((long)puVar7 + (ulong)uVar1) + '\x01';
    }
  }
  return;
}

