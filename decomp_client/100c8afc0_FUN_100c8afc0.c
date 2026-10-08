
undefined8 FUN_100c8afc0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar2 = FUN_100c8abb0(param_1,param_1 + 4,(int *)((long)param_1 + 0x14),param_1 + 3,*param_2);
  *(uint *)(param_1 + 2) = uVar2;
  if ((uVar2 & 0x80) == 0) {
    if (*(int *)((long)param_1 + 0x14) == 0x10) {
      lVar1 = *param_1;
      lVar4 = (lVar4 - lVar1) + *param_2;
      *param_2 = lVar4;
      if ((param_1[5] == 0) || (-1 < lVar4)) {
        if (uVar2 == 0x21) {
          param_1[4] = (lVar4 + *(long *)param_1[7]) - lVar1;
        }
        *(undefined4 *)(param_1 + 1) = 0;
        uVar3 = 1;
      }
      else {
        *(undefined4 *)((long)param_1 + 0xc) = 0x3e;
        uVar3 = 0;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + 0xc) = 0x3d;
      uVar3 = 0;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc) = 0x3c;
    uVar3 = 0;
  }
  return uVar3;
}

