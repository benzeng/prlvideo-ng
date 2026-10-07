
void FUN_1000c02b0(long *param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_10008e910();
  *param_1 = (long)&PTR_metaObject_100ba8a10;
  iVar1 = 6;
  if (param_4 < 7) {
    iVar1 = param_4;
  }
  *(int *)((long)param_1 + 0xf4) = iVar1;
  param_1[0x21] = param_2;
  *(uint *)(param_1 + 0x22) = param_3;
  lVar2 = FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0xac,param_3 & 0xffff);
  param_1[0x1f] = lVar2;
  lVar2 = FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x6a,(short)param_1[0x22]);
  param_1[0x20] = lVar2;
  (**(code **)(*param_1 + 0x98))(param_1);
  QThread::start(param_1,7);
  return;
}

