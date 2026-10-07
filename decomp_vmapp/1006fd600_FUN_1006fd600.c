
undefined8 * FUN_1006fd600(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  QString::toUtf8();
  iVar1 = _IORegistryEntryFromPath
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,
                     local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd680;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1006fd680:
  if ((iVar1 == 0) ||
     (lVar2 = _IORegistryEntrySearchCFProperty
                        (iVar1,"IOService",&cf_BSDName,
                         *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,1), lVar2 == 0)) {
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_1006fd801;
  }
  lVar3 = _CFStringGetLength(lVar2);
  pcVar4 = _malloc(lVar3 + 1U);
  if (pcVar4 == (char *)0x0) {
    FUN_1008e3970("","cmn_utils",0,"(!)Error: failed to allocate buffer");
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_1006fd801;
  }
  _CFStringGetCString(lVar2,pcVar4,lVar3 + 1U,0x8000100);
  _strlen(pcVar4);
  QString::fromUtf8_helper((char *)&local_58,(int)pcVar4);
  QString::normalized(&local_50,&local_58,1,0);
  QString::operator=(&local_40,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd755;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006fd755:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd785;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006fd785:
  if (param_3 != (QString *)0x0) {
    QString::operator=(param_3,&local_40);
  }
  _CFRelease(lVar2);
  FUN_1006fcec0(param_1,&local_40,1);
LAB_1006fd801:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

