
undefined * FUN_100cbd270(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return (undefined *)0x0;
  }
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e4f8,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(PTR_PTR_10230e500,param_2);
    lVar2 = 0;
    if (iVar1 == 0) goto LAB_100cbd3d3;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e510,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(PTR_PTR_10230e518,param_2);
    lVar2 = 1;
    if (iVar1 == 0) goto LAB_100cbd3d3;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e528,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(PTR_PTR_10230e530,param_2);
    lVar2 = 2;
    if (iVar1 == 0) goto LAB_100cbd3d3;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e540,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(PTR_PTR_10230e548,param_2);
    lVar2 = 3;
    if (iVar1 == 0) goto LAB_100cbd3d3;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e558,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(PTR_PTR_10230e560,param_2);
    lVar2 = 4;
    if (iVar1 == 0) goto LAB_100cbd3d3;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e570,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100c27160(PTR_PTR_10230e578,param_2);
    lVar2 = 5;
    if (iVar1 == 0) goto LAB_100cbd3d3;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e588,param_1);
  if (iVar1 != 0) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_100c27160(PTR_PTR_10230e590,param_2);
  lVar2 = 6;
  if (iVar1 != 0) {
    return (undefined *)0x0;
  }
LAB_100cbd3d3:
  return (&PTR_s_8192_10230e4f0)[lVar2 * 3];
}

