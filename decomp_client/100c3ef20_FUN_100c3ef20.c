
ulong FUN_100c3ef20(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x510;
LAB_100c3efd9:
    FUN_100c62ee0(0x10,0x97,uVar4,"ec_asn1.c",uVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c45420(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x24),0,0,0);
    if ((param_2 != (long *)0x0) && (uVar2 != 0)) {
      lVar3 = *param_2;
      bVar1 = false;
      if (lVar3 == 0) {
        lVar3 = FUN_100bf3540(uVar2 & 0xffffffff,"ec_asn1.c",0x51c);
        *param_2 = lVar3;
        if (lVar3 == 0) {
          uVar4 = 0x41;
          uVar5 = 0x51d;
          goto LAB_100c3efd9;
        }
        bVar1 = true;
      }
      lVar3 = FUN_100c45420(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x24),lVar3,uVar2,0);
      if (lVar3 == 0) {
        FUN_100c62ee0(0x10,0x97,0x10,"ec_asn1.c",0x524);
        if (!bVar1) {
          return 0;
        }
        FUN_100bf3910(*param_2);
        *param_2 = 0;
        return 0;
      }
      if (!bVar1) {
        *param_2 = *param_2 + uVar2;
      }
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}

