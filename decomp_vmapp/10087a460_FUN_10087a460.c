
int FUN_10087a460(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0xb0);
  *piVar1 = *piVar1 + -1;
  iVar2 = 1;
  if ((*piVar1 == 0) && (*(code **)(param_1 + 0x78) != (code *)0x0)) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x78))(param_1);
    }
    else {
      FUN_10081d010(10,0x1e,"eng_init.c",0x69);
      iVar2 = (**(code **)(param_1 + 0x78))(param_1);
      FUN_10081d010(9,0x1e,"eng_init.c",0x6c);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_1008797e0(param_1,0);
  if (iVar3 == 0) {
    FUN_100887ce0(0x26,0xbf,0x6a,"eng_init.c",0x78);
    iVar2 = 0;
  }
  return iVar2;
}

