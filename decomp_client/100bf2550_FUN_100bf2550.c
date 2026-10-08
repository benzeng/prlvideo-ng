
int FUN_100bf2550(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (DAT_102315ff8 == (code *)0x0) {
    uVar4 = 100;
    uVar5 = 0xf8;
  }
  else {
    if (DAT_102316018 != (code *)0x0) {
      (*DAT_102316018)(9,0x1d,"cryptlib.c",0xfb);
    }
    if ((DAT_102316000 == 0) && (DAT_102316000 = FUN_100c60010(), DAT_102316000 == 0)) {
      if (DAT_102316018 != (code *)0x0) {
        (*DAT_102316018)(10,0x1d,"cryptlib.c",0xfe);
      }
      uVar4 = 0x41;
      uVar5 = 0xff;
    }
    else {
      if (DAT_102316018 != (code *)0x0) {
        (*DAT_102316018)(10,0x1d,"cryptlib.c",0x102);
      }
      puVar2 = (undefined4 *)FUN_100bf3540(0x10,"cryptlib.c",0x104);
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0x41;
        uVar5 = 0x106;
      }
      else {
        *puVar2 = 1;
        lVar3 = (*DAT_102315ff8)("cryptlib.c",0x10a);
        *(long *)(puVar2 + 2) = lVar3;
        if (lVar3 != 0) {
          if (DAT_102316018 != (code *)0x0) {
            (*DAT_102316018)(9,0x1d,"cryptlib.c",0x111);
          }
          iVar1 = FUN_100c60360(DAT_102316000,0);
          if (iVar1 == -1) {
            iVar1 = FUN_100c604e0(DAT_102316000,puVar2);
            iVar1 = iVar1 + -1;
          }
          else {
            FUN_100c60850(DAT_102316000,iVar1,puVar2);
          }
          if (DAT_102316018 != (code *)0x0) {
            (*DAT_102316018)(10,0x1d,"cryptlib.c",0x121);
          }
          if (iVar1 == -1) {
            (*DAT_102316008)(*(undefined8 *)(puVar2 + 2),"cryptlib.c",0x124);
            FUN_100bf3910(puVar2);
            iVar1 = -1;
          }
          else {
            iVar1 = iVar1 + 1;
          }
          return -iVar1;
        }
        FUN_100bf3910(puVar2);
        uVar4 = 0x41;
        uVar5 = 0x10d;
      }
    }
  }
  FUN_100c62ee0(0xf,0x67,uVar4,"cryptlib.c",uVar5);
  return 0;
}

