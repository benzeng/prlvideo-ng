
int FUN_100beded0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  FUN_100c63270();
  uVar4 = FUN_100c59ee0();
  lVar5 = FUN_100c58530(uVar4);
  if (lVar5 == 0) {
    FUN_100c62ee0(0x14,0xdc,7,"ssl_rsa.c",0x2aa);
    iVar1 = 0;
  }
  else {
    lVar6 = FUN_100c58d60(lVar5,0x6c,3,param_2);
    if (lVar6 < 1) {
      FUN_100c62ee0(0x14,0xdc,2,"ssl_rsa.c",0x2af);
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      lVar6 = FUN_100c90be0(lVar5,0,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0))
      ;
      if (lVar6 == 0) {
        FUN_100c62ee0(0x14,0xdc,9,"ssl_rsa.c",0x2b6);
      }
      else {
        iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x130));
        if (iVar1 == 0) {
          FUN_100c62ee0(0x14,0xab,0x41,"ssl_rsa.c",0x174);
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_100beccd0(*(undefined8 *)(param_1 + 0x130),lVar6);
        }
        lVar7 = FUN_100c63660();
        iVar1 = 0;
        if ((iVar2 != 0) && (iVar1 = 0, lVar7 == 0)) {
          if (*(long *)(param_1 + 0xf8) != 0) {
            FUN_100c60790(*(long *)(param_1 + 0xf8),FUN_100c7cd70);
            *(undefined8 *)(param_1 + 0xf8) = 0;
          }
          do {
            lVar7 = FUN_100c90ae0(lVar5,0,*(undefined8 *)(param_1 + 0xa8),
                                  *(undefined8 *)(param_1 + 0xb0));
            if (lVar7 == 0) {
              uVar3 = FUN_100c637f0();
              iVar1 = 0;
              if ((uVar3 & 0xff000fff) == 0x900006c) {
                FUN_100c63270();
                iVar1 = iVar2;
              }
              goto LAB_100bee0b4;
            }
            iVar1 = FUN_100be4800(param_1,0xe,0,lVar7);
          } while (iVar1 != 0);
          FUN_100c7cd70(lVar7);
          iVar1 = 0;
        }
LAB_100bee0b4:
        FUN_100c7cd70(lVar6);
      }
    }
    FUN_100c586e0(lVar5);
  }
  return iVar1;
}

