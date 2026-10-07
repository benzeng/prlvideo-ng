
void FUN_100392340(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
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
  puVar10 = *(uint **)(param_1 + 0x108);
  if (puVar10 != *(uint **)(param_1 + 0x110)) {
    lVar1 = param_1 + 0x120;
    do {
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar6 = uVar4 >> 8 & 0x18 | uVar4 >> 0x1c & 7;
      local_54 = uVar4;
      local_50 = uVar3;
      local_4c = uVar2;
      if ((*(uint *)(param_1 + 0xa8 + (ulong)uVar6 * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        if (uVar6 != 1) {
          if (uVar6 != 10) {
            uVar6 = uVar3 & 0xf;
            if (uVar6 != 0) {
              if (uVar6 != 4) {
                local_58 = CONCAT11((char)(uVar3 >> 0x10),(char)uVar6) & 0xfff;
                local_56 = (byte)(uVar4 >> 0x10) & 0xf;
                puVar5 = *(ushort **)(param_1 + 0x188);
                if (puVar5 == *(ushort **)(param_1 + 400)) {
                  FUN_100356e50(param_1 + 0x180,&local_58);
                }
                else {
                  *(byte *)(puVar5 + 1) = local_56;
                  *puVar5 = local_58;
                  *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 3;
                }
                if (uVar6 != 4) {
                  if (uVar6 == 0xb) {
                    *(undefined1 *)(param_1 + 0x19c) = 1;
                  }
                  goto LAB_1003924f8;
                }
              }
              *(undefined1 *)(param_1 + 0x19d) = 1;
            }
LAB_1003924f8:
            puVar7 = *(uint **)(param_1 + 0x128);
            puVar8 = *(uint **)(param_1 + 0x130);
            if (puVar7 == puVar8) {
              FUN_10027f110(lVar1,&local_4c);
              puVar7 = *(uint **)(param_1 + 0x128);
              puVar8 = *(uint **)(param_1 + 0x130);
            }
            else {
              *puVar7 = uVar2;
              puVar7 = puVar7 + 1;
              *(uint **)(param_1 + 0x128) = puVar7;
            }
            if (puVar7 == puVar8) {
              FUN_10027f110(lVar1,&local_50);
              puVar7 = *(uint **)(param_1 + 0x128);
              puVar8 = *(uint **)(param_1 + 0x130);
            }
            else {
              *puVar7 = uVar3;
              puVar7 = puVar7 + 1;
              *(uint **)(param_1 + 0x128) = puVar7;
            }
            if (puVar7 == puVar8) {
              FUN_10027f110(lVar1,&local_54);
            }
            else {
              *puVar7 = uVar4;
              *(uint **)(param_1 + 0x128) = puVar7 + 1;
            }
            goto LAB_100392590;
          }
          *(uint *)(param_1 + 0x198) = *(uint *)(param_1 + 0x198) | 1 << ((byte)uVar4 & 0x1f);
        }
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_4c);
        }
        else {
          *puStack_40 = uVar2;
          puStack_40 = puStack_40 + 1;
        }
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_50);
        }
        else {
          *puStack_40 = uVar3;
          puStack_40 = puStack_40 + 1;
        }
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_54);
        }
        else {
          *puStack_40 = uVar4;
          puStack_40 = puStack_40 + 1;
        }
      }
LAB_100392590:
      puVar10 = puVar10 + 3;
    } while (puVar10 != *(uint **)(param_1 + 0x110));
  }
  lVar1 = param_1 + 0x150;
  puVar9 = *(undefined4 **)(param_1 + 0x158);
  if (puVar9 == *(undefined4 **)(param_1 + 0x160)) {
    FUN_10027f110(lVar1,param_1 + 0x100);
    puVar9 = *(undefined4 **)(param_1 + 0x158);
  }
  else {
    *puVar9 = *(undefined4 *)(param_1 + 0x100);
    puVar9 = puVar9 + 1;
    *(undefined4 **)(param_1 + 0x158) = puVar9;
  }
  FUN_100356870(lVar1,puVar9,local_48,puStack_40);
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x120),
                *(undefined8 *)(param_1 + 0x128));
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x138),
                *(undefined8 *)(param_1 + 0x140));
  local_5c = 0xffff;
  puVar9 = *(undefined4 **)(param_1 + 0x158);
  if (puVar9 == *(undefined4 **)(param_1 + 0x160)) {
    FUN_10027f110(lVar1,&local_5c);
  }
  else {
    *puVar9 = 0xffff;
    *(undefined4 **)(param_1 + 0x158) = puVar9 + 1;
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

