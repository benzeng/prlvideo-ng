
void FUN_10005b9b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,param_2
                    );
                    /* WARNING: Could not recover jumptable at 0x00010005b9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setObject_forKey__102269208,uVar2,&cf_file_label);
  return;
}

