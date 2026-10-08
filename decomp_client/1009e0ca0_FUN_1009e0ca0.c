
undefined8 FUN_1009e0ca0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_10b0;
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
  pQVar3 = (QArrayData *)*param_2;
  if (*(int *)(pQVar3 + 4) < 0x11) {
    local_1078 = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_21 = *(int *)pQVar3 != 0;
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
      if ((bool)local_21) goto LAB_1009e0d7b;
    }
    QArrayData::deallocate(local_1080,1,8);
  }
LAB_1009e0d7b:
  local_1088 = 0x3430323135303032;
  local_108c = 0;
  local_1098 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::toLatin1();
  QByteArray::fromBase64((QByteArray *)&local_10a0);
  if (*(int *)local_10a8 != -1) {
    if (*(int *)local_10a8 != 0) {
      LOCK();
      *(int *)local_10a8 = *(int *)local_10a8 + -1;
      local_21 = *(int *)local_10a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0dfc;
    }
    QArrayData::deallocate(local_10a8,1,8);
  }
LAB_1009e0dfc:
  QByteArray::resize((int)&local_1098);
  pQVar3 = local_10a0 + *(long *)(local_10a0 + 0x10);
  if ((1 < *(uint *)local_1098) || (*(long *)(local_1098 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_1098,*(uint *)(local_1098 + 4) + 1,*(uint *)(local_1098 + 8) >> 0x1f);
  }
  FUN_100c19120(pQVar3,local_1098 + *(long *)(local_1098 + 0x10),(long)*(int *)(local_10a0 + 4),
                local_1070,&local_1088,&local_108c,0);
  pQVar3 = local_1098 + *(long *)(local_1098 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_1098 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_1098 + 4));
    if ((int)lVar2 == -1) {
      _strlen((char *)pQVar3);
    }
  }
  QString::fromUtf8_helper((char *)&local_10b0,(int)pQVar3);
  QString::normalized(param_1,&local_10b0,1,0);
  if (*(int *)local_10b0 != -1) {
    if (*(int *)local_10b0 != 0) {
      LOCK();
      *(int *)local_10b0 = *(int *)local_10b0 + -1;
      local_21 = *(int *)local_10b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0f28;
    }
    QArrayData::deallocate(local_10b0,2,8);
  }
LAB_1009e0f28:
  if (*(int *)local_10a0 != -1) {
    if (*(int *)local_10a0 != 0) {
      LOCK();
      *(int *)local_10a0 = *(int *)local_10a0 + -1;
      local_21 = *(int *)local_10a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0f5e;
    }
    QArrayData::deallocate(local_10a0,1,8);
  }
LAB_1009e0f5e:
  if (*(int *)local_1098 != -1) {
    if (*(int *)local_1098 != 0) {
      LOCK();
      *(int *)local_1098 = *(int *)local_1098 + -1;
      local_21 = *(int *)local_1098 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009e0f94;
    }
    QArrayData::deallocate(local_1098,1,8);
  }
LAB_1009e0f94:
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

