
void FUN_10057c2c0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1[0x25c] != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_Throttler",
                  "DiskStatesImp.cpp",0x180d,"CreateMergeThrottler");
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar1 = *(code **)(*param_1 + 0x140);
  local_48 = (QArrayData *)QString::fromAscii_helper("MergeThrottlerType",0x12);
  iVar2 = (*pcVar1)(param_1,&local_48,&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c38a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10057c38a:
  if ((iVar2 != 0) || (iVar2 = FUN_1005f4dc0(&local_40), iVar2 == 0)) goto LAB_10057c4b0;
  pcVar1 = *(code **)(*param_1 + 0x140);
  local_50 = (QArrayData *)QString::fromAscii_helper("MergeThrottlerLimit",0x13);
  iVar3 = (*pcVar1)(param_1,&local_50,&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c407;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10057c407:
  uVar4 = 0;
  if (iVar3 == 0) {
    uVar4 = QString::toUInt((bool *)&local_40,0);
  }
  pcVar1 = *(code **)(*param_1 + 0x140);
  local_58 = (QArrayData *)QString::fromAscii_helper("MergeThrottlerGroup",0x13);
  iVar3 = (*pcVar1)(param_1,&local_58,&local_40);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c482;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10057c482:
  uVar5 = 0;
  if (iVar3 == 0) {
    uVar5 = QString::toUInt((bool *)&local_40,0);
  }
  lVar6 = FUN_1005f4b90(param_1,iVar2,uVar4,uVar5);
  param_1[0x25c] = lVar6;
LAB_10057c4b0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

