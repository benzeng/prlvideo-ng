
bool FUN_100504ec0(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  iVar3 = FUN_100506270(*param_1,param_1 + 1);
  if (iVar3 == 0) {
    *(undefined1 *)((long)param_1 + 0x11) = 0;
    if (*(long *)(*param_1 + 0x10) != 0) {
      lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 != 0) {
          lVar4 = 0;
          do {
            while (lVar5 = lVar2, uVar6 = *(uint *)(lVar5 + 0x18), 7 < uVar6) {
              lVar2 = *(long *)(lVar5 + 8);
              lVar4 = lVar5;
              if (*(long *)(lVar5 + 8) == 0) goto LAB_100504f4c;
            }
            lVar2 = *(long *)(lVar5 + 0x10);
          } while (*(long *)(lVar5 + 0x10) != 0);
          if (lVar4 != 0) {
            uVar6 = *(uint *)(lVar4 + 0x18);
            lVar5 = lVar4;
LAB_100504f4c:
            if ((uVar6 < 9) && (lVar5 != lVar1 + 8)) {
              QString::operator=((QString *)(param_1 + 5),(QString *)(lVar5 + 0x20));
            }
          }
        }
      }
    }
  }
  return iVar3 == 0;
}

