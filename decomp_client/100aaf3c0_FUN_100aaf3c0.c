
void FUN_100aaf3c0(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_102313a70 != 0) {
    FUN_100ab03a0(DAT_102313a68);
    if (DAT_102313a70 != 0) {
      if (DAT_102313a70 == 1) {
        FUN_100bf2ca0(0);
        FUN_100bf2b40(0);
        FUN_100cacac0();
        FUN_100c6bd70();
        FUN_100c54b60();
        FUN_100bf4cd0(*(undefined8 *)PTR____stderrp_1021e1848);
        FUN_100bf4f80();
        FUN_100c64130(0);
        FUN_100c62e70();
        lVar2 = DAT_102313a78;
        if (DAT_102313a78 != 0) {
          pvVar1 = (void *)(DAT_102313a78 + -8);
          if (*(long *)(DAT_102313a78 + -8) != 0) {
            lVar3 = *(long *)(DAT_102313a78 + -8) << 6;
            do {
              FUN_100ab0380(lVar2 + -0x40 + lVar3);
              lVar3 = lVar3 + -0x40;
            } while (lVar3 != 0);
          }
          operator_delete__(pvVar1);
        }
        DAT_102313a78 = 0;
      }
      DAT_102313a70 = DAT_102313a70 + -1;
    }
    FUN_100ab03b0(DAT_102313a68);
    return;
  }
  return;
}

