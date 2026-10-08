
undefined8 FUN_100d17950(long *param_1,QString *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 == (QString *)0x0) {
    return 0x8117020;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("version",7);
  puVar3 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  QDomElement::attribute(&local_40,param_2);
  iVar1 = *(int *)(local_40.field0_0x0 + 4);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d179de;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d179de:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d17a0e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d17a0e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d17a3e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d17a3e:
  if (iVar1 == 0) {
    return 0x8117020;
  }
  pcVar2 = *(code **)(*param_1 + 0x28);
  local_58 = (QArrayData *)QString::fromAscii_helper("version",7);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("version",7);
  QDomElement::attribute(&local_60,param_2);
  (*pcVar2)(param_1,&local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d17ace;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100d17ace:
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d17afe;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_100d17afe:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d17b2e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100d17b2e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return 0x8000000;
}

