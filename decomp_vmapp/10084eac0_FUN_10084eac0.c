
byte FUN_10084eac0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  
  FUN_10084ca60(param_5);
  lVar2 = FUN_10084cc20(param_5);
  bVar4 = 0;
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_100853520(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_10084e5a0(lVar2,param_2,param_3,param_5);
    }
    bVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_100847f70(0,param_1,lVar2,param_4,param_5);
      bVar5 = true;
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x10) == 0) {
          bVar5 = false;
        }
        else {
          if (*(int *)(param_4 + 0x10) == 0) {
            pcVar3 = FUN_100847940;
          }
          else {
            pcVar3 = FUN_100847e90;
          }
          iVar1 = (*pcVar3)(param_1,param_1,param_4);
          bVar5 = iVar1 == 0;
        }
      }
      bVar4 = bVar5 ^ 1;
    }
  }
  FUN_10084cb40(param_5);
  return bVar4;
}

