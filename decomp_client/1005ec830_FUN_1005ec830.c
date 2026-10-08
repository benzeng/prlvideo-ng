
void FUN_1005ec830(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("objConfigButton",0xf);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_28,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ec8aa;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005ec8aa:
  if (pcVar1 != (char *)0x0) {
    local_40 = *(undefined8 *)(param_1 + 0x40);
    QVariant::QVariant(&local_38,0x27,&local_40,1);
    QObject::setProperty(pcVar1,(QVariant *)"action");
    QVariant::~QVariant(&local_38);
  }
  return;
}

