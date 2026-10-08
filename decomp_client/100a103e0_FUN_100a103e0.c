
void FUN_100a103e0(undefined8 param_1,QByteArray *param_2,char *param_3,char *param_4)

{
  QString *pQVar1;
  char cVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  QString *pQVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  QString *pQVar9;
  QArrayData *local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_1000626e0(&local_40,param_1);
  iVar6 = -1;
  if (param_3 != (char *)0x0) {
    sVar3 = _strlen(param_3);
    iVar6 = (int)sVar3;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(param_3,iVar6);
  iVar6 = *(int *)(local_40 + 8);
  pQVar5 = (QString *)(local_40 + 0x10 + (long)iVar6 * 8);
  iVar8 = *(int *)(local_40 + 0xc);
  pQVar1 = (QString *)(local_40 + 0x10 + (long)iVar8 * 8);
  pQVar9 = pQVar5;
  if (iVar6 != iVar8) {
    lVar7 = (long)iVar8 * 8 + (long)iVar6 * -8;
    do {
      cVar2 = operator==(pQVar5,&local_48);
      pQVar9 = pQVar5;
      if (cVar2 != '\0') break;
      pQVar5 = pQVar5 + 1;
      lVar7 = lVar7 + -8;
      pQVar9 = pQVar1;
    } while (lVar7 != 0);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a104db;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a104db:
  FUN_100036370(&local_40);
  if (pQVar9 == pQVar1) {
    return;
  }
  iVar8 = -1;
  iVar6 = -1;
  if (param_4 != (char *)0x0) {
    sVar3 = _strlen(param_4);
    iVar6 = (int)sVar3;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(param_4,iVar6);
  if (param_3 != (char *)0x0) {
    sVar3 = _strlen(param_3);
    iVar8 = (int)sVar3;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(param_3,iVar8);
  FUN_100a10930(&local_70,param_1,&local_78);
  QVariant::toString();
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a105ab;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a105ab:
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a105e4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a105e4:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a10614;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a10614:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("Authorization",0xd);
  QString::toLatin1();
  QString::toLatin1();
  QNetworkRequest::setRawHeader(param_2,(QByteArray *)&local_80);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1068f;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100a1068f:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a106bf;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100a106bf:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a106ef;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100a106ef:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

