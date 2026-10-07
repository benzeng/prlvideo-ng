
int FUN_1008d9380(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0x6d;
    uVar4 = 0x43;
    uVar6 = 0x8f;
  }
  else {
    lVar2 = FUN_10087d050(param_2);
    if (lVar2 != 0) {
      piVar3 = (int *)FUN_10081ddd0(0x40,"ui_lib.c",0x93);
      if (piVar3 == (int *)0x0) {
        return -1;
      }
      *(long *)(piVar3 + 2) = lVar2;
      piVar3[0xe] = 1;
      piVar3[4] = 0;
      *piVar3 = 5;
      piVar3[6] = 0;
      piVar3[7] = 0;
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 == 0) {
        lVar2 = FUN_100884e10();
        *(long *)(param_1 + 8) = lVar2;
        if (lVar2 == 0) {
          if (((*(byte *)(piVar3 + 0xe) & 1) != 0) &&
             (FUN_10081e1a0(*(undefined8 *)(piVar3 + 2)), *piVar3 == 3)) {
            FUN_10081e1a0(*(undefined8 *)(piVar3 + 8));
            FUN_10081e1a0(*(undefined8 *)(piVar3 + 10));
            FUN_10081e1a0(*(undefined8 *)(piVar3 + 0xc));
          }
          FUN_10081e1a0(piVar3);
          return -1;
        }
      }
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      iVar1 = FUN_1008852e0(lVar2,piVar3);
      return iVar1 - (uint)(iVar1 < 1);
    }
    uVar5 = 0x65;
    uVar4 = 0x41;
    uVar6 = 0x183;
  }
  FUN_100887ce0(0x28,uVar5,uVar4,"ui_lib.c",uVar6);
  return -1;
}

