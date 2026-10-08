
void FUN_1009ab8e0(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1009985f0(param_1,param_2,3,param_3);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_102235580;
  param_1[10].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e15e8;
  QHostAddress::QHostAddress((QHostAddress *)(param_1 + 0xb));
  *(undefined4 *)&param_1[0xc].field0_0x0 = 0;
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Connecting_to__1_10227df30);
  local_40 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009ab9b8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009ab9b8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009ab9e8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009ab9e8:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

