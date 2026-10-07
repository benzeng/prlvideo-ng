
QByteArray * FUN_1005ce3d0(QByteArray *param_1)

{
  QDomNode local_38 [8];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QDomNode::firstChild();
  QDomNode::nodeValue();
  QString::toLatin1();
  QByteArray::fromHex(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ce443;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1005ce443:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ce473;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005ce473:
  QDomNode::~QDomNode(local_38);
  return param_1;
}

