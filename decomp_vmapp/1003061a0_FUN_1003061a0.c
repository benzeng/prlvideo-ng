
void FUN_1003061a0(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 local_34 [4];
  
  uVar8 = (ulong)param_3;
  uVar1 = (ulong)param_2;
  if (*(uint *)(param_1 + 0x25c8) < 0x20) {
    uVar5 = 0x20;
    uVar1 = (ulong)param_2;
    do {
      uVar5 = uVar5 >> 1;
      uVar1 = (ulong)((uint)uVar1 ^ (uint)uVar1 >> (sbyte)uVar5);
    } while (*(uint *)(param_1 + 0x25c8) < (uint)uVar5);
  }
  uVar7 = 0;
  for (puVar2 = *(uint **)(param_1 + 0x1dc8 + (uVar1 & 0xff) * 8); puVar2 != (uint *)0x0;
      puVar2 = *(uint **)(puVar2 + 2)) {
    if (*puVar2 == param_2) {
      uVar7 = puVar2[1];
      break;
    }
  }
  if (param_2 != 0) {
    FUN_1003070c0(param_1 + 0x1dc0,local_34,uVar8);
  }
  if (uVar7 != 0) {
    uVar1 = (ulong)uVar7;
    if (*(uint *)(param_1 + 0x1db8) < 0x20) {
      uVar4 = 0x20;
      uVar1 = (ulong)uVar7;
      do {
        uVar4 = uVar4 >> 1;
        uVar1 = (ulong)((uint)uVar1 ^ (uint)uVar1 >> (sbyte)uVar4);
      } while (*(uint *)(param_1 + 0x1db8) < uVar4);
    }
    puVar2 = (uint *)(param_1 + 0x15b8 + (uVar1 & 0xff) * 8);
    do {
      puVar6 = puVar2;
      puVar3 = *(uint **)puVar6;
      if (puVar3 == (uint *)0x0) goto LAB_1003062a1;
      puVar2 = puVar3 + 4;
    } while (uVar7 != *puVar3);
    *(undefined8 *)puVar6 = *(undefined8 *)(puVar3 + 4);
    if (*(void **)(puVar3 + 2) != (void *)0x0) {
      operator_delete(*(void **)(puVar3 + 2));
    }
    operator_delete(puVar3);
  }
LAB_1003062a1:
  if (param_3 != 0) {
    uVar7 = *(uint *)(param_1 + 0x1db8);
    uVar1 = (ulong)param_3;
    if (uVar7 < 0x20) {
      uVar4 = 0x20;
      uVar1 = uVar8;
      do {
        uVar4 = uVar4 >> 1;
        uVar1 = (ulong)((uint)uVar1 ^ (uint)uVar1 >> (sbyte)uVar4);
      } while (uVar7 < uVar4);
    }
    for (puVar2 = *(uint **)(param_1 + 0x15b8 + (uVar1 & 0xff) * 8); puVar2 != (uint *)0x0;
        puVar2 = *(uint **)(puVar2 + 4)) {
      if (*puVar2 == param_3) {
        if (*(long *)(puVar2 + 2) != 0) {
          return;
        }
        break;
      }
    }
    puVar2 = operator_new(8);
    *puVar2 = param_2;
    puVar2[1] = 0;
    uVar1 = (ulong)param_3;
    if (uVar7 < 0x20) {
      uVar4 = 0x20;
      uVar1 = (ulong)param_3;
      do {
        uVar4 = uVar4 >> 1;
        uVar1 = (ulong)((uint)uVar1 ^ (uint)uVar1 >> (sbyte)uVar4);
      } while (uVar7 < uVar4);
    }
    for (puVar3 = *(uint **)(param_1 + 0x15b8 + (uVar1 & 0xff) * 8); puVar3 != (uint *)0x0;
        puVar3 = *(uint **)(puVar3 + 4)) {
      if (*puVar3 == param_3) goto LAB_1003063b6;
    }
    puVar3 = operator_new(0x18);
    *puVar3 = param_3;
    puVar3[2] = 0;
    puVar3[3] = 0;
    if (uVar7 < 0x20) {
      uVar4 = 0x20;
      do {
        uVar4 = uVar4 >> 1;
        uVar8 = (ulong)((uint)uVar8 ^ (uint)uVar8 >> (sbyte)uVar4);
      } while (uVar7 < uVar4);
    }
    *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_1 + 0x15b8 + (uVar8 & 0xff) * 8);
    *(uint **)(param_1 + 0x15b8 + (uVar8 & 0xff) * 8) = puVar3;
LAB_1003063b6:
    *(uint **)(puVar3 + 2) = puVar2;
  }
  return;
}

