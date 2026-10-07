
int FUN_10087a5e0(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x92;
    goto LAB_10087a709;
  }
  FUN_10081d010(9,0x1e,"eng_init.c",0x95);
  piVar1 = (int *)(param_1 + 0xb0);
  *piVar1 = *piVar1 + -1;
  iVar2 = 1;
  if ((*piVar1 == 0) && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_10081d010(10,0x1e,"eng_init.c",0x69);
    iVar2 = (**(code **)(param_1 + 0x78))(param_1);
    FUN_10081d010(9,0x1e,"eng_init.c",0x6c);
    if (iVar2 != 0) goto LAB_10087a669;
  }
  else {
LAB_10087a669:
    iVar3 = FUN_1008797e0(param_1,0);
    if (iVar3 != 0) {
      FUN_10081d010(10,0x1e,"eng_init.c",0x97);
      return iVar2;
    }
    FUN_100887ce0(0x26,0xbf,0x6a,"eng_init.c",0x78);
  }
  FUN_10081d010(10,0x1e,"eng_init.c",0x97);
  uVar4 = 0x6a;
  uVar5 = 0x99;
LAB_10087a709:
  FUN_100887ce0(0x26,0x6b,uVar4,"eng_init.c",uVar5);
  return 0;
}

