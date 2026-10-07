
void FUN_100306e10(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x20);
  plVar6 = puVar1 + (uVar4 >> 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (lVar2 == 0) {
    lVar3 = 0;
    lVar5 = 0;
  }
  else {
    lVar3 = (uVar4 & 0xff) * 0x10 + *plVar6;
    uVar4 = uVar4 + *(long *)(param_1 + 0x28);
    lVar5 = (uVar4 & 0xff) * 0x10 + puVar1[uVar4 >> 8];
  }
  while (lVar3 != lVar5) {
    lVar3 = lVar3 + 0x10;
    if (lVar3 - *plVar6 == 0x1000) {
      lVar3 = plVar6[1];
      plVar6 = plVar6 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (uVar4 = lVar2 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  }
  if (uVar4 == 2) {
    *(undefined8 *)(param_1 + 0x20) = 0x100;
  }
  else if (uVar4 == 1) {
    *(undefined8 *)(param_1 + 0x20) = 0x80;
  }
  return;
}

