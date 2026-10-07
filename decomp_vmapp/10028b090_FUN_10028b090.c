
void FUN_10028b090(long *param_1,undefined8 param_2)

{
  FUN_1008e3970("","LocalDevices",0,"[hdd:scsi:%u] REQUEST RESTARTED!",(int)param_1[0x12]);
  FUN_10028b7c0(param_2,param_1 + 0x7429);
  (**(code **)(*param_1 + 0xd0))(param_1);
  FUN_100402c40(param_1 + 0x7429,param_2);
  return;
}

