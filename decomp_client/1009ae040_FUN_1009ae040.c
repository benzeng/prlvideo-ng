
void FUN_1009ae040(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = FUN_1009983c0();
  lVar2 = *(long *)(lVar2 + 0x28);
  lVar3 = 0;
  if (lVar2 != 0) {
    (*DAT_102310a48)(lVar2);
    lVar3 = lVar2;
  }
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d37640(param_2,&local_30);
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Client-side passcode changed to \'%s\'",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009ae0f9;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1009ae0f9:
  local_40 = 0;
  iVar1 = (*DAT_1023110d0)(lVar3,1,&local_40);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get \'passcode\' UDP plugin handle error 0x%X",iVar1);
  }
  iVar1 = (*DAT_1023110f8)(local_40,*param_2 + *(long *)(*param_2 + 0x10));
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to set passcode value to UDP plugin error 0x%X",iVar1);
  }
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009ae1cb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009ae1cb:
  if (lVar3 != 0) {
    (*DAT_102310a50)(lVar3);
  }
  return;
}

