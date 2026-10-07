
bool FUN_1005f2400(long *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar1 = *(code **)(*param_1 + 0x168);
  local_38 = (QArrayData *)QString::fromAscii_helper("Bootable",8);
  iVar2 = (*pcVar1)(param_1,&local_38,&local_30);
  *param_2 = iVar2;
  if (*(int *)local_38 == -1) goto LAB_1005f2481;
  if (*(int *)local_38 == 0) {
LAB_1005f246f:
    QArrayData::deallocate(local_38,2,8);
  }
  else {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
    if (!(bool)local_21) goto LAB_1005f246f;
  }
  iVar2 = *param_2;
LAB_1005f2481:
  if (iVar2 < 0) {
    bVar3 = false;
  }
  else {
    iVar2 = QString::toInt((bool *)&local_30,0);
    bVar3 = iVar2 != 0;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return bVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return bVar3;
}

