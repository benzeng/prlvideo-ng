
void FUN_1003323c0(long *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar7 = (ulong)((param_2 >> 0xc ^ param_2) & 0xfff ^ param_2 >> 0x18);
  puVar6 = (uint *)param_1[uVar7 + 2];
  for (puVar5 = puVar6; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
    if (*puVar5 == param_2) {
      puVar5[1] = *param_3;
      return;
    }
  }
  puVar5 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    for (puVar3 = puVar2; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
      uVar1 = *(uint *)(puVar3 + 1);
      if ((ulong)uVar1 < 0x100) {
        *(uint *)(puVar3 + 1) = uVar1 + 1;
        puVar5 = (uint *)(puVar3 + (ulong)uVar1 * 2 + 2);
        goto LAB_100332486;
      }
    }
    plVar4 = operator_new(0x1010);
    *plVar4 = (long)puVar2;
    param_1[1] = (long)plVar4;
    *(undefined4 *)(plVar4 + 1) = 1;
    puVar5 = (uint *)(plVar4 + 2);
    puVar6 = (uint *)param_1[uVar7 + 2];
  }
  else {
    *param_1 = *(long *)(puVar5 + 2);
  }
LAB_100332486:
  *puVar5 = param_2;
  puVar5[1] = *param_3;
  *(uint **)(puVar5 + 2) = puVar6;
  param_1[uVar7 + 2] = (long)puVar5;
  return;
}

