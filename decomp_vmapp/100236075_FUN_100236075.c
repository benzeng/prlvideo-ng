
undefined4 * FUN_100236075(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 *local_40;
  long local_18;
  
  local_40 = (undefined4 *)FUN_10022dc25(param_1,param_2);
  if (local_40 == (undefined4 *)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    *local_40 = 9;
    *(undefined8 *)(local_40 + 0xe) = *(undefined8 *)(param_1 + 0x58);
    local_18 = *(long *)(param_2 + 0x18);
    if (local_18 == 0) {
      FUN_10022d5a6(param_1,param_2,0x3ec,"xmlRelaxNGParseattribute: attribute has no children\n",0,
                    0);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
      lVar2 = FUN_100236458(param_1,local_18,local_40);
      if (lVar2 != 0) {
        local_18 = *(long *)(local_18 + 0x30);
      }
      if (local_18 != 0) {
        piVar3 = (int *)FUN_100234ea7(param_1,local_18);
        if ((piVar3 != (int *)0x0) && (*piVar3 + 1U < 0x16)) {
          uVar4 = 1L << ((byte)(*piVar3 + 1U) & 0x3f);
          if ((uVar4 & 0x1fff76) == 0) {
            if ((uVar4 & 0x200088) == 0) {
              if ((uVar4 & 1) != 0) {
                FUN_10022d5a6(param_1,param_2,0x3ed,"RNG Internal error, noop found in attribute\n",
                              0,0);
              }
            }
            else {
              FUN_10022d5a6(param_1,param_2,0x3eb,"attribute has invalid content\n",0,0);
            }
          }
          else {
            *(int **)(local_40 + 0xc) = piVar3;
            *(undefined4 **)(piVar3 + 0xe) = local_40;
          }
        }
        local_18 = *(long *)(local_18 + 0x30);
      }
      if (local_18 != 0) {
        FUN_10022d5a6(param_1,param_2,0x3ea,"attribute has multiple children\n",0,0);
      }
      *(undefined4 *)(param_1 + 0x40) = uVar1;
    }
  }
  return local_40;
}

