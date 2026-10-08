
/* Function Stack Size: 0x20 bytes */

ID QLResponder::previewPanel_previewItemAtIndex_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  
  lVar1 = itemArray;
  if (-1 < (long)param_4) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + itemArray),PTR_s_count_102268e68);
    if (param_4 < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100abb33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (*(undefined8 *)(param_1 + lVar1),PTR_s_objectAtIndex__102269480,param_4);
      return IVar3;
    }
  }
  return 0;
}

