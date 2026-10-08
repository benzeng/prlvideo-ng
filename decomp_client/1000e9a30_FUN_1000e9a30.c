
bool FUN_1000e9a30(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  QDataStream local_70 [32];
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_19;
  
  local_30 = 0;
  local_38 = 0;
  local_48 = 0xe00000001;
  uStack_40 = 6;
  local_2c = 4;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_70,&local_50,2);
  QDataStream::writeRawData((char *)local_70,(int)&local_48);
  QDataStream::writeRawData((char *)local_70,param_2);
  lVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  iVar1 = FUN_100a4a170(*(long *)(lVar2 + 0xb0) + 0x10,local_50 + *(long *)(local_50 + 0x10),
                        *(undefined4 *)(local_50 + 4));
  bVar3 = -1 < iVar1;
  if (!bVar3) {
    FUN_100df99c0("SGAGC","prl_client_app",0,"Error: failed to send request to host");
  }
  QDataStream::~QDataStream(local_70);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return bVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
  }
  return bVar3;
}

