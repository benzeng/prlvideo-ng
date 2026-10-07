
void FUN_100305a80(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint local_2c;
  
  uVar8 = (ulong)param_3;
  uVar2 = (ulong)param_2;
  if (*(uint *)(param_1 + 0x828) < 0x20) {
    uVar6 = 0x20;
    uVar2 = (ulong)param_2;
    do {
      uVar6 = uVar6 >> 1;
      uVar2 = (ulong)((uint)uVar2 ^ (uint)uVar2 >> (sbyte)uVar6);
    } while (*(uint *)(param_1 + 0x828) < (uint)uVar6);
  }
  uVar9 = 0;
  for (puVar4 = *(uint **)(param_1 + 0x28 + (uVar2 & 0xff) * 8); puVar4 != (uint *)0x0;
      puVar4 = *(uint **)(puVar4 + 2)) {
    if (*puVar4 == param_2) {
      uVar9 = puVar4[1];
      break;
    }
  }
  local_2c = param_2;
  if (param_2 != 0) {
    FUN_1003070c0(param_1 + 0x20,&local_2c,uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = (ulong)uVar9;
    if (*(uint *)(param_1 + 0x1848) < 0x20) {
      uVar5 = 0x20;
      uVar2 = (ulong)uVar9;
      do {
        uVar5 = uVar5 >> 1;
        uVar2 = (ulong)((uint)uVar2 ^ (uint)uVar2 >> (sbyte)uVar5);
      } while (*(uint *)(param_1 + 0x1848) < uVar5);
    }
    puVar4 = (uint *)(param_1 + 0x1048 + (uVar2 & 0xff) * 8);
    do {
      puVar7 = puVar4;
      puVar1 = *(uint **)puVar7;
      if (puVar1 == (uint *)0x0) goto LAB_100305b71;
      puVar4 = puVar1 + 4;
    } while (uVar9 != *puVar1);
    *(undefined8 *)puVar7 = *(undefined8 *)(puVar1 + 4);
    if (*(void **)(puVar1 + 2) != (void *)0x0) {
      operator_delete(*(void **)(puVar1 + 2));
    }
    operator_delete(puVar1);
  }
LAB_100305b71:
  if (param_3 != 0) {
    uVar9 = *(uint *)(param_1 + 0x1848);
    uVar2 = (ulong)param_3;
    if (uVar9 < 0x20) {
      uVar5 = 0x20;
      uVar2 = uVar8;
      do {
        uVar5 = uVar5 >> 1;
        uVar2 = (ulong)((uint)uVar2 ^ (uint)uVar2 >> (sbyte)uVar5);
      } while (uVar9 < uVar5);
    }
    for (puVar4 = *(uint **)(param_1 + 0x1048 + (uVar2 & 0xff) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 4)) {
      if (*puVar4 == param_3) {
        if (*(long *)(puVar4 + 2) != 0) {
          return;
        }
        break;
      }
    }
    puVar3 = operator_new(0x20);
    *puVar3 = 0xde1;
    *(undefined4 *)(puVar3 + 1) = 0x8058;
    *(undefined1 *)((long)puVar3 + 0x1c) = 0;
    *(undefined8 *)((long)puVar3 + 0x14) = 0;
    *(undefined8 *)((long)puVar3 + 0xc) = 0;
    uVar2 = (ulong)param_3;
    if (uVar9 < 0x20) {
      uVar5 = 0x20;
      uVar2 = (ulong)param_3;
      do {
        uVar5 = uVar5 >> 1;
        uVar2 = (ulong)((uint)uVar2 ^ (uint)uVar2 >> (sbyte)uVar5);
      } while (uVar9 < uVar5);
    }
    for (puVar4 = *(uint **)(param_1 + 0x1048 + (uVar2 & 0xff) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 4)) {
      if (*puVar4 == param_3) goto LAB_100305c96;
    }
    puVar4 = operator_new(0x18);
    *puVar4 = param_3;
    puVar4[2] = 0;
    puVar4[3] = 0;
    if (uVar9 < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar8 = (ulong)((uint)uVar8 ^ (uint)uVar8 >> (sbyte)uVar5);
      } while (uVar9 < uVar5);
    }
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0x1048 + (uVar8 & 0xff) * 8);
    *(uint **)(param_1 + 0x1048 + (uVar8 & 0xff) * 8) = puVar4;
LAB_100305c96:
    *(undefined8 **)(puVar4 + 2) = puVar3;
  }
  return;
}

