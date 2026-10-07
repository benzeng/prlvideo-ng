
/* CBaseNode::getParamNodeValue(QDomElement*, QString const&, QString&, PVE::ParamFieldDataType,
   QString const&) */

undefined1 CBaseNode::getParamNodeValue(void)

{
  char cVar1;
  QString *in_RCX;
  undefined1 uVar2;
  int in_R8D;
  int iVar3;
  QString local_90;
  QDomNode local_88 [8];
  QString local_80;
  QString local_78;
  QDomNode local_70 [8];
  QDomNode local_68 [8];
  QString local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=(in_RCX,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001270b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10001270b:
  QDomNode::namedItem(&local_48);
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    if (in_R8D == 1) {
      QDomNode::toElement();
      QDomElement::attributeNode(&local_80);
      QDomNode::~QDomNode(local_88);
      cVar1 = QDomNode::isNull();
      iVar3 = 2;
      if (cVar1 == '\0') {
        QDomAttr::value();
        QString::operator=(in_RCX,&local_90);
        iVar3 = 1;
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100012874;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
      }
LAB_100012874:
      QDomNode::~QDomNode((QDomNode *)&local_80);
    }
    else if (in_R8D == 3) {
      QDomNode::firstChild();
      QDomNode::toCDATASection();
      QDomNode::~QDomNode(local_70);
      cVar1 = QDomNode::isNull();
      iVar3 = 2;
      if (cVar1 == '\0') {
        QDomCharacterData::data();
        QString::operator=(in_RCX,&local_78);
        iVar3 = 1;
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000127ca;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
      }
LAB_1000127ca:
      QDomNode::~QDomNode(local_68);
    }
    else {
      if (in_R8D != 4) goto LAB_100012926;
      QDomNode::firstChild();
      QDomNode::toText();
      QDomNode::~QDomNode(local_58);
      cVar1 = QDomNode::isNull();
      iVar3 = 2;
      if (cVar1 == '\0') {
        QDomCharacterData::data();
        QString::operator=(in_RCX,&local_60);
        iVar3 = 1;
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100012915;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
LAB_100012915:
      QDomNode::~QDomNode(local_50);
    }
    uVar2 = 1;
    if (iVar3 != 2) goto LAB_100012928;
  }
LAB_100012926:
  uVar2 = 0;
LAB_100012928:
  QDomNode::~QDomNode((QDomNode *)&local_48);
  return uVar2;
}

