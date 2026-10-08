
/* Function Stack Size: 0x18 bytes */

ID PreviewItem::itemWithFilePath_(ID param_1,SEL param_2,const_char__ param_3)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ID IVar2;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_PreviewItem_10226aad0,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_initWithFilePath__10226a498,param_3);
                    /* WARNING: Could not recover jumptable at 0x000100abb033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar2 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_autorelease_102269a10);
  return IVar2;
}

