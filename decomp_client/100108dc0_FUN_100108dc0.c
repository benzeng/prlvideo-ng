
bool FUN_100108dc0(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  QDataStream local_70 [32];
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  undefined1 local_21;
  
  local_2c = *(int *)(param_2 + 0x10) + 0x14;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0xe00000001;
  uStack_40 = 0;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_70,&local_50,2);
  QDataStream::writeRawData((char *)local_70,(int)&local_48);
  QDataStream::writeRawData((char *)local_70,(int)param_2);
  iVar1 = FUN_100a4a170(param_1 + 0x10,local_50 + *(long *)(local_50 + 0x10),
                        *(undefined4 *)(local_50 + 4));
  bVar2 = -1 < iVar1;
  if (!bVar2) {
    FUN_100df99c0("SHAC","prl_client_app",0,"Error: failed to send request to guest");
  }
  QDataStream::~QDataStream(local_70);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return bVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
  }
  return bVar2;
}

