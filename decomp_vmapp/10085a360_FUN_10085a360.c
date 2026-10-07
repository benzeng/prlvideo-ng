
bool FUN_10085a360(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  FUN_10084ca60(param_5);
  lVar2 = FUN_10084cc20(param_5);
  bVar4 = false;
  if (lVar2 != 0) {
    FUN_10084bbb0(lVar2,0);
    if (*param_4 != -1) {
      bVar4 = false;
      do {
        param_4 = param_4 + 1;
        iVar1 = FUN_10084c000(lVar2);
        if (iVar1 == 0) goto LAB_10085a437;
      } while (*param_4 != -1);
    }
    FUN_10084ca60(param_5);
    lVar3 = FUN_10084cc20(param_5);
    if (lVar3 == 0) {
      bVar4 = false;
    }
    else {
      iVar1 = FUN_100859b40(lVar3,param_3,lVar2,param_5);
      bVar4 = false;
      if (iVar1 != 0) {
        iVar1 = FUN_100859890(param_1,param_2,lVar3,lVar2,param_5);
        bVar4 = iVar1 != 0;
      }
    }
    FUN_10084cb40(param_5);
  }
LAB_10085a437:
  FUN_10084cb40(param_5);
  return bVar4;
}

