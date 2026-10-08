
/* Function Stack Size: 0x18 bytes */

ID CVmConsoleWindowToolbarController::toolbarAllowedItemIdentifiers_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_148 = &cf_LeftCustomSpace;
  local_140 = &cf_TitleMessage;
  local_138 = &cf_CustomSpace;
  local_130 = &cf_Title;
  local_128 = &cf_ProgressIndicator;
  local_120 = &cf_Show_HideDevices;
  local_118 = &cf_ConfigureVM;
  local_110 = &cf_Feedback;
  local_108 = &cf_Keyboard;
  local_100 = &cf_SharedFolders;
  local_f8 = &cf_Develop;
  local_f0 = &cf_Tools;
  local_e8 = &cf_BuyProduct;
  local_e0 = &cf_Device0;
  local_d8 = &cf_Device1;
  local_d0 = &cf_Device2;
  local_c8 = &cf_Device3;
  local_c0 = &cf_Device4;
  local_b8 = &cf_Device5;
  local_b0 = &cf_Device6;
  local_a8 = &cf_Device7;
  local_a0 = &cf_Device8;
  local_98 = &cf_Device9;
  local_90 = &cf_Device10;
  local_88 = &cf_Device11;
  local_80 = &cf_Device12;
  local_78 = &cf_Device13;
  local_70 = &cf_Device14;
  local_68 = &cf_Device15;
  local_60 = &cf_Device16;
  local_58 = &cf_Device17;
  local_50 = &cf_Device18;
  local_48 = &cf_Device19;
  local_40 = &cf_Device20;
  local_38 = &cf_Device21;
  local_30 = &cf_Device22;
  local_28 = &cf_Device23;
  local_20 = &cf_Device24;
  local_18 = lVar1;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_148,0x26);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (lVar1 == local_18) {
    IVar3 = _objc_autoreleaseReturnValue(uVar2);
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

