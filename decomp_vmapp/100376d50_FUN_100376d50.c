
undefined4 FUN_100376d50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_10036d620(param_1,param_2,0);
  if (iVar2 != 0) {
    uVar3 = (*DAT_1011c5ae8)();
    (*DAT_1011c56c8)(uVar3,iVar2);
    (*DAT_1011c7c70)(uVar3,0x8258,1);
    cVar1 = FUN_10036d740(uVar3);
    (*DAT_1011c5bb8)(uVar3,iVar2);
    if (cVar1 == '\0') {
      (*DAT_1011c5b40)(uVar3);
      uVar3 = 0;
    }
    (*DAT_1011c5b78)(iVar2);
  }
  return uVar3;
}

