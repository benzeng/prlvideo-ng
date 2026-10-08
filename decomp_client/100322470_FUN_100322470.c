
void FUN_100322470(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    puVar1 = *(undefined8 **)(param_3 + -8);
    if (puVar1 != (undefined8 *)0x0) {
      QVariant::~QVariant((QVariant *)(puVar1 + 4));
      piVar2 = (int *)*puVar1;
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && ((void *)*puVar1 != (void *)0x0)) {
          operator_delete((void *)*puVar1);
        }
      }
      operator_delete(puVar1);
    }
  }
  return;
}

