
undefined8
FUN_1008d5370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    FUN_100887ce0(0x21,0x6b,0x8f,"pk7_doit.c",0x3d3);
  }
  else if (*(long *)(param_4 + 0x20) == 0) {
    FUN_100887ce0(0x21,0x6b,0x7a,"pk7_doit.c",0x3d8);
  }
  else {
    iVar1 = FUN_100821ab0(*(undefined8 *)(param_4 + 0x18));
    if ((iVar1 != 0x16) && (iVar1 = FUN_100821ab0(*(undefined8 *)(param_4 + 0x18)), iVar1 != 0x18))
    {
      FUN_100887ce0(0x21,0x6b,0x72,"pk7_doit.c",0x3e1);
      return 0;
    }
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10);
    lVar2 = FUN_1008b7280(uVar3,**(undefined8 **)(param_5 + 8),(*(undefined8 **)(param_5 + 8))[1]);
    if (lVar2 == 0) {
      FUN_100887ce0(0x21,0x6b,0x6a,"pk7_doit.c",0x3ec);
    }
    else {
      iVar1 = FUN_1008b9a40(param_2,param_1,lVar2,uVar3);
      if (iVar1 == 0) {
        FUN_100887ce0(0x21,0x6b,0xb,"pk7_doit.c",0x3f2);
      }
      else {
        FUN_1008b97a0(param_2,4);
        iVar1 = FUN_1008b7ff0(param_2);
        if (0 < iVar1) {
          FUN_1008b9980(param_2);
          uVar3 = FUN_1008d5550(param_3,param_4,param_5,lVar2);
          return uVar3;
        }
        FUN_100887ce0(0x21,0x6b,0xb,"pk7_doit.c",0x3f8);
        FUN_1008b9980(param_2);
      }
    }
  }
  return 0;
}

