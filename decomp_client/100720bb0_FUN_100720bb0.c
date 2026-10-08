
void FUN_100720bb0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  
  if (param_2 == 0xc) {
    if ((param_3 == 6) && (*(uint *)param_4[1] < 2)) {
      if (DAT_10226c7b8 == 0) {
        DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226c7b8;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10071c800(param_1);
      return;
    case 1:
      FUN_10071c800(param_1);
      FUN_10071ce70(param_1);
      FUN_10071d3e0(param_1);
      FUN_10071dc30(param_1);
      FUN_10071de90(param_1);
      return;
    case 2:
      FUN_10071ce70(param_1);
      return;
    case 3:
      FUN_10071d3e0(param_1);
      return;
    case 4:
      FUN_10071dc30(param_1);
      return;
    case 5:
      FUN_10071c540(param_1,param_4[1],0,*(undefined4 *)param_4[3]);
      return;
    case 6:
      piVar2 = *(int **)param_4[1];
      uStack_30 = ((undefined8 *)param_4[1])[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_21 = *piVar2 != 0;
        UNLOCK();
      }
      piVar1 = *(int **)param_4[2];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_21 = *piVar1 != 0;
        UNLOCK();
      }
      local_38 = piVar2;
      FUN_10071c680(param_1,&local_38);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_21 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar1);
        }
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_21 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar2);
        }
      }
      break;
    case 7:
      FUN_10071fea0(param_1,*(undefined8 *)param_4[1]);
      return;
    }
  }
  return;
}

