
undefined8 FUN_1008cb470(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*param_2 == 0) ||
      (((iVar1 = FUN_100880ec0(param_3,"%*scrlUrl: ",param_4,""), 0 < iVar1 &&
        (iVar1 = FUN_1008a3a50(param_3,*param_2), iVar1 != 0)) &&
       (iVar1 = FUN_10087d780(param_3,"\n",1), 0 < iVar1)))) &&
     ((param_2[1] == 0 ||
      (((iVar1 = FUN_100880ec0(param_3,"%*scrlNum: ",param_4,""), 0 < iVar1 &&
        (iVar1 = FUN_1008aa010(param_3,param_2[1]), 0 < iVar1)) &&
       (iVar1 = FUN_10087d780(param_3,"\n",1), 0 < iVar1)))))) {
    if (param_2[2] == 0) {
      return 1;
    }
    iVar1 = FUN_100880ec0(param_3,"%*scrlTime: ",param_4,"");
    if (((0 < iVar1) && (iVar1 = FUN_1008a3d40(param_3,param_2[2]), iVar1 != 0)) &&
       (iVar1 = FUN_10087d780(param_3,"\n",1), 0 < iVar1)) {
      return 1;
    }
  }
  return 0;
}

