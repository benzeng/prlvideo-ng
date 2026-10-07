
void FUN_100351f20(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  undefined2 local_60;
  byte local_5e;
  uint local_5c;
  undefined2 local_58;
  byte local_56;
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint *puStack_40;
  uint *local_38;
  
  local_48 = (uint *)0x0;
  puStack_40 = (uint *)0x0;
  local_38 = (uint *)0x0;
  puVar11 = *(uint **)(param_1 + 0x118);
  if (puVar11 != *(uint **)(param_1 + 0x120)) {
    do {
      uVar2 = *puVar11;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar10 = uVar4 & 0x7ff;
      uVar6 = uVar4 >> 8 & 0x18 | uVar4 >> 0x1c & 7;
      uVar8 = 1 << ((byte)uVar10 & 0x1f);
      local_50 = uVar4;
      local_4c = uVar2;
      if ((*(uint *)(param_1 + 0xa8 + (ulong)uVar6 * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        bVar7 = (byte)(uVar4 >> 0x10) & 0xf;
        if (uVar6 == 1) {
          local_58 = CONCAT11((char)uVar4,10);
          puVar5 = *(undefined2 **)(param_1 + 0x168);
          local_56 = bVar7;
          if (puVar5 == *(undefined2 **)(param_1 + 0x170)) {
            FUN_100356e50(param_1 + 0x160,&local_58);
          }
          else {
            *(byte *)(puVar5 + 1) = bVar7;
            *puVar5 = local_58;
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 3;
          }
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_4c);
          }
          else {
            *puStack_40 = uVar2;
            puStack_40 = puStack_40 + 1;
          }
          local_5c = uVar10 << 0x10 | 0x8000000a;
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_5c);
          }
          else {
            *puStack_40 = local_5c;
            puStack_40 = puStack_40 + 1;
          }
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_50);
          }
          else {
            *puStack_40 = uVar4;
            puStack_40 = puStack_40 + 1;
          }
        }
        else if (uVar6 == 3) {
          local_60 = CONCAT11((char)uVar4,5);
          puVar5 = *(undefined2 **)(param_1 + 0x168);
          local_5e = bVar7;
          if (puVar5 == *(undefined2 **)(param_1 + 0x170)) {
            FUN_100356e50(param_1 + 0x160,&local_60);
          }
          else {
            *(byte *)(puVar5 + 1) = bVar7;
            *puVar5 = local_60;
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 3;
          }
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_4c);
          }
          else {
            *puStack_40 = uVar2;
            puStack_40 = puStack_40 + 1;
          }
          local_64 = uVar10 << 0x10 | 0x80000005;
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_64);
          }
          else {
            *puStack_40 = local_64;
            puStack_40 = puStack_40 + 1;
          }
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_50);
          }
          else {
            *puStack_40 = uVar4;
            puStack_40 = puStack_40 + 1;
          }
          *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | uVar8;
        }
        else if (uVar6 == 10) {
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_4c);
          }
          else {
            *puStack_40 = uVar2;
            puStack_40 = puStack_40 + 1;
          }
          local_68 = uVar3 & 0x78000000 | 0x80000000;
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_68);
          }
          else {
            *puStack_40 = local_68;
            puStack_40 = puStack_40 + 1;
          }
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_50);
          }
          else {
            *puStack_40 = uVar4;
            puStack_40 = puStack_40 + 1;
          }
          *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | uVar8;
        }
      }
      puVar11 = puVar11 + 3;
    } while (puVar11 != *(uint **)(param_1 + 0x120));
  }
  lVar1 = param_1 + 0x148;
  puVar9 = *(undefined4 **)(param_1 + 0x150);
  if (puVar9 == *(undefined4 **)(param_1 + 0x158)) {
    FUN_10027f110(lVar1,param_1 + 0x100);
    puVar9 = *(undefined4 **)(param_1 + 0x150);
  }
  else {
    *puVar9 = *(undefined4 *)(param_1 + 0x100);
    puVar9 = puVar9 + 1;
    *(undefined4 **)(param_1 + 0x150) = puVar9;
  }
  FUN_100356870(lVar1,puVar9,local_48,puStack_40);
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x130),
                *(undefined8 *)(param_1 + 0x138));
  local_6c = 0xffff;
  puVar9 = *(undefined4 **)(param_1 + 0x150);
  if (puVar9 == *(undefined4 **)(param_1 + 0x158)) {
    FUN_10027f110(lVar1,&local_6c);
  }
  else {
    *puVar9 = 0xffff;
    *(undefined4 **)(param_1 + 0x150) = puVar9 + 1;
  }
  if (local_48 != (uint *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (uint *)((~((long)puStack_40 + (-4 - (long)local_48)) & 0xfffffffffffffffcU) +
                           (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return;
}

