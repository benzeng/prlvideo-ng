
void FUN_1000dff80(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [39];
  undefined1 local_29;
  
  iVar1 = FUN_100a67f70(local_50,0x24);
  if (iVar1 != 0) {
    return;
  }
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_58,(char *)(local_60 + *(long *)(local_60 + 0x10)),-1)
  ;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000e0003;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000e0003:
  FUN_100a68060(local_50,local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(local_58 + 4),0x201a)
  ;
  puVar2 = (undefined8 *)FUN_100a67f30(local_50);
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 *)puVar2 = 0x97;
  iVar1 = FUN_100a67f40(local_50);
  *(int *)(puVar2 + 2) = iVar1 + -0x14;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 4) = 2;
  *(undefined4 *)((long)puVar2 + 0x14) = param_2;
  *(undefined4 *)(puVar2 + 3) = param_3;
  uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000e85b0(uVar3,puVar2);
  FUN_100a681d0(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
  return;
}

