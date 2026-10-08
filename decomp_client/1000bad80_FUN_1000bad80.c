
bool FUN_1000bad80(long param_1,QString *param_2)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  ulong uVar3;
  long lVar4;
  QDataStream local_78 [32];
  QArrayData *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 local_29;
  
  local_50 = 0xe00000001;
  local_48 = 4;
  local_40 = *(undefined4 *)&param_2[2].field0_0x0;
  local_3c = 0;
  local_38 = *(int *)(param_2[1].field0_0x0 + 0xc) - *(int *)(param_2[1].field0_0x0 + 8);
  local_34 = 0;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_78,&local_58,2);
  QDataStream::writeRawData((char *)local_78,(int)&local_50);
  operator<<(local_78,param_2);
  pQVar2 = param_2[1].field0_0x0;
  uVar3 = (ulong)*(uint *)(pQVar2 + 8);
  lVar4 = 0;
  if ((int)*(uint *)(pQVar2 + 8) < *(int *)(pQVar2 + 0xc)) {
    do {
      operator<<(local_78,(QString *)(pQVar2 + ((int)uVar3 + lVar4) * 8 + 0x10));
      lVar4 = lVar4 + 1;
      pQVar2 = param_2[1].field0_0x0;
      uVar3 = (ulong)*(int *)(pQVar2 + 8);
    } while (lVar4 < (long)((long)*(int *)(pQVar2 + 0xc) - uVar3));
  }
  iVar1 = FUN_100a4a170(*(long *)(param_1 + 0xb0) + 0x10,local_58 + *(long *)(local_58 + 0x10),
                        *(undefined4 *)(local_58 + 4));
  QDataStream::~QDataStream(local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_1000baea4;
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000baea4:
  return -1 < iVar1;
}

