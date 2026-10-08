
bool FUN_100c4a840(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_100c49f80(0,param_2,(long)param_3);
  if (lVar1 == 0) {
    FUN_100c62ee0(4,0x93,4,"rsa_ameth.c",0x72);
  }
  else {
    FUN_100c6d510(param_1,6,lVar1);
  }
  return lVar1 != 0;
}

