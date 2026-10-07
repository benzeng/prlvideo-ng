
void FUN_1005f3aa0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar5 = *(ulong *)(param_1 + 0x20);
  plVar6 = puVar3 + uVar5 / 0xaa;
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar3;
  if (lVar4 == 0) {
    lVar2 = 0;
    lVar1 = 0;
  }
  else {
    lVar2 = (uVar5 % 0xaa) * 0x18 + *plVar6;
    uVar5 = uVar5 + *(long *)(param_1 + 0x28);
    lVar1 = (uVar5 % 0xaa) * 0x18 + puVar3[uVar5 / 0xaa];
  }
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + 0x18;
    if (lVar2 - *plVar6 == 0xff0) {
      lVar2 = plVar6[1];
      plVar6 = plVar6 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar3;
  }
  if (uVar5 == 2) {
    *(undefined8 *)(param_1 + 0x20) = 0xaa;
  }
  else if (uVar5 == 1) {
    *(undefined8 *)(param_1 + 0x20) = 0x55;
  }
  return;
}

