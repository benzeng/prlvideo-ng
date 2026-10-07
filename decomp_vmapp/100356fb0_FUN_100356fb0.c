
undefined8 * FUN_100356fb0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  byte bVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined2 local_48;
  byte local_46;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_38;
  undefined1 local_36;
  
  uVar2 = *(uint *)(param_3 + 0x78);
  uVar3 = *(uint *)(param_3 + 0x7c);
  puVar6 = (undefined2 *)param_1[3];
  puVar4 = (undefined2 *)param_1[4];
  if (puVar4 != puVar6) {
    puVar6 = (undefined2 *)(~((ulong)((long)puVar4 + (-3 - (long)puVar6)) / 3) * 3 + (long)puVar4);
    param_1[4] = puVar6;
  }
  puVar1 = param_1 + 3;
  local_38 = 10;
  local_36 = 0xf;
  if (puVar6 == (undefined2 *)param_1[5]) {
    FUN_100356e50(puVar1,&local_38);
  }
  else {
    *(undefined1 *)(puVar6 + 1) = 0xf;
    *puVar6 = 10;
    param_1[4] = param_1[4] + 3;
  }
  if ((*(int *)(param_2 + 0x74) != 0) || (*(int *)(param_3 + 0x98) != 0)) {
    local_40 = 0x10a;
    local_3e = 0xf;
    puVar6 = (undefined2 *)param_1[4];
    if (puVar6 == (undefined2 *)param_1[5]) {
      FUN_100356e50(puVar1,&local_40);
    }
    else {
      *(undefined1 *)(puVar6 + 1) = 0xf;
      *puVar6 = 0x10a;
      param_1[4] = param_1[4] + 3;
    }
  }
  puVar9 = (undefined4 *)(param_2 + 0x460);
  uVar8 = 0;
  do {
    bVar7 = (byte)uVar8;
    if (uVar2 >> (bVar7 & 0x1f) == 0) {
      return puVar1;
    }
    if (((uVar2 >> (bVar7 & 0x1f) & 1) != 0) &&
       (iVar5 = FUN_100399b90(*param_1,uVar8 & 0xffffffff,*puVar9,uVar3 >> (bVar7 & 0x1f) != 0),
       iVar5 != 0)) {
      local_48 = CONCAT11(bVar7,5);
      local_46 = (byte)((uint)iVar5 >> 0x10) & 0xf;
      puVar6 = (undefined2 *)param_1[4];
      if (puVar6 == (undefined2 *)param_1[5]) {
        FUN_100356e50(puVar1,&local_48);
      }
      else {
        *(byte *)(puVar6 + 1) = local_46;
        *puVar6 = local_48;
        param_1[4] = param_1[4] + 3;
      }
    }
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 0x40;
  } while (uVar8 < 0x10);
  return puVar1;
}

