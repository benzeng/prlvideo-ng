
void FUN_1005213a0(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(**(code **)(*param_1 + 0x10))();
  if ((*pbVar1 & 1) == 0) {
    pbVar1 = pbVar1 + 1;
  }
  else {
    pbVar1 = *(byte **)(pbVar1 + 0x10);
  }
  FUN_1005213d0(param_2,pbVar1,0);
  return;
}

