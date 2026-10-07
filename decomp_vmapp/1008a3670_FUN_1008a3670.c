
uint FUN_1008a3670(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined1 local_30 [4];
  undefined4 local_2c;
  
  iVar1 = FUN_10087d870(param_1,"    Signature Algorithm: ");
  uVar2 = 0;
  if ((0 < iVar1) && (iVar1 = FUN_1008993b0(param_1,*param_2), 0 < iVar1)) {
    iVar1 = FUN_100821ab0(*param_2);
    if ((iVar1 != 0) &&
       (((iVar1 = FUN_100823110(iVar1,local_30,&local_2c), iVar1 != 0 &&
         (lVar3 = FUN_1008a98b0(0,local_2c), lVar3 != 0)) &&
        (*(code **)(lVar3 + 0x98) != (code *)0x0)))) {
      uVar2 = (**(code **)(lVar3 + 0x98))(param_1,param_2,param_3,9,0);
      return uVar2;
    }
    if (param_3 == 0) {
      iVar1 = FUN_10087d870(param_1,"\n");
      uVar2 = (uint)(0 < iVar1);
    }
    else {
      uVar2 = FUN_1008a3950(param_1,param_3,9);
    }
  }
  return uVar2;
}

