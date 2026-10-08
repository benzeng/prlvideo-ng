
undefined4 FUN_100d3d3a0(QString *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QDomNode local_60 [8];
  QDomNode local_58 [8];
  QArrayData *local_50;
  QDomNode local_48 [8];
  QString local_40 [2];
  QDomDocument local_30 [15];
  undefined1 local_21;
  
  FUN_100d3df80(param_1,param_1[2].field0_0x0);
  QString::operator=(param_1,param_2);
  QDomDocument::QDomDocument(local_30);
  QFile::QFile((QFile *)local_40,param_2);
  uVar3 = 1;
  cVar1 = QFile::open(local_40,1);
  if (cVar1 == '\0') goto LAB_100d3d525;
  cVar1 = QDomDocument::setContent((QIODevice *)local_30,local_40,(int *)0x0,(int *)0x0);
  if (cVar1 == '\0') {
    (**(code **)(local_40[0].field0_0x0 + 0x70))(local_40);
    goto LAB_100d3d525;
  }
  (**(code **)(local_40[0].field0_0x0 + 0x70))(local_40);
  QDomDocument::documentElement();
  QDomElement::tagName();
  iVar2 = QString::compare_helper
                    (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),
                     "ParallelsSavedStates",0xffffffff,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3d493;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d3d493:
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
        pQVar4 = operator_new(0x58);
        FUN_100d38790(pQVar4);
        param_1[2].field0_0x0 = pQVar4;
        uVar3 = FUN_100d3ab70(pQVar4,local_60);
        QDomNode::~QDomNode(local_60);
      }
    }
    QDomNode::~QDomNode(local_58);
  }
  QDomNode::~QDomNode(local_48);
LAB_100d3d525:
  QFile::~QFile((QFile *)local_40);
  QDomDocument::~QDomDocument(local_30);
  return uVar3;
}

