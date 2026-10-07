
void FUN_100362cd0(long param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_2 + 0x58);
  iVar1 = puVar2[3];
  if (iVar1 == 0x8893) {
    (*DAT_1011c5770)(0);
    iVar1 = puVar2[3];
  }
  (*DAT_1011c5708)(iVar1,*puVar2);
  lVar3 = (*DAT_1011c64b0)(puVar2[3],param_4,param_5,1);
  if (lVar3 != 0) {
    FUN_1002fcd60(*(undefined8 *)(param_1 + 0x38),lVar3,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x000100362d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c6ed0)(puVar2[3]);
    return;
  }
  return;
}

