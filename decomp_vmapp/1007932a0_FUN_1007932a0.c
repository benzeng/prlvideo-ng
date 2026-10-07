
undefined8 FUN_1007932a0(long param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar1 = param_2[1];
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    uVar1 = param_3[1];
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    puVar6 = puVar2;
    if (*(uint *)(puVar2 + 4) != 0) {
      uVar5 = *(uint *)((long)puVar2 + 0x24) ^ *param_3;
      for (puVar4 = *(undefined8 **)(puVar2[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar2 + 4)) * 8);
          (puVar6 = puVar2, puVar4 != puVar2 &&
          ((*(uint *)(puVar4 + 1) != uVar5 ||
           (puVar6 = puVar4, *param_3 != *(uint *)((long)puVar4 + 0xc)))));
          puVar4 = (undefined8 *)*puVar4) {
      }
    }
    if (uVar1 == 0) {
      if (puVar6 == puVar2) {
        uVar1 = *param_2;
      }
      else {
        uVar1 = *param_3;
      }
      uVar3 = (ulong)uVar1;
      *param_4 = uVar1;
      param_4[1] = 0;
    }
    else {
      if (puVar6 == puVar2) {
        return 0;
      }
      uVar3 = (ulong)*param_3;
      *param_4 = *param_3;
      param_4[1] = uVar1;
    }
  }
  else {
    if ((*param_2 != *param_3) && (param_3[1] != 0)) {
      return 0;
    }
    *param_4 = *param_2;
    param_4[1] = uVar1;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}

