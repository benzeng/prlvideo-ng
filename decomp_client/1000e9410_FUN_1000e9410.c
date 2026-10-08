
bool FUN_1000e9410(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  QDataStream local_60 [32];
  QArrayData *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0xe00000001;
  uStack_30 = 5;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_60,&local_40,2);
  QDataStream::writeRawData((char *)local_60,(int)&local_38);
  lVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  iVar1 = FUN_100a4a170(*(long *)(lVar2 + 0xb0) + 0x10,local_40 + *(long *)(local_40 + 0x10),
                        *(undefined4 *)(local_40 + 4));
  bVar3 = -1 < iVar1;
  if (!bVar3) {
    FUN_100df99c0("SGAGC","prl_client_app",0,"Error: failed to send request to guest");
  }
  QDataStream::~QDataStream(local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return bVar3;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return bVar3;
}

