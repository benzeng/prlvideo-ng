
void FUN_1009aaf20(QString *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  QArrayData *local_40;
  undefined1 local_32;
  
  pQVar2 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[8].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar2 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[8].field0_0x0 + 4) != 0)) {
    pQVar2 = param_1[9].field0_0x0;
  }
  if (*(int *)(pQVar2 + 0x10) == param_2) {
    if (*(int *)(pQVar2 + 0x14) == 0) goto LAB_1009aafb6;
  }
  else {
    *(int *)(pQVar2 + 0x10) = param_2;
    FUN_100d31140(pQVar2 + 0x18,2);
    *(undefined4 *)(pQVar2 + 0x14) = 1;
  }
  FUN_100d311f0(pQVar2 + 0x18,param_3);
  iVar1 = FUN_100d313f0(pQVar2 + 0x18);
  if ((-1 < iVar1) && (*(int *)(pQVar2 + 0x14) == 1)) {
    *(uint *)(pQVar2 + 0x14) = (uint)(1 < iVar1) * 2;
  }
LAB_1009aafb6:
  CAbstractProgressOperation::setProgress((int)param_1);
  pQVar2 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[8].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar2 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[8].field0_0x0 + 4) != 0)) {
    pQVar2 = param_1[9].field0_0x0;
  }
  FUN_1009aa1c0(&local_40,pQVar2);
  CAbstractProgressOperation::setDescription(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_32 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

