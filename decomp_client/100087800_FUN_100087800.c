
void FUN_100087800(long param_1,undefined8 param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSFileManager_10226aa58,PTR_s_defaultManager_102269fe8);
  uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,param_2
                    );
  cVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_fileExistsAtPath__102269ff0,uVar3);
  if (cVar1 != '\0') {
    uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)
                      (uVar2,PTR_s_attributesOfItemAtPath_error__102269ff8,uVar3,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = (*(code *)UNRECOVERED_JUMPTABLE)
                      (uVar3,PTR_s_objectForKeyedSubscript__102269240,
                       *(undefined8 *)PTR__NSFileCreationDate_1021e10b8);
    (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_setVmCreationDate__10226a000,uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = (*(code *)UNRECOVERED_JUMPTABLE)
                      (uVar3,PTR_s_objectForKeyedSubscript__102269240,
                       *(undefined8 *)PTR__NSFileModificationDate_1021e10c0);
                    /* WARNING: Could not recover jumptable at 0x0001000878c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_setVmModificationDate__10226a008,uVar3);
    return;
  }
  return;
}

