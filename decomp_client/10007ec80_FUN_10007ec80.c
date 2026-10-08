
void FUN_10007ec80(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 local_28;
  
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(int *)param_4[1] == 0)) {
      uVar2 = FUN_10007eff0();
      *(undefined4 *)*param_4 = uVar2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10007c970(param_1,*(undefined8 *)param_4[1]);
      return;
    case 1:
      FUN_10007cc00(param_1);
      return;
    case 2:
      FUN_10007cc70(param_1);
      return;
    case 3:
      local_28 = FUN_10007c850(param_1);
      FUN_10007c720(param_1,&local_28);
      break;
    case 4:
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar1 = *(undefined1 *)param_4[1];
        iVar3 = FUN_100080630();
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            lVar5 = FUN_100080600(*(undefined8 *)(param_1 + 0x28),iVar3);
            if (lVar5 != 0) {
              FUN_10008bf70(lVar5,uVar1);
            }
            iVar3 = iVar3 + 1;
            iVar4 = FUN_100080630(*(undefined8 *)(param_1 + 0x28));
          } while (iVar3 < iVar4);
        }
      }
    }
  }
  return;
}

