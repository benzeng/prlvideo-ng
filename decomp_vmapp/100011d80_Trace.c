
/* CBaseNode::Trace() const */

void __thiscall CBaseNode::Trace(CBaseNode *this)

{
  long lVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (*(int *)(*(long *)(this + 0x30) + 4) != 0) {
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"Xml model error: %s!\n",local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100011e01;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100011e01:
  if (*(int *)(*(long *)(this + 0x38) + 8) < *(int *)(*(long *)(this + 0x38) + 0xc)) {
    lVar1 = 0;
    do {
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"Xml model warning: %s!\n",local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) goto LAB_100011e8e;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_100011e8e:
      lVar1 = lVar1 + 1;
    } while (lVar1 < (long)*(int *)(*(long *)(this + 0x38) + 0xc) -
                     (long)*(int *)(*(long *)(this + 0x38) + 8));
  }
  return;
}

