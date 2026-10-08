
void FUN_10005a180(void)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (0,PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithFloat__102269a18);
  uVar3 = *(undefined8 *)PTR__kCFPreferencesCurrentUser_1021e18f8;
  uVar1 = *(undefined8 *)PTR__kCFPreferencesCurrentHost_1021e18f0;
  _CFPreferencesSetValue(&cf_dndStart,uVar2,&cf_com_apple_notificationcenterui,uVar3,uVar1);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (DAT_100e12224,PTR__OBJC_CLASS___NSNumber_10226a848,
                     PTR_s_numberWithFloat__102269a18);
  _CFPreferencesSetValue(&cf_dndEnd,uVar2,&cf_com_apple_notificationcenterui,uVar3,uVar1);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithBool__102269a20,1);
  _CFPreferencesSetValue(&cf_doNotDisturb,uVar2,&cf_com_apple_notificationcenterui,uVar3,uVar1);
  _CFPreferencesSynchronize(&cf_com_apple_notificationcenterui,uVar3,uVar1);
  uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                     PTR_s_defaultCenter_102268ba8);
                    /* WARNING: Could not recover jumptable at 0x00010005a27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar3,PTR_s_postNotificationName_object_user_102269a28,
             &cf_com_apple_notificationcenterui_dndprefs_changed,0,0,1);
  return;
}

