
undefined8 FUN_1003654e0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_RDX;
  
  uVar3 = FUN_10035da40(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_100319cd0(uVar3);
  lVar4 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e16a0,0);
  if (lVar4 != 0) {
    uVar3 = FUN_1003463e0(uVar3,lVar4);
    return uVar3;
  }
  ___cxa_bad_cast();
  uVar2 = FUN_100361e40(*(undefined8 *)(*(long *)(param_3 + 8) + 0x38),extraout_RDX);
  if ((uVar2 & 0x10000000) != 0) {
    cVar1 = FUN_10035de90(*(undefined8 *)(param_3 + 8),0,0);
    if (cVar1 != '\0') {
      uVar3 = FUN_10035da40(*(undefined8 *)(param_3 + 8));
      uVar3 = FUN_100319cd0(uVar3);
      FUN_100346ec0(uVar3,uVar2 & 0xefffffff);
    }
  }
  return 0;
}

