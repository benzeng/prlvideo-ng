
undefined8 FUN_1003964e0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  uVar3 = 1;
  if ((5 < *(int *)(lVar1 + 0x90) - 1U) && (*(int *)(lVar1 + 0x88) == 0)) {
    if (*(int *)(lVar1 + 0x34) != 0) {
      plVar6 = (long *)**(long **)(param_1 + 0x70);
      plVar8 = *(long **)(param_1 + 0x70) + 1;
      if (plVar6 != plVar8) {
        uVar4 = 0;
        do {
          if (*(char *)(plVar6[5] + 0x74) != '\0') {
            if (*(int *)(plVar6[5] + 0x70) != 2) {
              return 1;
            }
            if (*(char *)(param_1 + 0x80) != '\0') {
              return 1;
            }
            uVar4 = uVar4 + 1;
          }
          plVar7 = plVar6;
          plVar2 = (long *)plVar6[1];
          if ((long *)plVar6[1] == (long *)0x0) {
            do {
              plVar6 = (long *)plVar7[2];
              bVar9 = (long *)*plVar6 != plVar7;
              plVar7 = plVar6;
            } while (bVar9);
          }
          else {
            do {
              plVar6 = plVar2;
              plVar2 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
        } while ((uVar4 < 8) && (plVar6 != plVar8));
      }
    }
    uVar4 = *(uint *)(lVar1 + 0x78);
    if ((((((((uVar4 & 1) == 0) ||
            ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x42c) & 0xffff0000, uVar5 != 0x20000 &&
             ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))) &&
           (((uVar4 & 2) == 0 ||
            ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x52c) & 0xffff0000, uVar5 != 0x20000 &&
             ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))))) &&
          (((uVar4 & 4) == 0 ||
           ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x62c) & 0xffff0000, uVar5 != 0x20000 &&
            ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))))) &&
         (((uVar4 & 8) == 0 ||
          ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x72c) & 0xffff0000, uVar5 != 0x20000 &&
           ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))))) &&
        (((((uVar4 & 0x10) == 0 ||
           ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x82c) & 0xffff0000, uVar5 != 0x20000 &&
            ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))) &&
          (((uVar4 & 0x20) == 0 ||
           ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x92c) & 0xffff0000, uVar5 != 0x20000 &&
            ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))))) &&
         (((uVar4 & 0x40) == 0 ||
          ((uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + 0xa2c) & 0xffff0000, uVar5 != 0x20000 &&
           ((uVar5 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))))))) &&
       (((uVar4 & 0x80) == 0 ||
        ((uVar4 = *(uint *)(*(long *)(param_1 + 0xa0) + 0xb2c) & 0xffff0000, uVar4 != 0x20000 &&
         ((uVar4 != 0x30000 || (*(int *)(lVar1 + 0x54) == 0)))))))) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

