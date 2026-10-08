
void FUN_1007bee90(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_200;
  QArrayData *local_1f8;
  CHostHardwareInfo local_1f0 [328];
  undefined8 local_a8;
  undefined1 local_21;
  
  FUN_1007bf8a0(param_1,1);
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001547d0(uVar2,param_1 + 0x30);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return;
  }
  bVar1 = (bool)FUN_10015a340(lVar3);
  CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_1f8,0),bVar1);
  CHostHardwareInfo::CHostHardwareInfo(local_1f0,(QTypedArrayData<unsigned_short> *)&local_1f8);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_21 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007bef2d;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_1007bef2d:
  FUN_1007c2cb0(local_1f0);
  QMetaObject::tr((char *)&local_200,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Physical_CD_DVD_10226e740);
  FUN_1007c1750(param_1,local_a8,&local_200,param_2,0);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_21 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007befb3;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_1007befb3:
  FUN_1007c2b80(param_1);
  CHostHardwareInfo::~CHostHardwareInfo(local_1f0);
  return;
}

