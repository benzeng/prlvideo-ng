
undefined8
FUN_100cb08f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    FUN_100c62ee0(0x21,0x6b,0x8f,"pk7_doit.c",0x3d3);
  }
  else if (*(long *)(param_4 + 0x20) == 0) {
    FUN_100c62ee0(0x21,0x6b,0x7a,"pk7_doit.c",0x3d8);
  }
  else {
    iVar1 = FUN_100bf7220(*(undefined8 *)(param_4 + 0x18));
    if ((iVar1 != 0x16) && (iVar1 = FUN_100bf7220(*(undefined8 *)(param_4 + 0x18)), iVar1 != 0x18))
    {
      FUN_100c62ee0(0x21,0x6b,0x72,"pk7_doit.c",0x3e1);
      return 0;
    }
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10);
    lVar2 = FUN_100c92800(uVar3,**(undefined8 **)(param_5 + 8),(*(undefined8 **)(param_5 + 8))[1]);
    if (lVar2 == 0) {
      FUN_100c62ee0(0x21,0x6b,0x6a,"pk7_doit.c",0x3ec);
    }
    else {
      iVar1 = FUN_100c94fc0(param_2,param_1,lVar2,uVar3);
      if (iVar1 == 0) {
        FUN_100c62ee0(0x21,0x6b,0xb,"pk7_doit.c",0x3f2);
      }
      else {
        FUN_100c94d20(param_2,4);
        iVar1 = FUN_100c93570(param_2);
        if (0 < iVar1) {
          FUN_100c94f00(param_2);
          uVar3 = FUN_100cb0ad0(param_3,param_4,param_5,lVar2);
          return uVar3;
        }
        FUN_100c62ee0(0x21,0x6b,0xb,"pk7_doit.c",0x3f8);
        FUN_100c94f00(param_2);
      }
    }
  }
  return 0;
}

