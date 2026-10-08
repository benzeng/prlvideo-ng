
bool FUN_100365430(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1006faf60(pvVar3);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar3;
  }
  pvVar3 = DAT_102310998;
  uVar4 = FUN_10035da40(*(undefined8 *)(param_1 + 8));
  lVar5 = FUN_100319390(uVar4);
  uVar2 = 0xff;
  if (lVar5 != 0) {
    uVar4 = FUN_10035da40(*(undefined8 *)(param_1 + 8),0xff);
    uVar4 = FUN_100319390(uVar4);
    uVar2 = FUN_10018f860(uVar4);
  }
  cVar1 = FUN_1006fb710(pvVar3,uVar2);
  if (cVar1 != '\0') {
    *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) | 4;
  }
  return cVar1 != '\0';
}

