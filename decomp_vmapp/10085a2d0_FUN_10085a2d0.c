
bool FUN_10085a2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  FUN_10084ca60(param_5);
  lVar2 = FUN_10084cc20(param_5);
  bVar3 = false;
  if (lVar2 != 0) {
    iVar1 = FUN_100859b40(lVar2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_100859890(param_1,param_2,lVar2,param_4,param_5);
      bVar3 = iVar1 != 0;
    }
  }
  FUN_10084cb40(param_5);
  return bVar3;
}

