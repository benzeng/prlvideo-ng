
void FUN_100adc0e0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2 >> 0x10 ^ param_2;
  puVar2 = *(undefined8 **)(param_1 + (ulong)((uVar1 >> 8 ^ uVar1) & 0xff) * 8);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    if (*(uint *)(puVar2 + 1) == param_2) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)((long)puVar2 + 0x57) = 1;
  return;
}

