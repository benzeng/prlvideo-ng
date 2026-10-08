
void FUN_1007c46c0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  *(int *)(param_1 + 0x50) = param_2;
  lVar1 = FUN_1007bd870(param_1,2);
  lVar2 = FUN_1007bd870(param_1,3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_1001324d0(lVar1,param_2 == 1);
    FUN_1001324d0(lVar2,param_2 != 1);
    return;
  }
  return;
}

