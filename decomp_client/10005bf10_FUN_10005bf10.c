
void FUN_10005bf10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1021ed4a0;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1[2],PTR_s_release_1022699b8);
  *param_1 = &PTR_FUN_1021ed450;
  if (param_1[1] != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1[1],PTR_s_release_1022699b8);
  }
  operator_delete(param_1);
  return;
}

