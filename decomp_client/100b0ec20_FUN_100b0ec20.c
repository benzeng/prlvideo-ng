
int FUN_100b0ec20(long *param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return -0x7ffdefef;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1,param_2,param_3,1);
  iVar2 = FUN_100b0dfd0(param_2,(int)param_1[3],0,param_1[8],param_1 + 1);
  if (iVar2 < 0) {
    FUN_100df99c0("","dimg",0,"Plain open: Can\'t open file 0x%x",iVar2);
    return iVar2;
  }
  uVar3 = (**(code **)(*param_1 + 0x160))(param_1);
  uVar1 = param_1[7];
  if ((uVar3 == 0) || (uVar3 % uVar1 != 0)) {
    pcVar4 = "Incorrect size for plain disk %llu, sector size %llu";
LAB_100b0ecbf:
    FUN_100df99c0("","dimg",0,pcVar4,uVar3);
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar2 = -0x7ffdefcd;
  }
  else {
    if ((int)param_1[0xc] == 1) {
      if ((uVar3 < 0x1900000) &&
         (((uVar1 * 2 + 0x41fe) - (uVar1 + 0x3fff) % uVar1) - (uVar1 + 0x1ff) % uVar1 < uVar3)) {
        pcVar4 = "Too small size for plain disk %llu, sector size %llu";
        goto LAB_100b0ecbf;
      }
    }
    (**(code **)(*param_1 + 0x188))(param_1,uVar3);
    iVar2 = 0;
    param_1[4] = uVar3 / (ulong)param_1[7];
  }
  return iVar2;
}

