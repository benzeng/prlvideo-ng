
void FUN_100469590(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if (param_2 - param_3 != 0) {
    lVar3 = 0;
    do {
      puVar2 = operator_new(0x20);
      puVar1 = *(undefined4 **)(param_4 + lVar3);
      *puVar2 = *puVar1;
      FUN_100469680(puVar2 + 2,puVar1 + 2);
      *puVar2 = *puVar1;
      *(undefined4 **)(param_2 + lVar3) = puVar2;
      lVar3 = lVar3 + 8;
    } while ((param_2 - param_3) + lVar3 != 0);
  }
  return;
}

