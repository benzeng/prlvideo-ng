
void FUN_100adc090(long param_1,uint param_2,int param_3)

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
  if (*(int *)(puVar2 + 9) == param_3) {
    return;
  }
  if (param_3 == 0) {
    *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + 1;
  }
  else if (*(int *)(puVar2 + 9) == 0) {
    *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + -1;
  }
  *(int *)(puVar2 + 9) = param_3;
  return;
}

