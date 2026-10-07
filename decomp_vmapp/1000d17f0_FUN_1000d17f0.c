
undefined8 FUN_1000d17f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  QDomNode local_58 [8];
  QTextStream local_50 [16];
  QDomNode local_40 [8];
  QArrayData *local_38;
  QString local_30;
  QDomDocument local_28 [15];
  undefined1 local_19;
  
  if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x110) == 0) {
    return 0;
  }
  plVar1 = (long *)CVmConfiguration::getVmSettings();
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  QDomDocument::QDomDocument(local_28);
  local_38 = (QArrayData *)QString::fromAscii_helper("ParallelsVirtualMachine",0x17);
  QDomDocument::createElement(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000d1885;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000d1885:
  QDomNode::appendChild(local_40);
  QDomNode::~QDomNode(local_40);
  QString::truncate((int)param_2);
  QTextStream::QTextStream(local_50,param_2,3);
  (**(code **)(*plVar1 + 0x78))(local_58,plVar1,local_28,0);
  QDomNode::save(local_58,local_50,3,1);
  QDomNode::~QDomNode(local_58);
  QTextStream::flush();
  QTextStream::~QTextStream(local_50);
  QDomNode::~QDomNode((QDomNode *)&local_30);
  QDomDocument::~QDomDocument(local_28);
  return 1;
}

