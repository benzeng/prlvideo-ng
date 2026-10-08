
void FUN_10008b390(long param_1,char param_2)

{
  undefined8 uVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___PDProgress_10226aa60;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != '\0') {
    uVar3 = FUN_1007ef6a0(*(undefined8 *)(param_1 + 0x48));
    UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_progressWithAbstractOperation__10226a0a8,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010008b3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setProgress__10226a088,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008b3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setProgress__10226a088,0);
  return;
}

