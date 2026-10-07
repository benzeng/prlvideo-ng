
void FUN_100256b50(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(*(long *)(param_1 + 0x18),PTR_s_Close_100bed668);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  FUN_1002e59b0(param_1);
  return;
}

