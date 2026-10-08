
void FUN_10071c680(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  lVar2 = *param_2;
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (param_2[1] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! currentContext.isNull()","ShortcutManager/CKeyActionLogic.cpp",0xa7,
                  "onAppContextChanged");
    lVar2 = *param_2;
    if (lVar2 != 0) goto LAB_10071c6fc;
LAB_10071c736:
    bVar1 = false;
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  }
  else {
LAB_10071c6fc:
    if ((*(int *)(lVar2 + 4) == 0) || (param_2[1] == 0)) goto LAB_10071c736;
    QObject::property((char *)&local_40);
    bVar1 = true;
    QVariant::toString();
  }
  QString::operator=((QString *)(param_1 + 0x18),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10071c786;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10071c786:
  if (bVar1) {
    QVariant::~QVariant(&local_40);
  }
  return;
}

