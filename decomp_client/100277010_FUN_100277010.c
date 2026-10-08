
undefined8 FUN_100277010(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QDomElement local_98 [8];
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QDomElement local_68 [8];
  QString local_60;
  QDomDocument local_58 [8];
  QString local_50;
  QString local_48 [2];
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QFileInfo::QFileInfo(local_30,&local_38);
  cVar1 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027708d;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10027708d:
  if (cVar1 == '\0') {
    return 1;
  }
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_21 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QFile::QFile((QFile *)local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002770f1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002770f1:
  lVar2 = (**(code **)(local_48[0].field0_0x0 + 0xa0))(local_48);
  uVar3 = 4;
  if (lVar2 < 1) goto LAB_10027753b;
  local_60.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("responseDocument",0x10);
  QDomDocument::QDomDocument(local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100277163;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100277163:
  cVar1 = QDomDocument::setContent((QIODevice *)local_58,local_48,(int *)0x0,(int *)0x0);
  uVar3 = 3;
  if (cVar1 != '\0') {
    QDomDocument::documentElement();
    cVar1 = QDomNode::isNull();
    uVar3 = 3;
    if (cVar1 == '\0') {
      QDomElement::text();
      local_80 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_1009e01f0(&local_78,&local_80,&local_70);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277209;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100277209:
      local_90.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("descriptorDocument",0x12);
      QDomDocument::QDomDocument((QDomDocument *)&local_88,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_21 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277267;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100277267:
      cVar1 = QDomDocument::setContent(&local_88,&local_78,(int *)0x0,(int *)0x0);
      uVar3 = 3;
      if (cVar1 != '\0') {
        QDomDocument::documentElement();
        QDomElement::operator=(local_68,local_98);
        QDomNode::~QDomNode((QDomNode *)local_98);
        local_a8 = (QArrayData *)QString::fromAscii_helper("PrimaryURL",10);
        FUN_100277900(&local_a0,&local_a8,local_68);
        QString::operator=((QString *)(param_1 + 0x30),&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_21 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10027732a;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10027732a:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_21 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277360;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100277360:
        local_b8 = (QArrayData *)QString::fromAscii_helper("MD5",3);
        FUN_100277900(&local_b0,&local_b8,local_68);
        QString::operator=((QString *)(param_1 + 0x40),&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_21 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1002773d5;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_1002773d5:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_21 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10027740b;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_10027740b:
        local_c8 = (QArrayData *)QString::fromAscii_helper("Size",4);
        FUN_100277900(&local_c0,&local_c8,local_68);
        uVar3 = QString::toLongLong((bool *)&local_c0,0);
        *(undefined8 *)(param_1 + 0x48) = uVar3;
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_21 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277487;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100277487:
        uVar3 = 0;
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_21 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1002774c0;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
LAB_1002774c0:
      QDomDocument::~QDomDocument((QDomDocument *)&local_88);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_21 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1002774f9;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1002774f9:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277529;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_100277529:
    QDomNode::~QDomNode((QDomNode *)local_68);
  }
  QDomDocument::~QDomDocument(local_58);
LAB_10027753b:
  QFile::~QFile((QFile *)local_48);
  return uVar3;
}

