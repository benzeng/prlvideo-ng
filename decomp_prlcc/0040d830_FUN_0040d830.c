
void FUN_0040d830(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_0061da20;
  do {
    if ((void *)*puVar2 != (void *)0x0) {
      operator_delete__((void *)*puVar2);
    }
    puVar1 = puVar2 + 1;
    puVar2 = puVar2 + -4;
    FUN_0040db50(puVar1);
  } while (puVar2 != &DAT_0061d9a0);
  return;
}

