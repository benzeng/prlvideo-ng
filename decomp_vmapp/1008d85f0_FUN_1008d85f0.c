
int FUN_1008d85f0(long param_1,long param_2,int param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x8f;
  }
  else {
    if (param_4 != 0) {
      piVar2 = (int *)FUN_10081ddd0(0x40,"ui_lib.c",0x93);
      if (piVar2 == (int *)0x0) {
        return -1;
      }
      *(long *)(piVar2 + 2) = param_2;
      piVar2[0xe] = 0;
      piVar2[4] = param_3;
      *piVar2 = 1;
      *(long *)(piVar2 + 6) = param_4;
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = FUN_100884e10();
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 == 0) {
          if (((*(byte *)(piVar2 + 0xe) & 1) != 0) &&
             (FUN_10081e1a0(*(undefined8 *)(piVar2 + 2)), *piVar2 == 3)) {
            FUN_10081e1a0(*(undefined8 *)(piVar2 + 8));
            FUN_10081e1a0(*(undefined8 *)(piVar2 + 10));
            FUN_10081e1a0(*(undefined8 *)(piVar2 + 0xc));
          }
          FUN_10081e1a0(piVar2);
          return -1;
        }
      }
      piVar2[8] = param_5;
      piVar2[9] = param_6;
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      iVar1 = FUN_1008852e0(lVar3,piVar2);
      return iVar1 - (uint)(iVar1 < 1);
    }
    uVar4 = 0x69;
    uVar5 = 0x92;
  }
  FUN_100887ce0(0x28,0x6d,uVar4,"ui_lib.c",uVar5);
  return -1;
}

