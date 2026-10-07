
void FUN_100305f50(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  void *pvVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint local_2c;
  
  uVar9 = (ulong)param_3;
  uVar3 = (ulong)param_2;
  if (*(uint *)(param_1 + 0xc60) < 0x20) {
    uVar7 = 0x20;
    uVar3 = (ulong)param_2;
    do {
      uVar7 = uVar7 >> 1;
      uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar7);
    } while (*(uint *)(param_1 + 0xc60) < (uint)uVar7);
  }
  uVar6 = 0;
  for (puVar4 = *(uint **)(param_1 + 0x460 + (uVar3 & 0xff) * 8); puVar4 != (uint *)0x0;
      puVar4 = *(uint **)(puVar4 + 2)) {
    if (*puVar4 == param_2) {
      uVar6 = puVar4[1];
      break;
    }
  }
  local_2c = param_2;
  if (param_2 != 0) {
    FUN_1003070c0(param_1 + 0x458,&local_2c,uVar9);
  }
  if (uVar6 != 0) {
    uVar3 = (ulong)uVar6;
    if (*(uint *)(param_1 + 0x1470) < 0x20) {
      uVar5 = 0x20;
      uVar3 = (ulong)uVar6;
      do {
        uVar5 = uVar5 >> 1;
        uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar5);
      } while (*(uint *)(param_1 + 0x1470) < uVar5);
    }
    puVar4 = (uint *)(param_1 + 0xc70 + (uVar3 & 0xff) * 8);
    do {
      puVar8 = puVar4;
      puVar1 = *(uint **)puVar8;
      if (puVar1 == (uint *)0x0) goto LAB_100306045;
      puVar4 = puVar1 + 4;
    } while (uVar6 != *puVar1);
    *(undefined8 *)puVar8 = *(undefined8 *)(puVar1 + 4);
    if (*(long **)(puVar1 + 2) != (long *)0x0) {
      (**(code **)(**(long **)(puVar1 + 2) + 8))();
    }
    operator_delete(puVar1);
  }
LAB_100306045:
  if (param_3 != 0) {
    uVar3 = (ulong)param_3;
    if (*(uint *)(param_1 + 0x1470) < 0x20) {
      uVar6 = 0x20;
      uVar3 = uVar9;
      do {
        uVar6 = uVar6 >> 1;
        uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar6);
      } while (*(uint *)(param_1 + 0x1470) < uVar6);
    }
    for (puVar4 = *(uint **)(param_1 + 0xc70 + (uVar3 & 0xff) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 4)) {
      if (*puVar4 == param_3) {
        if (*(long *)(puVar4 + 2) != 0) {
          return;
        }
        break;
      }
    }
    pvVar2 = operator_new(0x610);
    FUN_1003063d0(pvVar2,param_1 + 0x14a0,param_1 + 0x1520);
    uVar6 = *(uint *)(param_1 + 0x1470);
    uVar3 = (ulong)param_3;
    if (uVar6 < 0x20) {
      uVar5 = 0x20;
      uVar3 = (ulong)param_3;
      do {
        uVar5 = uVar5 >> 1;
        uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar5);
      } while (uVar6 < uVar5);
    }
    for (puVar4 = *(uint **)(param_1 + 0xc70 + (uVar3 & 0xff) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 4)) {
      if (*puVar4 == param_3) goto LAB_100306166;
    }
    puVar4 = operator_new(0x18);
    *puVar4 = param_3;
    puVar4[2] = 0;
    puVar4[3] = 0;
    if (uVar6 < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar9 = (ulong)((uint)uVar9 ^ (uint)uVar9 >> (sbyte)uVar5);
      } while (uVar6 < uVar5);
    }
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0xc70 + (uVar9 & 0xff) * 8);
    *(uint **)(param_1 + 0xc70 + (uVar9 & 0xff) * 8) = puVar4;
LAB_100306166:
    *(void **)(puVar4 + 2) = pvVar2;
  }
  return;
}

