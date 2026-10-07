
undefined4 FUN_100043070(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  QDataStream local_80 [32];
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1000444a0(param_1,&local_38);
  local_58 = 0xe00000001;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = (QArrayData *)puVar1;
  local_3c = param_3;
  QDataStream::QDataStream(local_80,&local_60,2);
  QDataStream::writeRawData((char *)local_80,(int)&local_58);
  QDataStream::writeRawData((char *)local_80,(int)param_2);
  QDataStream::~QDataStream(local_80);
  cVar2 = FUN_100045da0(param_1,&local_60);
  if (cVar2 == '\0') {
    uVar3 = 0xf000001c;
    FUN_1008e3970("SGAH","vm",0,"Error: failed to send request to client");
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    uVar3 = 0;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100043179;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100043179:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar3;
}

