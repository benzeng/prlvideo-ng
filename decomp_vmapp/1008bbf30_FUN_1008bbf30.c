
bool FUN_1008bbf30(undefined8 *param_1,uint param_2,char *param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  bool bVar5;
  
  sVar4 = param_4 & 0xffffffff;
  bVar5 = false;
  if ((param_1 != (undefined8 *)0x0) && ((param_3 != (char *)0x0 || ((int)param_4 == 0)))) {
    if (((int)param_2 < 1) || ((param_2 & 0x1000) == 0)) {
      if ((int)param_4 < 0) {
        sVar4 = _strlen(param_3);
      }
      iVar2 = FUN_1008afb30(param_1[1],param_3,sVar4 & 0xffffffff);
      bVar5 = false;
      if ((iVar2 != 0) && (bVar5 = true, param_2 != 0xffffffff)) {
        if (param_2 == 0xfffffffe) {
          uVar1 = FUN_10089b650(param_3,sVar4 & 0xffffffff);
          *(undefined4 *)(param_1[1] + 4) = uVar1;
        }
        else {
          *(uint *)(param_1[1] + 4) = param_2;
        }
      }
    }
    else {
      uVar1 = FUN_100821ab0(*param_1);
      lVar3 = FUN_1008b0780(param_1 + 1,param_3,param_4 & 0xffffffff,param_2,uVar1);
      bVar5 = lVar3 != 0;
    }
  }
  return bVar5;
}

