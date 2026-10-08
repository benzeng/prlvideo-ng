
undefined4 FUN_100936d13(undefined8 param_1,long param_2)

{
  undefined4 local_1c;
  
  if ((*(long *)(param_2 + 0x70) == 0) ||
     (((**(int **)(param_2 + 0x70) != 4 &&
       ((**(int **)(param_2 + 0x70) != 1 || (*(int *)(*(long *)(param_2 + 0x70) + 0xa0) == 0x2d))))
      || (((*(uint *)(param_2 + 0x58) >> 1 ^ 1) & 1) == 0)))) {
    local_1c = 0;
  }
  else {
    FUN_10091dd92(param_1,0xc04,0,param_2,0,
                  "If the base type is a simple type, the derivation method must be \'extension\'",0
                 );
    local_1c = 0xc04;
  }
  return local_1c;
}

