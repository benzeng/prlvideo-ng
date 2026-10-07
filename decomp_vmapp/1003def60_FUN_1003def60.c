
undefined8 FUN_1003def60(undefined8 param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  CVmDevice::getSystemName();
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_100ba2140,0x9e77f8);
  cVar1 = operator==(&local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003defd9;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1003defd9:
  if (cVar1 != '\0') {
    lVar2 = FUN_1003df500();
    *param_2 = lVar2;
    uVar4 = 0;
    if (lVar2 == 0) {
      uVar4 = 0x80007001;
      FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Error connecting default printer");
    }
    goto LAB_1003df129;
  }
  QString::toUtf8();
  lVar2 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,
                     local_38 + *(long *)(local_38 + 0x10),0x8000100);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003df074;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1003df074:
  if (lVar2 == 0) {
    uVar4 = 0x80007001;
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Error creating string from printer ID");
  }
  else {
    lVar3 = _PMPrinterCreateFromPrinterID(lVar2);
    *param_2 = lVar3;
    _CFRelease(lVar2);
    uVar4 = 0;
    if (*param_2 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Printer connection failed. Name %s",
                    local_40 + *(long *)(local_40 + 0x10));
      uVar4 = 0x80007001;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_19 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1003df129;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
LAB_1003df129:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar4;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar4;
}

