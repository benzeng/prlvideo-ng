
bool FUN_100c354d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  FUN_100c27c60(param_5);
  lVar2 = FUN_100c27e20(param_5);
  bVar3 = false;
  if (lVar2 != 0) {
    iVar1 = FUN_100c34d40(lVar2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_100c34a90(param_1,param_2,lVar2,param_4,param_5);
      bVar3 = iVar1 != 0;
    }
  }
  FUN_100c27d40(param_5);
  return bVar3;
}

