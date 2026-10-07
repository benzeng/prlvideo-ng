
long FUN_1008b5860(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 0;
  lVar2 = 0;
  iVar1 = FUN_1008b2930(&local_30,&local_38,0,param_2,param_3,param_5,param_6);
  if (iVar1 != 0) {
    local_28 = local_30;
    lVar2 = (*param_1)(param_4,&local_28,local_38);
    if (lVar2 == 0) {
      FUN_100887ce0(9,0x67,0xd,"pem_oth.c",0x53);
    }
    FUN_10081e1a0(local_30);
  }
  return lVar2;
}

