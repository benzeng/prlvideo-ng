
int FUN_1005b9ce0(long *param_1,QString *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QDomNode local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QDomNode local_78 [8];
  QString local_70;
  QDomNode local_68 [8];
  QString local_60;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QDomElement local_48 [8];
  QDomNode local_40 [15];
  undefined1 local_31;
  
  QDomNode::QDomNode(local_40);
  QDomElement::QDomElement(local_48);
  iVar1 = *(int *)(*param_3 + 4);
  iVar5 = FUN_1005b9950(param_1,param_2);
  if (iVar5 < 0) goto LAB_1005ba183;
  QMutex::lock();
  QDomNode::firstChild();
  QDomNode::operator=(local_40,local_50);
  QDomNode::~QDomNode(local_50);
  while (cVar4 = QDomNode::isNull(), cVar4 == '\0') {
    cVar4 = QDomNode::isElement();
    if (cVar4 != '\0') {
      QDomNode::toElement();
      QDomElement::operator=(local_48,(QDomElement *)local_58);
      QDomNode::~QDomNode(local_58);
      QDomElement::tagName();
      cVar4 = operator==(&local_60,param_2);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b9e29;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1005b9e29:
      if (cVar4 != '\0') {
        if (iVar1 == 0) {
          QDomNode::removeChild(local_68);
          QDomNode::~QDomNode(local_68);
        }
        else {
          QDomNode::firstChild();
          QDomNode::toText();
          QDomNode::setNodeValue(&local_70);
          QDomNode::~QDomNode((QDomNode *)&local_70);
          QDomNode::~QDomNode(local_78);
        }
        pcVar6 = "updated to";
        if (iVar1 == 0) {
          pcVar6 = "removed";
        }
        QString::toUtf8();
        pQVar3 = local_80;
        lVar2 = *(long *)(local_80 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"SetUserParameter: existing parameter  %s \'%s\'=\'%s\'",pcVar6,
                      pQVar3 + lVar2,local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005ba13a;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_1005ba13a:
        if (*(int *)local_80 == -1) goto LAB_1005ba16a;
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ba16a;
        }
        QArrayData::deallocate(local_80,1,8);
        goto LAB_1005ba16a;
      }
    }
    QDomNode::nextSibling();
    QDomNode::operator=(local_40,local_90);
    QDomNode::~QDomNode(local_90);
  }
  if (iVar1 == 0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"SetUserParameter: parameter \'%s\' was not removed",
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba16a;
      }
      QArrayData::deallocate(local_98,1,8);
    }
  }
  else {
    FUN_1005ba3b0(param_1,param_2,param_3,param_1 + 5);
    QString::toUtf8();
    lVar2 = *(long *)(local_a0 + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"SetUserParameter: adding new value \'%s\'=\'%s\'",local_a0 + lVar2,
                  local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b9f36;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_1005b9f36:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba16a;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
  }
LAB_1005ba16a:
  QMutex::unlock();
  (**(code **)(*param_1 + 0x18))(param_1);
LAB_1005ba183:
  QDomNode::~QDomNode((QDomNode *)local_48);
  QDomNode::~QDomNode(local_40);
  return iVar5;
}

