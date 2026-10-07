
undefined8 FUN_1003be550(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  uint3 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 local_258 [544];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  sVar1 = *(short *)(param_2 + 0x4c);
  local_38 = lVar2;
  if (sVar1 == 0x1f) {
    FUN_1003b9a60(local_258,*(undefined8 *)(param_2 + 0x40),4,1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(uint3 *)(param_2 + 0x54);
    uVar4 = FUN_1003ba9d0(local_258);
    pcVar5 = "!";
    if ((uVar3 & 0x4000) != 0) {
      pcVar5 = "";
    }
    FUN_10038e8e0(uVar6,"if (%s%s)\n{\n",pcVar5,uVar4);
    FUN_1003b9b40(local_258);
  }
  else {
    if (sVar1 == 0x15) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      pcVar5 = "}\n";
    }
    else {
      if (sVar1 != 0x12) goto LAB_1003be623;
      uVar6 = *(undefined8 *)(param_1 + 8);
      pcVar5 = "}\nelse\n{\n";
    }
    FUN_10038e8e0(uVar6,pcVar5);
  }
LAB_1003be623:
  if (lVar2 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

