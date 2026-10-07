
void FUN_1000918d0(undefined8 param_1,char param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if ((DAT_1011b6498 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011b6498), iVar1 != 0)) {
    DAT_1011b6490 = (char *)FUN_10061ba20(0x88);
    ___cxa_guard_release(&DAT_1011b6498);
  }
  if ((DAT_1011b64a8 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011b64a8), iVar1 != 0)) {
    DAT_1011b64a0 = DAT_1011b6490;
    ___cxa_guard_release(&DAT_1011b64a8);
  }
  if ((param_2 != '\0') && (*DAT_1011b64a0 == param_2)) {
    if (DAT_1011b64a0[1] != '\0') {
      DAT_1011b64a0 = DAT_1011b64a0 + 1;
      return;
    }
    bVar2 = param_3 == 0;
    bVar3 = DAT_1011b64b0 == '\0';
    DAT_1011b64b0 = bVar2;
    if ((bVar3) && (bVar2)) {
      DAT_1011b64a0 = DAT_1011b64a0 + 1;
      FUN_1002592b0(FUN_100091ac0,0);
    }
  }
  DAT_1011b64a0 = DAT_1011b6490;
  return;
}

