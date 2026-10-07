
void FUN_100305cb0(long param_1,uint param_2,uint param_3,byte param_4,undefined4 param_5,
                  undefined4 param_6)

{
  uint uVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  uVar7 = (ulong)param_2;
  if (*(uint *)(param_1 + 0x1038) < 0x20) {
    uVar6 = 0x20;
    uVar7 = (ulong)param_2;
    do {
      uVar6 = uVar6 >> 1;
      uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar6);
    } while (*(uint *)(param_1 + 0x1038) < (uint)uVar6);
  }
  uVar4 = 0;
  for (puVar3 = *(uint **)(param_1 + 0x838 + (uVar7 & 0xff) * 8); puVar3 != (uint *)0x0;
      puVar3 = *(uint **)(puVar3 + 2)) {
    if (*puVar3 == param_2) {
      uVar4 = puVar3[1];
      break;
    }
  }
  local_3c = uVar4;
  local_38 = param_3;
  local_34 = param_2;
  if (param_2 != 0) {
    FUN_1003070c0(param_1 + 0x830,&local_34,param_3);
  }
  if (uVar4 != 0) {
    FUN_1003071e0(param_1 + 0x1850,&local_3c);
  }
  if (param_3 != 0) {
    uVar7 = (ulong)param_3;
    if (*(uint *)(param_1 + 0x2058) < 0x20) {
      uVar4 = 0x20;
      uVar7 = (ulong)param_3;
      do {
        uVar4 = uVar4 >> 1;
        uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar4);
      } while (*(uint *)(param_1 + 0x2058) < uVar4);
    }
    for (puVar3 = *(uint **)(param_1 + 0x1858 + (uVar7 & 0xff) * 8); puVar3 != (uint *)0x0;
        puVar3 = *(uint **)(puVar3 + 4)) {
      if (*puVar3 == param_3) {
        if (*(long *)(puVar3 + 2) != 0) {
          return;
        }
        break;
      }
    }
    iVar10 = 0x8ce0;
    uVar8 = 0x8ce0;
    if ((param_2 == 0) && (iVar10 = param_4 + 0x404, uVar8 = param_5, param_4 != 0)) {
      uVar8 = param_6;
    }
    pvVar2 = operator_new(0x250);
    ___bzero(pvVar2,0x198);
    uVar9 = local_38;
    *(undefined8 *)((long)pvVar2 + 0x240) = 0;
    *(undefined8 *)((long)pvVar2 + 0x238) = 0;
    *(undefined8 *)((long)pvVar2 + 0x230) = 0;
    *(undefined8 *)((long)pvVar2 + 0x228) = 0;
    *(undefined8 *)((long)pvVar2 + 0x220) = 0;
    *(undefined8 *)((long)pvVar2 + 0x218) = 0;
    *(int *)((long)pvVar2 + 0x198) = iVar10;
    *(int *)((long)pvVar2 + 0x19c) = iVar10;
    *(int *)((long)pvVar2 + 0x1a0) = iVar10;
    *(int *)((long)pvVar2 + 0x1a4) = iVar10;
    *(undefined4 *)((long)pvVar2 + 0x1d8) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x1dc) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x1e0) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x1e4) = uVar8;
    *(int *)((long)pvVar2 + 0x1a8) = iVar10;
    *(int *)((long)pvVar2 + 0x1ac) = iVar10;
    *(int *)((long)pvVar2 + 0x1b0) = iVar10;
    *(int *)((long)pvVar2 + 0x1b4) = iVar10;
    *(undefined4 *)((long)pvVar2 + 0x1e8) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x1ec) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x1f0) = uVar8;
    *(undefined4 *)((long)pvVar2 + 500) = uVar8;
    *(int *)((long)pvVar2 + 0x1b8) = iVar10;
    *(int *)((long)pvVar2 + 0x1bc) = iVar10;
    *(int *)((long)pvVar2 + 0x1c0) = iVar10;
    *(int *)((long)pvVar2 + 0x1c4) = iVar10;
    *(undefined4 *)((long)pvVar2 + 0x1f8) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x1fc) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x200) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x204) = uVar8;
    *(int *)((long)pvVar2 + 0x1c8) = iVar10;
    *(int *)((long)pvVar2 + 0x1cc) = iVar10;
    *(int *)((long)pvVar2 + 0x1d0) = iVar10;
    *(int *)((long)pvVar2 + 0x1d4) = iVar10;
    *(undefined4 *)((long)pvVar2 + 0x208) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x20c) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x210) = uVar8;
    *(undefined4 *)((long)pvVar2 + 0x214) = uVar8;
    *(int *)((long)pvVar2 + 0x248) = iVar10;
    *(undefined4 *)((long)pvVar2 + 0x24c) = uVar8;
    uVar4 = *(uint *)(param_1 + 0x2058);
    uVar1 = local_38;
    if (uVar4 < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar1 = uVar1 ^ uVar1 >> (sbyte)uVar5;
      } while (uVar4 < uVar5);
    }
    for (puVar3 = *(uint **)(param_1 + 0x1858 + (ulong)(uVar1 & 0xff) * 8); puVar3 != (uint *)0x0;
        puVar3 = *(uint **)(puVar3 + 4)) {
      if (local_38 == *puVar3) goto LAB_100305f34;
    }
    puVar3 = operator_new(0x18);
    *puVar3 = uVar9;
    puVar3[2] = 0;
    puVar3[3] = 0;
    if (uVar4 < 0x20) {
      uVar1 = 0x20;
      do {
        uVar1 = uVar1 >> 1;
        uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar1;
      } while (uVar4 < uVar1);
    }
    *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_1 + 0x1858 + (ulong)(uVar9 & 0xff) * 8);
    *(uint **)(param_1 + 0x1858 + (ulong)(uVar9 & 0xff) * 8) = puVar3;
LAB_100305f34:
    *(void **)(puVar3 + 2) = pvVar2;
  }
  return;
}

