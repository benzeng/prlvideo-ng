
/* CBaseNode::getXml(bool, bool) const */

QDomDocument * CBaseNode::getXml(bool param_1,bool param_2)

{
  char in_CL;
  char in_DL;
  undefined7 in_register_00000031;
  undefined7 in_register_00000039;
  QDomDocument *this;
  QDomNode local_78 [8];
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QDomNode local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  this = (QDomDocument *)CONCAT71(in_register_00000039,param_1);
  QDomDocument::QDomDocument(this);
  if (in_DL != '\0') {
    local_40 = (QArrayData *)QString::fromAscii_helper("xml",3);
    local_48 = (QArrayData *)QString::fromAscii_helper("version=\"1.0\" encoding=\"UTF-8\"",0x1e);
    QDomDocument::createProcessingInstruction(&local_38,(QString *)this);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10000e257;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10000e257:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10000e287;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10000e287:
    QDomNode::appendChild(local_50);
    QDomNode::~QDomNode(local_50);
    QDomNode::~QDomNode((QDomNode *)&local_38);
  }
  (*(code *)**(undefined8 **)CONCAT71(in_register_00000031,param_2))
            (&local_58,(undefined8 *)CONCAT71(in_register_00000031,param_2),this,in_CL);
  if (in_CL == '\0') {
    local_60 = (QArrayData *)QString::fromAscii_helper("id",2);
    QDomElement::setAttribute(&local_58,(longlong)&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10000e31a;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_10000e31a:
  if (in_DL == '\0') goto LAB_10000e3be;
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("schemaVersion",0xd);
  local_70 = (QArrayData *)QString::fromAscii_helper("1.0",3);
  QDomElement::setAttribute(&local_58,&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10000e38e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10000e38e:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10000e3be;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10000e3be:
  QDomNode::appendChild(local_78);
  QDomNode::~QDomNode(local_78);
  QDomNode::~QDomNode((QDomNode *)&local_58);
  return this;
}

