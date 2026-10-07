
undefined8 * FUN_1004b8710(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar1 = param_2 >> 0x10 ^ param_2;
  uVar3 = (ulong)((uVar1 >> 8 ^ uVar1) & 0xff);
  puVar2 = (undefined8 *)(param_1 + 0x18 + uVar3 * 8);
  for (puVar4 = *(undefined8 **)(param_1 + 0x18 + uVar3 * 8);
      (puVar4 != (undefined8 *)0x0 && (*(uint *)(puVar4 + 7) != param_2));
      puVar4 = (undefined8 *)*puVar4) {
    puVar2 = puVar4;
  }
  return puVar2;
}

