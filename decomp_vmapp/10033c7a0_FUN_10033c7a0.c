
void FUN_10033c7a0(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (ulong)param_2 * 0x40;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  puVar1 = (undefined8 *)(param_1 + 0x270 + lVar9);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x280 + lVar9);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x290 + lVar9);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x2a0 + lVar9);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3018);
  return;
}

