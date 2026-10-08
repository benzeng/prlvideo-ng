
undefined8 * FUN_10019c9a0(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = CProblemReport::getReportType();
  if ((uVar1 < 0x11) && ((0x10106U >> (uVar1 & 0x1f) & 1) != 0)) {
    FUN_1001c7700(param_1,PTR_s_A_critical_error_occurred_with___10226fb70);
  }
  else {
    *param_1 = PTR_shared_null_1021e1288;
  }
  return param_1;
}

