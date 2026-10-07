
bool FUN_10027d050(long param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  
  *(uint *)(param_1 + 0x4850) = param_4;
  pbVar1 = (byte *)FUN_1002f0000(param_2,param_3,param_4 & 0xffff);
  *(byte **)(param_1 + 0x4848) = pbVar1;
  if (pbVar1 == (byte *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to create queue %d:%d:%d",param_2 & 0xffff,
                  param_3 & 0xffff,param_4);
  }
  else {
    *pbVar1 = *pbVar1 | 1;
  }
  return pbVar1 != (byte *)0x0;
}

