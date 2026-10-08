
void FUN_100605330(undefined8 param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(param_2,(QVariant *)"scrollDescription");
  QVariant::~QVariant(&local_88);
  local_90 = (QArrayData *)QString::fromAscii_helper("headerText",10);
  pcVar2 = (char *)qt_qFindChild_helper(param_2,&local_90,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,0x1e06c28);
  QVariant::QVariant(&local_a0,&local_a8);
  QObject::setProperty(pcVar2,(QVariant *)"text");
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10060543e;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10060543e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605474;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100605474:
  local_b0 = (QArrayData *)QString::fromAscii_helper("descriptionText",0xf);
  pcVar2 = (char *)qt_qFindChild_helper(param_2,&local_b0,PTR_staticMetaObject_1021e1368,1);
  uVar3 = CAbstractWizardPage::wizardModel();
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e06c52);
  uVar1 = FUN_100602220(uVar3);
  pcVar4 = (char *)FUN_100605c70(uVar1);
  iVar6 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar6 = (int)sVar5;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar6);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  uVar1 = FUN_100602220(uVar3);
  pcVar4 = (char *)FUN_100605c70(uVar1);
  iVar6 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar6 = (int)sVar5;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar6);
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  uVar1 = FUN_1006021e0(uVar3);
  pcVar4 = (char *)FUN_100605c70(uVar1);
  iVar6 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar6 = (int)sVar5;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar6);
  QString::arg(&local_38,&local_40,&local_68,0,0x20);
  uVar1 = FUN_100602220(uVar3);
  pcVar4 = (char *)FUN_100605c70(uVar1);
  iVar6 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar6 = (int)sVar5;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar6);
  QString::arg(&local_30,&local_38,&local_70,0,0x20);
  uVar1 = FUN_1006021e0(uVar3);
  pcVar4 = (char *)FUN_100605c70(uVar1);
  iVar6 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar6 = (int)sVar5;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar6);
  QString::arg(&local_c8,&local_30,&local_78,0,0x20);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605683;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100605683:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006056b3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006056b3:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006056e3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006056e3:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605713;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100605713:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605743;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100605743:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605773;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100605773:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006057a3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006057a3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006057d3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006057d3:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605803;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100605803:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100605833;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100605833:
  QVariant::QVariant(&local_c0,&local_c8);
  QObject::setProperty(pcVar2,(QVariant *)"text");
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_21 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10060589e;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10060589e:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
  return;
}

