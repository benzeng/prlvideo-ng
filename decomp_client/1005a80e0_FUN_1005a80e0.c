
void FUN_1005a80e0(long param_1)

{
  QMapNodeBase *pQVar1;
  undefined8 uVar2;
  Connection local_48 [8];
  QVariant local_40;
  QArrayData *local_30;
  QMapNodeBase *local_28;
  undefined1 local_19;
  
  local_28 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_30 = (QArrayData *)QString::fromAscii_helper("wizardStyleType",0xf);
  QVariant::QVariant(&local_40,"pd10");
  FUN_10008d1b0(&local_28,&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005a8168;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005a8168:
  uVar2 = CDeclarativeWizardContentProvider::startWizard
                    (*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),&local_28,1);
  QObject::connect(local_48,uVar2,"2contentLoaded(QObject*)",param_1,"1show()",2);
  QMetaObject::Connection::~Connection(local_48);
  pQVar1 = local_28;
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
    if (*(long *)(local_28 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

