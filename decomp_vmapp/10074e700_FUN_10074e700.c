
void FUN_10074e700(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined1 local_4028 [16416];
  
  iVar1 = 0;
  if (param_3 < 0x7e000001) {
    iVar1 = param_3 + 0x10 + (int)param_3 / 0xff;
  }
  FUN_100745900(local_4028,param_1,param_2,param_3,iVar1,1);
  return;
}

