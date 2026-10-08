
undefined8 * FUN_1001007d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  QString QVar2;
  int iVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  long lVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)QString::fromAscii_helper(".",1);
  iVar3 = QString::lastIndexOf(param_3,&local_48,0xffffffff,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100100852;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100100852:
  if (iVar3 < 0) {
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_100100a10;
  }
  QString::mid((int)&local_50,(int)param_3);
  QString::operator=(&local_40,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001008ac;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1001008ac:
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_100100a10;
  }
  lVar6 = *(long *)(param_2 + 0x20);
  iVar3 = *(int *)(lVar6 + 8);
  if (iVar3 != *(int *)(lVar6 + 0xc)) {
    puVar5 = (undefined8 *)(lVar6 + 0x10 + (long)iVar3 * 8);
    lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      iVar3 = QString::compare(*puVar5,&local_40,0);
      if (iVar3 == 0) {
        *param_1 = puVar1;
        goto LAB_100100a10;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  QVar2.field0_0x0 = local_40.field0_0x0;
  local_60 = (QArrayData *)local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
  local_58 = pQVar4;
  FUN_100101260(param_2 + 0x20,&local_60);
  *param_1 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010099c;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10010099c:
  if (*(int *)QVar2.field0_0x0 != -1) {
    if (*(int *)QVar2.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar2.field0_0x0 = *(int *)QVar2.field0_0x0 + -1;
      local_31 = *(int *)QVar2.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100100a10;
    }
    QArrayData::deallocate((QArrayData *)QVar2.field0_0x0,2,8);
  }
LAB_100100a10:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

