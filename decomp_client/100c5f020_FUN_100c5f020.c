
bool FUN_100c5f020(int param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  int *piVar2;
  undefined8 in_R9;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,in_EAX);
  iVar1 = _ioctl(param_1,0x8004667e,&stack0xffffffffffffffec);
  if (iVar1 < 0) {
    piVar2 = ___error();
    FUN_100c62ee0(2,5,*piVar2,"b_sock.c",0x22f,in_R9,uVar3);
  }
  return iVar1 == 0;
}

