
void FUN_100256960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bae770;
  if (param_1[3] == 0) {
    FUN_1002e59b0(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_100ba25e8)(param_1[3],PTR_s_Close_100bed668);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(param_1[3],PTR_s_dealloc_100bed598);
  }
  FUN_1002e5890(param_1);
  return;
}

