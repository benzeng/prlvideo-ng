
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100d1d6b0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  long lVar13;
  QString local_40;
  undefined1 local_31;
  
  if ((DAT_102318830 != '\0') || (iVar2 = ___cxa_guard_acquire(&DAT_102318830), iVar2 == 0))
  goto LAB_100d1db5d;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("HostOnlyInterface",0x11);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("hostonly",8);
  _DAT_1023187e0 = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  _DAT_1023187e8 = pQVar4;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper("HostInterface",0xd);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("hostonly",8);
  _DAT_1023187f0 = pQVar5;
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  _DAT_1023187f8 = pQVar6;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  pQVar7 = (QArrayData *)QString::fromAscii_helper("InternalNetwork",0xf);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("hostonly",8);
  _DAT_102318800 = pQVar7;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  _DAT_102318808 = pQVar8;
  if (1 < *(int *)pQVar8 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper("NAT",3);
  pQVar10 = (QArrayData *)QString::fromAscii_helper("nat",3);
  DAT_102318810 = pQVar9;
  if (1 < *(int *)pQVar9 + 1U) {
    LOCK();
    *(int *)pQVar9 = *(int *)pQVar9 + 1;
    local_31 = *(int *)pQVar9 != 0;
    UNLOCK();
  }
  DAT_102318818 = pQVar10;
  if (1 < *(int *)pQVar10 + 1U) {
    LOCK();
    *(int *)pQVar10 = *(int *)pQVar10 + 1;
    local_31 = *(int *)pQVar10 != 0;
    UNLOCK();
  }
  pQVar11 = (QArrayData *)QString::fromAscii_helper("BridgedInterface",0x10);
  pQVar12 = (QArrayData *)QString::fromAscii_helper("bridged",7);
  DAT_102318820 = pQVar11;
  if (1 < *(int *)pQVar11 + 1U) {
    LOCK();
    *(int *)pQVar11 = *(int *)pQVar11 + 1;
    local_31 = *(int *)pQVar11 != 0;
    UNLOCK();
  }
  iVar2 = *(int *)pQVar12;
  DAT_102318828 = pQVar12;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar12 = *(int *)pQVar12 + 1;
    local_31 = *(int *)pQVar12 != 0;
    UNLOCK();
    iVar2 = *(int *)pQVar12;
  }
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1d946;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_100d1d946:
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1d974;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100d1d974:
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1d9ab;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_100d1d9ab:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1d9e2;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100d1d9e2:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1da20;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100d1da20:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1da5e;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100d1da5e:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1da94;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100d1da94:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1dacb;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d1dacb:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1db05;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100d1db05:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1db3c;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100d1db3c:
  ___cxa_atexit(FUN_100d20950,0,0x100000000);
  ___cxa_guard_release(&DAT_102318830);
LAB_100d1db5d:
  QDomNode::firstChildElement(&local_40);
  cVar1 = QDomNode::isNull();
  QDomNode::~QDomNode((QDomNode *)&local_40);
  lVar13 = 0;
  if (cVar1 != '\0') {
    QDomNode::firstChildElement(&local_40);
    cVar1 = QDomNode::isNull();
    QDomNode::~QDomNode((QDomNode *)&local_40);
    lVar13 = 1;
    if (cVar1 != '\0') {
      QDomNode::firstChildElement(&local_40);
      cVar1 = QDomNode::isNull();
      QDomNode::~QDomNode((QDomNode *)&local_40);
      lVar13 = 2;
      if (cVar1 != '\0') {
        QDomNode::firstChildElement(&local_40);
        cVar1 = QDomNode::isNull();
        QDomNode::~QDomNode((QDomNode *)&local_40);
        lVar13 = 3;
        if (cVar1 != '\0') {
          QDomNode::firstChildElement(&local_40);
          cVar1 = QDomNode::isNull();
          QDomNode::~QDomNode((QDomNode *)&local_40);
          lVar13 = 4;
          if (cVar1 != '\0') {
            return 0;
          }
        }
      }
    }
  }
  QString::operator=(param_3,(QString *)(&DAT_1023187e8 + lVar13 * 0x10));
  return 1;
}

