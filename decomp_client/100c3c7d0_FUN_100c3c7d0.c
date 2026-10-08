
undefined8 FUN_100c3c7d0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = 0xffffffffffffffbc;
    if (0xffffffffffffffbc < ~param_2) {
      uVar1 = ~param_2;
    }
    uVar1 = ~uVar1;
    puVar3 = (undefined8 *)(param_1 + 8);
    puVar2 = &DAT_10224c030;
    do {
      *(undefined4 *)(puVar3 + -1) = *puVar2;
      *puVar3 = *(undefined8 *)(puVar2 + 6);
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0x43;
}

