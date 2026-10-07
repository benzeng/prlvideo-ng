
undefined8 FUN_1006e21c0(undefined8 param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  pcVar1 = (char *)FUN_1008e4210();
  if (pcVar1 != (char *)0x0) {
    _strlen(pcVar1);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar1);
  QString::normalized(&local_38,&local_40,1,0);
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  pcVar1 = (char *)FUN_1008e4510();
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    iVar3 = (int)sVar2;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar3);
  QString::arg(param_1,&local_28,&local_48,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e22aa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e22aa:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e22da;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006e22da:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e230a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e230a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e233a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006e233a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

