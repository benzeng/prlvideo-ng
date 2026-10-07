
void FUN_1003070c0(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  uVar7 = *param_2;
  if (param_3 == 0) {
    uVar3 = uVar7;
    if (uVar1 < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar3 = uVar3 ^ uVar3 >> (sbyte)uVar5;
      } while (uVar1 < uVar5);
    }
    puVar4 = (uint *)(param_1 + 8 + (ulong)(uVar3 & 0xff) * 8);
    while (puVar6 = puVar4, puVar2 = *(uint **)puVar6, puVar2 != (uint *)0x0) {
      puVar4 = puVar2 + 2;
      if (uVar7 == *puVar2) {
        *(undefined8 *)puVar6 = *(undefined8 *)(puVar2 + 2);
        operator_delete(puVar2);
        return;
      }
    }
  }
  else {
    uVar3 = uVar7;
    if (uVar1 < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar3 = uVar3 ^ uVar3 >> (sbyte)uVar5;
      } while (uVar1 < uVar5);
    }
    for (puVar4 = *(uint **)(param_1 + 8 + (ulong)(uVar3 & 0xff) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 2)) {
      if (uVar7 == *puVar4) goto LAB_10030716e;
    }
    puVar4 = operator_new(0x10);
    *puVar4 = uVar7;
    puVar4[1] = 0;
    if (uVar1 < 0x20) {
      uVar3 = 0x20;
      do {
        uVar3 = uVar3 >> 1;
        uVar7 = uVar7 ^ uVar7 >> (sbyte)uVar3;
      } while (uVar1 < uVar3);
    }
    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_1 + 8 + (ulong)(uVar7 & 0xff) * 8);
    *(uint **)(param_1 + 8 + (ulong)(uVar7 & 0xff) * 8) = puVar4;
LAB_10030716e:
    puVar4[1] = param_3;
  }
  return;
}

