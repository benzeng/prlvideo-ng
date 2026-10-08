
void FUN_100b5ebf0(undefined4 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = DAT_1023118c0;
  plVar2 = DAT_1023118c0;
  if (DAT_1023118c0 == (long *)0x0) {
    plVar3 = operator_new(0x20);
    FUN_100b5e890(plVar3);
    plVar2 = DAT_1023118c0;
    if ((DAT_1023118c0 != plVar3) && (plVar2 = plVar3, DAT_1023118c0 != (long *)0x0)) {
      lVar1 = *DAT_1023118c0;
      DAT_1023118c0 = plVar3;
      (**(code **)(lVar1 + 0x20))();
      plVar3 = DAT_1023118c0;
      plVar2 = DAT_1023118c0;
    }
  }
  DAT_1023118c0 = plVar2;
  FUN_100b5e920(plVar3,param_1);
  return;
}

