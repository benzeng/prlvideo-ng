
int FUN_1004312d0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  QArrayData *local_240;
  CVmConfiguration local_238 [16];
  undefined1 local_228 [232];
  QArrayData *local_140;
  CVmConfiguration local_138 [16];
  undefined1 local_128 [232];
  QString local_40;
  undefined1 local_31;
  
  if ((((param_1 == 0) ||
       (plVar3 = (long *)___dynamic_cast(param_1,PTR_typeinfo_1021e1738,PTR_typeinfo_1021e16e0),
       param_3 == 0)) || (param_2 == 0)) || (plVar3 == (long *)0x0)) {
    *(undefined4 *)(param_1 + 0x20) = 0x80000009;
    return -0x7ffffff7;
  }
  (**(code **)(*plVar3 + 0xa0))(plVar3);
  CVmConfiguration::CVmConfiguration(local_138);
  CBaseNode::toString(SUB81(&local_140,0),(bool)((char)param_2 + '\x10'));
  iVar2 = CBaseNode::fromString
                    ((QTypedArrayData<unsigned_short> *)local_128,SUB81(&local_140,0),(QString *)0x0
                     ,(int *)0x0,(int *)0x0);
  *(int *)(param_1 + 0x20) = iVar2;
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 == 0) {
LAB_1004313ab:
      QArrayData::deallocate(local_140,2,8);
    }
    else {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1004313ab;
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 < 0) goto LAB_1004314ef;
  CVmConfiguration::CVmConfiguration(local_238);
  CBaseNode::toString(SUB81(&local_240,0),(bool)((char)param_3 + '\x10'));
  iVar2 = CBaseNode::fromString
                    ((QTypedArrayData<unsigned_short> *)local_228,SUB81(&local_240,0),(QString *)0x0
                     ,(int *)0x0,(int *)0x0);
  *(int *)(param_1 + 0x20) = iVar2;
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 == 0) {
LAB_100431433:
      QArrayData::deallocate(local_240,2,8);
    }
    else {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100431433;
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (-1 < iVar2) {
    cVar1 = CVmConfiguration::merge(plVar3,local_138,local_238,param_4);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x80000515;
      iVar2 = -0x7ffffaeb;
    }
    else {
      if (*(undefined **)(param_1 + 0x30) != PTR_shared_null_1021e1288) {
        local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        QString::operator=((QString *)(param_1 + 0x30),&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004314c3;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
LAB_1004314c3:
      iVar2 = 0;
    }
  }
  CVmConfiguration::~CVmConfiguration(local_238);
LAB_1004314ef:
  CVmConfiguration::~CVmConfiguration(local_138);
  return iVar2;
}

