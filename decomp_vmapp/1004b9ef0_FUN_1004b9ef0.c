
undefined8 * FUN_1004b9ef0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 0x10 ^ param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x18 + (ulong)((uVar2 >> 8 ^ uVar2) & 0xff) * 8);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(puVar1 + 7) == param_2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1;
}

