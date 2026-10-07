
bool FUN_100850f10(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    FUN_100887ce0(3,100,0x6b,"bn_blind.c",0xea);
    bVar3 = false;
  }
  else {
    if ((int)param_3[7] == -1) {
      *(undefined4 *)(param_3 + 7) = 0;
    }
    else {
      iVar1 = FUN_100850b50(param_3,param_4);
      if (iVar1 == 0) {
        return false;
      }
    }
    bVar3 = true;
    if (param_2 != 0) {
      lVar2 = FUN_10084b950(param_2,param_3[1]);
      bVar3 = lVar2 != 0;
    }
    iVar1 = FUN_10084eac0(param_1,param_1,*param_3,param_3[3],param_4);
    if (iVar1 == 0) {
      bVar3 = false;
    }
  }
  return bVar3;
}

