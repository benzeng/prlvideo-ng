
void FUN_1001e05f0(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined *local_30;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 != 0) {
    uVar4 = FUN_100152280();
    cVar2 = FUN_100155010(uVar4,lVar5,0);
    if (cVar2 != '\0') {
      iVar3 = *param_3;
      uVar1 = iVar3 - 0x2711;
      if ((uVar1 < 6) && (uVar1 != 3)) {
        piVar6 = (int *)FUN_1001e2fa0(*(long *)(param_1 + 0x10) + 0x18,param_2);
        *piVar6 = iVar3;
        iVar3 = FUN_10015a6e0(lVar5);
        if (iVar3 == 0) {
          FUN_1001e06f0(param_1,0);
          return;
        }
      }
      else {
        local_30 = PTR_shared_null_1021e15e8;
        FUN_1000341d0(&local_30,param_2);
        FUN_100a39820(1,&local_30);
        FUN_100039a80(&local_30);
      }
    }
  }
  return;
}

