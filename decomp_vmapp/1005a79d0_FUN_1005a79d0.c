
void FUN_1005a79d0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar4;
  char *pcVar5;
  code *pcVar3;
  
  if (((char)param_1[0x17] == '\0') && ((param_2 < 0 || ((int)param_1[8] != 2)))) {
    if ((param_2 < 0) || (param_2 == 0x3ed)) {
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
    if (param_2 < 0) {
      *(int *)((long)param_1 + 0xcc) = param_2;
      FUN_1008e3970("","vdisk",0,"Signal error 0x%x to caller from disk manager.",param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x12);
    if (0x10 < (ulong)uVar1) {
LAB_1005a7aef:
      if (uVar1 < 0x11) {
        pcVar5 = (&PTR_s_None__invalid__100bc6880)[uVar1];
      }
      else {
        pcVar5 = "Undefined operation";
      }
      FUN_1008e3970("","vdisk",0,"Incorrect process %s at callback",pcVar5);
      return;
    }
    if ((0x1837eU >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0x7c80U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_1005a7aef;
      if (param_2 == 0x3ed) {
        FUN_1008e3970("","vdisk",0,"Signal completion of disk processing");
        param_2 = 0x3ed;
      }
      pcVar3 = (code *)param_1[0x14];
      if (pcVar3 == (code *)0x0) {
        return;
      }
      lVar4 = param_1[7];
      iVar2 = 1000;
    }
    else {
      if (param_2 == 0x3ed) {
        FUN_1008e3970("","vdisk",0,"Signal completion of states processing");
        param_2 = 0x3ed;
      }
      pcVar3 = (code *)param_1[0x13];
      if (pcVar3 == (code *)0x0) {
        return;
      }
      lVar4 = param_1[7];
      iVar2 = param_2;
      param_2 = 0x1000;
    }
    iVar2 = (*pcVar3)(param_2,iVar2,lVar4);
    if (iVar2 == 0) {
      FUN_1008e3970("","vdisk",0,"Caught termination request at disk manager.");
                    /* WARNING: Could not recover jumptable at 0x0001005a7b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
  }
  return;
}

