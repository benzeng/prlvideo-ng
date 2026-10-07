
undefined8 FUN_1004c12a0(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xf0000003;
  if ((*(short *)(param_2 + 0x16) == 0) && (3 < *(ushort *)(param_2 + 0x14))) {
    piVar1 = (int *)FUN_1002a6010(param_2);
    switch(*piVar1) {
    case 1:
      uVar3 = FUN_1004c1380(param_1,param_2);
      return uVar3;
    case 2:
      if (3 < *(ushort *)(param_2 + 0x14)) {
        FUN_1002a6010(param_2);
        puVar2 = (undefined4 *)FUN_1002a6010(param_2);
        *puVar2 = 0;
        uVar3 = 0;
      }
      break;
    case 3:
      uVar3 = FUN_1004c14c0(param_1,param_2);
      return uVar3;
    case 4:
    case 5:
      uVar3 = FUN_1004c16c0(param_1,param_2,*piVar1 == 5);
      return uVar3;
    }
  }
  return uVar3;
}

