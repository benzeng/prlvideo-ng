
undefined8 FUN_10089bf90(code *param_1,code *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  
  uVar3 = 0;
  if (param_3 != 0) {
    iVar1 = (*param_1)(param_3,0);
    lVar2 = FUN_10081ddd0(iVar1 + 10,"a_dup.c",0x4c);
    if (lVar2 == 0) {
      FUN_100887ce0(0xd,0x6f,0x41,"a_dup.c",0x4e);
      uVar3 = 0;
    }
    else {
      local_38 = lVar2;
      iVar1 = (*param_1)(param_3,&local_38);
      local_40 = lVar2;
      uVar3 = (*param_2)(0,&local_40,(long)iVar1);
      FUN_10081e1a0(lVar2);
    }
  }
  return uVar3;
}

