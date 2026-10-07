
void FUN_10005a6c0(QDataStream *param_1,int *param_2)

{
  uint uVar1;
  long *plVar2;
  QDataStream *pQVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = *param_2 - 4;
  if ((3 < uVar1) || ((0xbU >> ((byte)uVar1 & 0xf) & 1) == 0)) {
    QByteArray::fromRawData((char *)&local_50,(int)param_2 + 4);
    QDataStream::operator<<(param_1,*param_2);
    operator<<(param_1,(QByteArray *)&local_50);
    if (*(int *)local_50 == -1) {
      return;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_10005a865;
  }
  plVar2 = *(long **)(param_2 + 8);
  iVar4 = 0;
  if (plVar2 != (long *)0x0) {
    iVar4 = *(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8);
  }
  QDataStream::operator<<(param_1,*param_2);
  QByteArray::fromRawData((char *)&local_40,(int)param_2 + 4);
  operator<<(param_1,(QByteArray *)&local_40);
  if (*(QString **)(param_2 + 6) == (QString *)0x0) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    operator<<(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10005a7ea;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else {
    operator<<(param_1,*(QString **)(param_2 + 6));
  }
LAB_10005a7ea:
  QDataStream::operator<<(param_1,iVar4);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      operator<<(param_1,(QString *)(*plVar2 + 0x10 + (*(int *)(*plVar2 + 8) + lVar5) * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  pQVar3 = (QDataStream *)QDataStream::operator<<(param_1,param_2[10]);
  pQVar3 = (QDataStream *)QDataStream::operator<<(pQVar3,param_2[0xb]);
  QDataStream::operator<<(pQVar3,param_2[0xc]);
  if (*(int *)local_40 == -1) {
    return;
  }
  local_50 = local_40;
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return;
    }
    local_31 = 0;
  }
LAB_10005a865:
  QArrayData::deallocate(local_50,1,8);
  return;
}

