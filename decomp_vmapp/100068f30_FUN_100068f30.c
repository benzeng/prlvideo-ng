
void FUN_100068f30(void)

{
  int iVar1;
  int *piVar2;
  __sigaction_u local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  local_18 = (__sigaction_u)0x1;
  iVar1 = _sigaction(0xf,(sigaction *)&local_18,(sigaction *)0x0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    FUN_1008e3970("","vm",0,"Failed to setup SIGTERM signal handler with error %d",*piVar2);
  }
  return;
}

