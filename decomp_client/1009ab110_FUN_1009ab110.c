
void FUN_1009ab110(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("objTransferProgress",0x13);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_28,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ab181;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009ab181:
  if (pcVar1 != (char *)0x0) {
    local_40 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (local_40 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      local_40 = *(undefined8 *)(param_1 + 0x60);
    }
    QVariant::QVariant(&local_38,0x27,&local_40,1);
    QObject::setProperty(pcVar1,(QVariant *)"progressOperation");
    QVariant::~QVariant(&local_38);
  }
  return;
}

