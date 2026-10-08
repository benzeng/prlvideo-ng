
void FUN_10005fd70(long param_1,QString *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  QVariant local_48;
  QString local_38;
  undefined1 local_29;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! vmUuid.isEmpty()","Application/CAppContextLogic.mm",0xf8,"onVmWindowRemoved");
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! m_pCurrentContext.isNull()","Application/CAppContextLogic.mm",0xfa,
                  "onVmWindowRemoved");
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  QObject::property((char *)&local_48);
  QVariant::toString();
  cVar1 = operator==(param_2,&local_38);
  bVar3 = DAT_100e152b8 == param_3;
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10005fec1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10005fec1:
  QVariant::~QVariant(&local_48);
  if (cVar1 != '\0' && bVar3) {
    FUN_10005f5d0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x10));
  }
  return;
}

