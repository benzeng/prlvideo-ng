
bool FUN_1000d8020(long param_1,QString *param_2,QString *param_3,QString *param_4)

{
  int iVar1;
  bool bVar2;
  QDataStream local_78 [32];
  QArrayData *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  
  local_50 = 1;
  local_4c = 0xe;
  local_48 = 7;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 3;
  local_34 = 0;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_78,&local_58,2);
  QDataStream::writeRawData((char *)local_78,(int)&local_50);
  operator<<(local_78,param_2);
  operator<<(local_78,param_3);
  operator<<(local_78,param_4);
  iVar1 = FUN_100a4a170(*(long *)(param_1 + 0xb0) + 0x10,local_58 + *(long *)(local_58 + 0x10),
                        *(undefined4 *)(local_58 + 4));
  bVar2 = -1 < iVar1;
  if (!bVar2) {
    FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to send request to host");
  }
  QDataStream::~QDataStream(local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return bVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
  return bVar2;
}

