
void FUN_100046a30(undefined8 *param_1)

{
  char cVar1;
  QArrayData *local_40;
  undefined1 local_32;
  
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100ba8108;
  param_1[5] = &PTR_FUN_100ba8160;
  param_1[0xd] = DAT_1011c3698;
  param_1[0xe] = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 0xf),0);
  (**(code **)(**(long **)(param_1[0xd] + 0x1a48) + 0x20))
            (*(long **)(param_1[0xd] + 0x1a48),0x18,FUN_100046c00,param_1);
  FUN_10051a6b0(param_1[0xd] + 0x10f0,10,param_1 + 5);
  QByteArray::QByteArray((QByteArray *)&local_40,"\x01",4);
  cVar1 = FUN_1000488f0(2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100046b22;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100046b22:
  if (cVar1 == '\0' && 0 < DAT_1011b55f8) {
    FUN_1008e3970("FSCRMON","vm",1,"Failed on set VConfigqmap");
  }
  return;
}

