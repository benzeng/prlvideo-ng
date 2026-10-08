
undefined8
FUN_100c78f10(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_38;
  
  uVar3 = 0;
  iVar1 = (*param_1)(param_3,0);
  lVar2 = FUN_100bf3540(iVar1,"a_digest.c",0x52);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xd,0xb8,0x41,"a_digest.c",0x53);
  }
  else {
    local_38 = lVar2;
    (*param_1)(param_3,&local_38);
    iVar1 = FUN_100c65f10(lVar2,(long)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      FUN_100bf3910(lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

