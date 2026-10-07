
void FUN_1002d4290(long *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC] AfterResume");
  }
  if ((*(byte *)(param_1[8] + 0x80) & 1) != 0) {
    (**(code **)(*param_1 + 0x68))(param_1);
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x50))(param_1,iVar3,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xe);
    *(undefined4 *)(param_1 + 0x299) = 1;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
    if ((*(uint *)(param_1[8] + 0x80) & 0x401) == 0x401) {
      lVar2 = FUN_1007d87f0();
      param_1[0x28f] = lVar2;
    }
  }
  return;
}

