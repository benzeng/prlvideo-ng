
bool FUN_1002c79c0(long param_1,uint param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar1 = FUN_1002f0000(1,param_2 & 0xffff,0xffff);
  *(long *)(param_1 + 0x1498) = lVar1;
  if (lVar1 == 0) {
    FUN_1008e3970("","USB",0,"Failed to open main queue for %u",param_2);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_38);
    FUN_10002d9d0(&local_38);
  }
  return lVar1 != 0;
}

