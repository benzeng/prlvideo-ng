
void FUN_100a3f800(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 - param_3 != 0) {
    lVar3 = 0;
    do {
      puVar2 = operator_new(0x10);
      puVar1 = *(undefined8 **)(param_4 + lVar3);
      *puVar2 = *puVar1;
      FUN_100a3f920(puVar2 + 1,puVar1 + 1);
      *puVar2 = *puVar1;
      *(undefined8 **)(param_2 + lVar3) = puVar2;
      lVar3 = lVar3 + 8;
    } while ((param_2 - param_3) + lVar3 != 0);
  }
  return;
}

