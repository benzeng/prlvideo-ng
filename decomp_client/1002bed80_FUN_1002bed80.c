
undefined8 FUN_1002bed80(long param_1,long param_2)

{
  long lVar1;
  QArrayData *local_1e0;
  QStringList local_1d8 [2];
  undefined1 local_1c8 [192];
  QArrayData *local_108;
  CVmProtection local_100 [16];
  undefined1 local_f0 [199];
  undefined1 local_29;
  
  if (param_1 == 0) {
    return 0x80000009;
  }
  lVar1 = ___dynamic_cast(param_1,PTR_typeinfo_1021e1738,PTR_typeinfo_1021e1690);
  if (param_2 == 0) {
    return 0x80000009;
  }
  if (lVar1 == 0) {
    return 0x80000009;
  }
  CVmProtection::CVmProtection(local_100);
  CBaseNode::toString(SUB81(&local_108,0),(bool)((char)lVar1 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_f0,SUB81(&local_108,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bee4a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1002bee4a:
  CVmProtection::CVmProtection((CVmProtection *)local_1d8);
  CBaseNode::toString(SUB81(&local_1e0,0),(bool)((char)param_2 + '\x10'));
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_1c8,SUB81(&local_1e0,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_29 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002beec0;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1002beec0:
  CVmProtection::diff(local_100,local_1d8);
  CVmProtection::~CVmProtection((CVmProtection *)local_1d8);
  CVmProtection::~CVmProtection(local_100);
  return 0;
}

