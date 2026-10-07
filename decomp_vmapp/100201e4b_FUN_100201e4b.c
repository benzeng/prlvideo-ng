
void FUN_100201e4b(int *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 0x1c) == 0) {
      uVar1 = FUN_1001ed0e5(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x18),
                            *(undefined8 *)(param_1 + 0x1a));
      *(undefined8 *)(param_1 + 0x1c) = uVar1;
      if (*(long *)(param_1 + 0x1c) == 0) {
        FUN_1001e9f77(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 0x12),"base",
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x1a),4,0);
        return;
      }
    }
    if ((*param_1 == 4) || ((*param_1 == 1 && (param_1[0x28] != 0x2d)))) {
      if (((uint)param_1[0x16] >> 7 & 1) == 0) {
        if (((((uint)param_1[0x16] >> 6 & 1) != 0) && (*(long *)(param_1 + 0xe) == 0)) &&
           (*(long *)(param_1 + 8) != 0)) {
          uVar1 = FUN_1001ed0e5(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 8),
                                *(undefined8 *)(param_1 + 10));
          *(undefined8 *)(param_1 + 0xe) = uVar1;
          if ((*(long *)(param_1 + 0xe) == 0) ||
             ((**(int **)(param_1 + 0xe) != 4 &&
              ((**(int **)(param_1 + 0xe) != 1 ||
               (*(int *)(*(long *)(param_1 + 0xe) + 0xa0) == 0x2d)))))) {
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            FUN_1001e9f77(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 0x12),"itemType",
                          *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),4,0);
          }
        }
      }
      else {
        FUN_1001fea1e(param_2,param_1);
      }
    }
  }
  return;
}

