
/* CBaseNode::uniteDocuments(QString, QString) */

int __thiscall CBaseNode::uniteDocuments(CBaseNode *this,QString param_1,QString param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = *(QArrayData **)param_1.field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_38 = pQVar1;
  iVar2 = fromString(this,(QTypedArrayData<unsigned_short> *)&local_38,false,(QString *)0x0,
                     (int *)0x0,(int *)0x0);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10000fc91;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10000fc91:
  if (iVar2 == 0) {
    pQVar1 = *(QArrayData **)param_2.field0_0x0;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_40 = pQVar1;
    iVar2 = fromString(this,(QTypedArrayData<unsigned_short> *)&local_40,true,(QString *)0x0,
                       (int *)0x0,(int *)0x0);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) {
          return iVar2;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return iVar2;
}

