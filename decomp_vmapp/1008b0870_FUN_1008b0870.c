
long FUN_1008b0870(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_30 [10];
  
  local_30[0] = param_1;
  lVar2 = FUN_100822740(local_30,&DAT_100b59f10,0x13,0x28,FUN_1008b0aa0);
  if (lVar2 == 0) {
    lVar2 = 0;
    if (DAT_1011c2988 != 0) {
      iVar1 = FUN_100885160(DAT_1011c2988,local_30);
      lVar2 = 0;
      if (-1 < iVar1) {
        lVar2 = FUN_100885620(DAT_1011c2988,iVar1);
      }
    }
  }
  return lVar2;
}

