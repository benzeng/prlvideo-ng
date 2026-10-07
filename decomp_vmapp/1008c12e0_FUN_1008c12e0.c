
bool FUN_1008c12e0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = FUN_100884e10();
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_1008852e0(lVar2,param_2);
  return iVar1 != 0;
}

