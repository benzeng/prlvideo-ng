
undefined8 * FUN_1006e8600(undefined8 *param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (param_3 != 0x36d8) {
    return param_1;
  }
  if (param_4 != '\0') {
    return param_1;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (DAT_102310990 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006ea620(pvVar2);
    DAT_102273501 = 1;
    DAT_102310990 = pvVar2;
  }
  iVar1 = FUN_1006ea680(DAT_102310990);
  QString::arg(&local_38,&local_40,(long)iVar1,0,10,0x20);
  FUN_1000341d0(param_1,&local_38);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("12.2.1 (41615)",0xe);
  local_48 = pQVar3;
  FUN_1000341d0(param_1,&local_48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e86f5;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006e86f5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e8725;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e8725:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

