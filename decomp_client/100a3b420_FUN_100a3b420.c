
void FUN_100a3b420(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  QString *pQVar3;
  undefined1 auVar4 [16];
  QArrayData *pQStack_80;
  QArrayData *local_70;
  QArrayData *local_68;
  int *local_60;
  QArrayData *local_58;
  QString QStack_50;
  undefined4 local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_100036c40(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  puVar1 = PTR_shared_null_1021e1288;
  pQVar3 = (QString *)(puVar2 + (long)(int)puVar2[2] * 2 + 4);
  auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar4._0_8_ = PTR_shared_null_1021e1288;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  while( true ) {
    if (1 < *puVar2) {
      FUN_100036c40(param_2,puVar2[1]);
      puVar2 = (uint *)*param_2;
    }
    if (pQVar3 == (QString *)(puVar2 + (long)(int)puVar2[3] * 2 + 4)) break;
    pQStack_80 = auVar4._8_8_;
    local_58 = (QArrayData *)puVar1;
    QStack_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_80;
    QString::operator=(&QStack_50,pQVar3);
    local_48 = 0;
    FUN_100094c90(&local_40,&local_58);
    if (*(int *)QStack_50.field0_0x0 != -1) {
      if (*(int *)QStack_50.field0_0x0 != 0) {
        LOCK();
        *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + -1;
        local_31 = *(int *)QStack_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3b525;
      }
      QArrayData::deallocate((QArrayData *)QStack_50.field0_0x0,2,8);
    }
LAB_100a3b525:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3b4a0;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100a3b4a0:
    pQVar3 = pQVar3 + 1;
    puVar2 = (uint *)*param_2;
  }
  FUN_100095510(&local_60,&local_40);
  local_70 = (QArrayData *)*param_3;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_68 = (QArrayData *)param_3[1];
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_100a3b8e0(param_1,0,&local_60,&local_70,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3b5f8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a3b5f8:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3b628;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a3b628:
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3b652;
    }
    FUN_10003cda0(&local_60,local_60);
  }
LAB_100a3b652:
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
    FUN_10003cda0(&local_40,local_40);
  }
  return;
}

