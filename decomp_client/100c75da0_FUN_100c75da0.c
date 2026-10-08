
undefined8 FUN_100c75da0(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_68 [56];
  undefined8 local_30;
  
  local_30 = param_2;
  lVar2 = FUN_100bf5d30(&local_30,local_68);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xd,0xd9,0xad,"a_time.c",0x72);
    uVar3 = 0;
  }
  else {
    if (((param_3 != 0) || (param_4 != 0)) &&
       (iVar1 = FUN_100bf5d90(lVar2,param_3,param_4), iVar1 == 0)) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x14) - 0x32U < 100) {
      uVar3 = FUN_100c755f0();
    }
    else {
      uVar3 = FUN_100c75b70(param_1,local_30,param_3,param_4);
    }
  }
  return uVar3;
}

