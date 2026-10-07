
int FUN_10087a520(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_100887ce0(0x26,0x77,0x43,"eng_init.c",0x83);
    return 0;
  }
  FUN_10081d010(9,0x1e,"eng_init.c",0x86);
  iVar2 = *(int *)(param_1 + 0xb0);
  iVar1 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x70))(param_1);
      iVar2 = 0;
      if (iVar1 == 0) goto LAB_10087a588;
      iVar2 = *(int *)(param_1 + 0xb0);
    }
  }
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  *(int *)(param_1 + 0xb0) = iVar2 + 1;
  iVar2 = iVar1;
LAB_10087a588:
  FUN_10081d010(10,0x1e,"eng_init.c",0x88);
  return iVar2;
}

