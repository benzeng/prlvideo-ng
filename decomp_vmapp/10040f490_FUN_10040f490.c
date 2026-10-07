
undefined4 * FUN_10040f490(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_2 + 8);
  puVar3 = param_1;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

