
void FUN_100df36c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_respondsToSelector__102269d98);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100df36ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_performSelector__102269300,param_3);
    return;
  }
  return;
}

