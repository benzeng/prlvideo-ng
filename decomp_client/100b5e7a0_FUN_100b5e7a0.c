
undefined8 FUN_100b5e7a0(long param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  sigaction local_20;
  
  local_20.__sigaction_u.__sa_handler = FUN_100b5e4e0;
  local_20.sa_mask = 0;
  local_20.sa_flags = 2;
  iVar1 = _sigaction(*(int *)(param_1 + 0x18),&local_20,(sigaction *)(param_1 + 0x38));
  if (iVar1 < 1) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

