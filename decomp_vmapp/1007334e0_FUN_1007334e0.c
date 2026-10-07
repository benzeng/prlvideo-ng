
undefined8 FUN_1007334e0(long *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0xc0);
  if (((pcVar1 != (code *)0x0) && (*param_1 == *param_2)) &&
     (iVar2 = (*pcVar1)(param_1,param_2), iVar2 != 0)) {
    return 1;
  }
  if ((int)param_2[5] == 0) {
    return 1;
  }
  uVar3 = FUN_100737410(param_2 + 4,param_1 + 0xd,param_2 + 4);
  return uVar3;
}

