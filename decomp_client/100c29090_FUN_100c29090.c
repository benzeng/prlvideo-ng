
void FUN_100c29090(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = param_4 / 2;
  FUN_100c284c0();
  lVar3 = (long)iVar2;
  lVar1 = param_3 + lVar3 * 8;
  if (param_4 < 0x40) {
    FUN_100c29190(param_5,param_2,lVar1,iVar2);
    lVar1 = param_5 + lVar3 * 8;
    FUN_100c29190(lVar1,param_2 + lVar3 * 8,param_3,iVar2);
    param_1 = param_1 + lVar3 * 8;
    FUN_100c2f000(param_1,param_1,param_5,iVar2);
  }
  else {
    FUN_100c29090(param_5,param_2,lVar1,iVar2);
    param_1 = param_1 + lVar3 * 8;
    FUN_100c2f000(param_1,param_1,param_5,iVar2);
    FUN_100c29090(param_5,param_2 + lVar3 * 8,param_3,iVar2,param_5 + (long)param_4 * 8);
    lVar1 = param_5;
  }
  FUN_100c2f000(param_1,param_1,lVar1,iVar2);
  return;
}

