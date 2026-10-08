
void FUN_100b30ce0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_10223ee60;
  puVar3 = (undefined8 *)param_1[7];
  puVar2 = (undefined8 *)param_1[8];
  puVar4 = puVar3;
  if (puVar3 != puVar2) {
    do {
      if ((void *)0x1 < (void *)*puVar3) {
        _free((void *)*puVar3);
        puVar2 = (undefined8 *)param_1[8];
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
    puVar1 = (undefined8 *)param_1[7];
    puVar3 = puVar2;
    puVar4 = puVar2;
    if (puVar2 != puVar1) {
      puVar3 = (undefined8 *)
               ((~((long)puVar2 + (-8 - (long)puVar1)) & 0xfffffffffffffff8U) + (long)puVar2);
      param_1[8] = puVar3;
      puVar4 = puVar1;
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if (puVar3 != puVar4) {
    param_1[8] = (~((long)puVar3 + (-8 - (long)puVar4)) & 0xfffffffffffffff8U) + (long)puVar3;
  }
  operator_delete(puVar4);
  return;
}

