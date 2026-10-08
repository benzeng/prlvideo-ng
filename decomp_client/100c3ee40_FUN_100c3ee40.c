
long FUN_100c3ee40(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (lVar6 = *(long *)(lVar1 + 8), lVar6 == 0)) {
    uVar5 = 0x43;
    uVar7 = 0x4f7;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x10);
    if (lVar4 == 0) {
      lVar4 = FUN_100c368e0();
      *(long *)(lVar1 + 0x10) = lVar4;
      if (lVar4 == 0) {
        uVar5 = 0x41;
        uVar7 = 0x4fd;
        goto LAB_100c3eec9;
      }
      lVar6 = *(long *)(lVar1 + 8);
    }
    iVar3 = FUN_100c454a0(lVar6,lVar4,*param_2,param_3,0);
    if (iVar3 != 0) {
      pbVar2 = (byte *)*param_2;
      *(uint *)(lVar1 + 0x24) = *pbVar2 & 0xfe;
      *param_2 = pbVar2 + param_3;
      return lVar1;
    }
    uVar5 = 0x10;
    uVar7 = 0x501;
  }
LAB_100c3eec9:
  FUN_100c62ee0(0x10,0x98,uVar5,"ec_asn1.c",uVar7);
  return 0;
}

