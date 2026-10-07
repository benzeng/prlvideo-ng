
/* CBaseNode::fromString(QString, bool, QString*, int*, int*) */

undefined4 __thiscall
CBaseNode::fromString
          (CBaseNode *this,QString param_1,bool param_2,QString *param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = *(QArrayData **)param_1.field0_0x0;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper("",0);
  local_48 = pQVar2;
  uVar1 = fromString(this,(QTypedArrayData<unsigned_short> *)&local_40,
                     (QTypedArrayData<unsigned_short> *)&local_48,param_2,(QFile *)0x0,param_3,
                     param_4,param_5);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000e820;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10000e820:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar1;
}

