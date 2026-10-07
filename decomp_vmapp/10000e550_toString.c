
/* CBaseNode::toString(bool, bool) const */

undefined8 * CBaseNode::toString(bool param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined7 in_register_00000039;
  undefined8 *puVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QTextStream local_40 [16];
  QDomDocument local_30 [15];
  undefined1 local_21;
  
  puVar4 = (undefined8 *)CONCAT71(in_register_00000039,param_1);
  getXml(SUB81(local_30,0),param_2);
  *puVar4 = PTR_shared_null_100ba20d0;
  QTextStream::QTextStream(local_40,puVar4,3);
  QDomNode::save(local_30,local_40,3,1);
  QTextStream::flush();
  iVar2 = QString::indexOf(puVar4,0,0,1);
  if (iVar2 == -1) goto LAB_10000e690;
  FUN_1008e3970("","vm",0,
                "WARNING: problem document was generated contains null symbols - will be patched");
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  sVar3 = _strlen((char *)(local_50 + *(long *)(local_50 + 0x10)));
  FUN_1008e3f20(local_48 + lVar1,sVar3 & 0xffffffff);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10000e64c;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10000e64c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10000e67c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10000e67c:
  QString::replace(puVar4,0,0x20,1);
LAB_10000e690:
  QTextStream::~QTextStream(local_40);
  QDomDocument::~QDomDocument(local_30);
  return puVar4;
}

