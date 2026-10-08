
void FUN_100797d50(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x10);
      piVar1 = (int *)**(undefined8 **)(param_4 + lVar4);
      uVar2 = (*(undefined8 **)(param_4 + lVar4))[1];
      *puVar3 = piVar1;
      puVar3[1] = uVar2;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(undefined8 **)(param_2 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

