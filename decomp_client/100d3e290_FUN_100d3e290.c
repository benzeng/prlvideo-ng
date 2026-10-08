
undefined4 FUN_100d3e290(long param_1,QString *param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  QDomNode local_50 [8];
  QDomNode local_48 [8];
  QArrayData *local_40;
  QDomNode local_38 [8];
  QDomDocument local_30 [15];
  undefined1 local_21;
  
  FUN_100d3df80(param_1,*(undefined8 *)(param_1 + 0x10));
  QString::operator=((QString *)(param_1 + 0x18),param_3);
  QDomDocument::QDomDocument(local_30);
  cVar1 = QDomDocument::setContent((QString *)local_30,param_2,(int *)0x0,(int *)0x0);
  uVar3 = 1;
  if (cVar1 == '\0') goto LAB_100d3e3e2;
  QDomDocument::documentElement();
  QDomElement::tagName();
  iVar2 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                     "ParallelsSavedStates",0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3e358;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d3e358:
  uVar3 = 2;
  if (iVar2 == 0) {
    QDomNode::firstChild();
    cVar1 = QDomNode::isNull();
    uVar3 = 3;
    if (cVar1 == '\0') {
      cVar1 = QDomNode::isElement();
      uVar3 = 2;
      if (cVar1 != '\0') {
        QDomNode::toElement();
        pvVar4 = operator_new(0x58);
        FUN_100d38790(pvVar4);
        *(void **)(param_1 + 0x10) = pvVar4;
        uVar3 = FUN_100d3ab70(pvVar4,local_50);
        QDomNode::~QDomNode(local_50);
      }
    }
    QDomNode::~QDomNode(local_48);
  }
  QDomNode::~QDomNode(local_38);
LAB_100d3e3e2:
  QDomDocument::~QDomDocument(local_30);
  return uVar3;
}

