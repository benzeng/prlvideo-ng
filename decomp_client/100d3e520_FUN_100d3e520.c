
undefined8 FUN_100d3e520(long param_1,QIODevice *param_2,undefined1 param_3)

{
  char cVar1;
  QTextStream *pQVar2;
  QDomNode local_70 [8];
  QDomElement local_68 [8];
  QDomElement local_60 [8];
  QTextStream local_58 [16];
  QDomNode local_48 [8];
  QArrayData *local_40;
  QString local_38;
  QDomDocument local_30 [15];
  undefined1 local_21;
  
  QDomDocument::QDomDocument(local_30);
  local_40 = (QArrayData *)QString::fromAscii_helper("ParallelsSavedStates",0x14);
  QDomDocument::createElement(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3e595;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d3e595:
  QDomNode::appendChild(local_48);
  QDomNode::~QDomNode(local_48);
  QTextStream::QTextStream(local_58,param_2);
  pQVar2 = (QTextStream *)
           QTextStream::operator<<(local_58,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  endl(pQVar2);
  QDomElement::QDomElement(local_60);
  FUN_100d390a0(local_68,*(undefined8 *)(param_1 + 0x10),local_30,param_3);
  QDomElement::operator=(local_60,local_68);
  QDomNode::~QDomNode((QDomNode *)local_68);
  cVar1 = QDomNode::hasChildNodes();
  if (cVar1 != '\0') {
    QDomNode::appendChild(local_70);
    QDomNode::~QDomNode(local_70);
  }
  QDomNode::save(local_30,local_58,4,1);
  QTextStream::flush();
  QDomNode::~QDomNode((QDomNode *)local_60);
  QTextStream::~QTextStream(local_58);
  QDomNode::~QDomNode((QDomNode *)&local_38);
  QDomDocument::~QDomDocument(local_30);
  return 0;
}

