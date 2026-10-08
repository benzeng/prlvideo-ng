
undefined8 FUN_100992360(long param_1,QString *param_2)

{
  code *pcVar1;
  int iVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  QDir local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  QDir::QDir(local_30,param_2);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("config.pvs",10);
  QDir::absoluteFilePath(&local_28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009923cd;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1009923cd:
  QDir::~QDir(local_30);
  pcVar1 = DAT_102310d70;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  QString::toUtf8();
  iVar2 = (*pcVar1)(uVar4,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100992432;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100992432:
  uVar4 = 0;
  if (iVar2 < 0) {
    uVar4 = 0x80000009;
    FUN_100df99c0("","TransporterWizardModel",0,"Failed to set vm config file error 0x%X",iVar2);
  }
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

