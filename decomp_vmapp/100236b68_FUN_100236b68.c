
undefined4 * FUN_100236b68(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 *local_50;
  int *local_20;
  long local_18;
  
  local_50 = (undefined4 *)FUN_10022dc25(param_1,param_2);
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    *local_50 = 4;
    *(undefined8 *)(local_50 + 0xe) = *(undefined8 *)(param_1 + 0x58);
    local_18 = *(long *)(param_2 + 0x18);
    if (local_18 == 0) {
      FUN_10022d5a6(param_1,param_2,0x3f9,"xmlRelaxNGParseElement: element has no children\n",0,0);
    }
    else {
      lVar2 = FUN_100236458(param_1,local_18,local_50);
      if (lVar2 != 0) {
        local_18 = *(long *)(local_18 + 0x30);
      }
      if (local_18 == 0) {
        FUN_10022d5a6(param_1,param_2,0x3fc,"xmlRelaxNGParseElement: element has no content\n",0,0);
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = 0;
        local_20 = (int *)0x0;
        for (; local_18 != 0; local_18 = *(long *)(local_18 + 0x30)) {
          piVar3 = (int *)FUN_100234ea7(param_1,local_18);
          if (piVar3 != (int *)0x0) {
            *(undefined4 **)(piVar3 + 0xe) = local_50;
            switch(*piVar3) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
              if (local_20 == (int *)0x0) {
                *(int **)(local_50 + 0xc) = piVar3;
                local_20 = piVar3;
              }
              else {
                if ((*local_20 == 4) && (*(int **)(local_50 + 0xc) == local_20)) {
                  uVar4 = FUN_10022dc25(param_1,param_2);
                  *(undefined8 *)(local_50 + 0xc) = uVar4;
                  if (*(long *)(local_50 + 0xc) == 0) {
                    *(int **)(local_50 + 0xc) = local_20;
                  }
                  else {
                    **(undefined4 **)(local_50 + 0xc) = 0x12;
                    *(int **)(*(long *)(local_50 + 0xc) + 0x30) = local_20;
                  }
                }
                *(int **)(local_20 + 0x10) = piVar3;
                local_20 = piVar3;
              }
              break;
            case 2:
              FUN_10022d5a6(param_1,param_2,0x3fa,"RNG Internal error, except found in element\n",0,
                            0);
              break;
            case 6:
              FUN_10022d5a6(param_1,param_2,0x3fa,"RNG Internal error, param found in element\n",0,0
                           );
              break;
            case 9:
              *(undefined8 *)(piVar3 + 0x10) = *(undefined8 *)(local_50 + 0x12);
              *(int **)(local_50 + 0x12) = piVar3;
              break;
            case 0x14:
              FUN_10022d5a6(param_1,param_2,0x3fa,"RNG Internal error, start found in element\n",0,0
                           );
              break;
            case -1:
              FUN_10022d5a6(param_1,param_2,0x3fa,"RNG Internal error, noop found in element\n",0,0)
              ;
            }
          }
        }
        *(undefined8 *)(param_1 + 0x50) = uVar1;
      }
    }
  }
  return local_50;
}

