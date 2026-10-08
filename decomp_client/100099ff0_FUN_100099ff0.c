
undefined8 * FUN_100099ff0(undefined8 *param_1,QString *param_2)

{
  undefined2 uVar1;
  long lVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  QString::normalized(&local_38,param_2,0,0);
  QString::operator=(param_2,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009a050;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10009a050:
  local_40 = (QArrayData *)QString::fromAscii_helper("\\",1);
  local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::replace(param_2,&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009a0bf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10009a0bf:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009a0ef;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10009a0ef:
  pQVar3 = param_2->field0_0x0;
  if ((1 < *(uint *)pQVar3) || (*(long *)(pQVar3 + 0x10) != 0x18)) {
    QString::reallocData((uint)param_2,(bool)((char)*(uint *)(pQVar3 + 4) + '\x01'));
    pQVar3 = param_2->field0_0x0;
  }
  lVar2 = (long)(int)*(uint *)(pQVar3 + 4) * 2;
  if (lVar2 != 0) {
    pQVar3 = pQVar3 + *(long *)(pQVar3 + 0x10);
    do {
      uVar1 = FUN_100a4cf50(*(undefined2 *)pQVar3);
      *(undefined2 *)pQVar3 = uVar1;
      pQVar3 = pQVar3 + 2;
      lVar2 = lVar2 + -2;
    } while (lVar2 != 0);
    pQVar3 = param_2->field0_0x0;
  }
  *param_1 = pQVar3;
  if (1 < *(uint *)pQVar3 + 1) {
    LOCK();
    *(uint *)pQVar3 = *(uint *)pQVar3 + 1;
    UNLOCK();
  }
  return param_1;
}

