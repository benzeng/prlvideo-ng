
void FUN_100479a00(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 - param_3 != 0) {
    lVar3 = 0;
    do {
      puVar2 = operator_new(8);
      piVar1 = (int *)**(undefined8 **)(param_4 + lVar3);
      *puVar2 = piVar1;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(undefined8 **)(param_2 + lVar3) = puVar2;
      lVar3 = lVar3 + 8;
    } while ((param_2 - param_3) + lVar3 != 0);
  }
  return;
}

