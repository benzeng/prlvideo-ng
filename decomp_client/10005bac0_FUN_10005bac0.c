
void FUN_10005bac0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_2 != 0) && (lVar1 = 1, param_2 != 1)) && (lVar1 = 2, param_2 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010005bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__102269208,
             (&PTR_cf_file_tile_1021ed460)[lVar1 * 2],&cf_tile_type);
  return;
}

