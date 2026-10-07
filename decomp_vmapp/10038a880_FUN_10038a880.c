
void FUN_10038a880(long *param_1,uint *param_2,int *param_3,long param_4,undefined8 param_5,
                  uint param_6,undefined4 param_7,int *param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *local_a0;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  uVar13 = *param_2;
  uVar20 = (ulong)uVar13;
  uVar12 = *(uint *)(&DAT_100b3e3b4 + uVar20 * 8);
  if ((uVar12 & 4) != 0) {
    return;
  }
  if ((uVar13 - 0x57 < 9) && (2 < (long)(int)(uVar13 - 0x57) - 4U)) {
    return;
  }
  uVar22 = (ulong)param_6;
  iVar6 = FUN_10038e1b0();
  uVar16 = 0;
  if ((*(ushort *)(param_4 + 0xb0) & 1) == 0) {
    uVar16 = uVar22;
  }
  lVar3 = *(long *)(*(long *)(param_4 + 0x40) + uVar16 * 8);
  if ((*(byte *)(lVar3 + 0xac) & 0x10) == 0) {
    return;
  }
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  if ((int)param_1[6] == 0) {
    (*DAT_1011c5e90)(1,param_1 + 6);
    *(undefined4 *)((long)param_1 + 0x3c) = 0xde1;
  }
  iVar21 = *param_3;
  iVar14 = param_3[2] - iVar21;
  if (*(int *)((long)param_1 + 0x34) == iVar14) {
    iVar8 = param_3[1];
    iVar19 = param_3[3];
    if (((int)param_1[7] != iVar19 - iVar8) || (iVar6 != (int)param_1[8])) goto LAB_10038a9fa;
    bVar4 = false;
  }
  else {
    iVar8 = param_3[1];
    iVar19 = param_3[3];
LAB_10038a9fa:
    *(int *)((long)param_1 + 0x34) = iVar14;
    *(int *)(param_1 + 7) = iVar19 - iVar8;
    *(int *)(param_1 + 8) = iVar6;
    bVar4 = true;
  }
  local_a0 = param_3 + 1;
  lVar17 = (ulong)(iVar21 * (uVar12 >> 0x18)) + (ulong)(iVar8 * param_2[3]) + *(long *)(param_2 + 4)
  ;
  uVar9 = FUN_10038e380(param_2[3],uVar20);
  iVar6 = param_3[2] - *param_3;
  iVar21 = param_3[3] - *local_a0;
  local_40 = 0;
  local_3c = 0;
  local_38 = iVar6;
  local_34 = iVar21;
  (*DAT_1011c5768)(*(undefined4 *)((long)param_1 + 0x3c),(int)param_1[6]);
  (*DAT_1011c66f0)(0xcf5,4);
  (*DAT_1011c66f0)(0xcf2,uVar9);
  pcVar18 = DAT_1011c6cf0;
  pcVar5 = DAT_1011c6c98;
  if (bVar4) {
    uVar2 = *(undefined4 *)((long)param_1 + 0x3c);
    uVar9 = (undefined4)param_1[8];
    uVar15 = *(undefined4 *)((long)param_1 + 0x34);
    iVar6 = (int)param_1[7];
    uVar10 = FUN_10038e1d0(uVar20);
    uVar11 = FUN_10038e1f0(uVar20);
    iVar21 = 0;
    pcVar18 = pcVar5;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + 0x3c);
    uVar10 = FUN_10038e1d0(uVar20);
    uVar11 = FUN_10038e1f0(uVar20);
    uVar9 = 0;
    uVar15 = 0;
  }
  (*pcVar18)(uVar2,0,uVar9,uVar15,iVar6,iVar21,uVar10,uVar11,lVar17);
  uVar9 = (undefined4)((ulong)lVar17 >> 0x20);
  uVar23 = 0x2601;
  if (*param_8 != 2) {
    uVar23 = 0x2600;
  }
  (*DAT_1011c6cd8)(*(undefined4 *)((long)param_1 + 0x3c),0x2800,uVar23);
  (*DAT_1011c6cd8)(*(undefined4 *)((long)param_1 + 0x3c),0x2801,uVar23);
  (*DAT_1011c6cc8)(0,*(undefined4 *)((long)param_1 + 0x3c),0x8501);
  if ((int)uVar13 < 0x66) {
    if (8 < uVar13) goto LAB_10038abe4;
    uVar12 = 0x10a;
  }
  else {
    uVar13 = uVar13 - 0x66;
    if (0xc < uVar13) goto LAB_10038abe4;
    uVar12 = 0x1015;
  }
  if ((uVar12 >> (uVar13 & 0x1f) & 1) != 0) {
    (*DAT_1011c6cd8)(*(undefined4 *)((long)param_1 + 0x3c),0x8a48,0x8a4a);
  }
LAB_10038abe4:
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  (**(code **)(*param_1 + 0x38))(param_1,lVar3,param_6,param_7);
  (*DAT_1011c5770)(*(undefined4 *)((long)param_1 + 0x44));
  (**(code **)(*param_1 + 0x28))
            (param_1,*(undefined4 *)((long)param_1 + 0x3c),*param_2,&local_40,0,0,
             *(undefined4 *)((long)param_1 + 0x34),(int)param_1[7],CONCAT44(uVar9,1),0,0,lVar3,
             param_5,param_6,param_7,param_8,uVar7);
  (*DAT_1011c5be8)(5,0,4);
  (*DAT_1011c5770)(0);
  (*DAT_1011c5768)(*(undefined4 *)((long)param_1 + 0x3c),0);
  uVar13 = 1 << ((byte)param_7 & 0x1f);
  puVar1 = (uint *)(*(long *)(lVar3 + 0x88) + uVar22 * 4);
  *puVar1 = *puVar1 | uVar13;
  puVar1 = (uint *)(*(long *)(param_4 + 0x90) + uVar22 * 4);
  *puVar1 = *puVar1 & ~uVar13;
  if ((*(ushort *)(param_4 + 0xb0) & 2) != 0) {
    *(undefined1 *)(param_4 + 0xac) = 1;
  }
  *(undefined1 *)(param_4 + 0xd0) = 0;
  return;
}

