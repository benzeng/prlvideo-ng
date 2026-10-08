
void FUN_1009ac1d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = *param_2;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"usePasscode",
                     0xffffffff,1);
  if (iVar4 == 0) {
    FUN_100d372f0(&local_30);
    puVar2 = PTR_shared_null_1021e1288;
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    cVar3 = FUN_100d37640(&local_30,&local_38);
    if (cVar3 == '\0') {
      local_58 = (QArrayData *)puVar2;
      FUN_1009ae040(param_1,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1009ac347;
        }
        QArrayData::deallocate(local_58,1,8);
      }
    }
    else {
      pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
      QVariant::QVariant(&local_48,&local_38);
      QObject::setProperty(pcVar5,(QVariant *)"passcode");
      QVariant::~QVariant(&local_48);
      local_50 = local_30;
      if (1 < *(int *)local_30 + 1U) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + 1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
      }
      FUN_1009ae040(param_1,&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1009ac347;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
LAB_1009ac347:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009ac377;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1009ac377:
    if (*(int *)local_30 == -1) goto LAB_1009ac3a7;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      iVar4 = *(int *)local_30;
      UNLOCK();
      goto joined_r0x0001009ac392;
    }
  }
  else {
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1009ae040(param_1,&local_60);
    if (*(int *)local_60 == -1) goto LAB_1009ac3a7;
    local_30 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar4 = *(int *)local_60;
      UNLOCK();
joined_r0x0001009ac392:
      local_21 = iVar4 != 0;
      if ((bool)local_21) goto LAB_1009ac3a7;
    }
  }
  QArrayData::deallocate(local_30,1,8);
LAB_1009ac3a7:
  FUN_1009bf300(param_1);
  return;
}

