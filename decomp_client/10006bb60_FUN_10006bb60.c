
void FUN_10006bb60(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = MacUtils::getWindowRef(*(QWidget **)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010006bb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setIgnoresMouseEvents__102268b70,param_2);
  return;
}

