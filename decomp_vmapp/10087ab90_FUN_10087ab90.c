
bool FUN_10087ab90(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0xfd;
  }
  else {
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (iVar1 = FUN_10087a720(param_1,0xd,0,param_2,0), 0 < iVar1)) {
      iVar1 = FUN_10087a720(param_1,iVar1,param_3,param_4,param_5);
      return 0 < iVar1;
    }
    if (param_6 != 0) {
      FUN_100888070();
      return true;
    }
    uVar2 = 0x89;
    uVar3 = 0x110;
  }
  FUN_100887ce0(0x26,0xb2,uVar2,"eng_ctrl.c",uVar3);
  return false;
}

