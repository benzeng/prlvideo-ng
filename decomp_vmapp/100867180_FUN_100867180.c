
bool FUN_100867180(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1008648d0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_1008648d0(*(undefined8 *)(param_2 + 0x20));
  iVar1 = FUN_10085bcd0(uVar2,uVar3,0);
  return iVar1 == 0;
}

