
undefined8 FUN_100c77510(code *param_1,code *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  
  uVar3 = 0;
  if (param_3 != 0) {
    iVar1 = (*param_1)(param_3,0);
    lVar2 = FUN_100bf3540(iVar1 + 10,"a_dup.c",0x4c);
    if (lVar2 == 0) {
      FUN_100c62ee0(0xd,0x6f,0x41,"a_dup.c",0x4e);
      uVar3 = 0;
    }
    else {
      local_38 = lVar2;
      iVar1 = (*param_1)(param_3,&local_38);
      local_40 = lVar2;
      uVar3 = (*param_2)(0,&local_40,(long)iVar1);
      FUN_100bf3910(lVar2);
    }
  }
  return uVar3;
}

