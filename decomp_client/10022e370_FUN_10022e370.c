
void FUN_10022e370(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_2 - param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = operator_new(4);
      *puVar1 = **(undefined4 **)(param_4 + lVar2);
      *(undefined4 **)(param_2 + lVar2) = puVar1;
      lVar2 = lVar2 + 8;
    } while ((param_2 - param_3) + lVar2 != 0);
  }
  return;
}

