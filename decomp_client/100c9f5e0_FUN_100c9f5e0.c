
bool FUN_100c9f5e0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_100c9f240(param_1,param_1[2]);
  if (lVar1 == 0) {
    FUN_100c642a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
  }
  else {
    *param_2 = lVar1;
  }
  return lVar1 != 0;
}

