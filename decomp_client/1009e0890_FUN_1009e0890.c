
undefined8 * FUN_1009e0890(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_10a8;
  QArrayData *local_10a0;
  QArrayData *local_1098;
  undefined4 local_108c;
  undefined8 local_1088;
  QArrayData *local_1080;
  QArrayData *local_1078;
  undefined1 local_1070 [4175];
  undefined1 local_21;
  
  ___bzero(local_1070,0x1048);
  pQVar4 = (QArrayData *)*param_2;
  if (*(int *)(pQVar4 + 4) < 0x11) {
    local_1078 = pQVar4;
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
  }
  else {
    QString::mid((int)&local_1078,(int)param_2);
  }
  iVar1 = *(int *)(local_1078 + 4);
  QString::toLatin1();
  FUN_100c18200(local_1070,iVar1,local_1080 + *(long *)(local_1080 + 0x10));
  if (*(int *)local_1080 != -1) {
    if (*(int *)local_1080 != 0) {
      LOCK();
      *(int *)local_1080 = *(int *)local_1080 + -1;
      local_21 = *(int *)local_1080 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e096b;
    }
    QArrayData::deallocate(local_1080,1,8);
  }
LAB_1009e096b:
  local_1088 = 0x3430323135303032;
  local_108c = 0;
  local_1098 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::toUtf8();
  QByteArray::resize((int)&local_1098);
  lVar3 = *(long *)(local_10a0 + 0x10);
  if ((1 < *(uint *)local_1098) || (*(long *)(local_1098 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_1098,*(uint *)(local_1098 + 4) + 1,*(uint *)(local_1098 + 8) >> 0x1f);
  }
  FUN_100c19120(local_10a0 + lVar3,local_1098 + *(long *)(local_1098 + 0x10),
                (long)*(int *)(local_10a0 + 4),local_1070,&local_1088,&local_108c,1);
  QByteArray::toBase64();
  lVar3 = 0;
  pQVar4 = local_10a8 + *(long *)(local_10a8 + 0x10);
  if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_10a8 + 4) != 0)) {
    lVar3 = 0;
    do {
      if (pQVar4[lVar3] == (QArrayData)0x0) break;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(local_10a8 + 4));
  }
  uVar2 = QString::fromAscii_helper((char *)pQVar4,(int)lVar3);
  *param_1 = uVar2;
  if (*(int *)local_10a8 != -1) {
    if (*(int *)local_10a8 != 0) {
      LOCK();
      *(int *)local_10a8 = *(int *)local_10a8 + -1;
      local_21 = *(int *)local_10a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0aab;
    }
    QArrayData::deallocate(local_10a8,1,8);
  }
LAB_1009e0aab:
  if (*(int *)local_10a0 != -1) {
    if (*(int *)local_10a0 != 0) {
      LOCK();
      *(int *)local_10a0 = *(int *)local_10a0 + -1;
      local_21 = *(int *)local_10a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0ae1;
    }
    QArrayData::deallocate(local_10a0,1,8);
  }
LAB_1009e0ae1:
  if (*(int *)local_1098 != -1) {
    if (*(int *)local_1098 != 0) {
      LOCK();
      *(int *)local_1098 = *(int *)local_1098 + -1;
      local_21 = *(int *)local_1098 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0b17;
    }
    QArrayData::deallocate(local_1098,1,8);
  }
LAB_1009e0b17:
  if (*(int *)local_1078 != -1) {
    if (*(int *)local_1078 != 0) {
      LOCK();
      *(int *)local_1078 = *(int *)local_1078 + -1;
      UNLOCK();
      if (*(int *)local_1078 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_1078,2,8);
  }
  return param_1;
}

