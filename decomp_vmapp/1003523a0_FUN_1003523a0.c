
void FUN_1003523a0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 local_5c;
  ushort local_58;
  byte local_56;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint *puStack_40;
  uint *local_38;
  
  local_48 = (uint *)0x0;
  puStack_40 = (uint *)0x0;
  local_38 = (uint *)0x0;
  puVar8 = *(uint **)(param_1 + 0x118);
  if (puVar8 != *(uint **)(param_1 + 0x120)) {
    do {
      local_4c = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      local_54 = uVar3;
      local_50 = uVar2;
      if ((*(uint *)(param_1 + 0xa8 + (ulong)(uVar3 >> 8 & 0x18 | uVar3 >> 0x1c & 7) * 4) >>
           (uVar3 & 0x1f) & 1) != 0) {
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_4c);
        }
        else {
          *puStack_40 = local_4c;
          puStack_40 = puStack_40 + 1;
        }
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_50);
        }
        else {
          *puStack_40 = uVar2;
          puStack_40 = puStack_40 + 1;
        }
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_54);
        }
        else {
          *puStack_40 = uVar3;
          puStack_40 = puStack_40 + 1;
        }
        if ((uVar2 & 0x78000000) == 0) {
          uVar6 = uVar2 & 0xf;
          if (uVar6 != 0) {
            bVar5 = (byte)(uVar2 >> 0x10);
            local_58 = CONCAT11(bVar5,(char)uVar6) & 0xfff;
            local_56 = (byte)(uVar3 >> 0x10) & 0xf;
            puVar4 = *(ushort **)(param_1 + 0x168);
            if (puVar4 == *(ushort **)(param_1 + 0x170)) {
              FUN_100356e50(param_1 + 0x160,&local_58);
            }
            else {
              *(byte *)(puVar4 + 1) = local_56;
              *puVar4 = local_58;
              *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 3;
            }
            if (uVar6 == 5) {
              *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1 << (bVar5 & 0xf);
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 1 << ((byte)uVar3 & 0x1f);
        }
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != *(uint **)(param_1 + 0x120));
  }
  lVar1 = param_1 + 0x148;
  puVar7 = *(undefined4 **)(param_1 + 0x150);
  if (puVar7 == *(undefined4 **)(param_1 + 0x158)) {
    FUN_10027f110(lVar1,param_1 + 0x100);
    puVar7 = *(undefined4 **)(param_1 + 0x150);
  }
  else {
    *puVar7 = *(undefined4 *)(param_1 + 0x100);
    puVar7 = puVar7 + 1;
    *(undefined4 **)(param_1 + 0x150) = puVar7;
  }
  FUN_100356870(lVar1,puVar7,local_48,puStack_40);
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x130),
                *(undefined8 *)(param_1 + 0x138));
  local_5c = 0xffff;
  puVar7 = *(undefined4 **)(param_1 + 0x150);
  if (puVar7 == *(undefined4 **)(param_1 + 0x158)) {
    FUN_10027f110(lVar1,&local_5c);
  }
  else {
    *puVar7 = 0xffff;
    *(undefined4 **)(param_1 + 0x150) = puVar7 + 1;
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

