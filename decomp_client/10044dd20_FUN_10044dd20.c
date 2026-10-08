
char * FUN_10044dd20(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  switch(param_3) {
  case 0:
    ppuVar1 = &PTR_s_Some_of_the_settings_on_this_pag_10226ec40;
    goto LAB_10044de93;
  case 1:
    if (param_2 < 0x19) {
      if (param_2 < 9) {
        if (param_2 == 3) {
LAB_10044de8c:
          ppuVar1 = &PTR_s_Some_of_these_settings_will_be_a_10226ec38;
        }
        else {
          if (param_2 != 4) goto switchD_10044dd49_default;
          ppuVar1 = &PTR_s_Shared_folders_will_be_available_10226ec10;
        }
      }
      else {
        if (param_2 != 9) {
          if (param_2 != 0x11) goto switchD_10044dd49_default;
          goto LAB_10044de8c;
        }
        ppuVar1 = &PTR_s_Shared_Applications_and_SmartSel_10226ec20;
      }
    }
    else {
      if (param_2 != 0x19) goto switchD_10044dd49_default;
      ppuVar1 = &PTR_s_Internet_applications_will_be_sh_10226ec28;
    }
LAB_10044de93:
    iVar2 = (int)*ppuVar1;
    break;
  case 2:
    iVar2 = 0x1df5017;
    break;
  case 3:
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1df5079);
    EnumUtils::enumToString(&local_30,param_4,1);
    QString::arg(param_1,&local_28,&local_30,0,0x20);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10044de11;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_10044de11:
    if (*(int *)local_28 == -1) {
      return param_1;
    }
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
    return param_1;
  case 4:
    iVar2 = 0x1df50ae;
    break;
  case 5:
    iVar2 = 0x1df513e;
    break;
  default:
switchD_10044dd49_default:
    *(undefined **)param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar2);
  return param_1;
}

