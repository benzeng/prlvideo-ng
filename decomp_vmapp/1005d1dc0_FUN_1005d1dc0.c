
int FUN_1005d1dc0(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar1 = *(code **)(*param_1 + 0x168);
  local_38 = (QArrayData *)QString::fromAscii_helper("EnableBackupApi",0xf);
  iVar2 = (*pcVar1)(param_1,&local_38,&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005d1e3d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d1e3d:
  if ((-1 < iVar2) || (iVar4 = iVar2, iVar2 == -0x7ffdd000)) {
    *param_2 = 1;
    iVar4 = 0;
    if (iVar2 != -0x7ffdd000) {
      iVar4 = 0;
      uVar3 = QString::toUInt((bool *)&local_30,0);
      *param_2 = uVar3;
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return iVar4;
}

