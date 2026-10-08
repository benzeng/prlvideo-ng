
undefined8 FUN_1003ae690(long param_1,long param_2)

{
  long lVar1;
  QArrayData *local_1a0;
  QStringList local_198 [2];
  undefined1 local_188 [160];
  QArrayData *local_e8;
  BootingOrder local_e0 [16];
  undefined1 local_d0 [167];
  undefined1 local_29;
  
  if (param_1 == 0) {
    return 0x80000009;
  }
  lVar1 = ___dynamic_cast(param_1,PTR_typeinfo_1021e1738,PTR_typeinfo_1021e1660);
  if (param_2 == 0) {
    return 0x80000009;
  }
  if (lVar1 == 0) {
    return 0x80000009;
  }
  BootingOrder::BootingOrder(local_e0);
  CBaseNode::toString(SUB81(&local_e8,0),(bool)((char)lVar1 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_d0,SUB81(&local_e8,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ae75a;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1003ae75a:
  BootingOrder::BootingOrder((BootingOrder *)local_198);
  CBaseNode::toString(SUB81(&local_1a0,0),(bool)((char)param_2 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_188,SUB81(&local_1a0,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_29 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ae7d0;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1003ae7d0:
  BootingOrder::diff(local_e0,local_198);
  BootingOrder::~BootingOrder((BootingOrder *)local_198);
  BootingOrder::~BootingOrder(local_e0);
  return 0;
}

