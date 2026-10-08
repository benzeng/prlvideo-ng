
void FUN_100346850(undefined8 param_1,int param_2,undefined4 param_3,double *param_4,double *param_5
                  )

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 4) {
    FUN_1003466e0(*param_4,*param_5,param_1,param_3);
    return;
  }
  if (param_2 == 5) {
    dVar1 = *param_4;
    if (0.0 <= dVar1) {
      iVar2 = (int)(dVar1 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar1);
    }
    dVar1 = *param_5;
    if (0.0 <= dVar1) {
      iVar3 = (int)(dVar1 + DAT_100e110f0);
    }
    else {
      iVar3 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar1);
    }
    FUN_100346610(param_1,param_3,iVar2,iVar3);
    return;
  }
  if (DAT_10230ffd0 < 2) {
    return;
  }
  FUN_100df99c0("","prl_client_app",2,"Unknown gesture type %d",param_2);
  return;
}

