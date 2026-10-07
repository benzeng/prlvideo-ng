
void FUN_1007ead50(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_1011c04d8 != 0) {
    FUN_1007eaef0(DAT_1011c04d0);
    if (DAT_1011c04d8 != 0) {
      if (DAT_1011c04d8 == 1) {
        FUN_10081d530(0);
        FUN_10081d3d0(0);
        FUN_1008d1540();
        FUN_100890b70();
        FUN_100879960();
        FUN_10081f560(*(undefined8 *)PTR____stderrp_100ba2328);
        FUN_10081f810();
        FUN_100888f30(0);
        FUN_100887c70();
        lVar2 = DAT_1011c04e0;
        if (DAT_1011c04e0 != 0) {
          pvVar1 = (void *)(DAT_1011c04e0 + -8);
          if (*(long *)(DAT_1011c04e0 + -8) != 0) {
            lVar3 = *(long *)(DAT_1011c04e0 + -8) << 6;
            do {
              FUN_1007eaed0(lVar2 + -0x40 + lVar3);
              lVar3 = lVar3 + -0x40;
            } while (lVar3 != 0);
          }
          operator_delete__(pvVar1);
        }
        DAT_1011c04e0 = 0;
      }
      DAT_1011c04d8 = DAT_1011c04d8 + -1;
    }
    FUN_1007eaf00(DAT_1011c04d0);
    return;
  }
  return;
}

