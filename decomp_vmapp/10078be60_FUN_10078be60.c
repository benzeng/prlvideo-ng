
void FUN_10078be60(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  ___bzero(param_1,(ulong)param_2 * 0x768);
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x760);
    uVar1 = 0;
    do {
      *(int *)(puVar2 + -0x35) = (int)uVar1;
      puVar2[-4] = 0;
      puVar2[-3] = FUN_10078bef0;
      puVar2[-2] = FUN_10078bf10;
      *(undefined4 *)(puVar2 + -1) = 0;
      *puVar2 = FUN_10078bf30;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xed;
    } while (param_2 != uVar1);
  }
  return;
}

