
undefined8 FUN_100016080(long param_1,long param_2)

{
  long lVar1;
  QArrayData *local_230;
  CVmConfiguration local_228 [16];
  CBaseNode local_218 [232];
  QArrayData *local_130;
  CVmConfiguration local_128 [16];
  CBaseNode local_118 [239];
  undefined1 local_29;
  
  if (param_1 == 0) {
    return 0x80000009;
  }
  lVar1 = ___dynamic_cast(param_1,&CBaseNode::typeinfo,PTR_typeinfo_100ba2218);
  if (param_2 == 0) {
    return 0x80000009;
  }
  if (lVar1 == 0) {
    return 0x80000009;
  }
  CVmConfiguration::CVmConfiguration(local_128);
  CBaseNode::toString(SUB81(&local_130,0),(bool)((char)lVar1 + '\x10'));
  CBaseNode::fromString
            (local_118,(QTypedArrayData<unsigned_short> *)&local_130,false,(QString *)0x0,(int *)0x0
             ,(int *)0x0);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10001614a;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10001614a:
  CVmConfiguration::CVmConfiguration(local_228);
  CBaseNode::toString(SUB81(&local_230,0),(bool)((char)param_2 + '\x10'));
  CBaseNode::fromString
            (local_218,(QTypedArrayData<unsigned_short> *)&local_230,false,(QString *)0x0,(int *)0x0
             ,(int *)0x0);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_29 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000161c0;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1000161c0:
  CVmConfiguration::diff(local_128,(QStringList *)local_228);
  CVmConfiguration::~CVmConfiguration(local_228);
  CVmConfiguration::~CVmConfiguration(local_128);
  return 0;
}

