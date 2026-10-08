
void FUN_100aea530(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QIODevice *pQVar4;
  long lVar5;
  int iVar6;
  QArrayData *pQVar7;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  char *local_70;
  int local_64;
  QArrayData *local_60;
  QDataStream local_58 [39];
  undefined1 local_31;
  
  pQVar4 = (QIODevice *)(**(code **)(**(long **)(param_1 + 0x20) + 0x68))();
  if (pQVar4 == (QIODevice *)0x0) {
    return;
  }
  lVar5 = (**(code **)(*(long *)pQVar4 + 0xa0))(pQVar4);
  while (lVar5 < 4) {
    (**(code **)(*(long *)pQVar4 + 0xb8))(pQVar4,30000);
    lVar5 = (**(code **)(*(long *)pQVar4 + 0xa0))(pQVar4);
  }
  QDataStream::QDataStream(local_58,pQVar4);
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::operator>>(local_58,&local_64);
  QByteArray::resize((int)&local_60);
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  pQVar7 = local_60 + *(long *)(local_60 + 0x10);
  do {
    iVar3 = QDataStream::readRawData((char *)local_58,(int)pQVar7);
    iVar6 = local_64 - iVar3;
    if ((iVar3 < 0) || (local_64 == iVar3)) break;
    local_64 = iVar6;
    cVar2 = (**(code **)(*(long *)pQVar4 + 0xb8))(pQVar4,2000);
    pQVar7 = pQVar7 + iVar3;
    iVar6 = local_64;
  } while (cVar2 != '\0');
  local_64 = iVar6;
  if (iVar3 < 0) {
    local_88 = 2;
    local_74 = 0;
    local_7c = 0;
    local_84 = 0;
    local_70 = "default";
    QIODevice::errorString();
    QString::toLatin1();
    QMessageLogger::warning
              ((char *)&local_88,"QtLocalPeer: Message reception failed %s",
               local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aea7cc;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_100aea7cc:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aea802;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100aea802:
    (**(code **)(*(long *)pQVar4 + 0x20))(pQVar4);
  }
  else {
    pQVar7 = local_60 + *(long *)(local_60 + 0x10);
    if ((pQVar7 != (QArrayData *)0x0) && (*(uint *)(local_60 + 4) != 0)) {
      lVar5 = 0;
      do {
        if (pQVar7[lVar5] == (QArrayData)0x0) break;
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(local_60 + 4));
      if ((int)lVar5 == -1) {
        _strlen((char *)pQVar7);
      }
    }
    QString::fromUtf8_helper((char *)&local_a0,(int)pQVar7);
    puVar1 = PTR_s_ack_1022829a8;
    if (PTR_s_ack_1022829a8 != (undefined *)0x0) {
      _strlen(PTR_s_ack_1022829a8);
    }
    QIODevice::write((char *)pQVar4,(longlong)puVar1);
    (**(code **)(*(long *)pQVar4 + 0xc0))(pQVar4,1000);
    QLocalSocket::waitForDisconnected((int)pQVar4);
    (**(code **)(*(long *)pQVar4 + 0x20))(pQVar4);
    FUN_100aeb1b0(param_1,&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aea80e;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_100aea80e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aea83e;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100aea83e:
  QDataStream::~QDataStream(local_58);
  return;
}

