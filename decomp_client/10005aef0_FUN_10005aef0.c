
void FUN_10005aef0(long param_1,long param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_retain_102269a88);
  }
  if (*(long *)(param_1 + 8) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + 8),PTR_s_release_1022699b8);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

