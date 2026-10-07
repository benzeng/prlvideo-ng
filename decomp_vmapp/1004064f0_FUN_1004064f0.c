
void FUN_1004064f0(long *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_2,3,3,0,0);
  cVar1 = (**(code **)(*(long *)param_1[1] + 0x98))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_2,1,1,0,0);
  }
  *(bool *)((long)param_1 + 0x1c) = cVar1 == '\0';
  cVar1 = (**(code **)(*(long *)param_1[1] + 0x98))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(long *)param_1[1] + 0xa0))((long *)param_1[1],0,0,0);
    iVar2 = _flock(iVar2,6);
    if (iVar2 == -1) {
      if (param_3 == '\0') {
        *(undefined4 *)(param_1 + 4) = 0x16;
      }
      (**(code **)(*param_1 + 0x18))(param_1,1);
    }
    else {
      *(undefined4 *)(param_1 + 3) = 1;
    }
  }
  uVar3 = FUN_100768f60();
  *(undefined4 *)(param_1 + 4) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001004065d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x98))();
  return;
}

