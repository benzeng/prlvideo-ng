
long FUN_100404650(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  do {
    lVar2 = *(long *)(param_1 + 0x30);
    if (((lVar2 == 0) || (param_2 < *(ulong *)(lVar2 + 0x20))) ||
       ((ulong)*(uint *)(lVar2 + 0x1c) + *(ulong *)(lVar2 + 0x20) <= param_2)) {
      lVar2 = *(long *)(param_1 + 8);
      while (lVar1 = 0, lVar2 != 0) {
        if (param_2 < (ulong)*(uint *)(lVar2 + -0x14) + *(ulong *)(lVar2 + -0x10)) {
          if (*(ulong *)(lVar2 + -0x10) < (param_3 & 0xffffffff) + param_2) {
            lVar1 = lVar2 + -0x30;
            break;
          }
          lVar2 = *(long *)(lVar2 + 0x10);
        }
        else {
          lVar2 = *(long *)(lVar2 + 8);
        }
      }
      do {
        lVar2 = lVar1;
        if (lVar2 == 0) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          return 0;
        }
        lVar3 = FUN_1007d9a60(lVar2 + 0x30);
      } while ((lVar3 != 0) &&
              (lVar1 = lVar3 + -0x30,
              param_2 < (ulong)*(uint *)(lVar3 + -0x14) + *(long *)(lVar3 + -0x10)));
      *(long *)(param_1 + 0x30) = lVar2;
    }
    if (*(int *)(lVar2 + 0x14) != 3) {
      return lVar2;
    }
    FUN_100404740(param_1,lVar2);
  } while( true );
}

