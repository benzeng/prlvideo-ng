
int FUN_1008d8750(long param_1,long param_2,int param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x8f;
  }
  else {
    lVar2 = FUN_10087d050(param_2);
    if (lVar2 == 0) {
      FUN_100887ce0(0x28,0x67,0x41,"ui_lib.c",0xf9);
      return 0;
    }
    if (param_4 != 0) {
      piVar3 = (int *)FUN_10081ddd0(0x40,"ui_lib.c",0x93);
      if (piVar3 == (int *)0x0) {
        return -1;
      }
      *(long *)(piVar3 + 2) = lVar2;
      piVar3[0xe] = 1;
      piVar3[4] = param_3;
      *piVar3 = 1;
      *(long *)(piVar3 + 6) = param_4;
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
      piVar3[8] = param_5;
      piVar3[9] = param_6;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      iVar1 = FUN_1008852e0(lVar2,piVar3);
      return iVar1 - (uint)(iVar1 < 1);
    }
    uVar4 = 0x69;
    uVar5 = 0x92;
  }
  FUN_100887ce0(0x28,0x6d,uVar4,"ui_lib.c",uVar5);
  return -1;
}

