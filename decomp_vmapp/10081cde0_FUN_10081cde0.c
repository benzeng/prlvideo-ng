
int FUN_10081cde0(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (DAT_1011c0608 == (code *)0x0) {
    uVar4 = 100;
    uVar5 = 0xf8;
  }
  else {
    if (DAT_1011c0628 != (code *)0x0) {
      (*DAT_1011c0628)(9,0x1d,"cryptlib.c",0xfb);
    }
    if ((DAT_1011c0610 == 0) && (DAT_1011c0610 = FUN_100884e10(), DAT_1011c0610 == 0)) {
      if (DAT_1011c0628 != (code *)0x0) {
        (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0xfe);
      }
      uVar4 = 0x41;
      uVar5 = 0xff;
    }
    else {
      if (DAT_1011c0628 != (code *)0x0) {
        (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x102);
      }
      puVar2 = (undefined4 *)FUN_10081ddd0(0x10,"cryptlib.c",0x104);
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0x41;
        uVar5 = 0x106;
      }
      else {
        *puVar2 = 1;
        lVar3 = (*DAT_1011c0608)("cryptlib.c",0x10a);
        *(long *)(puVar2 + 2) = lVar3;
        if (lVar3 != 0) {
          if (DAT_1011c0628 != (code *)0x0) {
            (*DAT_1011c0628)(9,0x1d,"cryptlib.c",0x111);
          }
          iVar1 = FUN_100885160(DAT_1011c0610,0);
          if (iVar1 == -1) {
            iVar1 = FUN_1008852e0(DAT_1011c0610,puVar2);
            iVar1 = iVar1 + -1;
          }
          else {
            FUN_100885650(DAT_1011c0610,iVar1,puVar2);
          }
          if (DAT_1011c0628 != (code *)0x0) {
            (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x121);
          }
          if (iVar1 == -1) {
            (*DAT_1011c0618)(*(undefined8 *)(puVar2 + 2),"cryptlib.c",0x124);
            FUN_10081e1a0(puVar2);
            iVar1 = -1;
          }
          else {
            iVar1 = iVar1 + 1;
          }
          return -iVar1;
        }
        FUN_10081e1a0(puVar2);
        uVar4 = 0x41;
        uVar5 = 0x10d;
      }
    }
  }
  FUN_100887ce0(0xf,0x67,uVar4,"cryptlib.c",uVar5);
  return 0;
}

