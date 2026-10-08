
undefined8 FUN_100afbf10(undefined8 param_1,undefined8 param_2,QString *param_3,char param_4)

{
  long lVar1;
  QString local_30;
  undefined1 local_22;
  
  if (param_4 == '\0') {
    lVar1 = _IORegistryEntryCreateCFProperty
                      (param_1,param_2,*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0);
  }
  else {
    lVar1 = _IORegistryEntrySearchCFProperty
                      (param_1,"IOService",param_2,*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0
                       ,1);
  }
  if (lVar1 == 0) {
    return 0;
  }
  FUN_100deed00(&local_30,lVar1);
  QString::operator=(param_3,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100afbfaa;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100afbfaa:
  _CFRelease(lVar1);
  return 1;
}

