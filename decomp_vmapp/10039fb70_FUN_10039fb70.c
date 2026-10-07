
undefined8 FUN_10039fb70(long param_1,short param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_1c;
  uint local_18;
  uint local_14;
  ulong uVar6;
  
  uVar5 = param_3 >> 8 & 0x18 | param_3 >> 0x1c & 7;
  uVar6 = (ulong)uVar5;
  local_1c = param_3 & 0x7ff;
  uVar7 = local_1c + 1;
  if ((param_3 & 0x2000) != 0) {
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1 << (sbyte)uVar5;
    if (*(int *)(param_1 + 100) == 0) {
      *(undefined4 *)(param_1 + 100) = 1;
    }
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 1;
    if (uVar5 == 6) {
      uVar7 = 0xc;
    }
    else if (uVar5 == 2) {
      uVar7 = 0x100;
    }
    else if (uVar5 == 1) {
      uVar7 = 10;
    }
  }
  if (*(uint *)(param_1 + 0x58 + uVar6 * 4) < uVar7) {
    *(uint *)(param_1 + 0x58 + uVar6 * 4) = uVar7;
  }
  puVar1 = (uint *)(param_1 + 0xa8 + uVar6 * 4);
  *puVar1 = *puVar1 | ~-(uint)((param_3 & 0x2000) == 0) | 1 << ((byte)local_1c & 0x1f);
  if (param_2 == 0x51) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    puVar3 = (undefined8 *)FUN_100391760(param_1 + 0x10,&local_1c);
  }
  else {
    if (param_2 != 0x30) {
      if (param_2 != 0x2f) {
        return 0;
      }
      uVar2 = *param_4;
      local_14 = local_1c;
      puVar4 = (undefined4 *)FUN_1003a6c20(param_1 + 0x40,&local_14);
      *puVar4 = uVar2;
      return 0;
    }
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    local_18 = local_1c;
    puVar3 = (undefined8 *)FUN_1003a6d20(param_1 + 0x28,&local_18);
  }
  *puVar3 = CONCAT44(uStack_34,local_38);
  puVar3[1] = CONCAT44(uStack_2c,uStack_30);
  return 0;
}

