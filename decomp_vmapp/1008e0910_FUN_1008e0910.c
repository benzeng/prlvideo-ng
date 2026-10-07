
bool FUN_1008e0910(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = FUN_10084c820();
    if (lVar2 != 0) {
      lVar3 = FUN_10084b520();
      bVar4 = false;
      if (lVar3 != 0) {
        iVar1 = FUN_10084e8b0(lVar3,param_1,param_2,lVar2);
        if (iVar1 != 0) {
          bVar4 = *(int *)(lVar3 + 8) != 0;
        }
      }
      FUN_10084c8b0(lVar2);
      FUN_10084b4b0(lVar3);
    }
  }
  return bVar4;
}

