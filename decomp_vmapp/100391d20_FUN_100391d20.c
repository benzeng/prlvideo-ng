
/* WARNING: Type propagation algorithm not settling */

void FUN_100391d20(long param_1)

{
  long lVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_80;
  uint local_7c;
  uint local_78 [2];
  undefined2 local_70;
  undefined1 local_6e;
  uint local_6c;
  uint local_68 [2];
  undefined2 local_60;
  undefined1 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  
  if ((*(byte *)(param_1 + 0xb8) & 2) != 0) {
    local_38 = 0xb;
    local_36 = 1;
    puVar2 = *(undefined2 **)(param_1 + 0x188);
    if (puVar2 == *(undefined2 **)(param_1 + 400)) {
      FUN_100356e50(param_1 + 0x180,&local_38);
    }
    else {
      *(undefined1 *)(puVar2 + 1) = 1;
      *puVar2 = 0xb;
      *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 3;
    }
    *(undefined1 *)(param_1 + 0x19c) = 1;
    lVar1 = param_1 + 0x120;
    local_3c = 0x1f;
    puVar3 = *(undefined4 **)(param_1 + 0x128);
    puVar5 = *(undefined4 **)(param_1 + 0x130);
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_3c);
      puVar3 = *(undefined4 **)(param_1 + 0x128);
      puVar5 = *(undefined4 **)(param_1 + 0x130);
    }
    else {
      *puVar3 = 0x1f;
      puVar3 = puVar3 + 1;
      *(undefined4 **)(param_1 + 0x128) = puVar3;
    }
    local_40 = 0x8000000b;
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_40);
      puVar3 = *(undefined4 **)(param_1 + 0x128);
      puVar5 = *(undefined4 **)(param_1 + 0x130);
    }
    else {
      *puVar3 = 0x8000000b;
      puVar3 = puVar3 + 1;
      *(undefined4 **)(param_1 + 0x128) = puVar3;
    }
    local_44 = 0xc0010001;
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_44);
    }
    else {
      *puVar3 = 0xc0010001;
      *(undefined4 **)(param_1 + 0x128) = puVar3 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    lVar1 = param_1 + 0x120;
    local_48 = 0x1f;
    puVar3 = *(undefined4 **)(param_1 + 0x128);
    puVar5 = *(undefined4 **)(param_1 + 0x130);
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_48);
      puVar3 = *(undefined4 **)(param_1 + 0x128);
      puVar5 = *(undefined4 **)(param_1 + 0x130);
    }
    else {
      *puVar3 = 0x1f;
      puVar3 = puVar3 + 1;
      *(undefined4 **)(param_1 + 0x128) = puVar3;
    }
    local_4c = 0x80000000;
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_4c);
      puVar3 = *(undefined4 **)(param_1 + 0x128);
      puVar5 = *(undefined4 **)(param_1 + 0x130);
    }
    else {
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + 1;
      *(undefined4 **)(param_1 + 0x128) = puVar3;
    }
    local_50 = 0xc00f0000;
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_50);
    }
    else {
      *puVar3 = 0xc00f0000;
      *(undefined4 **)(param_1 + 0x128) = puVar3 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0xb8) & 4) != 0) {
    *(undefined1 *)(param_1 + 0x19d) = 1;
    lVar1 = param_1 + 0x120;
    local_54 = 0x1f;
    puVar3 = *(undefined4 **)(param_1 + 0x128);
    puVar5 = *(undefined4 **)(param_1 + 0x130);
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_54);
      puVar3 = *(undefined4 **)(param_1 + 0x128);
      puVar5 = *(undefined4 **)(param_1 + 0x130);
    }
    else {
      *puVar3 = 0x1f;
      puVar3 = puVar3 + 1;
      *(undefined4 **)(param_1 + 0x128) = puVar3;
    }
    local_58 = 0x80000004;
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_58);
      puVar3 = *(undefined4 **)(param_1 + 0x128);
      puVar5 = *(undefined4 **)(param_1 + 0x130);
    }
    else {
      *puVar3 = 0x80000004;
      puVar3 = puVar3 + 1;
      *(undefined4 **)(param_1 + 0x128) = puVar3;
    }
    local_5c = 0xc0010002;
    if (puVar3 == puVar5) {
      FUN_10027f110(lVar1,&local_5c);
    }
    else {
      *puVar3 = 0xc0010002;
      *(undefined4 **)(param_1 + 0x128) = puVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    lVar1 = param_1 + 0x120;
    uVar7 = 0;
    uVar8 = 0;
    do {
      if ((*(uint *)(param_1 + 0xbc) >> (uVar8 & 0x1f) & 1) != 0) {
        local_60 = CONCAT11((char)uVar8,10);
        local_5e = 0xf;
        puVar2 = *(undefined2 **)(param_1 + 0x188);
        if (puVar2 == *(undefined2 **)(param_1 + 400)) {
          FUN_100356e50(param_1 + 0x180,&local_60);
        }
        else {
          *(undefined1 *)(puVar2 + 1) = 0xf;
          *puVar2 = local_60;
          *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 3;
        }
        local_68[1] = 0x1f;
        puVar4 = *(uint **)(param_1 + 0x128);
        puVar6 = *(uint **)(param_1 + 0x130);
        if (puVar4 == puVar6) {
          FUN_10027f110(lVar1,local_68 + 1);
          puVar4 = *(uint **)(param_1 + 0x128);
          puVar6 = *(uint **)(param_1 + 0x130);
        }
        else {
          *puVar4 = 0x1f;
          puVar4 = puVar4 + 1;
          *(uint **)(param_1 + 0x128) = puVar4;
        }
        local_68[0] = uVar7 | 0x8000000a;
        if (puVar4 == puVar6) {
          FUN_10027f110(lVar1,local_68);
          puVar4 = *(uint **)(param_1 + 0x128);
          puVar6 = *(uint **)(param_1 + 0x130);
        }
        else {
          *puVar4 = local_68[0];
          puVar4 = puVar4 + 1;
          *(uint **)(param_1 + 0x128) = puVar4;
        }
        local_6c = uVar8 | 0xd00f0000;
        if (puVar4 == puVar6) {
          FUN_10027f110(lVar1,&local_6c);
        }
        else {
          *puVar4 = local_6c;
          *(uint **)(param_1 + 0x128) = puVar4 + 1;
        }
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 0x10000;
    } while (uVar8 < *(uint *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    lVar1 = param_1 + 0x120;
    uVar7 = 0;
    uVar8 = 0;
    do {
      if ((*(uint *)(param_1 + 0xc0) >> (uVar8 & 0x1f) & 1) != 0) {
        local_70 = CONCAT11((char)uVar8,5);
        local_6e = 0xf;
        puVar2 = *(undefined2 **)(param_1 + 0x188);
        if (puVar2 == *(undefined2 **)(param_1 + 400)) {
          FUN_100356e50(param_1 + 0x180,&local_70);
        }
        else {
          *(undefined1 *)(puVar2 + 1) = 0xf;
          *puVar2 = local_70;
          *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 3;
        }
        local_78[1] = 0x1f;
        puVar4 = *(uint **)(param_1 + 0x128);
        puVar6 = *(uint **)(param_1 + 0x130);
        if (puVar4 == puVar6) {
          FUN_10027f110(lVar1,local_78 + 1);
          puVar4 = *(uint **)(param_1 + 0x128);
          puVar6 = *(uint **)(param_1 + 0x130);
        }
        else {
          *puVar4 = 0x1f;
          puVar4 = puVar4 + 1;
          *(uint **)(param_1 + 0x128) = puVar4;
        }
        local_78[0] = uVar7 | 0x80000005;
        if (puVar4 == puVar6) {
          FUN_10027f110(lVar1,local_78);
          puVar4 = *(uint **)(param_1 + 0x128);
          puVar6 = *(uint **)(param_1 + 0x130);
        }
        else {
          *puVar4 = local_78[0];
          puVar4 = puVar4 + 1;
          *(uint **)(param_1 + 0x128) = puVar4;
        }
        local_7c = uVar8 | 0xe00f0000;
        if (puVar4 == puVar6) {
          FUN_10027f110(lVar1,&local_7c);
        }
        else {
          *puVar4 = local_7c;
          *(uint **)(param_1 + 0x128) = puVar4 + 1;
        }
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 0x10000;
    } while (uVar8 < *(uint *)(param_1 + 0x70));
  }
  lVar1 = param_1 + 0x150;
  puVar3 = *(undefined4 **)(param_1 + 0x158);
  if (puVar3 == *(undefined4 **)(param_1 + 0x160)) {
    FUN_10027f110(lVar1,param_1 + 0x100);
    puVar3 = *(undefined4 **)(param_1 + 0x158);
  }
  else {
    *puVar3 = *(undefined4 *)(param_1 + 0x100);
    puVar3 = puVar3 + 1;
    *(undefined4 **)(param_1 + 0x158) = puVar3;
  }
  FUN_100356870(lVar1,puVar3,*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110));
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x120),
                *(undefined8 *)(param_1 + 0x128));
  FUN_100356870(lVar1,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x138),
                *(undefined8 *)(param_1 + 0x140));
  local_80 = 0xffff;
  puVar3 = *(undefined4 **)(param_1 + 0x158);
  if (puVar3 == *(undefined4 **)(param_1 + 0x160)) {
    FUN_10027f110(lVar1,&local_80);
  }
  else {
    *puVar3 = 0xffff;
    *(undefined4 **)(param_1 + 0x158) = puVar3 + 1;
  }
  return;
}

