
undefined8 FUN_1008675a0(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long local_58;
  
  uVar9 = 0x43;
  lVar13 = 0;
  if (param_2 == 0) {
    lVar12 = 0;
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = FUN_1008648d0(param_2,param_2,0x43);
    if (lVar6 == 0) {
      lVar12 = 0;
      lVar8 = 0;
      lVar7 = 0;
      uVar9 = 0x43;
      lVar13 = 0;
    }
    else {
      lVar7 = FUN_10084c820();
      uVar9 = 0x41;
      if (lVar7 == 0) {
        lVar12 = 0;
        lVar8 = 0;
        lVar7 = 0;
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        lVar12 = 0;
        local_58 = 0;
        if (param_4 < 1) {
LAB_100867785:
          pcVar10 = "ECDSA-Parameters";
          if (param_4 == 1) {
            pcVar10 = "Public-Key";
          }
        }
        else {
          lVar8 = FUN_100864970(param_2);
          uVar4 = 0;
          lVar12 = 0;
          if (lVar8 != 0) {
            uVar2 = FUN_1008649a0(param_2);
            lVar13 = 0;
            lVar12 = FUN_100861620(lVar6,lVar8,uVar2,0,lVar7);
            if (lVar12 == 0) {
              uVar9 = 0x10;
              lVar12 = 0;
              lVar8 = 0;
              goto LAB_10086789f;
            }
            iVar3 = FUN_10084b410(lVar12);
            uVar4 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
          }
          if (param_4 == 2) {
            local_58 = FUN_100864920(param_2);
            bVar1 = true;
            if (local_58 == 0) {
              local_58 = 0;
            }
            else {
              iVar3 = FUN_10084b410(local_58);
              uVar5 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
            }
          }
          else {
            bVar1 = false;
            local_58 = 0;
          }
          lVar13 = FUN_10081ddd0(uVar4 + 10,"ec_ameth.c",0x1c5);
          lVar8 = 0;
          if (lVar13 == 0) {
            lVar13 = 0;
            uVar9 = 0x41;
            goto LAB_10086789f;
          }
          if (!bVar1) goto LAB_100867785;
          pcVar10 = "Private-Key";
        }
        iVar3 = FUN_10087da20(param_1,param_3,0x80);
        uVar9 = 0x20;
        lVar8 = 0;
        if (iVar3 != 0) {
          lVar8 = FUN_10084b520();
          if (lVar8 == 0) {
            lVar8 = 0;
            uVar9 = 0x20;
          }
          else {
            iVar3 = FUN_10085b9d0(lVar6,lVar8,0);
            if (iVar3 == 0) {
              uVar9 = 0x20;
            }
            else {
              uVar2 = FUN_10084b410(lVar8);
              iVar3 = FUN_100880ec0(param_1,"%s: (%d bit)\n",pcVar10,uVar2);
              if (iVar3 < 1) {
                uVar9 = 0x20;
              }
              else if ((local_58 == 0) ||
                      (iVar3 = FUN_1008a43f0(param_1,"priv:",local_58,lVar13,param_3), iVar3 != 0))
              {
                if ((lVar12 == 0) ||
                   (iVar3 = FUN_1008a43f0(param_1,"pub: ",lVar12,lVar13,param_3), iVar3 != 0)) {
                  iVar3 = FUN_100867f50(param_1,lVar6,param_3);
                  uVar11 = 1;
                  uVar9 = 0x20;
                  if (iVar3 != 0) goto LAB_1008678bd;
                }
                else {
                  uVar9 = 0x20;
                }
              }
              else {
                uVar9 = 0x20;
              }
            }
          }
        }
      }
    }
  }
LAB_10086789f:
  FUN_100887ce0(0x10,0xdd,uVar9,"ec_ameth.c",0x1e5);
  uVar11 = 0;
LAB_1008678bd:
  if (lVar12 != 0) {
    FUN_10084b4b0(lVar12);
  }
  if (lVar8 != 0) {
    FUN_10084b4b0(lVar8);
  }
  if (lVar7 != 0) {
    FUN_10084c8b0(lVar7);
  }
  if (lVar13 != 0) {
    FUN_10081e1a0(lVar13);
  }
  return uVar11;
}

