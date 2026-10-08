
void FUN_1009d03f0(long param_1,undefined8 *param_2,size_t param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = (int)param_3 * 8;
  *(uint *)(param_1 + 0x10) = uVar4 + uVar2;
  iVar5 = *(int *)(param_1 + 0x14);
  if (CARRY4(uVar4,uVar2)) {
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0x14) = iVar5;
  }
  *(int *)(param_1 + 0x14) = (int)(param_3 >> 0x1d) + iVar5;
  uVar2 = uVar2 >> 3 & 0x3f;
  if (uVar2 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x18 + (ulong)uVar2);
    uVar6 = (ulong)(0x40 - uVar2);
    if (param_3 < uVar6) goto LAB_1009d0509;
    _memcpy(puVar7,param_2,uVar6);
    FUN_1009d0530(param_1,param_1 + 0x18);
    param_2 = (undefined8 *)((long)param_2 + uVar6);
    param_3 = param_3 - uVar6;
  }
  puVar7 = (undefined8 *)(param_1 + 0x18);
  if (0x3f < param_3) {
    uVar6 = param_3 - 0x40;
    uVar3 = uVar6 & 0xffffffffffffffc0;
    puVar8 = param_2;
    do {
      *(undefined8 *)(param_1 + 0x50) = puVar8[7];
      *(undefined8 *)(param_1 + 0x48) = puVar8[6];
      *(undefined8 *)(param_1 + 0x40) = puVar8[5];
      *(undefined8 *)(param_1 + 0x38) = puVar8[4];
      *(undefined8 *)(param_1 + 0x30) = puVar8[3];
      *(undefined8 *)(param_1 + 0x28) = puVar8[2];
      uVar1 = *puVar8;
      *(undefined8 *)(param_1 + 0x20) = puVar8[1];
      *puVar7 = uVar1;
      FUN_1009d0530(param_1,puVar7);
      puVar8 = puVar8 + 8;
      param_3 = param_3 - 0x40;
    } while (0x3f < param_3);
    param_3 = uVar6 - uVar3;
    param_2 = (undefined8 *)((long)param_2 + uVar3 + 0x40);
  }
LAB_1009d0509:
  _memcpy(puVar7,param_2,param_3);
  return;
}

