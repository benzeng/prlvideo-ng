
void FUN_10005c060(long param_1)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_standardUserDefaults_102269ab0
                    );
  (*(code *)UNRECOVERED_JUMPTABLE)
            (uVar2,PTR_s_setPersistentDomain_forName__102269ac0,uVar1,&cf_com_apple_dock);
                    /* WARNING: Could not recover jumptable at 0x00010005c0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_synchronize_1022698e8);
  return;
}

