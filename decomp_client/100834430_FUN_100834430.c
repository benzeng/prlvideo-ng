
void FUN_100834430(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1003789a0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      FUN_1003782f0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 2:
      FUN_100378bb0(param_1,param_4[1]);
      return;
    case 3:
      FUN_100378300(param_1,*(undefined1 *)param_4[1]);
      return;
    case 4:
      FUN_100378bc0(param_1);
      return;
    case 5:
      FUN_1003783c0(param_1);
      return;
    case 6:
      FUN_100378c20(param_1);
      return;
    case 7:
      FUN_100378cb0(param_1);
      return;
    case 8:
      FUN_100378fb0(param_1);
      return;
    case 9:
      FUN_100378fc0(param_1);
      return;
    case 10:
      FUN_100379220(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xb:
      FUN_100379270(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xc:
      FUN_100378d10(param_1);
      return;
    case 0xd:
      FUN_100379040(&local_28,param_1);
      param_4 = (long *)*param_4;
      if ((param_4 != (long *)0x0) && (*param_4 != local_28)) {
        FUN_100036740(&local_20,&local_28);
        lVar1 = *param_4;
        *param_4 = local_20;
        local_20 = lVar1;
        FUN_100035ea0(&local_20);
      }
      plVar2 = &local_28;
      break;
    case 0xe:
      FUN_100379120(&local_30,param_1);
      param_4 = (long *)*param_4;
      if ((param_4 != (long *)0x0) && (*param_4 != local_30)) {
        FUN_100036740(&local_18,&local_30);
        lVar1 = *param_4;
        *param_4 = local_18;
        local_18 = lVar1;
        FUN_100035ea0(&local_18);
      }
      plVar2 = &local_30;
      break;
    default:
      goto switchD_100834460_default;
    }
    FUN_100035ea0(plVar2);
  }
switchD_100834460_default:
  return;
}

