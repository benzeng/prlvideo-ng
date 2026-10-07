
undefined8 FUN_1003f3cf0(long *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1[1] == 0) {
    iVar2 = FUN_1003f38c0(param_1);
    if (iVar2 == 0) {
      uVar3 = 0;
      if (*(int *)(param_1[0x24] + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003f3d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_1 + 0x98))(param_1,param_1 + 0x24);
        return uVar3;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + 0xc4) = 0x16;
      uVar3 = 0xffffffff;
    }
  }
  else {
    cVar1 = operator==((QString *)(param_1 + 4),param_2);
    uVar3 = 0;
    if (cVar1 == '\0') {
      uVar3 = 0;
      FUN_1008e3970("","DVDImage",0,"[Devices] Double connect. Names do not match");
    }
  }
  return uVar3;
}

