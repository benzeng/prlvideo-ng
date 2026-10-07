
/* WARNING: Type propagation algorithm not settling */

void FUN_1003526a0(long param_1)

{
  long lVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_78;
  uint local_74;
  uint local_70 [2];
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  uint local_60 [2];
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_50;
  undefined1 local_4e;
  uint *local_48;
  uint *puStack_40;
  uint *local_38;
  
  local_48 = (uint *)0x0;
  puStack_40 = (uint *)0x0;
  local_38 = (uint *)0x0;
  if (*(uint *)(param_1 + 0x100) < 0xffff0104) {
    uVar3 = 0;
    do {
      if ((*(uint *)(param_1 + 0x108) >> (uVar3 & 0x1f) & 1) != 0) {
        local_50 = CONCAT11((char)uVar3,5);
        local_4e = 0xf;
        puVar2 = *(undefined2 **)(param_1 + 0x168);
        if (puVar2 == *(undefined2 **)(param_1 + 0x170)) {
          FUN_100356e50(param_1 + 0x160,&local_50);
        }
        else {
          *(undefined1 *)(puVar2 + 1) = 0xf;
          *puVar2 = local_50;
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 3;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
  }
  else {
    uVar3 = *(uint *)(param_1 + 100);
    if (uVar3 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xb4) >> (uVar5 & 0x1f) & 1) != 0) {
          local_58 = CONCAT11((byte)uVar5,5);
          local_56 = 0xf;
          puVar2 = *(undefined2 **)(param_1 + 0x168);
          if (puVar2 == *(undefined2 **)(param_1 + 0x170)) {
            FUN_100356e50(param_1 + 0x160,&local_58);
          }
          else {
            *(undefined1 *)(puVar2 + 1) = 0xf;
            *puVar2 = local_58;
            *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 3;
          }
          local_60[1] = 0x1f;
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,local_60 + 1);
          }
          else {
            *puStack_40 = 0x1f;
            puStack_40 = puStack_40 + 1;
          }
          local_60[0] = uVar6 | 0x80000005;
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,local_60);
          }
          else {
            *puStack_40 = local_60[0];
            puStack_40 = puStack_40 + 1;
          }
          local_64 = uVar5 | 0xb00f0000;
          if (puStack_40 == local_38) {
            FUN_10027f110(&local_48,&local_64);
          }
          else {
            *puStack_40 = local_64;
            puStack_40 = puStack_40 + 1;
          }
          *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1 << ((byte)uVar5 & 0x1f);
          uVar3 = *(uint *)(param_1 + 100);
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 0x10000;
      } while (uVar5 < uVar3);
    }
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar6 = 0;
    uVar3 = 0;
    do {
      if ((*(uint *)(param_1 + 0xac) >> (uVar3 & 0x1f) & 1) != 0) {
        local_68 = CONCAT11((char)uVar3,10);
        local_66 = 0xf;
        puVar2 = *(undefined2 **)(param_1 + 0x168);
        if (puVar2 == *(undefined2 **)(param_1 + 0x170)) {
          FUN_100356e50(param_1 + 0x160,&local_68);
        }
        else {
          *(undefined1 *)(puVar2 + 1) = 0xf;
          *puVar2 = local_68;
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 3;
        }
        local_70[1] = 0x1f;
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,local_70 + 1);
        }
        else {
          *puStack_40 = 0x1f;
          puStack_40 = puStack_40 + 1;
        }
        local_70[0] = uVar6 | 0x8000000a;
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,local_70);
        }
        else {
          *puStack_40 = local_70[0];
          puStack_40 = puStack_40 + 1;
        }
        local_74 = uVar3 | 0x900f0000;
        if (puStack_40 == local_38) {
          FUN_10027f110(&local_48,&local_74);
        }
        else {
          *puStack_40 = local_74;
          puStack_40 = puStack_40 + 1;
        }
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 + 0x10000;
    } while (uVar3 < *(uint *)(param_1 + 0x5c));
  }
  lVar1 = param_1 + 0x148;
  puVar4 = *(undefined4 **)(param_1 + 0x150);
  if (puVar4 == *(undefined4 **)(param_1 + 0x158)) {
    FUN_10027f110(lVar1,param_1 + 0x100);
    puVar4 = *(undefined4 **)(param_1 + 0x150);
  }
  else {
    *puVar4 = *(undefined4 *)(param_1 + 0x100);
    puVar4 = puVar4 + 1;
    *(undefined4 **)(param_1 + 0x150) = puVar4;
  }
  FUN_100356870(lVar1,puVar4,local_48,puStack_40);
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x130),
                *(undefined8 *)(param_1 + 0x138));
  local_78 = 0xffff;
  puVar4 = *(undefined4 **)(param_1 + 0x150);
  if (puVar4 == *(undefined4 **)(param_1 + 0x158)) {
    FUN_10027f110(lVar1,&local_78);
  }
  else {
    *puVar4 = 0xffff;
    *(undefined4 **)(param_1 + 0x150) = puVar4 + 1;
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

