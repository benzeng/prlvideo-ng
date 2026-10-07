
uint FUN_1006efe40(long *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (*(int *)(*param_1 + 4) != 0)) {
    uVar1 = FUN_1006eec80(param_2,param_1);
    uVar1 = (uVar1 & 4) >> 2;
  }
  return uVar1;
}

