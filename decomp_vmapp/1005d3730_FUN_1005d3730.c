
void FUN_1005d3730(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  QDomNode local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QDomDocument::createElement(&local_40);
  if (*(int *)(*param_2 + 8) < *(int *)(*param_2 + 0xc)) {
    lVar1 = 0;
    do {
      local_48 = (QArrayData *)QString::fromAscii_helper("File",4);
      FUN_1005ba3b0(param_1,&local_48,*param_2 + 0x10 + (*(int *)(*param_2 + 8) + lVar1) * 8,
                    &local_40,param_5,param_6,param_4);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d37e2;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1005d37e2:
      lVar1 = lVar1 + 1;
    } while (lVar1 < (long)*(int *)(*param_2 + 0xc) - (long)*(int *)(*param_2 + 8));
  }
  QDomNode::appendChild(local_50);
  QDomNode::~QDomNode(local_50);
  QDomNode::~QDomNode((QDomNode *)&local_40);
  return;
}

