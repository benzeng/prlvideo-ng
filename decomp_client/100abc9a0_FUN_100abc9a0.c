
void FUN_100abc9a0(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*param_1,PTR_s_detach_10226a528);
    (*(code *)PTR__objc_msgSend_1021e1c68)(*param_1,PTR_s_release_1022699b8);
    operator_delete(param_1);
    return;
  }
  return;
}

