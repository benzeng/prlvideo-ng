
QString * FUN_100dd64b0(QString *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 == 0) {
    return param_1;
  }
  lVar2 = _IORegistryEntryCreateCFProperty
                    (param_2,&cf_BSDName,*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0);
  if (lVar2 == 0) {
    FUN_100df99c0("","HostUtils",0,"Error creating property for BSD name");
    return param_1;
  }
  uVar3 = _CFStringCreateExternalRepresentation(0,lVar2,0x8000100,0x3f);
  pcVar4 = (char *)_CFDataGetBytePtr(uVar3);
  iVar1 = _CFStringGetLength(lVar2);
  if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
    _strlen(pcVar4);
  }
  QString::fromUtf8_helper((char *)&local_38,(int)pcVar4);
  QString::normalized(&local_30,&local_38,1,0);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100dd6592;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100dd6592:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100dd65c2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100dd65c2:
  _CFRelease(lVar2);
  return param_1;
}

