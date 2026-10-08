
bool FUN_1000a2110(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray((QByteArray *)&local_40,0x20,'\0');
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_40 + 0x10);
  *(undefined4 *)(local_40 + lVar1) = param_2;
  *(undefined4 *)(local_40 + lVar1 + 4) = param_3;
  if (param_4 != 0) {
    QByteArray::append((char *)&local_40,(int)param_4);
  }
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar2 = FUN_100a4a170(param_1 + 0x10,local_40 + *(long *)(local_40 + 0x10),*(uint *)(local_40 + 4)
                       );
  if (iVar2 < 0) {
    FUN_100df99c0("VSDC","prl_client_app",0,"Failed to send request to guest");
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1000a221b;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000a221b:
  return -1 < iVar2;
}

