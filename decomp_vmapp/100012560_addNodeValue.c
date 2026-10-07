
/* CBaseNode::addNodeValue(QDomDocument*, QDomElement*, QString const&, QString const&,
   PVE::ParamFieldDataType, QString const&) */

void CBaseNode::addNodeValue(void)

{
  int in_R9D;
  QString *in_stack_00000008;
  QDomNode local_60 [8];
  QDomNode local_58 [8];
  QString local_50;
  QDomNode local_48 [8];
  QString local_40;
  QString local_38;
  
  QDomDocument::createElement(&local_38);
  if (in_R9D == 1) {
    QDomElement::setAttribute(&local_38,in_stack_00000008);
  }
  else if (in_R9D == 3) {
    QDomDocument::createCDATASection(&local_50);
    QDomNode::appendChild(local_58);
    QDomNode::~QDomNode(local_58);
    QDomNode::~QDomNode((QDomNode *)&local_50);
  }
  else if (in_R9D == 4) {
    QDomDocument::createTextNode(&local_40);
    QDomNode::appendChild(local_48);
    QDomNode::~QDomNode(local_48);
    QDomNode::~QDomNode((QDomNode *)&local_40);
  }
  QDomNode::appendChild(local_60);
  QDomNode::~QDomNode(local_60);
  QDomNode::~QDomNode((QDomNode *)&local_38);
  return;
}

