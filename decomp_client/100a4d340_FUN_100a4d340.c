
bool FUN_100a4d340(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = param_2;
  QByteArray::append((char *)&local_30,(int)&local_28);
  QByteArray::append((char *)&local_30,param_3);
  iVar1 = FUN_100a4a170(param_1 + 0x10,local_30 + *(long *)(local_30 + 0x10),
                        *(undefined4 *)(local_30 + 4));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100a4d3d1;
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100a4d3d1:
  return -1 < iVar1;
}

