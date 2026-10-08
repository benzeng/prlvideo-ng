
long FUN_100cb1370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  iVar1 = FUN_100c929e0(param_2,param_3);
  if (iVar1 == 0) {
    FUN_100c62ee0(0x21,0x89,0x7f,"pk7_smime.c",0xa3);
    return 0;
  }
  lVar3 = FUN_100cae630(param_1,param_2,param_3,param_4);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x21,0x89,0x7c,"pk7_smime.c",0xa9);
    return 0;
  }
  if (((param_5 & 2) == 0) && (iVar1 = FUN_100cae310(param_1,param_2), iVar1 == 0)) {
    return 0;
  }
  if ((param_5 & 0x100) != 0) {
    return lVar3;
  }
  iVar1 = FUN_100cb26d0(lVar3,0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_5 & 0x200) == 0) {
    lVar4 = FUN_100c60010();
    if (lVar4 == 0) {
      FUN_100c62ee0(0x21,0x89,0x41,"pk7_smime.c",0xb8);
      return 0;
    }
    uVar5 = FUN_100bf70a0(0x1ab);
    lVar6 = FUN_100c6bd50(uVar5);
    if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x1ab,0xffffffff), iVar1 != 0)) {
      uVar5 = FUN_100bf70a0(0x329);
      lVar6 = FUN_100c6bd60(uVar5);
      if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x329,0xffffffff), iVar1 != 0)) {
        uVar5 = FUN_100bf70a0(0x32d);
        lVar6 = FUN_100c6bd50(uVar5);
        if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x32d,0xffffffff), iVar1 != 0)) {
          uVar5 = FUN_100bf70a0(0x1a7);
          lVar6 = FUN_100c6bd50(uVar5);
          if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x1a7,0xffffffff), iVar1 != 0)) {
            uVar5 = FUN_100bf70a0(0x1a3);
            lVar6 = FUN_100c6bd50(uVar5);
            if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x1a3,0xffffffff), iVar1 != 0)) {
              uVar5 = FUN_100bf70a0(0x2c);
              lVar6 = FUN_100c6bd50(uVar5);
              if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x2c,0xffffffff), iVar1 != 0)) {
                uVar5 = FUN_100bf70a0(0x25);
                lVar6 = FUN_100c6bd50(uVar5);
                if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x25,0x80), iVar1 != 0)) {
                  uVar5 = FUN_100bf70a0(0x25);
                  lVar6 = FUN_100c6bd50(uVar5);
                  if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x25,0x40), iVar1 != 0)) {
                    uVar5 = FUN_100bf70a0(0x1f);
                    lVar6 = FUN_100c6bd50(uVar5);
                    if ((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x1f,0xffffffff), iVar1 != 0))
                    {
                      uVar5 = FUN_100bf70a0(0x25);
                      lVar6 = FUN_100c6bd50(uVar5);
                      if (((lVar6 == 0) || (iVar1 = FUN_100cb25c0(lVar4,0x25,0x28), iVar1 != 0)) &&
                         (iVar1 = FUN_100cb24d0(lVar3,lVar4), iVar1 != 0)) {
                        FUN_100c60790(lVar4,FUN_100c7ae40);
                        goto LAB_100cb161e;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (lVar4 == 0) {
      return 0;
    }
    FUN_100c60790(lVar4,FUN_100c7ae40);
  }
  else {
LAB_100cb161e:
    if ((param_5 & 0x8000) == 0) {
      return lVar3;
    }
    uVar5 = FUN_100cae7a0(param_1);
    iVar1 = FUN_100c60800(uVar5);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_100c60820(uVar5,iVar1);
        if (lVar4 == lVar3) break;
        iVar2 = FUN_100c60800(*(undefined8 *)(lVar4 + 0x18));
        if ((0 < iVar2) &&
           (iVar2 = FUN_100bf8810(**(undefined8 **)(lVar3 + 0x10),**(undefined8 **)(lVar4 + 0x10)),
           iVar2 == 0)) {
          puVar7 = (undefined4 *)FUN_100cb0e60(*(undefined8 *)(lVar4 + 0x18));
          if (puVar7 != (undefined4 *)0x0) {
            iVar1 = FUN_100cb2790(lVar3,*(undefined8 *)(puVar7 + 2),*puVar7);
            if (iVar1 == 0) {
              return 0;
            }
            if ((param_5 & 0x4000) == 0) {
              iVar1 = FUN_100cb0720(lVar3);
              if (iVar1 == 0) {
                return 0;
              }
              return lVar3;
            }
            return lVar3;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(uVar5);
      } while (iVar1 < iVar2);
    }
    FUN_100c62ee0(0x21,0x8a,0x9a,"pk7_smime.c",0xf5);
  }
  return 0;
}

