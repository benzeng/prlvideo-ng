
QString * FUN_10071a2e0(QString *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  undefined **ppuVar7;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  int *local_78;
  int *local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_1021e15e8;
  FUN_10055a620(&local_60);
  local_58 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8);
  local_50 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
  local_48 = 1;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      puVar1 = (undefined8 *)*local_58;
      local_78 = (int *)*puVar1;
      if (1 < *local_78 + 1U) {
        LOCK();
        *local_78 = *local_78 + 1;
        local_31 = *local_78 != 0;
        UNLOCK();
      }
      local_70 = (int *)puVar1[1];
      if (1 < *local_70 + 1U) {
        LOCK();
        *local_70 = *local_70 + 1;
        local_31 = *local_70 != 0;
        UNLOCK();
      }
      FUN_1000ff290(local_68,puVar1 + 2);
      if (local_48 != 0) {
        FUN_1000341d0(&local_40,&local_78);
        local_48 = 0;
      }
      FUN_1000fec30(&local_78);
      local_58 = local_58 + 1;
      uVar4 = local_48 ^ 1;
      bVar6 = local_48 != 1;
      local_48 = uVar4;
    } while ((bVar6) && (local_58 != local_50));
  }
  FUN_1000fe670(&local_60);
  pQVar2 = (QTypedArrayData<unsigned_short> *)*param_3;
  param_1->field0_0x0 = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  lVar5 = 1;
  ppuVar7 = &local_40;
LAB_10071a410:
  do {
    cVar3 = QtPrivate::QStringList_contains(&local_40,param_1,1);
    if (cVar3 == '\0') {
      FUN_100039a80(&local_40);
      return param_1;
    }
    local_90 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
    QString::arg(&local_88,&local_90,param_3,0,0x20);
    QString::arg(&local_80,&local_88,lVar5,0,10,0x20,ppuVar7);
    QString::operator=(param_1,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10071a4b2;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_10071a4b2:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10071a4e2;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10071a4e2:
    lVar5 = lVar5 + 1;
  } while (*(int *)local_90 == -1);
  if (*(int *)local_90 != 0) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + -1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_10071a410;
  }
  QArrayData::deallocate(local_90,2,8);
  goto LAB_10071a410;
}

