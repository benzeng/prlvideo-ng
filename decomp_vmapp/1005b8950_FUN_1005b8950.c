
undefined8 FUN_1005b8950(long *param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  QArrayData *local_188;
  QDomNode local_180 [8];
  QString local_178;
  QString local_170;
  QDomNode local_168 [8];
  QDomNode local_160 [8];
  QString local_158;
  QString local_150;
  QString local_148;
  QArrayData *local_140;
  QDomNode local_138 [8];
  QDomNode local_130 [8];
  QArrayData *local_128;
  QArrayData *local_120;
  QDomElement local_118 [8];
  QDomElement local_110 [8];
  QArrayData *local_108;
  QDomNode local_100 [8];
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QDomNode local_d8 [8];
  QDomNode local_d0 [8];
  QDomNode local_c8 [8];
  undefined8 ***local_c0;
  undefined8 ***local_b8;
  undefined8 local_b0;
  QDomElement local_a8 [8];
  QDomElement local_a0 [8];
  QDomElement local_98 [8];
  QDomElement local_90 [8];
  QDomElement local_88 [8];
  QDomNode local_80 [8];
  QDomNodeList local_78 [15];
  undefined1 local_69;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QDomNode::childNodes();
  QDomNode::QDomNode(local_80);
  QDomElement::QDomElement(local_88);
  QDomElement::QDomElement(local_90);
  QDomElement::QDomElement(local_98);
  QDomElement::QDomElement(local_a0);
  QDomElement::QDomElement(local_a8);
  local_c0 = &local_c0;
  local_b0 = 0;
  local_b8 = local_c0;
  QMutex::lock();
  for (iVar6 = 0; iVar5 = QDomNodeList::length(), iVar6 < iVar5; iVar6 = iVar6 + 1) {
    QDomNode::clear();
    QDomNode::clear();
    QDomNodeList::item((int)local_d0);
    QDomNode::firstChild();
    QDomNode::operator=(local_80,local_c8);
    QDomNode::~QDomNode(local_c8);
    QDomNode::~QDomNode(local_d0);
    while (cVar4 = QDomNode::isNull(), cVar4 == '\0') {
      cVar4 = QDomNode::isElement();
      if (cVar4 != '\0') {
        QDomNode::toElement();
        QDomElement::operator=(local_a8,(QDomElement *)local_d8);
        QDomNode::~QDomNode(local_d8);
        QDomElement::tagName();
        local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("GUID",4)
        ;
        cVar4 = operator==(&local_e0,&local_e8);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_69 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005b8b79;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_1005b8b79:
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_69 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005b8baf;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_1005b8baf:
        if (cVar4 == '\0') {
          QDomElement::tagName();
          local_f8.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ParentGUID",10);
          cVar4 = operator==(&local_f0,&local_f8);
          if (*(int *)local_f8.field0_0x0 != -1) {
            if (*(int *)local_f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
              local_69 = *(int *)local_f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_69) goto LAB_1005b8c46;
            }
            QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
          }
LAB_1005b8c46:
          if (*(int *)local_f0.field0_0x0 != -1) {
            if (*(int *)local_f0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
              local_69 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_69) goto LAB_1005b8c7c;
            }
            QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
          }
LAB_1005b8c7c:
          if (cVar4 != '\0') {
            QDomElement::operator=(local_a0,local_a8);
          }
        }
        else {
          QDomElement::operator=(local_98,local_a8);
        }
      }
      QDomNode::nextSibling();
      QDomNode::operator=(local_80,local_100);
      QDomNode::~QDomNode(local_100);
    }
    cVar4 = QDomNode::isNull();
    if ((cVar4 == '\0') && (cVar4 = QDomNode::isNull(), cVar4 == '\0')) {
      QDomElement::text();
      FUN_1007d6920(local_48,&local_108);
      iVar5 = FUN_1007ea6f0(local_48,param_2);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_69 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005b8d65;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1005b8d65:
      if (iVar5 == 0) {
        QDomElement::QDomElement(local_118,local_98);
        QDomElement::QDomElement(local_110,local_a0);
        FUN_1005d5230(&local_c0,local_118);
        QDomNode::~QDomNode((QDomNode *)local_110);
        QDomNode::~QDomNode((QDomNode *)local_118);
      }
    }
    cVar4 = QDomNode::isNull();
    if (cVar4 != '\0') {
      QDomElement::text();
      FUN_1007d6920(local_58,&local_120);
      iVar5 = FUN_1007ea6f0(local_58,param_2);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_69 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005b8e3e;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1005b8e3e:
      if (iVar5 == 0) {
        QDomElement::operator=(local_88,local_98);
        QDomElement::operator=(local_90,local_a0);
      }
    }
  }
  cVar4 = QDomNode::isNull();
  if (cVar4 != '\0') {
    uVar10 = 0x80019006;
    FUN_1008e3970("","vdisk",0,"Invalid parameters, remove = 0");
    goto LAB_1005b937f;
  }
  if ((undefined8 ****)local_b8 != &local_c0) {
    plVar1 = param_1 + 0xf;
    ppppuVar9 = (undefined8 ****)local_b8;
    do {
      QDomElement::text();
      FUN_1007d6920(local_68,&local_128);
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_69 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005b8f42;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1005b8f42:
      if (param_3 == '\0') {
        (**(code **)(*param_1 + 0x78))(param_1,local_68,0,param_4);
      }
      else {
        QDomNode::firstChild();
        QDomNode::toText();
        QDomElement::text();
        QDomNode::setNodeValue((QString *)local_130);
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_69 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005b8fc7;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1005b8fc7:
        QDomNode::~QDomNode(local_130);
        QDomNode::~QDomNode(local_138);
        QDomElement::text();
        plVar3 = (long *)*plVar1;
        plVar8 = plVar1;
        if ((long *)*plVar1 == (long *)0x0) {
LAB_1005b907c:
          plVar8 = plVar1;
        }
        else {
          do {
            while (plVar7 = plVar3, cVar4 = operator<((QString *)(plVar7 + 4),&local_148),
                  cVar4 != '\0') {
              plVar3 = (long *)plVar7[1];
              if ((long *)plVar7[1] == (long *)0x0) goto LAB_1005b9063;
            }
            plVar8 = plVar7;
            plVar3 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
LAB_1005b9063:
          if ((plVar8 == plVar1) ||
             (cVar4 = operator<(&local_148,(QString *)(plVar8 + 4)), cVar4 != '\0'))
          goto LAB_1005b907c;
        }
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_69 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005b90b9;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
LAB_1005b90b9:
        if (plVar8 != plVar1) {
          QDomElement::text();
          QString::operator=((QString *)(plVar8 + 5),&local_150);
          if (*(int *)local_150.field0_0x0 != -1) {
            if (*(int *)local_150.field0_0x0 != 0) {
              LOCK();
              *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
              local_69 = *(int *)local_150.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_69) goto LAB_1005b9120;
            }
            QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
          }
        }
      }
LAB_1005b9120:
      ppppuVar9 = (undefined8 ****)ppppuVar9[1];
    } while (ppppuVar9 != &local_c0);
  }
  FUN_1007d6a70(&local_158,param_2);
  plVar1 = param_1 + 0xf;
  if ((long *)param_1[0xf] == (long *)0x0) {
LAB_1005b91c9:
    plVar8 = plVar1;
  }
  else {
    plVar3 = (long *)param_1[0xf];
    plVar8 = plVar1;
    do {
      while (plVar7 = plVar3, cVar4 = operator<((QString *)(plVar7 + 4),&local_158), cVar4 != '\0')
      {
        plVar3 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) goto LAB_1005b91b0;
      }
      plVar8 = plVar7;
      plVar3 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
LAB_1005b91b0:
    if ((plVar8 == plVar1) || (cVar4 = operator<(&local_158,(QString *)(plVar8 + 4)), cVar4 != '\0')
       ) goto LAB_1005b91c9;
  }
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_69 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1005b9202;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_1005b9202:
  iVar6 = FUN_1007ea6f0(param_2,&DAT_1011bc8b8);
  if (iVar6 != 0) {
    QDomNode::parentNode();
    QDomNode::removeChild(local_160);
    QDomNode::~QDomNode(local_160);
    QDomNode::~QDomNode(local_168);
    uVar10 = 0;
    if (plVar8 != plVar1) {
      FUN_1005d6130(param_1 + 0xe,plVar8);
    }
    goto LAB_1005b937f;
  }
  if (plVar8 != plVar1) {
    FUN_1007d6a70(&local_170,param_4);
    QString::operator=((QString *)(plVar8 + 5),&local_170);
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_69 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1005b92dc;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
  }
LAB_1005b92dc:
  QDomNode::firstChild();
  QDomNode::toText();
  FUN_1007d6a70(&local_188,param_4);
  QDomNode::setNodeValue(&local_178);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_69 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1005b9364;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1005b9364:
  QDomNode::~QDomNode((QDomNode *)&local_178);
  uVar10 = 0;
  QDomNode::~QDomNode(local_180);
LAB_1005b937f:
  QMutex::unlock();
  FUN_1005d56e0(&local_c0);
  QDomNode::~QDomNode((QDomNode *)local_a8);
  QDomNode::~QDomNode((QDomNode *)local_a0);
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  QDomNode::~QDomNode((QDomNode *)local_98);
  QDomNode::~QDomNode((QDomNode *)local_90);
  QDomNode::~QDomNode((QDomNode *)local_88);
  QDomNode::~QDomNode(local_80);
  QDomNodeList::~QDomNodeList(local_78);
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

