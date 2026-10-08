
int FUN_1006ea680(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = FUN_1006e9010();
  if (DAT_1023109d0 == (void *)0x0) {
    pvVar3 = operator_new(0x40);
    FUN_10077f120(pvVar3);
    DAT_102273500 = 1;
    DAT_1023109d0 = pvVar3;
  }
  iVar2 = FUN_10077fd70(DAT_1023109d0);
  if (iVar2 <= iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

