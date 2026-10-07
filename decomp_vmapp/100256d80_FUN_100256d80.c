
void FUN_100256d80(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*(long *)(param_1 + 0x18),PTR_s_isModeSupported_secondValue__100bed6e8,param_2,
               param_3);
    return;
  }
  FUN_1002e5a70(param_1,param_2,param_3);
  return;
}

