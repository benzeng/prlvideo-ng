
int FUN_1005d2990(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  QDomNode local_80 [8];
  QDomNode local_78 [8];
  QDomNode local_70 [8];
  QArrayData *local_68;
  QString local_60;
  QDomNode local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("BackupLocations",0xf);
  iVar2 = FUN_1005b9950(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d2a02;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d2a02:
  if (iVar2 < 0) {
    return iVar2;
  }
  QMutex::lock();
  local_50 = (QArrayData *)QString::fromAscii_helper("BackupLocations",0xf);
  QDomNode::firstChildElement(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d2a7e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d2a7e:
  cVar1 = QDomNode::isNull();
  if (cVar1 == '\0') {
    QDomNode::removeChild(local_58);
    QDomNode::~QDomNode(local_58);
  }
  if (param_2 == (long *)0x0) goto LAB_1005d2be3;
  local_68 = (QArrayData *)QString::fromAscii_helper("BackupLocations",0xf);
  QDomDocument::createElement(&local_60);
  QDomElement::operator=((QDomElement *)&local_48,(QDomElement *)&local_60);
  QDomNode::~QDomNode((QDomNode *)&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d2b22;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d2b22:
  lVar5 = *param_2;
  if (0 < *(int *)(lVar5 + 4)) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      lVar3 = *(long *)(lVar5 + 0x10) + lVar5;
      if (*(int *)(lVar4 + 0x18 + lVar3) != -1) {
        FUN_1005d2d60(local_70,param_1,lVar3 + lVar4);
        QDomNode::appendChild(local_78);
        QDomNode::~QDomNode(local_78);
        QDomNode::~QDomNode(local_70);
        lVar5 = *param_2;
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar6 < *(int *)(lVar5 + 4));
  }
  QDomNode::appendChild(local_80);
  QDomNode::~QDomNode(local_80);
LAB_1005d2be3:
  QMutex::unlock();
  (**(code **)(*param_1 + 0x18))();
  QDomNode::~QDomNode((QDomNode *)&local_48);
  return 0;
}

