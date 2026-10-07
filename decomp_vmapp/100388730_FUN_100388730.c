
void FUN_100388730(long *param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 extraout_RDX;
  
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  (**(code **)(*param_1 + 0x38))
            (param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x18),
             *(undefined4 *)(param_2 + 0x1c));
  (**(code **)(*param_1 + 0x48))(param_1);
  (*DAT_1011c5768)(*(undefined4 *)(*(long *)(param_3 + 8) + 0x14),
                   *(undefined4 *)(*(long *)(param_3 + 8) + 0xc));
  iVar1 = *(int *)(*(long *)(param_3 + 8) + 0x14);
  iVar3 = *(int *)(param_3 + 0x18) + 0x8515;
  if (iVar1 != 0x8513) {
    iVar3 = iVar1;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  (*DAT_1011c5ad8)(iVar3,*(undefined4 *)(param_3 + 0x1c),**(undefined4 **)(param_3 + 0x10),
                   (*(undefined4 **)(param_3 + 0x10))[1],*piVar2,piVar2[1],piVar2[2] - *piVar2,
                   piVar2[3] - piVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0001003887f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5768)(*(undefined4 *)(*(long *)(param_3 + 8) + 0x14),0,extraout_RDX,DAT_1011c5768);
  return;
}

