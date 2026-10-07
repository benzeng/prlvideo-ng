
void FUN_10038bf80(long *param_1,long param_2,int *param_3,uint param_4,int param_5,
                  undefined4 param_6,undefined1 *param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar11 = (ulong)param_4;
  uVar8 = 0;
  if ((*(ushort *)(param_2 + 0xb0) & 1) == 0) {
    uVar8 = uVar11;
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0x40) + uVar8 * 8);
  iVar6 = FUN_10038e210();
  (*DAT_1011c5bc0)(0x8c89);
  cVar5 = FUN_10038bd20();
  if (cVar5 != '\0') {
    param_7 = local_48;
  }
  if (param_3 == (int *)0x0) {
    (*DAT_1011c5bc0)(0xc11);
  }
  else {
    (*DAT_1011c5c78)(0xc11);
    iVar2 = *param_3;
    iVar3 = param_3[1];
    if (*(uint *)(DAT_1011c8478 + 0x1c) < 2) {
      (*DAT_1011c69c8)(iVar2,iVar3,param_3[2] - iVar2,param_3[3] - iVar3);
    }
    else {
      (*DAT_1011c7e78)(0,iVar2,iVar3,param_3[2] - iVar2,param_3[3] - iVar3);
    }
  }
  (*DAT_1011c5970)(1,1,1,1);
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  if (param_4 < param_5 + param_4) {
    uVar10 = 1 << ((byte)param_6 & 0x1f);
    do {
      (**(code **)(*param_1 + 0x38))(param_1,lVar4,uVar11 & 0xffffffff,param_6);
      if (iVar6 == 2) {
        puVar9 = local_48;
        puVar7 = &DAT_1011c7510;
LAB_10038c160:
        (*(code *)*puVar7)(0x1800,0,puVar9);
      }
      else {
        puVar9 = param_7;
        if (iVar6 == 1) {
          puVar7 = &DAT_1011c7508;
          goto LAB_10038c160;
        }
        if (iVar6 == 0) {
          puVar7 = &DAT_1011c7500;
          goto LAB_10038c160;
        }
      }
      uVar8 = 0;
      if (*(int *)(param_2 + 0x24) != 5) {
        uVar8 = uVar11;
      }
      puVar1 = (uint *)(*(long *)(lVar4 + 0x88) + uVar8 * 4);
      *puVar1 = *puVar1 | uVar10;
      puVar1 = (uint *)(*(long *)(param_2 + 0x90) + uVar8 * 4);
      *puVar1 = *puVar1 & ~uVar10;
      uVar11 = uVar11 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *(undefined1 *)(param_2 + 0xd0) = 0;
  puVar1 = (uint *)param_1[0x1b];
  puVar1[2] = puVar1[2] | 1;
  *puVar1 = *puVar1 | 0x8005;
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

