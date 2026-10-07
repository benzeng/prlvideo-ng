
void FUN_10027f230(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1002578b0(param_1,0,0,0);
  *param_1 = &PTR_FUN_100bafb50;
  param_1[1] = &PTR_metaObject_100bafbc8;
  iVar1 = FUN_1007da300("devices.scsi.forceint",8);
  *(int *)(param_1 + 0xd) = iVar1 + -1;
  lVar2 = FUN_1002f0000(0,0,0xffff);
  param_1[0xf] = lVar2;
  if (lVar2 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to create monev for scsi");
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_38);
    FUN_10002d9d0(&local_38);
  }
  else {
    FUN_100257c20(param_1);
  }
  return;
}

