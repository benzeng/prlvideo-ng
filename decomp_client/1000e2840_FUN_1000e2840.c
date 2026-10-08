
void FUN_1000e2840(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [32];
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_1001007d0(&local_28,param_1[10] + 0x38,param_2);
  if ((*(int *)(local_28 + 4) == 0) || (iVar1 = FUN_100a67f70(local_48,0x24), iVar1 != 0))
  goto LAB_1000e299d;
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_50,(char *)(local_58 + *(long *)(local_58 + 0x10)),-1)
  ;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000e28dc;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000e28dc:
  FUN_100a68060(local_48,local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),0x201e)
  ;
  puVar2 = (undefined8 *)FUN_100a67f30(local_48);
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 *)puVar2 = 0x99;
  iVar1 = FUN_100a67f40(local_48);
  *(int *)(puVar2 + 2) = iVar1 + -0x14;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 4) = 2;
  uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000e85b0(uVar3,puVar2);
  FUN_100a681d0(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000e299d;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000e299d:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

