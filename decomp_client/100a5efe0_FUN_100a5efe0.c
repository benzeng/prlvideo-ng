
void FUN_100a5efe0(void)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = FUN_100a5f030();
  pvVar1 = DAT_1023139d8;
  if (lVar2 == 0) {
    if (DAT_1023139d8 != (void *)0x0) {
      FUN_100a5ee20(DAT_1023139d8);
      operator_delete(pvVar1);
    }
    DAT_1023139d8 = (void *)0x0;
  }
  return;
}

