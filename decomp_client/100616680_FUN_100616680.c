
void FUN_100616680(QObject *param_1,QObject *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  _func_void_Node_ptr *local_38;
  undefined1 local_2b;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022213b0;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15d0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_100616850(&local_38);
  FUN_10061c780(param_1 + 0x20,&local_38);
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_2b = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_2b) goto LAB_100616720;
    }
    QHashData::free_helper(local_38);
  }
LAB_100616720:
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,
                "2licenseChanged(const QString&, const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                ,
                "2licenseChanged(const QString&, const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                ,0);
  return;
}

