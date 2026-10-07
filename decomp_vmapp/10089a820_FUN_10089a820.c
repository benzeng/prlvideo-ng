
undefined8 FUN_10089a820(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_68 [56];
  undefined8 local_30;
  
  local_30 = param_2;
  lVar2 = FUN_1008205c0(&local_30,local_68);
  if (lVar2 == 0) {
    FUN_100887ce0(0xd,0xd9,0xad,"a_time.c",0x72);
    uVar3 = 0;
  }
  else {
    if (((param_3 != 0) || (param_4 != 0)) &&
       (iVar1 = FUN_100820620(lVar2,param_3,param_4), iVar1 == 0)) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x14) - 0x32U < 100) {
      uVar3 = FUN_10089a070();
    }
    else {
      uVar3 = FUN_10089a5f0(param_1,local_30,param_3,param_4);
    }
  }
  return uVar3;
}

