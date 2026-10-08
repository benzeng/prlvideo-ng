
undefined8 FUN_100c05d30(byte *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((((*param_1 == (&DAT_101da6e50)[*param_1]) && (param_1[1] == (&DAT_101da6e50)[param_1[1]])) &&
      (param_1[2] == (&DAT_101da6e50)[param_1[2]])) &&
     (((param_1[3] == (&DAT_101da6e50)[param_1[3]] && (param_1[4] == (&DAT_101da6e50)[param_1[4]]))
      && ((param_1[5] == (&DAT_101da6e50)[param_1[5]] &&
          (param_1[6] == (&DAT_101da6e50)[param_1[6]])))))) {
    if (param_1[7] == (&DAT_101da6e50)[param_1[7]]) {
      iVar1 = FUN_100c05bf0(param_1);
      uVar2 = 0xfffffffe;
      if (iVar1 == 0) {
        FUN_100c05dd0(param_1,param_2);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

