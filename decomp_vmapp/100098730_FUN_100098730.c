
undefined1 FUN_100098730(long *param_1,bool param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  undefined1 uVar7;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QDomNode local_60 [8];
  QString local_58;
  QString local_50;
  int local_44;
  QArrayData *local_40;
  QDomDocument local_38 [15];
  undefined1 local_29;
  
  QDomDocument::QDomDocument(local_38);
  puVar1 = PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = QDomDocument::setContent
                    ((QString *)local_38,param_2,(QString *)0x1,(int *)&local_40,&local_44);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    QDomDocument::documentElement();
    QDomNode::firstChild();
    QDomNode::toElement();
    QDomNode::~QDomNode(local_60);
    local_68 = (QArrayData *)puVar1;
    iVar3 = (**(code **)(*param_1 + 0x98))(param_1,&local_58,&local_68,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100098802;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100098802:
    if (iVar3 == 0) {
      local_78 = (QArrayData *)QString::fromAscii_helper("id",2);
      local_80 = (QArrayData *)QString::fromAscii_helper("-1",2);
      QDomElement::attribute(&local_70,&local_58);
      uVar4 = QString::toInt((bool *)&local_70,0);
      *(undefined4 *)(param_1 + 0xd) = uVar4;
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_29 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000988ee;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1000988ee:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10009891e;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10009891e:
      uVar7 = 1;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100098a66;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else {
      local_88 = (QArrayData *)puVar1;
      iVar3 = (**(code **)(*param_1 + 0x98))(param_1,&local_50,&local_88,0);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100098855;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100098855:
      if (iVar3 == 0) {
        pQVar5 = (QArrayData *)QString::fromAscii_helper("id",2);
        pQVar6 = (QArrayData *)QString::fromAscii_helper("-1",2);
        QDomElement::attribute(&local_90,&local_50);
        uVar4 = QString::toInt((bool *)&local_90,0);
        *(undefined4 *)(param_1 + 0xd) = uVar4;
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_29 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000989f8;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1000989f8:
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_29 = *(int *)pQVar6 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100098a2e;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100098a2e:
        uVar7 = 1;
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_29 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100098a66;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
      }
      else {
        uVar7 = 0;
      }
    }
LAB_100098a66:
    QDomNode::~QDomNode((QDomNode *)&local_58);
    QDomNode::~QDomNode((QDomNode *)&local_50);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100098aa8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100098aa8:
  QDomDocument::~QDomDocument(local_38);
  return uVar7;
}

