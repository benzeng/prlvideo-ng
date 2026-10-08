
undefined8 * FUN_100adc640(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar1 = param_2 >> 0x10 ^ param_2;
  puVar2 = *(undefined8 **)(param_1 + (ulong)((uVar1 >> 8 ^ uVar1) & 0xff) * 8);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(puVar2 + 1) == param_2) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    do {
      uVar1 = *(uint *)((long)puVar2 + 0x14);
      if (uVar1 == 0) {
        return puVar2;
      }
      uVar4 = uVar1 >> 0x10 ^ uVar1;
      puVar3 = *(undefined8 **)(param_1 + (ulong)((uVar4 >> 8 ^ uVar4) & 0xff) * 8);
      while( true ) {
        if (puVar3 == (undefined8 *)0x0) {
          return puVar2;
        }
        if (*(uint *)(puVar3 + 1) == uVar1) break;
        puVar3 = (undefined8 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}

