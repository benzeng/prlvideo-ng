
uint FUN_100c32a30(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  FUN_100c27c60(param_4);
  lVar2 = FUN_100c27e20(param_4);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    iVar1 = FUN_100c27200(lVar2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_100c23170(param_1,0,lVar2,param_2,param_4);
      uVar3 = -(uint)(iVar1 == 0) | param_3;
    }
  }
  FUN_100c27d40(param_4);
  return uVar3;
}

