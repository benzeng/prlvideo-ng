
void FUN_100238800(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100238827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  if (param_2 == 2) {
    lVar3 = 0;
    if ((param_1[0xc] != 0) && (lVar3 = 0, *(int *)(param_1[0xc] + 4) != 0)) {
      lVar3 = param_1[0xd];
    }
    uVar2 = 1;
    if (*(int *)((long)param_1 + 0x5c) != 4) {
      uVar2 = 4;
    }
    uVar1 = 0;
    FUN_100df99c0("","prl_client_app",0,"Sending shutdown confirmation request to VM");
    if ((*(long *)(lVar3 + 0x48) != 0) && (uVar1 = 0, *(int *)(*(long *)(lVar3 + 0x48) + 4) != 0)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x50);
    }
    FUN_100a4d8c0(uVar1,uVar2);
    return;
  }
  return;
}

