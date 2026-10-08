
void FUN_100df9520(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_alloc_102268b58);
  lVar1 = *param_3;
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (uVar2,PTR_s_initWithCharacters_length__10226a770,
                     *(long *)(lVar1 + 0x10) + lVar1,(long)*(int *)(lVar1 + 4));
                    /* WARNING: Could not recover jumptable at 0x000100df956e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_autorelease_102269a10);
  return;
}

