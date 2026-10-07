
/* CBaseNode::fromString(QString, QString, bool, QString*, int*, int*) */

undefined4 __thiscall
CBaseNode::fromString
          (CBaseNode *this,QString param_1,QString param_2,bool param_3,QString *param_4,
          int *param_5,int *param_6)

{
  QArrayData *pQVar1;
  undefined4 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = *(QArrayData **)param_1.field0_0x0;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  pQVar1 = *(QArrayData **)param_2.field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_30 = pQVar1;
  uVar2 = fromString(this,(QTypedArrayData<unsigned_short> *)&local_28,
                     (QTypedArrayData<unsigned_short> *)&local_30,param_3,(QFile *)0x0,param_4,
                     param_5,param_6);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10000f76f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10000f76f:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar2;
}

