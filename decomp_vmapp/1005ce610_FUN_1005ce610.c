
undefined8 FUN_1005ce610(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  QDomNode local_58 [8];
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  FUN_1007d6a70(&local_40,&DAT_1011bc8b8);
  plVar1 = (long *)(param_1 + 0x78);
  if (*(long **)(param_1 + 0x78) == (long *)0x0) {
LAB_1005ce6ba:
    plVar5 = plVar1;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x78);
    plVar5 = plVar1;
    do {
      while (plVar4 = plVar2, cVar3 = operator<((QString *)(plVar4 + 4),&local_40), cVar3 != '\0') {
        plVar2 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) goto LAB_1005ce6a0;
      }
      plVar5 = plVar4;
      plVar2 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
LAB_1005ce6a0:
    if ((plVar5 == plVar1) || (cVar3 = operator<(&local_40,(QString *)(plVar5 + 4)), cVar3 != '\0'))
    goto LAB_1005ce6ba;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce6ed;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005ce6ed:
  uVar6 = 0x80021006;
  if (plVar5 != plVar1) {
    FUN_1007d6a70(&local_48,param_2);
    QString::operator=((QString *)(plVar5 + 5),&local_48);
    QDomNode::firstChild();
    QDomNode::toText();
    QDomNode::setNodeValue(&local_50);
    QDomNode::~QDomNode((QDomNode *)&local_50);
    QDomNode::~QDomNode(local_58);
    uVar6 = 0;
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ce788;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1005ce788:
  QMutex::unlock();
  return uVar6;
}

