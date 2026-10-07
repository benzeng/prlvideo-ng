
int FUN_1005d3890(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  QArrayData *local_f0;
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
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  local_88 = (QArrayData *)QString::fromAscii_helper("BackupSessionParams",0x13);
  iVar3 = FUN_1005b9950(param_1,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d390d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005d390d:
  if (iVar3 < 0) goto LAB_1005d4023;
  QMutex::lock();
  local_98 = (QArrayData *)QString::fromAscii_helper("BackupSessionParams",0x13);
  QDomNode::firstChildElement(&local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d398a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005d398a:
  cVar2 = QDomNode::isNull();
  iVar3 = -0x7ffdd000;
  if (cVar2 == '\0') {
    local_a8 = (QArrayData *)QString::fromAscii_helper("GUID",4);
    QDomNode::firstChildElement(&local_80);
    QDomElement::text();
    QDomNode::~QDomNode((QDomNode *)&local_80);
    FUN_1007d6920(&local_48,&local_a0);
    param_2[1] = local_40;
    *param_2 = local_48;
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_49 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3a41;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1005d3a41:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_49 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3a77;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1005d3a77:
    local_b8 = (QArrayData *)QString::fromAscii_helper("Timeout",7);
    QDomNode::firstChildElement(&local_78);
    QDomElement::text();
    QDomNode::~QDomNode((QDomNode *)&local_78);
    uVar5 = QString::toULongLong((bool *)&local_b0,0);
    param_2[2] = uVar5;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_49 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3b0c;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1005d3b0c:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_49 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3b42;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1005d3b42:
    local_c8 = (QArrayData *)QString::fromAscii_helper("BackupSessionFlags",0x12);
    QDomNode::firstChildElement(&local_70);
    QDomElement::text();
    QDomNode::~QDomNode((QDomNode *)&local_70);
    uVar4 = QString::toUInt((bool *)&local_c0,0);
    *(undefined4 *)(param_2 + 3) = uVar4;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3bd7;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1005d3bd7:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_49 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3c0d;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1005d3c0d:
    local_d8 = (QArrayData *)QString::fromAscii_helper("BackupWholeDisk",0xf);
    QDomNode::firstChildElement(&local_68);
    QDomElement::text();
    QDomNode::~QDomNode((QDomNode *)&local_68);
    iVar3 = QString::toInt((bool *)&local_d0,0);
    *(bool *)((long)param_2 + 0x1c) = iVar3 != 0;
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_49 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3ca5;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1005d3ca5:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_49 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3cdb;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1005d3cdb:
    local_e8 = (QArrayData *)QString::fromAscii_helper("BackupLocationIdx",0x11);
    QDomNode::firstChildElement(&local_60);
    QDomElement::text();
    QDomNode::~QDomNode((QDomNode *)&local_60);
    uVar4 = QString::toInt((bool *)&local_e0,0);
    *(undefined4 *)(param_2 + 4) = uVar4;
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_49 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3d70;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1005d3d70:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_49 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3da6;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1005d3da6:
    pQVar6 = (QArrayData *)QString::fromAscii_helper("BackupLocationMask",0x12);
    QDomNode::firstChildElement(&local_58);
    QDomElement::text();
    QDomNode::~QDomNode((QDomNode *)&local_58);
    uVar5 = QString::toULongLong((bool *)&local_f0,0);
    param_2[5] = uVar5;
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_49 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3e3b;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1005d3e3b:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3e71;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1005d3e71:
    pQVar6 = (QArrayData *)QString::fromAscii_helper("BackupCachedSnapshots",0x15);
    FUN_1005d31c0();
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3ed6;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1005d3ed6:
    pQVar6 = (QArrayData *)QString::fromAscii_helper("BackupUncachedSnapshots",0x17);
    FUN_1005d31c0();
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3f3b;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1005d3f3b:
    pQVar6 = (QArrayData *)QString::fromAscii_helper("BackupUnknownList",0x11);
    FUN_1005d3570();
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d3fa0;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1005d3fa0:
    pQVar6 = (QArrayData *)QString::fromAscii_helper("BackupExternalList",0x12);
    FUN_1005d3570();
    iVar3 = 0;
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d400b;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
  }
LAB_1005d400b:
  QDomNode::~QDomNode((QDomNode *)&local_90);
  QMutex::unlock();
LAB_1005d4023:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

