
undefined8 FUN_100277a10(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QDomElement local_b0 [8];
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
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
      if ((bool)local_21) goto LAB_100277a8d;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100277a8d:
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
      if ((bool)local_21) goto LAB_100277af1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100277af1:
  lVar2 = (**(code **)(local_48[0].field0_0x0 + 0xa0))(local_48);
  uVar4 = 4;
  if (lVar2 < 1) goto LAB_100278141;
  local_60.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("responseDocument",0x10);
  QDomDocument::QDomDocument(local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100277b63;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100277b63:
  cVar1 = QDomDocument::setContent((QIODevice *)local_58,local_48,(int *)0x0,(int *)0x0);
  uVar4 = 3;
  if (cVar1 != '\0') {
    QDomDocument::documentElement();
    cVar1 = QDomNode::isNull();
    uVar4 = 3;
    if (cVar1 == '\0') {
      QDomElement::text();
      local_80 = (QArrayData *)QString::fromAscii_helper("&lt;",4);
      local_88 = (QArrayData *)QString::fromAscii_helper("<",1);
      uVar4 = QString::replace(&local_70,&local_80,&local_88,1);
      local_90 = (QArrayData *)QString::fromAscii_helper("&gt;",4);
      local_98 = (QArrayData *)QString::fromAscii_helper(">",1);
      puVar3 = (undefined8 *)QString::replace(uVar4,&local_90,&local_98,1);
      local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar3;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_21 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277c92;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100277c92:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_21 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277cc8;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100277cc8:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277cf8;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100277cf8:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277d28;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100277d28:
      local_a8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("descriptorDocument",0x12);
      QDomDocument::QDomDocument((QDomDocument *)&local_a0,&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_21 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100277d89;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_100277d89:
      cVar1 = QDomDocument::setContent(&local_a0,&local_78,(int *)0x0,(int *)0x0);
      uVar4 = 3;
      if (cVar1 != '\0') {
        QDomDocument::documentElement();
        QDomElement::operator=(local_68,local_b0);
        QDomNode::~QDomNode((QDomNode *)local_b0);
        local_c8 = (QArrayData *)QString::fromAscii_helper("DownloadUrl",0xb);
        FUN_100277900(&local_c0,&local_c8,local_68);
        QString::trimmed();
        QString::operator=((QString *)(param_1 + 0x30),&local_b8);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_21 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277e65;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
LAB_100277e65:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_21 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277e9b;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100277e9b:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_21 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277ed1;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100277ed1:
        local_e0 = (QArrayData *)QString::fromAscii_helper("Hash",4);
        FUN_100277900(&local_d8,&local_e0,local_68);
        QString::trimmed();
        QString::operator=((QString *)(param_1 + 0x40),&local_d0);
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_21 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277f59;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_100277f59:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_21 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277f8f;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_100277f8f:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_21 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100277fc5;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100277fc5:
        local_f8 = (QArrayData *)QString::fromAscii_helper("FileSize",8);
        FUN_100277900(&local_f0,&local_f8,local_68);
        QString::trimmed();
        uVar4 = QString::toLongLong((bool *)&local_e8,0);
        *(undefined8 *)(param_1 + 0x48) = uVar4;
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_21 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100278054;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100278054:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_21 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10027808a;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_10027808a:
        uVar4 = 0;
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_21 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1002780c3;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
      }
LAB_1002780c3:
      QDomDocument::~QDomDocument((QDomDocument *)&local_a0);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_21 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1002780ff;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1002780ff:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10027812f;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_10027812f:
    QDomNode::~QDomNode((QDomNode *)local_68);
  }
  QDomDocument::~QDomDocument(local_58);
LAB_100278141:
  QFile::~QFile((QFile *)local_48);
  return uVar4;
}

