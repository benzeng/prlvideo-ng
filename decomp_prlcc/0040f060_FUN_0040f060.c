
undefined4 FUN_0040f060(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  sigaction local_1e8;
  sigaction local_148;
  _union_1457 local_a8;
  sigset_t local_a0;
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  memset(&local_a8,0,0x98);
  local_a8.sa_handler = (__sighandler_t)PTR_otgMonCheckSigHandler_0061bd50;
  sigemptyset(&local_a0);
  iVar1 = sigaction(4,(sigaction *)&local_a8,&local_148);
  iVar2 = sigaction(0xb,(sigaction *)&local_a8,&local_1e8);
  iVar3 = __sigsetjmp(&DAT_0061da60,1);
  if (iVar3 == 0) {
    local_c = FUN_0040ee90(param_1);
  }
  if (iVar2 == 0) {
    sigaction(0xb,&local_1e8,(sigaction *)0x0);
  }
  if (iVar1 == 0) {
    sigaction(4,&local_148,(sigaction *)0x0);
  }
  return local_c;
}

