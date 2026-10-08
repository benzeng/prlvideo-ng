
int FUN_100c5e580(int param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _ioctl(param_1,param_2);
  if (iVar1 < 0) {
    piVar2 = ___error();
    FUN_100c62ee0(2,5,*piVar2,"b_sock.c",0x22f);
  }
  return iVar1;
}

