
undefined8 * FUN_1002ef170(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (param_3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Null network reply received");
LAB_1002ef2d2:
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  QNetworkReply::attribute(&local_38,param_3,0);
  iVar1 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  FUN_100df99c0("","prl_client_app",0,"Network reply status code %d",iVar1);
  if (iVar1 != 0x12e) goto LAB_1002ef2d2;
  QByteArray::QByteArray((QByteArray *)&local_48,"Location",-1);
  QNetworkReply::rawHeader((QByteArray *)&local_40);
  lVar2 = 0;
  pQVar3 = local_40 + *(long *)(local_40 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_40 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_40 + 4));
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper((char *)pQVar3,(int)lVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ef265;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002ef265:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ef295;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1002ef295:
  if (*(int *)(pQVar3 + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,"No Location header in the reply");
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    *param_1 = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
  }
  if (*(int *)pQVar3 == -1) {
    return param_1;
  }
  if (*(int *)pQVar3 != 0) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + -1;
    local_21 = *(int *)pQVar3 != 0;
    UNLOCK();
    if ((bool)local_21) {
      return param_1;
    }
  }
  QArrayData::deallocate(pQVar3,2,8);
  return param_1;
}

