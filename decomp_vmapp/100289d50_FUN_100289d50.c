
void FUN_100289d50(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"[hdd:scsi:%u] REQUEST RESTARTED!",(int)plVar1[0x12]);
    FUN_10028b7c0(param_1,plVar1 + 0x7429);
    (**(code **)(*plVar1 + 0xd0))(plVar1);
    FUN_100402c40(plVar1 + 0x7429,param_1);
    return;
  }
  return;
}

