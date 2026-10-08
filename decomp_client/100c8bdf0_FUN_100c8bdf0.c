
long FUN_100c8bdf0(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_30 [10];
  
  local_30[0] = param_1;
  lVar2 = FUN_100bf7eb0(local_30,&DAT_101daebd0,0x13,0x28,FUN_100c8c020);
  if (lVar2 == 0) {
    lVar2 = 0;
    if (DAT_1023183c8 != 0) {
      iVar1 = FUN_100c60360(DAT_1023183c8,local_30);
      lVar2 = 0;
      if (-1 < iVar1) {
        lVar2 = FUN_100c60820(DAT_1023183c8,iVar1);
      }
    }
  }
  return lVar2;
}

