
int FUN_100c35f10(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar6;
  
  iVar3 = FUN_100c26610(param_3);
  lVar5 = FUN_100bf3540(iVar3 * 4 + 4,"bn_gf2m.c",0x4cd);
  iVar9 = 0;
  if (lVar5 != 0) {
    uVar6 = (ulong)*(uint *)(param_3 + 1);
    iVar9 = 0;
    if (*(uint *)(param_3 + 1) != 0) {
      iVar3 = iVar3 + 1;
      iVar9 = 0;
      do {
        iVar4 = (int)uVar6;
        uVar6 = (ulong)iVar4;
        lVar7 = (long)(iVar4 + -1) << 3;
        do {
          if ((long)uVar6 < 1) {
            if (iVar9 < iVar3) {
              *(undefined4 *)(lVar5 + (long)iVar9 * 4) = 0xffffffff;
              iVar9 = iVar9 + 1;
            }
            if ((iVar9 == 0) || (iVar3 < iVar9)) goto LAB_100c3601a;
            iVar9 = FUN_100c35b40(param_1,param_2,lVar5,param_4);
            goto LAB_100c3603b;
          }
          uVar1 = *(ulong *)(*param_3 + lVar7);
          uVar6 = uVar6 - 1;
          lVar7 = lVar7 + -8;
        } while (uVar1 == 0);
        uVar8 = 0x8000000000000000;
        iVar4 = 0x3f;
        do {
          if ((uVar1 & uVar8) != 0) {
            if (iVar9 < iVar3) {
              *(int *)(lVar5 + (long)iVar9 * 4) = (int)uVar6 * 0x40 + iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          uVar8 = uVar8 >> 1;
          bVar2 = 0 < iVar4;
          iVar4 = iVar4 + -1;
        } while (bVar2);
      } while( true );
    }
LAB_100c3601a:
    FUN_100c62ee0(3,0x86,0x6a,"bn_gf2m.c",0x4d1);
LAB_100c3603b:
    FUN_100bf3910(lVar5);
  }
  return iVar9;
}

