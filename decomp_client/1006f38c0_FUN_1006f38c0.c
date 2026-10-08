
void FUN_1006f38c0(long param_1)

{
  CImageButtonComplex *pCVar1;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  FUN_100381330(*(undefined8 *)(param_1 + 0x10),1,0xffffffff);
  pCVar1 = operator_new(0x78);
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Upgrade_Later_102270990);
  CImageButtonComplex::CImageButtonComplex(pCVar1,&local_28,*(QWidget **)(param_1 + 0x10));
  *(CImageButtonComplex **)(param_1 + 0x38) = pCVar1;
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006f3954;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1006f3954:
  FUN_100381310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),0xffffffff);
  pCVar1 = operator_new(0x78);
  FUN_1001c7700(&local_30,PTR_s_Upgrade_to___PRODUCT_NAME__1_102270998);
  CImageButtonComplex::CImageButtonComplex(pCVar1,&local_30,*(QWidget **)(param_1 + 0x10));
  *(CImageButtonComplex **)(param_1 + 0x40) = pCVar1;
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006f39ca;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006f39ca:
  FUN_100381310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),0xffffffff);
  return;
}

