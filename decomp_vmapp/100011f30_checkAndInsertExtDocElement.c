
/* CBaseNode::checkAndInsertExtDocElement(QDomElement, int&) const */

void __thiscall
CBaseNode::checkAndInsertExtDocElement(CBaseNode *this,undefined8 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  QDomElement *pQVar5;
  long lVar6;
  QDomElement local_60 [8];
  QDomElement local_58 [8];
  QDomDocument local_50 [8];
  QDomNode local_48 [8];
  QDomNode local_40 [8];
  QDomNode local_38 [8];
  
  lVar2 = *(long *)(*(long *)(this + 0x88) + 0x10);
  if (lVar2 == 0) {
    iVar1 = *param_3;
  }
  else {
    iVar1 = *param_3;
    do {
      lVar6 = 0;
      do {
        while (lVar3 = lVar2, iVar4 = *(int *)(lVar3 + 0x18), iVar1 <= iVar4) {
          lVar2 = *(long *)(lVar3 + 8);
          lVar6 = lVar3;
          if (*(long *)(lVar3 + 8) == 0) goto LAB_100011fbc;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
      } while (*(long *)(lVar3 + 0x10) != 0);
      if (lVar6 == 0) break;
      iVar4 = *(int *)(lVar6 + 0x18);
LAB_100011fbc:
      if (iVar1 < iVar4) break;
      QDomNode::ownerDocument();
      QDomElement::QDomElement(local_60);
      if (*(long *)(*(long *)(this + 0x88) + 0x10) == 0) {
LAB_10001203f:
        lVar3 = 0;
      }
      else {
        lVar2 = *(long *)(*(long *)(this + 0x88) + 0x10);
        lVar6 = 0;
        do {
          while (lVar3 = lVar2, iVar1 = *(int *)(lVar3 + 0x18), *param_3 <= iVar1) {
            lVar2 = *(long *)(lVar3 + 8);
            lVar6 = lVar3;
            if (*(long *)(lVar3 + 8) == 0) goto LAB_10001203b;
          }
          lVar2 = *(long *)(lVar3 + 0x10);
        } while (*(long *)(lVar3 + 0x10) != 0);
        if (lVar6 == 0) goto LAB_10001203f;
        iVar1 = *(int *)(lVar6 + 0x18);
        lVar3 = lVar6;
LAB_10001203b:
        if (*param_3 < iVar1) goto LAB_10001203f;
      }
      pQVar5 = (QDomElement *)(lVar3 + 0x20);
      if (lVar3 == 0) {
        pQVar5 = local_60;
      }
      QDomElement::QDomElement(local_58,pQVar5);
      QDomDocument::importNode(local_48,SUB81(local_50,0));
      QDomNode::toElement();
      QDomNode::appendChild(local_38);
      QDomNode::~QDomNode(local_38);
      QDomNode::~QDomNode(local_40);
      QDomNode::~QDomNode(local_48);
      QDomNode::~QDomNode((QDomNode *)local_58);
      QDomNode::~QDomNode((QDomNode *)local_60);
      QDomDocument::~QDomDocument(local_50);
      iVar1 = *param_3 + 1;
      *param_3 = iVar1;
      lVar2 = *(long *)(*(long *)(this + 0x88) + 0x10);
    } while (lVar2 != 0);
  }
  *param_3 = iVar1 + 1;
  return;
}

