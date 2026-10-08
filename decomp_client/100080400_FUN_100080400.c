
void FUN_100080400(long param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_sortOrder_102269f30);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010008042f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),PTR_s_sort_102269f50);
    return;
  }
  return;
}

