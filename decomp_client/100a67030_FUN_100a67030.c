
bool FUN_100a67030(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  QArrayData *local_30;
  undefined1 local_21;
  
  QByteArray::QByteArray((QByteArray *)&local_30,0x20,'\0');
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_30 + 0x10);
  *(undefined4 *)(local_30 + lVar1) = param_2;
  *(undefined4 *)(local_30 + lVar1 + 4) = param_3;
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  iVar2 = FUN_100a4a170(param_1 + 0x10,local_30 + *(long *)(local_30 + 0x10),*(uint *)(local_30 + 4)
                       );
  if (iVar2 < 0) {
    FUN_100df99c0("AUTOPAUSECL","AutoPauseClient",0,"Failed to send request to guest");
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100a67119;
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100a67119:
  return -1 < iVar2;
}

