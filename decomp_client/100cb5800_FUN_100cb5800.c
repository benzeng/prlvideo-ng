
int FUN_100cb5800(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (param_2 == 0) {
    FUN_100c62ee0(0x28,0x6d,0x43,"ui_lib.c",0x8f);
    iVar1 = -1;
  }
  else {
    piVar2 = (int *)FUN_100bf3540(0x40,"ui_lib.c",0x93);
    iVar1 = -1;
    if (piVar2 != (int *)0x0) {
      *(long *)(piVar2 + 2) = param_2;
      piVar2[0xe] = 0;
      piVar2[4] = 0;
      *piVar2 = 4;
      piVar2[6] = 0;
      piVar2[7] = 0;
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = FUN_100c60010();
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 == 0) {
          if (((*(byte *)(piVar2 + 0xe) & 1) != 0) &&
             (FUN_100bf3910(*(undefined8 *)(piVar2 + 2)), *piVar2 == 3)) {
            FUN_100bf3910(*(undefined8 *)(piVar2 + 8));
            FUN_100bf3910(*(undefined8 *)(piVar2 + 10));
            FUN_100bf3910(*(undefined8 *)(piVar2 + 0xc));
          }
          FUN_100bf3910(piVar2);
          return -1;
        }
      }
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      piVar2[8] = 0;
      piVar2[9] = 0;
      iVar1 = FUN_100c604e0(lVar3,piVar2);
      iVar1 = iVar1 - (uint)(iVar1 < 1);
    }
  }
  return iVar1;
}

