
void FUN_10040d250(long param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QVariant local_58;
  QVariant local_48;
  QMapNodeBase *local_38;
  QMapNodeBase *local_30;
  undefined1 local_21;
  
  pcVar2 = (char *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021f9da0);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  local_30 = *(QMapNodeBase **)(lVar3 + 0x128);
  if (*(int *)local_30 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x128) + 0x10);
    local_30 = pQVar4;
    if (lVar3 != 0) {
      puVar5 = (ulong *)FUN_100137920(lVar3,pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)local_30 != -1) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
    local_30 = *(QMapNodeBase **)(lVar3 + 0x128);
  }
  QObject::property((char *)&local_48);
  FUN_10041e950(&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  cVar1 = FUN_10041a6c0(&local_30,&local_38);
  if (cVar1 == '\0') {
    FUN_1001362b0(pcVar2,&local_30,1);
    if (DAT_102273fe0 == 0) {
      DAT_102273fe0 = FUN_10041ed50("CSupportedOses",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_58,DAT_102273fe0,&local_30,0);
    QObject::setProperty(pcVar2,(QVariant *)"InitInfo");
    QVariant::~QVariant(&local_58);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10040d40f;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
LAB_10040d40f:
  pQVar4 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    if (*(long *)(local_30 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
  return;
}

