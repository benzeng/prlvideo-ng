
long FUN_100cb1e50(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    FUN_100c62ee0(0x21,0x7c,0x8f,"pk7_smime.c",0x1a8);
  }
  else {
    iVar3 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
    if (iVar3 == 0x16) {
      uVar5 = FUN_100cae7a0(param_1);
      iVar3 = FUN_100c60800(uVar5);
      if (iVar3 < 1) {
        FUN_100c62ee0(0x21,0x7c,0x8e,"pk7_smime.c",0x1b6);
      }
      else {
        lVar6 = FUN_100c60010();
        if (lVar6 == 0) {
          FUN_100c62ee0(0x21,0x7c,0x41,"pk7_smime.c",0x1bb);
        }
        else {
          iVar3 = FUN_100c60800(uVar5);
          if (iVar3 < 1) {
            return lVar6;
          }
          if (param_2 == 0) {
            iVar3 = 0;
            while (((lVar7 = FUN_100c60820(uVar5,iVar3), (param_3 & 0x10) == 0 &&
                    (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar2 != 0)) &&
                   (lVar7 = FUN_100c92800(lVar2,**(undefined8 **)(lVar7 + 8),
                                          (*(undefined8 **)(lVar7 + 8))[1]), lVar7 != 0))) {
              iVar4 = FUN_100c604e0(lVar6,lVar7);
              if (iVar4 == 0) goto LAB_100cb20a9;
              iVar3 = iVar3 + 1;
              iVar4 = FUN_100c60800(uVar5);
              if (iVar4 <= iVar3) {
                return lVar6;
              }
            }
          }
          else {
            iVar3 = 0;
            if ((param_3 & 0x10) == 0) {
              while( true ) {
                lVar7 = FUN_100c60820(uVar5,iVar3);
                puVar1 = *(undefined8 **)(lVar7 + 8);
                lVar7 = FUN_100c92800(param_2,*puVar1,puVar1[1]);
                if ((lVar7 == 0) &&
                   ((lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 == 0 ||
                    (lVar7 = FUN_100c92800(lVar7,*puVar1,puVar1[1]), lVar7 == 0)))) break;
                iVar4 = FUN_100c604e0(lVar6,lVar7);
                if (iVar4 == 0) goto LAB_100cb20a9;
                iVar3 = iVar3 + 1;
                iVar4 = FUN_100c60800(uVar5);
                if (iVar4 <= iVar3) {
                  return lVar6;
                }
              }
            }
            else {
              while( true ) {
                lVar7 = FUN_100c60820(uVar5,iVar3);
                lVar7 = FUN_100c92800(param_2,**(undefined8 **)(lVar7 + 8),
                                      (*(undefined8 **)(lVar7 + 8))[1]);
                if (lVar7 == 0) break;
                iVar4 = FUN_100c604e0(lVar6,lVar7);
                if (iVar4 == 0) goto LAB_100cb20a9;
                iVar3 = iVar3 + 1;
                iVar4 = FUN_100c60800(uVar5);
                if (iVar4 <= iVar3) {
                  return lVar6;
                }
              }
            }
          }
          FUN_100c62ee0(0x21,0x7c,0x80,"pk7_smime.c",0x1ce);
LAB_100cb20a9:
          FUN_100c5ffd0(lVar6);
        }
      }
    }
    else {
      FUN_100c62ee0(0x21,0x7c,0x71,"pk7_smime.c",0x1ad);
    }
  }
  return 0;
}

