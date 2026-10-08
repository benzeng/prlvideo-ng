
void FUN_10079f700(undefined8 param_1,long param_2,int param_3,int param_4,int *param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_164;
  undefined2 local_12c;
  undefined1 local_12a;
  undefined2 local_129;
  undefined1 local_127;
  undefined2 local_126;
  undefined1 local_124;
  undefined2 local_123;
  undefined1 local_121;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f9;
  undefined1 local_f7;
  undefined2 local_f6;
  undefined1 local_f4;
  undefined2 local_f3;
  undefined1 local_f1;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined2 local_c9;
  undefined1 local_c7;
  undefined2 local_c6;
  undefined1 local_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined2 local_99;
  undefined1 local_97;
  undefined2 local_96;
  undefined1 local_94;
  undefined2 local_93;
  undefined1 local_91;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined2 local_69;
  undefined1 local_67;
  undefined2 local_66;
  undefined1 local_64;
  undefined2 local_63;
  undefined1 local_61;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined2 local_39;
  undefined1 local_37;
  undefined2 local_36;
  undefined1 local_34;
  undefined2 local_33;
  undefined1 local_31;
  
  do {
    lVar3 = FUN_100d3cc20(param_2);
    iVar7 = -1;
    if (lVar3 != 0) {
      iVar1 = FUN_100d38910(param_2);
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          lVar4 = FUN_100d38920(param_2,iVar7);
          if ((lVar4 != 0) && (lVar4 = FUN_100d3cc20(lVar4,lVar4), lVar4 != 0)) break;
          iVar7 = iVar7 + 1;
          iVar1 = FUN_100d38910(param_2);
        } while (iVar7 < iVar1);
      }
    }
    iVar1 = FUN_100d38910(param_2);
    if (iVar1 == 0) {
      FUN_10079fea0(param_1,param_3,param_4,(ulong)*(byte *)(param_2 + 0x31) * 5 + 2,param_2,param_6
                    ,(ulong)CONCAT13(local_31,CONCAT21(local_33,*(byte *)(param_2 + 0x31))) << 0x20,
                    CONCAT17(local_34,CONCAT25(local_36,3)),CONCAT17(local_37,CONCAT25(local_39,3)),
                    CONCAT17(local_3a,CONCAT25(local_3c,3)));
      return;
    }
    bVar8 = lVar3 != 0;
    iVar1 = FUN_100d38910(param_2);
    if (iVar1 != 1) {
      FUN_10079fea0(param_1,param_3,param_4,2,param_2,param_6,
                    (ulong)CONCAT13(local_91,CONCAT21(local_93,bVar8)) << 0x20,
                    CONCAT17(local_94,CONCAT25(local_96,3)),
                    CONCAT17(local_97,CONCAT25(local_99,CONCAT14(iVar7 == 0,2))),
                    CONCAT17(local_9a,CONCAT25(local_9c,CONCAT14(0 < iVar7,2))));
      iVar1 = 0;
      if (param_3 != 0) {
        uVar5 = FUN_100d38920(param_2,0);
        FUN_10079f700(param_1,uVar5,param_3,param_4 + 1,param_5);
        iVar1 = param_3;
      }
      iVar2 = FUN_100d38910(param_2);
      if (1 < iVar2) {
        local_164 = 1;
        do {
          iVar1 = iVar1 + 1;
          if (iVar1 <= *param_5) {
            do {
              FUN_10079fea0(param_1,iVar1,param_4,6,0,param_6,
                            CONCAT17(local_c1,CONCAT25(local_c3,3)),
                            CONCAT17(local_c4,CONCAT25(local_c6,CONCAT14(local_164 <= iVar7,2))),
                            CONCAT17(local_c7,CONCAT25(local_c9,3)),
                            CONCAT17(local_ca,CONCAT25(local_cc,CONCAT14(local_164 <= iVar7,2))));
              iVar1 = iVar1 + 1;
            } while (iVar1 <= *param_5);
          }
          *param_5 = iVar1;
          iVar2 = FUN_100d38910(param_2);
          if (local_164 == iVar2 + -1) {
            uVar11 = CONCAT17(local_fa,CONCAT25(local_fc,3));
            uVar10 = CONCAT17(local_f7,CONCAT25(local_f9,CONCAT14(iVar7 == local_164,2)));
            uVar5 = CONCAT17(local_f1,CONCAT25(local_f3,3));
            uVar9 = CONCAT17(local_f4,CONCAT25(local_f6,CONCAT14(iVar7 == local_164,2)));
            uVar6 = 4;
          }
          else {
            uVar11 = CONCAT17(local_12a,
                              CONCAT25(local_12c,
                                       CONCAT14(iVar7 != local_164 && local_164 <= iVar7,2)));
            uVar10 = CONCAT17(local_127,CONCAT25(local_129,CONCAT14(iVar7 == local_164,2)));
            uVar5 = CONCAT17(local_121,CONCAT25(local_123,3));
            uVar9 = CONCAT17(local_124,CONCAT25(local_126,CONCAT14(local_164 <= iVar7,2)));
            uVar6 = 5;
          }
          FUN_10079fea0(param_1,iVar1,param_4,uVar6,0,param_6,uVar5,uVar9,uVar10,uVar11);
          uVar5 = FUN_100d38920(param_2,local_164);
          FUN_10079f700(param_1,uVar5,iVar1,param_4 + 1);
          local_164 = local_164 + 1;
          iVar2 = FUN_100d38910(param_2);
        } while (local_164 < iVar2);
      }
      return;
    }
    FUN_10079fea0(param_1,param_3,param_4,2,param_2,param_6,
                  (ulong)CONCAT13(local_61,CONCAT21(local_63,bVar8)) << 0x20,
                  CONCAT17(local_64,CONCAT25(local_66,3)),
                  CONCAT17(local_67,CONCAT25(local_69,CONCAT14(bVar8,2))),
                  CONCAT17(local_6a,CONCAT25(local_6c,3)));
    if (param_3 == 0) {
      return;
    }
    param_2 = FUN_100d38920(param_2,0);
    param_4 = param_4 + 1;
  } while( true );
}

