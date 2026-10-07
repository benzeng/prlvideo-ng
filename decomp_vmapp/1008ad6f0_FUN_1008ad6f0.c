
undefined8 FUN_1008ad6f0(undefined8 param_1,undefined8 param_2)

{
  uint in_EAX;
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  uVar1 = FUN_1008ad740(param_1,param_2,0,(long)&uStack_18 + 4);
  if (uStack_18._4_4_ != 0) {
    FUN_100887ce0(0xd,0xb2,uStack_18._4_4_,"asn1_gen.c",0x90);
  }
  return uVar1;
}

