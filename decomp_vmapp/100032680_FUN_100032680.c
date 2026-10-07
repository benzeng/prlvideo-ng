
void FUN_100032680(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  QMapNodeBase *pQVar4;
  undefined1 uVar5;
  Data *local_88 [2];
  QArrayData *local_78;
  undefined1 local_68 [16];
  QArrayData *local_58;
  QMapNodeBase *local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_1004c0650();
  *param_1 = &PTR_FUN_100ba7de8;
  QMutex::QMutex((QMutex *)(param_1 + 8),0);
  puVar3 = PTR_shared_null_100ba2188;
  param_1[9] = PTR_shared_null_100ba2188;
  puVar1 = PTR_shared_null_100ba20d0;
  param_1[0xb] = PTR_shared_null_100ba20d0;
  QMutex::QMutex((QMutex *)(param_1 + 0xd),0);
  param_1[0x10] = puVar1;
  puVar2 = PTR_shared_null_100ba20d8;
  param_1[0x12] = PTR_shared_null_100ba20d8;
  QMutex::QMutex((QMutex *)(param_1 + 0x13),0);
  local_40 = (int *)puVar3;
  local_58 = (QArrayData *)puVar1;
  local_48 = (QMapNodeBase *)puVar2;
  local_88[0] = (Data *)puVar3;
  local_78 = (QArrayData *)puVar1;
  FUN_1004c0790(param_1,0x8900,0x8900);
  DAT_100bfb03d = DAT_100bfb03d | 1;
  DAT_100bfb024 = param_1;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined4 *)((long)param_1 + 0x2c) = 1;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  uVar5 = CVmVirtualPrintersInfo::isSyncDefaultPrinter();
  *(undefined1 *)(param_1 + 0xc) = uVar5;
  FUN_1000335b0();
  FUN_100032ce0(param_1,1,&local_40,local_68);
  FUN_100033090(param_1,&local_40,local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100032821;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100032821:
  if (*(int *)local_88[0] != -1) {
    if (*(int *)local_88[0] != 0) {
      LOCK();
      *(int *)local_88[0] = *(int *)local_88[0] + -1;
      local_31 = *(int *)local_88[0] != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100032847;
    }
    QListData::dispose(local_88[0]);
  }
LAB_100032847:
  pQVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003288f;
    }
    if (*(long *)(local_48 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_10003288f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000328bf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000328bf:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100037550(&local_40,local_40);
  }
  return;
}

