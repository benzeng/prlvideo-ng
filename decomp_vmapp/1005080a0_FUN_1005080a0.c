
void FUN_1005080a0(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_release_100bed2a0);
    operator_delete(param_1);
    return;
  }
  return;
}

