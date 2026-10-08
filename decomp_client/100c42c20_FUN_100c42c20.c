
int FUN_100c42c20(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_100c62ee0(0x10,0xdb,0x8b,"ec_pmeth.c",0x109);
    iVar4 = 0;
  }
  else {
    lVar3 = FUN_100c3f040();
    iVar4 = 0;
    if (lVar3 != 0) {
      iVar2 = FUN_100c3fae0(lVar3,*plVar1);
      if (iVar2 == 0) {
        FUN_100c3f180(lVar3);
      }
      else {
        FUN_100c6d510(param_2,0x198,lVar3);
        iVar4 = iVar2;
      }
    }
  }
  return iVar4;
}

