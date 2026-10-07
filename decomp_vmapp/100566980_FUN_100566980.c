
void FUN_100566980(undefined8 param_1,int param_2)

{
  size_t sVar1;
  QArrayData *pQVar2;
  int iVar3;
  long lVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QByteArray::fromRawData((char *)&local_38,param_2);
  QByteArray::toBase64();
  iVar3 = 0;
  pQVar2 = local_30 + *(long *)(local_30 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_30 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar2[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_30 + 4));
    iVar3 = (int)lVar4;
    if (iVar3 == -1) {
      sVar1 = _strlen((char *)pQVar2);
      iVar3 = (int)sVar1;
    }
  }
  local_28 = (QArrayData *)QString::fromLatin1_helper((char *)pQVar2,iVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100566a29;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100566a29:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100566a59;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100566a59:
  if (DAT_1011b55f8 < 2) goto LAB_100566b19;
  QString::toUtf8();
  lVar4 = *(long *)(local_40 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","StatesUtils",2,"%s\n%s",local_40 + lVar4,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100566ae9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100566ae9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100566b19;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100566b19:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

