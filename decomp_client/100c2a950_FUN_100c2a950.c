
undefined8 FUN_100c2a950(undefined8 param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (((int)param_2[2] != 0) && (iVar3 = FUN_100c58980(param_1,"-",1), iVar3 != 1)) {
    return 0;
  }
  iVar3 = (int)param_2[1];
  if (iVar3 == 0) {
    iVar3 = FUN_100c58980(param_1,"0",1);
    if (iVar3 != 1) {
      return 0;
    }
    iVar3 = (int)param_2[1];
  }
  if (0 < iVar3) {
    bVar2 = false;
    lVar6 = (long)iVar3;
    do {
      lVar5 = 0x3c;
      do {
        uVar4 = *(ulong *)(*param_2 + -8 + lVar6 * 8) >> ((byte)lVar5 & 0x3f);
        if ((uVar4 & 0xf) != 0 || bVar2) {
          bVar2 = true;
          iVar3 = FUN_100c58980(param_1,"0123456789ABCDEF" + ((uint)uVar4 & 0xf),1);
          if (iVar3 != 1) {
            return 0;
          }
        }
        lVar5 = lVar5 + -4;
      } while (-1 < lVar5);
      bVar1 = 1 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar1);
  }
  return 1;
}

