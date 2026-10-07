
bool FUN_1000396d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  local_68[0] = 1;
  local_5c = 0;
  local_58 = 0;
  local_60 = param_3;
  lVar2 = FUN_1002a6120(param_2,1,1);
  iVar1 = FUN_1002a5a50(lVar2,0,local_68,0x50);
  if (iVar1 == 0x50) {
    *(undefined4 *)(lVar2 + 0x10) = 0x50;
  }
  return iVar1 == 0x50;
}

