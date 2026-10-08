
off_t FUN_100db3080(long *param_1,off_t param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  off_t oVar3;
  off_t oVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  oVar4 = -1;
  if (cVar1 != '\0') {
    oVar3 = _lseek((int)param_1[1],param_2,param_3);
    if (oVar3 == -1) {
      uVar2 = FUN_100db96d0();
      *(undefined4 *)((long)param_1 + 0x14) = uVar2;
    }
    else {
      param_1[3] = oVar3;
      oVar4 = oVar3;
    }
  }
  return oVar4;
}

