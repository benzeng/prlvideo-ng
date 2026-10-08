
undefined8 FUN_100365530(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_100361e40(*(undefined8 *)(*(long *)(param_1 + 8) + 0x38),param_3);
  if ((uVar2 & 0x10000000) != 0) {
    cVar1 = FUN_10035de90(*(undefined8 *)(param_1 + 8),0,0);
    if (cVar1 != '\0') {
      uVar3 = FUN_10035da40(*(undefined8 *)(param_1 + 8));
      uVar3 = FUN_100319cd0(uVar3);
      FUN_100346ec0(uVar3,uVar2 & 0xefffffff);
    }
  }
  return 0;
}

