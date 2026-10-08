
void FUN_1006e91e0(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  iVar2 = FUN_1006e9010();
  if (DAT_1023109d0 == (void *)0x0) {
    pvVar5 = operator_new(0x40);
    FUN_10077f120(pvVar5);
    DAT_102273500 = 1;
    DAT_1023109d0 = pvVar5;
  }
  iVar3 = FUN_10077fd70(DAT_1023109d0);
  iVar4 = FUN_1006e9010();
  cVar1 = '\x01';
  if (iVar4 < 0xd) {
    if (DAT_1023109d0 == (void *)0x0) {
      pvVar5 = operator_new(0x40);
      FUN_10077f120(pvVar5);
      DAT_102273500 = 1;
      DAT_1023109d0 = pvVar5;
    }
    cVar1 = FUN_10077f890(DAT_1023109d0,0,0);
  }
  if ((param_2 != 0) && (cVar1 != '\0')) {
    *(bool *)param_2 = iVar3 <= iVar2;
  }
  return;
}

