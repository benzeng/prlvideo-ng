
void FUN_100534aa0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  QArrayData *pQVar4;
  ulong uVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1004c0650();
  *param_1 = &PTR_FUN_100bc5120;
  param_1[5] = &PTR_FUN_100bc51a8;
  puVar2 = operator_new(0xb0);
  FUN_100041050(puVar2);
  *puVar2 = &PTR_FUN_100bc50e8;
  puVar2[0x15] = param_1;
  param_1[6] = puVar2;
  puVar2 = operator_new(0x30);
  *puVar2 = param_1;
  QMutex::QMutex((QMutex *)(puVar2 + 1),0);
  puVar2[2] = PTR_shared_null_100ba2188;
  *(undefined1 *)(puVar2 + 5) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[7] = puVar2;
  pvVar3 = operator_new(0x58);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/Volumes",8);
  local_40 = pQVar4;
  FUN_100534e40(&local_48);
  FUN_100535140(&local_50);
  FUN_10053f1b0(pvVar3,param_1,&local_40,&local_48,&local_50);
  param_1[8] = pvVar3;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100534bc2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100534bc2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100534bf4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100534bf4:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100534c21;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100534c21:
  *(undefined1 *)(param_1 + 9) = 0;
  lVar1 = param_1[6];
  uVar5 = lVar1 + 0x80;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar5 = uVar5 | 1;
  }
  *(undefined1 *)(lVar1 + 0x94) = 1;
  if ((uVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  FUN_1004c0790(param_1,0x8420,0x8440);
  FUN_100540de0(&DAT_1011cc998,param_1);
  return;
}

