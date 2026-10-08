
undefined1 FUN_100b8fe00(undefined8 param_1,int *param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined1 uVar6;
  
  uVar6 = 0;
  if ((param_2 != (int *)0x0) && (0xb < param_3)) {
    if (*param_2 == 0xfaed819) {
      if (param_2[1] == 0x12cca) {
        uVar2 = param_2[2];
        uVar6 = 1;
        if (uVar2 != 0) {
          uVar5 = 0;
          piVar1 = param_2;
          do {
            piVar4 = piVar1 + 3;
            if (*(char *)((long)piVar1 + 0x17) ==
                (char)(*(char *)((long)piVar1 + 0xd) + (char)*piVar4 + *(char *)((long)piVar1 + 0xe)
                       + *(char *)((long)piVar1 + 0xf) + (char)piVar1[4] +
                       *(char *)((long)piVar1 + 0x11) + *(char *)((long)piVar1 + 0x12) +
                       *(char *)((long)piVar1 + 0x13) + (char)piVar1[5] +
                       *(char *)((long)piVar1 + 0x15) + *(char *)((long)piVar1 + 0x16))) {
              puVar3 = (undefined4 *)FUN_100b903d0(param_4,piVar4);
              *puVar3 = 1;
              uVar2 = param_2[2];
            }
            uVar5 = uVar5 + 1;
            piVar1 = piVar4;
          } while (uVar5 < uVar2);
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

