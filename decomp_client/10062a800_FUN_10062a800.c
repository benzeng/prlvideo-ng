
undefined8 FUN_10062a800(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = 0;
  FUN_100df99c0("","prl_client_app",0,"Send AppStore Receipt");
  uVar1 = FUN_1002c6aa0(param_1);
  local_30 = (QArrayData *)QString::fromAscii_helper("{82B12A8A-0077-42F9-A782-E008C3099477}",0x26);
  QByteArray::toBase64();
  pQVar3 = local_40 + *(long *)(local_40 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_40 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_40 + 4));
  }
  local_38 = (QArrayData *)QString::fromAscii_helper((char *)pQVar3,(int)lVar2);
  uVar1 = FUN_100175d50(uVar1,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062a8dd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10062a8dd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062a90d;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10062a90d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar1;
}

