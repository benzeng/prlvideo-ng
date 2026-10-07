
undefined4 FUN_100203642(undefined8 param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x70);
  if ((*piVar1 == 5) || (piVar1[0x28] == 0x2d)) {
    if (((uint)piVar1[0x16] >> 9 & 1) != 0) {
      FUN_1001ea46a(param_1,0xbf7,0,param_2,0,
                    "The \'final\' of the base type definition contains \'extension\'",0);
      return 0xbf7;
    }
    if (((*(long *)(param_2 + 0xc0) == 0) || (*(long *)(param_2 + 0xc0) != *(long *)(piVar1 + 0x30))
        ) && ((*(int *)(param_2 + 0x5c) != 1 || (piVar1[0x17] != 1)))) {
      if (*(long *)(param_2 + 0x38) == 0) {
        FUN_1001ea46a(param_1,0xbf7,0,param_2,0,"The content type must specify a particle",0);
        return 0xbf7;
      }
      if ((piVar1[0x17] != 1) &&
         ((*(int *)(param_2 + 0x5c) != piVar1[0x17] ||
          ((*(int *)(param_2 + 0x5c) != 3 && (*(int *)(param_2 + 0x5c) != 2)))))) {
        FUN_1001ea46a(param_1,0xbf7,0,param_2,0,
                      "The content type of both, the type and its base type, must either \'mixed\' or \'element-only\'"
                      ,0);
        return 0xbf7;
      }
    }
  }
  else {
    if (*(int **)(param_2 + 0xc0) != piVar1) {
      FUN_1001ea46a(param_1,0xbf7,0,param_2,0,"The content type must be the simple base type",0);
      return 0xbf7;
    }
    if (((uint)piVar1[0x16] >> 9 & 1) != 0) {
      FUN_1001ea46a(param_1,0xbf7,0,param_2,0,
                    "The \'final\' of the base type definition contains \'extension\'",0);
      return 0xbf7;
    }
  }
  return 0;
}

