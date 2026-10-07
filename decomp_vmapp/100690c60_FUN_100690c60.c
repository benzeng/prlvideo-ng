
int FUN_100690c60(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x100))();
  iVar2 = FUN_100698f70(param_1,param_2);
  if (iVar2 < 0) {
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  else {
    plVar1 = (long *)param_1[4];
    if ((*(uint *)(plVar1 + 0x10) & 1) != 0) {
      *(uint *)(plVar1 + 0x10) = *(uint *)(plVar1 + 0x10) & 0xfffffffe;
      iVar3 = (**(code **)(*plVar1 + 0x20))();
      if (iVar3 < 0) {
        FUN_1008e3970("","dimg",0,"SaveHasData() write failed. 0x%X");
      }
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1);
  return iVar2;
}

