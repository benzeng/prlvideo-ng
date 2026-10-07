
undefined8 FUN_1003bf370(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *(ushort *)(param_2 + 0x4c);
  if (uVar1 < 0x13) {
    if (uVar1 != 9) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (uVar1 < 0x14) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      pcVar3 = "init_output_registers();\nEmitVertex();\n";
      goto LAB_1003bf439;
    }
    if (uVar1 < 0x76) {
      if (uVar1 == 0x14) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        pcVar3 = "init_output_registers();\nEmitVertex();\nEndPrimitive();\n";
      }
      else {
        if (uVar1 != 0x75) {
          return 0;
        }
        uVar4 = *(undefined8 *)(param_1 + 8);
        if (*(int *)(*(long *)(param_2 + 0x40) + 0x28) != 0) {
          pcVar3 = "init_output_registers();\nEmitStreamVertex(%d);\n";
LAB_1003bf3fa:
          FUN_10038e8e0(uVar4,pcVar3);
          return 0;
        }
        pcVar3 = "init_output_registers();\nEmitVertex();\n";
      }
      goto LAB_1003bf439;
    }
    if (uVar1 != 0x76) {
      if (uVar1 != 0x77) {
        return 0;
      }
      iVar2 = *(int *)(*(long *)(param_2 + 0x40) + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 8);
      if (iVar2 != 0) {
        FUN_10038e8e0(uVar4,
                      "init_output_registers();\nEmitStreamVertex(%d);\nEndStreamPrimitive(%d);\n",
                      iVar2,iVar2);
        return 0;
      }
      pcVar3 = "init_output_registers();\nEmitVertex();\nEndPrimitive();\n";
      goto LAB_1003bf439;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)(param_2 + 0x40) + 0x28) != 0) {
      pcVar3 = "EndStreamPrimitive(%d);\n";
      goto LAB_1003bf3fa;
    }
  }
  pcVar3 = "EndPrimitive();\n";
LAB_1003bf439:
  FUN_10038e8e0(uVar4,pcVar3);
  return 0;
}

