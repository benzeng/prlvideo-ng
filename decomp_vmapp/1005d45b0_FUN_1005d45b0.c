
int FUN_1005d45b0(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  QDomNode local_f0 [8];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QDomNode local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("BackupSessionParams",0x13);
  iVar2 = FUN_1005b9950(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d461d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d461d:
  if (iVar2 < 0) {
    return iVar2;
  }
  QMutex::lock();
  local_50 = (QArrayData *)QString::fromAscii_helper("BackupSessionParams",0x13);
  QDomNode::firstChildElement(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4691;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d4691:
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    QDomNode::removeChild(local_58);
    QDomNode::~QDomNode(local_58);
  }
  if (param_2 == 0) goto LAB_1005d4ce7;
  local_68 = (QArrayData *)QString::fromAscii_helper("BackupSessionParams",0x13);
  QDomDocument::createElement(&local_60);
  QDomElement::operator=((QDomElement *)&local_48,(QDomElement *)&local_60);
  QDomNode::~QDomNode((QDomNode *)&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d472c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d472c:
  local_70 = (QArrayData *)QString::fromAscii_helper("GUID",4);
  FUN_1007d6a70(&local_78,param_2);
  FUN_1005ba3b0(param_1,&local_70,&local_78,&local_48);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4791;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005d4791:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d47c1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d47c1:
  local_80 = (QArrayData *)QString::fromAscii_helper("BackupSessionFlags",0x12);
  QString::number((uint)&local_88,*(int *)(param_2 + 0x18));
  FUN_1005ba3b0(param_1,&local_80,&local_88,&local_48);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d482d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005d482d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d485d;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005d485d:
  local_90 = (QArrayData *)QString::fromAscii_helper("Timeout",7);
  QString::number((ulonglong)&local_98,(int)*(undefined8 *)(param_2 + 0x10));
  FUN_1005ba3b0(param_1,&local_90,&local_98,&local_48);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d48db;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005d48db:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4911;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005d4911:
  local_a0 = (QArrayData *)QString::fromAscii_helper("BackupWholeDisk",0xf);
  QString::number((int)&local_a8,(uint)*(byte *)(param_2 + 0x1c));
  FUN_1005ba3b0(param_1,&local_a0,&local_a8,&local_48);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4990;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005d4990:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d49c6;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005d49c6:
  local_b0 = (QArrayData *)QString::fromAscii_helper("BackupLocationIdx",0x11);
  QString::number((int)&local_b8,*(int *)(param_2 + 0x20));
  FUN_1005ba3b0(param_1,&local_b0,&local_b8,&local_48);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4a44;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005d4a44:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4a7a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005d4a7a:
  local_c0 = (QArrayData *)QString::fromAscii_helper("BackupLocationMask",0x12);
  QString::number((ulonglong)&local_c8,(int)*(undefined8 *)(param_2 + 0x28));
  FUN_1005ba3b0(param_1,&local_c0,&local_c8,&local_48);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4af8;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005d4af8:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4b2e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005d4b2e:
  local_d0 = (QArrayData *)QString::fromAscii_helper("BackupCachedSnapshots",0x15);
  FUN_1005d3390(param_1,param_2 + 0x30,&local_d0,&local_48);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4b94;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005d4b94:
  local_d8 = (QArrayData *)QString::fromAscii_helper("BackupUncachedSnapshots",0x17);
  FUN_1005d3390(param_1,param_2 + 0x38,&local_d8,&local_48);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4bfa;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1005d4bfa:
  local_e0 = (QArrayData *)QString::fromAscii_helper("BackupUnknownList",0x11);
  FUN_1005d3730(param_1,param_2 + 0x40,&local_e0,&local_48);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4c60;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005d4c60:
  local_e8 = (QArrayData *)QString::fromAscii_helper("BackupExternalList",0x12);
  FUN_1005d3730(param_1,param_2 + 0x48,&local_e8,&local_48);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d4cc8;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005d4cc8:
  QDomNode::appendChild(local_f0);
  QDomNode::~QDomNode(local_f0);
LAB_1005d4ce7:
  QMutex::unlock();
  (**(code **)(*param_1 + 0x18))(param_1);
  QDomNode::~QDomNode((QDomNode *)&local_48);
  return 0;
}

