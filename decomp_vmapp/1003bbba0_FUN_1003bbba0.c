
undefined8 FUN_1003bbba0(long param_1,long param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint3 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_258 [544];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  sVar1 = *(short *)(param_2 + 0x4c);
  local_38 = lVar8;
  if (sVar1 == 5) {
LAB_1003bbbde:
    FUN_1003b9a60(local_258,*(undefined8 *)(param_2 + 0x40),4,1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(uint3 *)(param_2 + 0x54);
    uVar4 = FUN_1003ba9d0(local_258);
    pcVar6 = "!";
    if ((uVar3 & 0x4000) != 0) {
      pcVar6 = "";
    }
    FUN_10038e8e0(uVar7,"if (%s%s) ",pcVar6,uVar4);
    FUN_1003b9b40(local_258);
    sVar1 = *(short *)(param_2 + 0x4c);
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1003bbc88:
    if ((ushort)(sVar1 - 0x3eU) < 2) {
      lVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
      pcVar6 = "";
      if ((lVar5 == 0) && (*(char *)(param_1 + 0x18) != '\0')) {
        if (*(short *)(param_2 + 0x4c) == 0x3f) {
          FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n{\n");
          pcVar6 = "\n}\n";
        }
        else {
          pcVar6 = "";
        }
        FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"init_output_registers();\n");
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"return;\n%s",pcVar6);
      if ((**(long **)(param_2 + 8) == 0) || (*(short *)(**(long **)(param_2 + 8) + 0x4c) == 0x2c))
      {
        FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"}\n");
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      goto LAB_1003bbd65;
    }
    if (1 < (ushort)(sVar1 - 4U)) goto LAB_1003bbd65;
    lVar5 = *(long *)(param_2 + 0x40) + 0x40;
    if (sVar1 != 5) {
      lVar5 = *(long *)(param_2 + 0x40);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(lVar5 + 0x28);
    pcVar6 = "Label%d();\n";
  }
  else {
    if (sVar1 == 0x3f) goto LAB_1003bbbde;
    if (sVar1 != 0x2c) goto LAB_1003bbc88;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x28);
    pcVar6 = "void Label%d()\n{\n";
  }
  FUN_10038e8e0(uVar7,pcVar6,uVar2);
LAB_1003bbd65:
  if (lVar8 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

