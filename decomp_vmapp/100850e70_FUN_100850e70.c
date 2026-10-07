
bool FUN_100850e70(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (param_2[1] == 0)) {
    FUN_100887ce0(3,100,0x6b,"bn_blind.c",0xea);
    bVar3 = false;
  }
  else {
    if ((int)param_2[7] == -1) {
      *(undefined4 *)(param_2 + 7) = 0;
    }
    else {
      iVar1 = FUN_100850b50(param_2,param_3);
      if (iVar1 == 0) {
        return false;
      }
      lVar2 = *param_2;
    }
    iVar1 = FUN_10084eac0(param_1,param_1,lVar2,param_2[3],param_3);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

