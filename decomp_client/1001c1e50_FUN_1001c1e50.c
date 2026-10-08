
undefined1 FUN_1001c1e50(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uid_t uVar5;
  QObject *pQVar6;
  int *piVar7;
  QObject *pQVar8;
  QString local_70;
  undefined1 local_68 [32];
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (param_1 == 0x25) {
    pQVar6 = operator_new(0x68);
    FUN_1001a67e0(pQVar6,param_2);
    piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    puVar1 = PTR_s_DynProp_BlockingDialog_102270e98;
    pQVar8 = (QObject *)0x0;
    if ((piVar7 != (int *)0x0) && (pQVar8 = (QObject *)0x0, piVar7[1] != 0)) {
      pQVar8 = pQVar6;
    }
    QVariant::QVariant(&local_40,true);
    QObject::setProperty((char *)pQVar8,(QVariant *)puVar1);
    QVariant::~QVariant(&local_40);
    iVar4 = (**(code **)(*(long *)pQVar6 + 0x1a8))(pQVar6);
    if (piVar7 != (int *)0x0) {
      if (piVar7[1] != 0) {
        QObject::deleteLater();
      }
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar7);
      }
    }
    return iVar4 == 1;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_1 != 0x15) goto LAB_1001c1fbb;
  FUN_100d969d0(local_68);
  uVar5 = _getuid();
  FUN_100d96dd0(local_68,uVar5);
  cVar2 = FUN_100d95f40(local_68);
  if (cVar2 != '\0') {
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Authentication_is_required_to_cr_102270740);
    QString::operator=(&local_48,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001c1fb2;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
LAB_1001c1fb2:
  FUN_100d96c00();
LAB_1001c1fbb:
  uVar3 = MacUtils::requestAuthorization((AuthorizationOpaqueRef **)0x0,true,&local_48,(int *)0x0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar3;
}

