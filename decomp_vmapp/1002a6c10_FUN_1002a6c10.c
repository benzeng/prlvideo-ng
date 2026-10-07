
void FUN_1002a6c10(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1002a4f20();
  *param_1 = &PTR_FUN_100bb2ba0;
  lVar1 = FUN_1002f0000(0xd,0,0xffff);
  param_1[0x108] = lVar1;
  if (lVar1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to open main queue for toolgate");
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_38);
    FUN_10002d9d0(&local_38);
  }
  return;
}

