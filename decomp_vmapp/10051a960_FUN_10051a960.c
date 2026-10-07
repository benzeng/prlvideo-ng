
uint * FUN_10051a960(long param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 local_40;
  undefined *local_38;
  uint local_2c;
  
  puVar2 = *(uint **)(param_1 + 0x10);
  puVar6 = (undefined8 *)(param_1 + 0x10);
  local_2c = param_2;
  if (1 < *puVar2) {
    FUN_10051b5e0(puVar6);
    puVar2 = (uint *)*puVar6;
  }
  puVar1 = *(uint **)(puVar2 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar2 + 4) != (uint *)0x0) {
    do {
      while (puVar3 = puVar1, uVar5 = puVar3[6], param_2 <= uVar5) {
        puVar1 = *(uint **)(puVar3 + 2);
        puVar4 = puVar3;
        if (*(uint **)(puVar3 + 2) == (uint *)0x0) goto LAB_10051a9e9;
      }
      puVar1 = *(uint **)(puVar3 + 4);
    } while (*(uint **)(puVar3 + 4) != (uint *)0x0);
    if (puVar4 != (uint *)0x0) {
      uVar5 = puVar4[6];
      puVar3 = puVar4;
LAB_10051a9e9:
      if (uVar5 <= param_2) goto LAB_10051a9f5;
    }
  }
  puVar3 = puVar2 + 2;
LAB_10051a9f5:
  if (1 < *puVar2) {
    FUN_10051b5e0(puVar6);
    puVar2 = (uint *)*puVar6;
  }
  *(bool *)param_3 = puVar3 == puVar2 + 2;
  if (puVar3 == puVar2 + 2) {
    local_38 = PTR_shared_null_100ba2188;
    local_40 = 0;
    puVar3 = (uint *)FUN_10051b3e0(puVar6,&local_2c,&local_40);
    FUN_100037320(&local_38);
  }
  return puVar3 + 8;
}

