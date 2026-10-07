
void FUN_1002578b0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  long lVar1;
  QMutex *pQVar2;
  QWaitCondition *this;
  QMutex *pQVar3;
  QThread *this_00;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_1011159a8;
  this_00 = (QThread *)(param_1 + 1);
  QThread::QThread(this_00,(QObject *)0x0);
  *param_1 = &PTR_FUN_100bae810;
  param_1[1] = &PTR_metaObject_100bae888;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  pQVar3 = (QMutex *)(param_1 + 4);
  QMutex::QMutex(pQVar3,0);
  this = (QWaitCondition *)(param_1 + 5);
  QWaitCondition::QWaitCondition(this);
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[8] = 0;
  pQVar2 = (QMutex *)(param_1 + 0xb);
  QMutex::QMutex(pQVar2,0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0xc));
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  param_1[7] = 0;
  lVar1 = FUN_1002ef020(param_2,param_3,param_4);
  param_1[8] = lVar1;
  if (lVar1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"adev3(%u:%u) failed to adev_create.",
                  *(undefined4 *)(param_1 + 3),*(undefined4 *)((long)param_1 + 0x1c),pQVar2,this,
                  pQVar3,this_00);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_48);
    FUN_10002d9d0(&local_48);
  }
  return;
}

