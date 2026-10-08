
long FUN_100c520a0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = FUN_100c51af0();
  lVar3 = 0;
  if (lVar2 != 0) {
    local_48[0] = 1;
    local_40 = param_4;
    local_38 = param_3;
    iVar1 = FUN_100c51390(lVar2,param_1,param_2,local_48);
    lVar3 = lVar2;
    if (iVar1 == 0) {
      FUN_100c51d00(lVar2);
      lVar3 = 0;
    }
  }
  return lVar3;
}

