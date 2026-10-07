
void FUN_10028baf0(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_2 + 0x88);
  cVar1 = *(char *)(lVar2 + 0x18);
  if ((cVar1 == -0x6f) || (cVar1 == '5')) {
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    iVar4 = 2;
LAB_10028bb69:
    FUN_10025b2f0(param_1 + 0xd,iVar4);
    return;
  }
  lVar3 = *(long *)(param_2 + 0xe0);
  iVar4 = FUN_10028b9f0(param_1,param_2);
  if (-1 < iVar4) {
    FUN_10028b7c0(lVar3,param_1 + 0x7429);
    iVar4 = (*(uint *)(lVar3 + 0x30) & 1) + 1;
    goto LAB_10028bb69;
  }
  cVar1 = *(char *)(lVar2 + 0x18);
  uVar5 = 0x30c00;
  if (cVar1 < -0x56) {
    if (cVar1 == -0x76) goto LAB_10028bbd0;
  }
  else if (cVar1 < '*') {
    if ((cVar1 == -0x56) || (cVar1 == '\n')) goto LAB_10028bbd0;
  }
  else if ((cVar1 == '*') || (cVar1 == '5')) goto LAB_10028bbd0;
  uVar5 = 0x31100;
  if (cVar1 == -0x6f) {
    uVar5 = 0x30c00;
  }
LAB_10028bbd0:
  FUN_1004103f0(uVar5,param_2 + 0xc0,0x12,0);
  FUN_100288630(param_1,(int)param_1[0x12],param_2);
  return;
}

