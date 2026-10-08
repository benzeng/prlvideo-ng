
void FUN_100aca030(QObject *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223a570;
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_10223a320;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223a4c0;
  uVar2 = FUN_100319390(param_2);
  FUN_100188480(&local_40,uVar2);
  uVar2 = FUN_100319390(param_2);
  FUN_10018c250(&local_48,uVar2);
  FUN_100ace490(param_1 + 0x20,&local_40,local_48);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aca0fb;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100aca0fb:
  uVar2 = FUN_100319390(param_2);
  FUN_10018c250(&local_50,uVar2);
  if (local_50 != 0) {
    _PrlHandle_Free(local_50);
  }
  *(long *)(param_1 + 0x48) = local_50;
  uVar2 = FUN_100319390(param_2);
  FUN_100188480(param_1 + 0x50,uVar2);
  QMutex::QMutex((QMutex *)(param_1 + 0x60),1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_100adb0d0(0);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  uVar2 = FUN_100acee60(param_1,param_2,param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined2 *)(param_1 + 0x80) = 0;
  param_1[0x82] = (QObject)0x0;
  uVar2 = FUN_100319390(param_2);
  uVar1 = FUN_10018a9d0(uVar2);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  param_1[0x88] = (QObject)0x1;
  QTimer::QTimer((QTimer *)(param_1 + 0xa0),(QObject *)0x0);
  QTimer::QTimer((QTimer *)(param_1 + 0xc0),(QObject *)0x0);
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  FUN_10009c520("SmartPtr<char>",0,0);
  FUN_10009bee0("unsigned",0,0);
  FUN_100acde40("CVmConfiguration",0,0);
  param_1[0xdc] = (QObject)((byte)param_1[0xdc] | 1);
  uVar2 = FUN_100319390(param_2);
  FUN_100aca360(param_1,uVar2);
  FUN_100a4a120(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48),2);
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  return;
}

