
void FUN_10067a010(long param_1,char param_2)

{
  int iVar1;
  QString local_28;
  undefined1 local_19;
  
  *(char *)(param_1 + 0x16a) = param_2;
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x15e) == '\0') {
      return;
    }
    iVar1 = 0xb;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x164);
    if (iVar1 == -1) {
      if (*(char *)(param_1 + 0x161) != '\0') {
        FUN_10067a130(param_1,2);
        return;
      }
      if (*(undefined **)(param_1 + 0x140) != PTR_shared_null_1021e1288) {
        local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        QString::operator=((QString *)(param_1 + 0x140),&local_28);
        if (*(int *)local_28.field0_0x0 != -1) {
          if (*(int *)local_28.field0_0x0 != 0) {
            LOCK();
            *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
            local_19 = *(int *)local_28.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10067a0d9;
          }
          QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
        }
      }
LAB_10067a0d9:
      FUN_100676830(param_1,0);
      return;
    }
  }
  CAbstractWizardModel::goToPage(param_1,iVar1,0);
  return;
}

