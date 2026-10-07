
undefined8 FUN_100610a40(void *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar3 = QIODevice::read((char *)param_2,(longlong)param_1);
  if (lVar3 != 0x202c) {
    uVar2 = FUN_100768f60();
    FUN_1008e3970("","crypt",0,"Error %d when reading header of file",uVar2);
    return 0x80000518;
  }
  iVar1 = _memcmp(param_1,"[EncryptedFile]",0x10);
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0xe0))(&local_38,param_2);
  QString::toUtf8();
  FUN_1008e3970("","crypt",0,"File %s header signature is invalid.",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100610b03;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100610b03:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0x80000003;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0x80000003;
}

