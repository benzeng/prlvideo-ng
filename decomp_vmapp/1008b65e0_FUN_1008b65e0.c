
long FUN_1008b65e0(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar2 = FUN_1008b2930(&local_38,local_40,&local_28,"PARAMETERS",param_1,0,0);
  if (iVar2 == 0) {
    return 0;
  }
  local_30 = local_38;
  iVar2 = FUN_1008b4400(local_28,"PARAMETERS");
  if ((0 < iVar2) && (lVar3 = FUN_100891f40(), lVar3 != 0)) {
    iVar2 = FUN_100892110(lVar3,local_28,iVar2);
    if ((iVar2 != 0) &&
       ((pcVar1 = *(code **)(*(long *)(lVar3 + 0x10) + 0x68), pcVar1 != (code *)0x0 &&
        (iVar2 = (*pcVar1)(lVar3,&local_30,local_40[0]), iVar2 != 0)))) {
      if (param_2 != (long *)0x0) {
        if (*param_2 != 0) {
          FUN_1008924e0();
        }
        *param_2 = lVar3;
      }
      goto LAB_1008b66d9;
    }
    FUN_1008924e0(lVar3);
  }
  FUN_100887ce0(9,0x8c,0xd,"pem_pkey.c",0xc1);
  lVar3 = 0;
LAB_1008b66d9:
  FUN_10081e1a0(local_28);
  FUN_10081e1a0(local_38);
  return lVar3;
}

