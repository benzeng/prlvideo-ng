
undefined8 FUN_1002bcd80(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_4c;
  QArrayData *local_48;
  undefined4 local_3c;
  QString local_38;
  undefined1 local_29;
  
  iVar2 = FUN_1002c6e30(param_2);
  if (iVar2 != 0) {
    return 0;
  }
  if (DAT_1011c5610 == 0) {
    return 0;
  }
  QString::QString(&local_38,0x7c);
  QString::section(&local_48,param_2,&local_38,0,0,0);
  piVar1 = (int *)CONCAT71(local_38.field0_0x0._1_7_,local_38.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bce0d;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_38.field0_0x0._1_7_,local_38.field0_0x0._0_1_),2,8);
  }
LAB_1002bce0d:
  local_3c = QString::toUInt((bool *)&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38.field0_0x0._0_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38.field0_0x0._0_1_) goto LAB_1002bce4f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002bce4f:
  local_4c = FUN_1002c6ef0(param_2);
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  uVar3 = _CFNumberCreate(uVar5,9,&local_3c);
  uVar4 = _CFNumberCreate(uVar5,9,&local_4c);
  uVar5 = _CFDictionaryCreateMutable
                    (uVar5,2,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                     PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
  _CFDictionarySetValue(uVar5,&cf_LocationID,uVar3);
  _CFDictionarySetValue(uVar5,&cf_VID,uVar4);
  puVar6 = (undefined8 *)PTR__kCFBooleanFalse_100ba23c0;
  if (param_3 != 0) {
    puVar6 = (undefined8 *)PTR__kCFBooleanTrue_100ba23c8;
  }
  _CFDictionarySetValue(uVar5,&cf_ConnectState,*puVar6);
  _CFRelease(uVar4);
  _CFRelease(uVar3);
  if (param_3 == 0) {
    QThread::usleep(20000);
  }
  iVar2 = _IOConnectSetCFProperties(DAT_1011c5610,uVar5);
  _CFRelease(uVar5);
  uVar5 = 0;
  if ((iVar2 != 0) && (uVar5 = 0xffffffff, -1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"SignalConnector error %x",iVar2);
  }
  return uVar5;
}

