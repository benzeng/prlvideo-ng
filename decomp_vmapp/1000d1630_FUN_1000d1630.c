
bool FUN_1000d1630(undefined8 param_1,bool param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  QArrayData *local_58;
  QDomElement local_50 [12];
  int local_44;
  QArrayData *local_40;
  QDomElement local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  QDomDocument::QDomDocument((QDomDocument *)&local_30);
  QDomElement::QDomElement(local_38);
  puVar1 = PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = QDomDocument::setContent(&local_30,param_2,(QString *)0x1,(int *)&local_40,&local_44);
  if (cVar2 == '\0') {
    bVar4 = false;
  }
  else {
    QDomDocument::documentElement();
    QDomElement::operator=(local_38,local_50);
    QDomNode::~QDomNode((QDomNode *)local_50);
    local_58 = (QArrayData *)puVar1;
    iVar3 = (**(code **)(*param_3 + 0x90))(param_3,local_38,&local_58,0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000d16f3;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000d16f3:
    bVar4 = iVar3 == 0;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d172c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000d172c:
  QDomNode::~QDomNode((QDomNode *)local_38);
  QDomDocument::~QDomDocument((QDomDocument *)&local_30);
  return bVar4;
}

