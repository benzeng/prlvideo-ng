
void FUN_1009adc20(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if (param_2 == 0x8000000) {
    CAbstractWizardPage::pageFinished();
    return;
  }
  lVar4 = FUN_1009983c0();
  lVar4 = *(long *)(lVar4 + 0x28);
  lVar6 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a48)(lVar4);
    lVar6 = lVar4;
  }
  local_40 = 0;
  iVar3 = (*DAT_102310ab8)(lVar6,&local_40);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get auth info error 0x%X",iVar3);
  }
  puVar1 = PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar3 = FUN_10099dc60(DAT_102310ae0,&local_40,&local_48);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error : Unable to get auth user name error 0x%X",
                  iVar3);
  }
  uVar7 = param_2 + 0xf74e5ffe;
  if (((5 < uVar7) || ((0x2dU >> (uVar7 & 0x1f) & 1) == 0)) || (*(int *)(local_48 + 4) != 0)) {
    local_50 = (QArrayData *)puVar1;
    local_58 = (QArrayData *)puVar1;
    FUN_1009af8e0();
    uVar5 = FUN_100998580(param_1);
    FUN_100998560(&local_60,param_1);
    FUN_100a08530(uVar5,&local_60,&local_50,&local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009add9e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1009add9e:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009addce;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1009addce:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009addfe;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1009addfe:
  if (((uVar7 < 6) && ((0x2dU >> (uVar7 & 0x1f) & 1) != 0)) &&
     (cVar2 = FUN_1009ae2a0(param_1), cVar2 != '\0')) {
    uVar5 = FUN_1009983c0(param_1);
    FUN_100992940(uVar5);
  }
  else {
    uVar5 = FUN_1009983c0(param_1);
    FUN_1009929c0(uVar5);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ade6d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009ade6d:
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  if (lVar6 != 0) {
    (*DAT_102310a50)();
  }
  return;
}

