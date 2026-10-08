
bool FUN_100c35560(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  FUN_100c27c60(param_5);
  lVar2 = FUN_100c27e20(param_5);
  bVar4 = false;
  if (lVar2 != 0) {
    FUN_100c26db0(lVar2,0);
    if (*param_4 != -1) {
      bVar4 = false;
      do {
        param_4 = param_4 + 1;
        iVar1 = FUN_100c27200(lVar2);
        if (iVar1 == 0) goto LAB_100c35637;
      } while (*param_4 != -1);
    }
    FUN_100c27c60(param_5);
    lVar3 = FUN_100c27e20(param_5);
    if (lVar3 == 0) {
      bVar4 = false;
    }
    else {
      iVar1 = FUN_100c34d40(lVar3,param_3,lVar2,param_5);
      bVar4 = false;
      if (iVar1 != 0) {
        iVar1 = FUN_100c34a90(param_1,param_2,lVar3,lVar2,param_5);
        bVar4 = iVar1 != 0;
      }
    }
    FUN_100c27d40(param_5);
  }
LAB_100c35637:
  FUN_100c27d40(param_5);
  return bVar4;
}

